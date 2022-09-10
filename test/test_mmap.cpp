/*

Copyright (c) 2016, 2019-2020, Arvid Norberg
Copyright (c) 2019, Steven Siloti
All rights reserved.

You may use, distribute and modify this code under the terms of the BSD license,
see LICENSE file.
*/

#include "test.hpp"

#include "libtorrent/aux_/mmap.hpp"
#include <fstream>

#include "libtorrent/aux_/disable_warnings_push.hpp"
#include <boost/range/combine.hpp>
#include "libtorrent/aux_/disable_warnings_pop.hpp"

#if TORRENT_HAVE_MMAP || TORRENT_HAVE_MAP_VIEW_OF_FILE

using namespace lt;
using namespace lt::aux;

namespace {

std::vector<char> filled_buffer(std::ptrdiff_t const size)
{
	std::vector<char> buf;
	buf.resize(static_cast<std::size_t>(size));
	std::uint8_t cnt = 0;
	std::generate(buf.begin(), buf.end()
		, [&cnt](){ return static_cast<char>(cnt++); });
	return buf;
}
}

TORRENT_TEST(mmap_read)
{
	std::vector<char> buf = filled_buffer(1024 * 1024);

	{
		std::ofstream file("test_file1", std::ios::binary);
		file.write(buf.data(), std::streamsize(buf.size()));
	}

	auto m = std::make_shared<file_mapping>(aux::file_handle("test_file1"
		, std::int64_t(buf.size()), open_mode::read_only)
		, open_mode::read_only, buf.size()
#if TORRENT_HAVE_MAP_VIEW_OF_FILE
		, std::make_shared<std::mutex>()
#endif
		);

	TORRENT_ASSERT(m->has_memory_map());

	for (auto const i : boost::combine(m->range(), buf))
	{
		if (boost::get<0>(i) != boost::get<1>(i)) TEST_ERROR("mmap view mismatching");
	}
}

TORRENT_TEST(mmap_write)
{
	std::vector<char> buf = filled_buffer(1024 * 1024);

	{
		auto m = std::make_shared<file_mapping>(aux::file_handle("test_file2"
				, std::int64_t(buf.size())
				, open_mode::write | open_mode::truncate)
			, open_mode::write | open_mode::truncate, buf.size()
#if TORRENT_HAVE_MAP_VIEW_OF_FILE
			, std::make_shared<std::mutex>()
#endif
			);

		auto range = m->range();

		std::copy(buf.begin(), buf.end(), range.begin());
	}

	std::ifstream file("test_file2", std::ios_base::binary);
	std::vector<char> buf2;
	buf2.resize(buf.size());
	file.read(buf2.data(), std::streamsize(buf2.size()));
	TEST_EQUAL(file.gcount(), std::streamsize(buf.size()));

	for (auto const i : boost::combine(buf2, buf))
	{
		if (boost::get<0>(i) != boost::get<1>(i)) TEST_ERROR("mmap view mismatching");
	}
}

#else

TORRENT_TEST(dummy) {}

#endif

