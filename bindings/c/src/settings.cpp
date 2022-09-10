// generated by tools/gen_header.py

#include <stdarg.h>
#include "libtorrent/settings_pack.hpp"

#include "libtorrent_settings.h"

int settings_key(int const tag)
{
	using sp = lt::settings_pack;
	switch (tag)
	{
		case SET_USER_AGENT: return sp::user_agent;
		case SET_ANNOUNCE_IP: return sp::announce_ip;
		case SET_HANDSHAKE_CLIENT_VERSION: return sp::handshake_client_version;
		case SET_OUTGOING_INTERFACES: return sp::outgoing_interfaces;
		case SET_LISTEN_INTERFACES: return sp::listen_interfaces;
		case SET_PROXY_HOSTNAME: return sp::proxy_hostname;
		case SET_PROXY_USERNAME: return sp::proxy_username;
		case SET_PROXY_PASSWORD: return sp::proxy_password;
		case SET_I2P_HOSTNAME: return sp::i2p_hostname;
		case SET_PEER_FINGERPRINT: return sp::peer_fingerprint;
		case SET_DHT_BOOTSTRAP_NODES: return sp::dht_bootstrap_nodes;
		case SET_WEBTORRENT_STUN_SERVER: return sp::webtorrent_stun_server;
		case SET_ALLOW_MULTIPLE_CONNECTIONS_PER_IP: return sp::allow_multiple_connections_per_ip;
		case SET_SEND_REDUNDANT_HAVE: return sp::send_redundant_have;
		case SET_USE_DHT_AS_FALLBACK: return sp::use_dht_as_fallback;
		case SET_UPNP_IGNORE_NONROUTERS: return sp::upnp_ignore_nonrouters;
		case SET_USE_PAROLE_MODE: return sp::use_parole_mode;
		case SET_AUTO_MANAGE_PREFER_SEEDS: return sp::auto_manage_prefer_seeds;
		case SET_DONT_COUNT_SLOW_TORRENTS: return sp::dont_count_slow_torrents;
		case SET_CLOSE_REDUNDANT_CONNECTIONS: return sp::close_redundant_connections;
		case SET_PRIORITIZE_PARTIAL_PIECES: return sp::prioritize_partial_pieces;
		case SET_RATE_LIMIT_IP_OVERHEAD: return sp::rate_limit_ip_overhead;
		case SET_ANNOUNCE_TO_ALL_TIERS: return sp::announce_to_all_tiers;
		case SET_ANNOUNCE_TO_ALL_TRACKERS: return sp::announce_to_all_trackers;
		case SET_PREFER_UDP_TRACKERS: return sp::prefer_udp_trackers;
		case SET_DISABLE_HASH_CHECKS: return sp::disable_hash_checks;
		case SET_ALLOW_I2P_MIXED: return sp::allow_i2p_mixed;
		case SET_NO_ATIME_STORAGE: return sp::no_atime_storage;
		case SET_INCOMING_STARTS_QUEUED_TORRENTS: return sp::incoming_starts_queued_torrents;
		case SET_REPORT_TRUE_DOWNLOADED: return sp::report_true_downloaded;
		case SET_STRICT_END_GAME_MODE: return sp::strict_end_game_mode;
		case SET_ENABLE_OUTGOING_UTP: return sp::enable_outgoing_utp;
		case SET_ENABLE_INCOMING_UTP: return sp::enable_incoming_utp;
		case SET_ENABLE_OUTGOING_TCP: return sp::enable_outgoing_tcp;
		case SET_ENABLE_INCOMING_TCP: return sp::enable_incoming_tcp;
		case SET_NO_RECHECK_INCOMPLETE_RESUME: return sp::no_recheck_incomplete_resume;
		case SET_ANONYMOUS_MODE: return sp::anonymous_mode;
		case SET_REPORT_WEB_SEED_DOWNLOADS: return sp::report_web_seed_downloads;
		case SET_SEEDING_OUTGOING_CONNECTIONS: return sp::seeding_outgoing_connections;
		case SET_NO_CONNECT_PRIVILEGED_PORTS: return sp::no_connect_privileged_ports;
		case SET_SMOOTH_CONNECTS: return sp::smooth_connects;
		case SET_ALWAYS_SEND_USER_AGENT: return sp::always_send_user_agent;
		case SET_APPLY_IP_FILTER_TO_TRACKERS: return sp::apply_ip_filter_to_trackers;
		case SET_BAN_WEB_SEEDS: return sp::ban_web_seeds;
		case SET_SUPPORT_SHARE_MODE: return sp::support_share_mode;
		case SET_REPORT_REDUNDANT_BYTES: return sp::report_redundant_bytes;
		case SET_LISTEN_SYSTEM_PORT_FALLBACK: return sp::listen_system_port_fallback;
		case SET_ANNOUNCE_CRYPTO_SUPPORT: return sp::announce_crypto_support;
		case SET_ENABLE_UPNP: return sp::enable_upnp;
		case SET_ENABLE_NATPMP: return sp::enable_natpmp;
		case SET_ENABLE_LSD: return sp::enable_lsd;
		case SET_ENABLE_DHT: return sp::enable_dht;
		case SET_PREFER_RC4: return sp::prefer_rc4;
		case SET_PROXY_HOSTNAMES: return sp::proxy_hostnames;
		case SET_PROXY_PEER_CONNECTIONS: return sp::proxy_peer_connections;
		case SET_AUTO_SEQUENTIAL: return sp::auto_sequential;
		case SET_PROXY_TRACKER_CONNECTIONS: return sp::proxy_tracker_connections;
		case SET_ENABLE_IP_NOTIFIER: return sp::enable_ip_notifier;
		case SET_DHT_PREFER_VERIFIED_NODE_IDS: return sp::dht_prefer_verified_node_ids;
		case SET_DHT_RESTRICT_ROUTING_IPS: return sp::dht_restrict_routing_ips;
		case SET_DHT_RESTRICT_SEARCH_IPS: return sp::dht_restrict_search_ips;
		case SET_DHT_EXTENDED_ROUTING_TABLE: return sp::dht_extended_routing_table;
		case SET_DHT_AGGRESSIVE_LOOKUPS: return sp::dht_aggressive_lookups;
		case SET_DHT_PRIVACY_LOOKUPS: return sp::dht_privacy_lookups;
		case SET_DHT_ENFORCE_NODE_ID: return sp::dht_enforce_node_id;
		case SET_DHT_IGNORE_DARK_INTERNET: return sp::dht_ignore_dark_internet;
		case SET_DHT_READ_ONLY: return sp::dht_read_only;
		case SET_PIECE_EXTENT_AFFINITY: return sp::piece_extent_affinity;
		case SET_VALIDATE_HTTPS_TRACKERS: return sp::validate_https_trackers;
		case SET_SSRF_MITIGATION: return sp::ssrf_mitigation;
		case SET_ALLOW_IDNA: return sp::allow_idna;
		case SET_ENABLE_SET_FILE_VALID_DATA: return sp::enable_set_file_valid_data;
		case SET_SOCKS5_UDP_SEND_LOCAL_EP: return sp::socks5_udp_send_local_ep;
		case SET_TRACKER_COMPLETION_TIMEOUT: return sp::tracker_completion_timeout;
		case SET_TRACKER_RECEIVE_TIMEOUT: return sp::tracker_receive_timeout;
		case SET_STOP_TRACKER_TIMEOUT: return sp::stop_tracker_timeout;
		case SET_TRACKER_MAXIMUM_RESPONSE_LENGTH: return sp::tracker_maximum_response_length;
		case SET_PIECE_TIMEOUT: return sp::piece_timeout;
		case SET_REQUEST_TIMEOUT: return sp::request_timeout;
		case SET_REQUEST_QUEUE_TIME: return sp::request_queue_time;
		case SET_MAX_ALLOWED_IN_REQUEST_QUEUE: return sp::max_allowed_in_request_queue;
		case SET_MAX_OUT_REQUEST_QUEUE: return sp::max_out_request_queue;
		case SET_WHOLE_PIECES_THRESHOLD: return sp::whole_pieces_threshold;
		case SET_PEER_TIMEOUT: return sp::peer_timeout;
		case SET_URLSEED_TIMEOUT: return sp::urlseed_timeout;
		case SET_URLSEED_PIPELINE_SIZE: return sp::urlseed_pipeline_size;
		case SET_URLSEED_WAIT_RETRY: return sp::urlseed_wait_retry;
		case SET_FILE_POOL_SIZE: return sp::file_pool_size;
		case SET_MAX_FAILCOUNT: return sp::max_failcount;
		case SET_MIN_RECONNECT_TIME: return sp::min_reconnect_time;
		case SET_PEER_CONNECT_TIMEOUT: return sp::peer_connect_timeout;
		case SET_CONNECTION_SPEED: return sp::connection_speed;
		case SET_INACTIVITY_TIMEOUT: return sp::inactivity_timeout;
		case SET_UNCHOKE_INTERVAL: return sp::unchoke_interval;
		case SET_OPTIMISTIC_UNCHOKE_INTERVAL: return sp::optimistic_unchoke_interval;
		case SET_NUM_WANT: return sp::num_want;
		case SET_INITIAL_PICKER_THRESHOLD: return sp::initial_picker_threshold;
		case SET_ALLOWED_FAST_SET_SIZE: return sp::allowed_fast_set_size;
		case SET_SUGGEST_MODE: return sp::suggest_mode;
		case SET_MAX_QUEUED_DISK_BYTES: return sp::max_queued_disk_bytes;
		case SET_HANDSHAKE_TIMEOUT: return sp::handshake_timeout;
		case SET_SEND_BUFFER_LOW_WATERMARK: return sp::send_buffer_low_watermark;
		case SET_SEND_BUFFER_WATERMARK: return sp::send_buffer_watermark;
		case SET_SEND_BUFFER_WATERMARK_FACTOR: return sp::send_buffer_watermark_factor;
		case SET_CHOKING_ALGORITHM: return sp::choking_algorithm;
		case SET_SEED_CHOKING_ALGORITHM: return sp::seed_choking_algorithm;
		case SET_DISK_IO_WRITE_MODE: return sp::disk_io_write_mode;
		case SET_DISK_IO_READ_MODE: return sp::disk_io_read_mode;
		case SET_OUTGOING_PORT: return sp::outgoing_port;
		case SET_NUM_OUTGOING_PORTS: return sp::num_outgoing_ports;
		case SET_PEER_DSCP: return sp::peer_dscp;
		case SET_PEER_TOS: return sp::peer_tos;
		case SET_ACTIVE_DOWNLOADS: return sp::active_downloads;
		case SET_ACTIVE_SEEDS: return sp::active_seeds;
		case SET_ACTIVE_CHECKING: return sp::active_checking;
		case SET_ACTIVE_DHT_LIMIT: return sp::active_dht_limit;
		case SET_ACTIVE_TRACKER_LIMIT: return sp::active_tracker_limit;
		case SET_ACTIVE_LSD_LIMIT: return sp::active_lsd_limit;
		case SET_ACTIVE_LIMIT: return sp::active_limit;
		case SET_AUTO_MANAGE_INTERVAL: return sp::auto_manage_interval;
		case SET_SEED_TIME_LIMIT: return sp::seed_time_limit;
		case SET_AUTO_SCRAPE_INTERVAL: return sp::auto_scrape_interval;
		case SET_AUTO_SCRAPE_MIN_INTERVAL: return sp::auto_scrape_min_interval;
		case SET_MAX_PEERLIST_SIZE: return sp::max_peerlist_size;
		case SET_MAX_PAUSED_PEERLIST_SIZE: return sp::max_paused_peerlist_size;
		case SET_MIN_ANNOUNCE_INTERVAL: return sp::min_announce_interval;
		case SET_AUTO_MANAGE_STARTUP: return sp::auto_manage_startup;
		case SET_SEEDING_PIECE_QUOTA: return sp::seeding_piece_quota;
		case SET_MAX_REJECTS: return sp::max_rejects;
		case SET_RECV_SOCKET_BUFFER_SIZE: return sp::recv_socket_buffer_size;
		case SET_SEND_SOCKET_BUFFER_SIZE: return sp::send_socket_buffer_size;
		case SET_MAX_PEER_RECV_BUFFER_SIZE: return sp::max_peer_recv_buffer_size;
		case SET_OPTIMISTIC_DISK_RETRY: return sp::optimistic_disk_retry;
		case SET_MAX_SUGGEST_PIECES: return sp::max_suggest_pieces;
		case SET_LOCAL_SERVICE_ANNOUNCE_INTERVAL: return sp::local_service_announce_interval;
		case SET_DHT_ANNOUNCE_INTERVAL: return sp::dht_announce_interval;
		case SET_UDP_TRACKER_TOKEN_EXPIRY: return sp::udp_tracker_token_expiry;
		case SET_NUM_OPTIMISTIC_UNCHOKE_SLOTS: return sp::num_optimistic_unchoke_slots;
		case SET_MAX_PEX_PEERS: return sp::max_pex_peers;
		case SET_TICK_INTERVAL: return sp::tick_interval;
		case SET_SHARE_MODE_TARGET: return sp::share_mode_target;
		case SET_UPLOAD_RATE_LIMIT: return sp::upload_rate_limit;
		case SET_DOWNLOAD_RATE_LIMIT: return sp::download_rate_limit;
		case SET_DHT_UPLOAD_RATE_LIMIT: return sp::dht_upload_rate_limit;
		case SET_UNCHOKE_SLOTS_LIMIT: return sp::unchoke_slots_limit;
		case SET_CONNECTIONS_LIMIT: return sp::connections_limit;
		case SET_CONNECTIONS_SLACK: return sp::connections_slack;
		case SET_UTP_TARGET_DELAY: return sp::utp_target_delay;
		case SET_UTP_GAIN_FACTOR: return sp::utp_gain_factor;
		case SET_UTP_MIN_TIMEOUT: return sp::utp_min_timeout;
		case SET_UTP_SYN_RESENDS: return sp::utp_syn_resends;
		case SET_UTP_FIN_RESENDS: return sp::utp_fin_resends;
		case SET_UTP_NUM_RESENDS: return sp::utp_num_resends;
		case SET_UTP_CONNECT_TIMEOUT: return sp::utp_connect_timeout;
		case SET_UTP_LOSS_MULTIPLIER: return sp::utp_loss_multiplier;
		case SET_MIXED_MODE_ALGORITHM: return sp::mixed_mode_algorithm;
		case SET_LISTEN_QUEUE_SIZE: return sp::listen_queue_size;
		case SET_TORRENT_CONNECT_BOOST: return sp::torrent_connect_boost;
		case SET_ALERT_QUEUE_SIZE: return sp::alert_queue_size;
		case SET_MAX_METADATA_SIZE: return sp::max_metadata_size;
		case SET_HASHING_THREADS: return sp::hashing_threads;
		case SET_CHECKING_MEM_USAGE: return sp::checking_mem_usage;
		case SET_PREDICTIVE_PIECE_ANNOUNCE: return sp::predictive_piece_announce;
		case SET_AIO_THREADS: return sp::aio_threads;
		case SET_TRACKER_BACKOFF: return sp::tracker_backoff;
		case SET_SHARE_RATIO_LIMIT: return sp::share_ratio_limit;
		case SET_SEED_TIME_RATIO_LIMIT: return sp::seed_time_ratio_limit;
		case SET_PEER_TURNOVER: return sp::peer_turnover;
		case SET_PEER_TURNOVER_CUTOFF: return sp::peer_turnover_cutoff;
		case SET_PEER_TURNOVER_INTERVAL: return sp::peer_turnover_interval;
		case SET_CONNECT_SEED_EVERY_N_DOWNLOAD: return sp::connect_seed_every_n_download;
		case SET_MAX_HTTP_RECV_BUFFER_SIZE: return sp::max_http_recv_buffer_size;
		case SET_MAX_RETRY_PORT_BIND: return sp::max_retry_port_bind;
		case SET_ALERT_MASK: return sp::alert_mask;
		case SET_OUT_ENC_POLICY: return sp::out_enc_policy;
		case SET_IN_ENC_POLICY: return sp::in_enc_policy;
		case SET_ALLOWED_ENC_LEVEL: return sp::allowed_enc_level;
		case SET_INACTIVE_DOWN_RATE: return sp::inactive_down_rate;
		case SET_INACTIVE_UP_RATE: return sp::inactive_up_rate;
		case SET_PROXY_TYPE: return sp::proxy_type;
		case SET_PROXY_PORT: return sp::proxy_port;
		case SET_I2P_PORT: return sp::i2p_port;
		case SET_URLSEED_MAX_REQUEST_BYTES: return sp::urlseed_max_request_bytes;
		case SET_WEB_SEED_NAME_LOOKUP_RETRY: return sp::web_seed_name_lookup_retry;
		case SET_CLOSE_FILE_INTERVAL: return sp::close_file_interval;
		case SET_UTP_CWND_REDUCE_TIMER: return sp::utp_cwnd_reduce_timer;
		case SET_MAX_WEB_SEED_CONNECTIONS: return sp::max_web_seed_connections;
		case SET_RESOLVER_CACHE_TIMEOUT: return sp::resolver_cache_timeout;
		case SET_SEND_NOT_SENT_LOW_WATERMARK: return sp::send_not_sent_low_watermark;
		case SET_RATE_CHOKER_INITIAL_THRESHOLD: return sp::rate_choker_initial_threshold;
		case SET_UPNP_LEASE_DURATION: return sp::upnp_lease_duration;
		case SET_MAX_CONCURRENT_HTTP_ANNOUNCES: return sp::max_concurrent_http_announces;
		case SET_DHT_MAX_PEERS_REPLY: return sp::dht_max_peers_reply;
		case SET_DHT_SEARCH_BRANCHING: return sp::dht_search_branching;
		case SET_DHT_MAX_FAIL_COUNT: return sp::dht_max_fail_count;
		case SET_DHT_MAX_TORRENTS: return sp::dht_max_torrents;
		case SET_DHT_MAX_DHT_ITEMS: return sp::dht_max_dht_items;
		case SET_DHT_MAX_PEERS: return sp::dht_max_peers;
		case SET_DHT_MAX_TORRENT_SEARCH_REPLY: return sp::dht_max_torrent_search_reply;
		case SET_DHT_BLOCK_TIMEOUT: return sp::dht_block_timeout;
		case SET_DHT_BLOCK_RATELIMIT: return sp::dht_block_ratelimit;
		case SET_DHT_ITEM_LIFETIME: return sp::dht_item_lifetime;
		case SET_DHT_SAMPLE_INFOHASHES_INTERVAL: return sp::dht_sample_infohashes_interval;
		case SET_DHT_MAX_INFOHASHES_SAMPLE_COUNT: return sp::dht_max_infohashes_sample_count;
		case SET_MAX_PIECE_COUNT: return sp::max_piece_count;
		case SET_METADATA_TOKEN_LIMIT: return sp::metadata_token_limit;
		case SET_DISK_WRITE_MODE: return sp::disk_write_mode;
		case SET_MIN_WEBSOCKET_ANNOUNCE_INTERVAL: return sp::min_websocket_announce_interval;
		case SET_WEBTORRENT_CONNECTION_TIMEOUT: return sp::webtorrent_connection_timeout;
		default:
			// ignore unknown tags
			return -1;
	}
}

lt::settings_pack make_settings(int tag, va_list lp)
{
	lt::settings_pack ret;
	using sp = lt::settings_pack;
	while (tag != 0)
	{
		int const key = settings_key(tag);
		switch (key & lt::settings_pack::type_mask)
		{
			case sp::string_type_base:
				ret.set_str(key, va_arg(lp, char*));
				break;
			case sp::int_type_base:
				ret.set_int(key, va_arg(lp, int));
				break;
			case sp::bool_type_base:
				ret.set_bool(key, va_arg(lp, int));
				break;
		}
		tag = va_arg(lp, int);
	}
	return ret;
}

