#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 696
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 185
#define ALIAS_COUNT 0
#define TOKEN_COUNT 116
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 24

enum {
  aux_sym__horizontal_whitespaces_token1 = 1,
  sym__vertical_whitespace = 2,
  sym__vertical_whitespaces = 3,
  sym__empty_line = 4,
  sym_comment = 5,
  sym_comment_line = 6,
  aux_sym__newline_token1 = 7,
  aux_sym__newline_token2 = 8,
  aux_sym__newline_token4 = 9,
  aux_sym__newline_token5 = 10,
  aux_sym__newline_token6 = 11,
  aux_sym__newline_token7 = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  aux_sym_site_address_token1 = 15,
  anon_sym_http_COLON_SLASH_SLASH = 16,
  anon_sym_https_COLON_SLASH_SLASH = 17,
  anon_sym_localhost = 18,
  sym__ipv4_address = 19,
  sym__ipv6_address = 20,
  sym_domain_address = 21,
  anon_sym_COLON = 22,
  aux_sym__port_number_token1 = 23,
  sym_matcher_name = 24,
  anon_sym_path = 25,
  anon_sym_path_regexp = 26,
  aux_sym_matcher_path_regexp_token1 = 27,
  aux_sym_matcher_path_regexp_token2 = 28,
  anon_sym_abort = 29,
  anon_sym_basicauth = 30,
  aux_sym_directive_basicauth_token1 = 31,
  anon_sym_bcrypt = 32,
  aux_sym_basicauth_credential_token1 = 33,
  aux_sym_basicauth_credential_token2 = 34,
  anon_sym_bind = 35,
  anon_sym_SLASH = 36,
  anon_sym_tcp = 37,
  anon_sym_udp = 38,
  anon_sym_ip = 39,
  anon_sym_4 = 40,
  anon_sym_6 = 41,
  anon_sym_unix = 42,
  anon_sym_gram = 43,
  anon_sym_packet = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_unix_path_token1 = 46,
  aux_sym_unix_path_token2 = 47,
  anon_sym_encode = 48,
  anon_sym_gzip = 49,
  anon_sym_zstd = 50,
  anon_sym_file_server = 51,
  anon_sym_browse = 52,
  anon_sym_error = 53,
  sym_http_message = 54,
  sym_http_error_code = 55,
  anon_sym_handle = 56,
  anon_sym_handle_path = 57,
  anon_sym_header = 58,
  anon_sym_defer = 59,
  anon_sym_PLUS = 60,
  anon_sym_DASH = 61,
  anon_sym_QMARK = 62,
  aux_sym_header_value_token1 = 63,
  aux_sym_header_value_token2 = 64,
  anon_sym_SQUOTE = 65,
  aux_sym_header_value_token3 = 66,
  anon_sym_import = 67,
  anon_sym_log = 68,
  anon_sym_output = 69,
  anon_sym_stderr = 70,
  anon_sym_stdout = 71,
  anon_sym_discard = 72,
  anon_sym_file = 73,
  anon_sym_roll_disabled = 74,
  anon_sym_roll_size = 75,
  anon_sym_roll_uncompressed = 76,
  anon_sym_roll_local_time = 77,
  anon_sym_roll_keep = 78,
  aux_sym__log_output_file_token1 = 79,
  anon_sym_roll_keep_for_days = 80,
  aux_sym__log_output_file_token2 = 81,
  sym_size_number = 82,
  anon_sym_format = 83,
  anon_sym_console = 84,
  anon_sym_json = 85,
  anon_sym_level = 86,
  anon_sym_INFO = 87,
  anon_sym_info = 88,
  anon_sym_ERROR = 89,
  anon_sym_redir = 90,
  anon_sym_request_body = 91,
  anon_sym_max_size = 92,
  anon_sym_reverse_proxy = 93,
  sym_uri_path_with_placeholders = 94,
  sym__valid_uri_path_string = 95,
  aux_sym_redir_code_token1 = 96,
  anon_sym_401 = 97,
  anon_sym_temporary = 98,
  anon_sym_permanent = 99,
  anon_sym_html = 100,
  anon_sym_rewrite = 101,
  anon_sym_root = 102,
  anon_sym_tls = 103,
  anon_sym_internal = 104,
  anon_sym_route = 105,
  sym_email_address = 106,
  anon_sym_STAR = 107,
  anon_sym_email = 108,
  anon_sym_auto_https = 109,
  anon_sym_off = 110,
  anon_sym_disable_redirects = 111,
  anon_sym_ignore_loaded_certs = 112,
  anon_sym_disable_certs = 113,
  sym_snippet_name = 114,
  sym__eof = 115,
  sym_document = 116,
  sym__horizontal_whitespaces = 117,
  sym_site_block = 118,
  sym_site_address = 119,
  sym_protocol = 120,
  sym__ip_or_domain_address = 121,
  sym__port_number = 122,
  sym_matcher_definition = 123,
  sym_standard_matcher = 124,
  sym_matcher_path = 125,
  sym_matcher_path_regexp = 126,
  sym_directive_block = 127,
  sym_directive_abort = 128,
  sym_directive_basicauth = 129,
  sym_hash_algorithm = 130,
  sym_basicauth_credential = 131,
  sym_directive_bind = 132,
  sym_network_address_wo_port = 133,
  sym__network = 134,
  sym_unix_path = 135,
  sym_directive_encode = 136,
  sym_encode_format = 137,
  sym_directive_file_server = 138,
  sym_directive_error = 139,
  sym_directive_handle = 140,
  sym_directive_handle_path = 141,
  sym_directive_header = 142,
  sym_field_manipulator = 143,
  sym_field_replace = 144,
  sym_field_add_or_set = 145,
  sym_field_delete = 146,
  sym_field_set_default = 147,
  sym_header_name = 148,
  sym_header_value = 149,
  sym_directive_import = 150,
  sym_directive_log = 151,
  sym_log_option_output = 152,
  sym__log_output_file = 153,
  sym_log_option_format = 154,
  sym_log_option_level = 155,
  sym_directive_redir = 156,
  sym_directive_request_body = 157,
  sym_redir_or_rewrite_target = 158,
  sym_directive_reverse_proxy = 159,
  sym_redir_code = 160,
  sym_directive_rewrite = 161,
  sym_directive_root = 162,
  sym_directive_tls = 163,
  sym_directive_route = 164,
  sym_matcher_token = 165,
  sym_global_options_block = 166,
  sym_global_option_email = 167,
  sym_global_option_auto_https = 168,
  sym_snippet = 169,
  aux_sym_document_repeat1 = 170,
  aux_sym_site_block_repeat1 = 171,
  aux_sym_matcher_definition_repeat1 = 172,
  aux_sym_directive_basicauth_repeat1 = 173,
  aux_sym_directive_bind_repeat1 = 174,
  aux_sym_directive_encode_repeat1 = 175,
  aux_sym_directive_file_server_repeat1 = 176,
  aux_sym_directive_file_server_repeat2 = 177,
  aux_sym_directive_handle_repeat1 = 178,
  aux_sym_directive_header_repeat1 = 179,
  aux_sym_directive_log_repeat1 = 180,
  aux_sym__log_output_file_repeat1 = 181,
  aux_sym_directive_request_body_repeat1 = 182,
  aux_sym_directive_reverse_proxy_repeat1 = 183,
  aux_sym_global_options_block_repeat1 = 184,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__horizontal_whitespaces_token1] = "_horizontal_whitespaces_token1",
  [sym__vertical_whitespace] = "_vertical_whitespace",
  [sym__vertical_whitespaces] = "_vertical_whitespaces",
  [sym__empty_line] = "_empty_line",
  [sym_comment] = "comment",
  [sym_comment_line] = "comment_line",
  [aux_sym__newline_token1] = "_newline_token1",
  [aux_sym__newline_token2] = "_newline_token2",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_site_address_token1] = "site_address_token1",
  [anon_sym_http_COLON_SLASH_SLASH] = "http://",
  [anon_sym_https_COLON_SLASH_SLASH] = "https://",
  [anon_sym_localhost] = "localhost",
  [sym__ipv4_address] = "_ipv4_address",
  [sym__ipv6_address] = "_ipv6_address",
  [sym_domain_address] = "domain_address",
  [anon_sym_COLON] = ":",
  [aux_sym__port_number_token1] = "_port_number_token1",
  [sym_matcher_name] = "matcher_name",
  [anon_sym_path] = "path",
  [anon_sym_path_regexp] = "path_regexp",
  [aux_sym_matcher_path_regexp_token1] = "matcher_path_regexp_token1",
  [aux_sym_matcher_path_regexp_token2] = "matcher_path_regexp_token2",
  [anon_sym_abort] = "abort",
  [anon_sym_basicauth] = "basicauth",
  [aux_sym_directive_basicauth_token1] = "directive_basicauth_token1",
  [anon_sym_bcrypt] = "bcrypt",
  [aux_sym_basicauth_credential_token1] = "basicauth_credential_token1",
  [aux_sym_basicauth_credential_token2] = "basicauth_credential_token2",
  [anon_sym_bind] = "bind",
  [anon_sym_SLASH] = "/",
  [anon_sym_tcp] = "tcp",
  [anon_sym_udp] = "udp",
  [anon_sym_ip] = "ip",
  [anon_sym_4] = "4",
  [anon_sym_6] = "6",
  [anon_sym_unix] = "unix",
  [anon_sym_gram] = "gram",
  [anon_sym_packet] = "packet",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_unix_path_token1] = "unix_path_token1",
  [aux_sym_unix_path_token2] = "unix_path_token2",
  [anon_sym_encode] = "encode",
  [anon_sym_gzip] = "gzip",
  [anon_sym_zstd] = "zstd",
  [anon_sym_file_server] = "file_server",
  [anon_sym_browse] = "browse",
  [anon_sym_error] = "error",
  [sym_http_message] = "http_message",
  [sym_http_error_code] = "http_error_code",
  [anon_sym_handle] = "handle",
  [anon_sym_handle_path] = "handle_path",
  [anon_sym_header] = "header",
  [anon_sym_defer] = "defer",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [aux_sym_header_value_token1] = "header_value_token1",
  [aux_sym_header_value_token2] = "header_value_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_header_value_token3] = "header_value_token3",
  [anon_sym_import] = "import",
  [anon_sym_log] = "log",
  [anon_sym_output] = "output",
  [anon_sym_stderr] = "stderr",
  [anon_sym_stdout] = "stdout",
  [anon_sym_discard] = "discard",
  [anon_sym_file] = "file",
  [anon_sym_roll_disabled] = "roll_disabled",
  [anon_sym_roll_size] = "roll_size",
  [anon_sym_roll_uncompressed] = "roll_uncompressed",
  [anon_sym_roll_local_time] = "roll_local_time",
  [anon_sym_roll_keep] = "roll_keep",
  [aux_sym__log_output_file_token1] = "_log_output_file_token1",
  [anon_sym_roll_keep_for_days] = "roll_keep_for_days",
  [aux_sym__log_output_file_token2] = "_log_output_file_token2",
  [sym_size_number] = "size_number",
  [anon_sym_format] = "format",
  [anon_sym_console] = "console",
  [anon_sym_json] = "json",
  [anon_sym_level] = "level",
  [anon_sym_INFO] = "INFO",
  [anon_sym_info] = "info",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_redir] = "redir",
  [anon_sym_request_body] = "request_body",
  [anon_sym_max_size] = "max_size",
  [anon_sym_reverse_proxy] = "reverse_proxy",
  [sym_uri_path_with_placeholders] = "uri_path_with_placeholders",
  [sym__valid_uri_path_string] = "_valid_uri_path_string",
  [aux_sym_redir_code_token1] = "redir_code_token1",
  [anon_sym_401] = "401",
  [anon_sym_temporary] = "temporary",
  [anon_sym_permanent] = "permanent",
  [anon_sym_html] = "html",
  [anon_sym_rewrite] = "rewrite",
  [anon_sym_root] = "root",
  [anon_sym_tls] = "tls",
  [anon_sym_internal] = "internal",
  [anon_sym_route] = "route",
  [sym_email_address] = "email_address",
  [anon_sym_STAR] = "*",
  [anon_sym_email] = "email",
  [anon_sym_auto_https] = "auto_https",
  [anon_sym_off] = "off",
  [anon_sym_disable_redirects] = "disable_redirects",
  [anon_sym_ignore_loaded_certs] = "ignore_loaded_certs",
  [anon_sym_disable_certs] = "disable_certs",
  [sym_snippet_name] = "snippet_name",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym__horizontal_whitespaces] = "_horizontal_whitespaces",
  [sym_site_block] = "site_block",
  [sym_site_address] = "site_address",
  [sym_protocol] = "protocol",
  [sym__ip_or_domain_address] = "_ip_or_domain_address",
  [sym__port_number] = "_port_number",
  [sym_matcher_definition] = "matcher_definition",
  [sym_standard_matcher] = "standard_matcher",
  [sym_matcher_path] = "matcher_path",
  [sym_matcher_path_regexp] = "matcher_path_regexp",
  [sym_directive_block] = "directive_block",
  [sym_directive_abort] = "directive_abort",
  [sym_directive_basicauth] = "directive_basicauth",
  [sym_hash_algorithm] = "hash_algorithm",
  [sym_basicauth_credential] = "basicauth_credential",
  [sym_directive_bind] = "directive_bind",
  [sym_network_address_wo_port] = "network_address_wo_port",
  [sym__network] = "_network",
  [sym_unix_path] = "unix_path",
  [sym_directive_encode] = "directive_encode",
  [sym_encode_format] = "encode_format",
  [sym_directive_file_server] = "directive_file_server",
  [sym_directive_error] = "directive_error",
  [sym_directive_handle] = "directive_handle",
  [sym_directive_handle_path] = "directive_handle_path",
  [sym_directive_header] = "directive_header",
  [sym_field_manipulator] = "field_manipulator",
  [sym_field_replace] = "field_replace",
  [sym_field_add_or_set] = "field_add_or_set",
  [sym_field_delete] = "field_delete",
  [sym_field_set_default] = "field_set_default",
  [sym_header_name] = "header_name",
  [sym_header_value] = "header_value",
  [sym_directive_import] = "directive_import",
  [sym_directive_log] = "directive_log",
  [sym_log_option_output] = "log_option_output",
  [sym__log_output_file] = "_log_output_file",
  [sym_log_option_format] = "log_option_format",
  [sym_log_option_level] = "log_option_level",
  [sym_directive_redir] = "directive_redir",
  [sym_directive_request_body] = "directive_request_body",
  [sym_redir_or_rewrite_target] = "redir_or_rewrite_target",
  [sym_directive_reverse_proxy] = "directive_reverse_proxy",
  [sym_redir_code] = "redir_code",
  [sym_directive_rewrite] = "directive_rewrite",
  [sym_directive_root] = "directive_root",
  [sym_directive_tls] = "directive_tls",
  [sym_directive_route] = "directive_route",
  [sym_matcher_token] = "matcher_token",
  [sym_global_options_block] = "global_options_block",
  [sym_global_option_email] = "global_option_email",
  [sym_global_option_auto_https] = "global_option_auto_https",
  [sym_snippet] = "snippet",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_site_block_repeat1] = "site_block_repeat1",
  [aux_sym_matcher_definition_repeat1] = "matcher_definition_repeat1",
  [aux_sym_directive_basicauth_repeat1] = "directive_basicauth_repeat1",
  [aux_sym_directive_bind_repeat1] = "directive_bind_repeat1",
  [aux_sym_directive_encode_repeat1] = "directive_encode_repeat1",
  [aux_sym_directive_file_server_repeat1] = "directive_file_server_repeat1",
  [aux_sym_directive_file_server_repeat2] = "directive_file_server_repeat2",
  [aux_sym_directive_handle_repeat1] = "directive_handle_repeat1",
  [aux_sym_directive_header_repeat1] = "directive_header_repeat1",
  [aux_sym_directive_log_repeat1] = "directive_log_repeat1",
  [aux_sym__log_output_file_repeat1] = "_log_output_file_repeat1",
  [aux_sym_directive_request_body_repeat1] = "directive_request_body_repeat1",
  [aux_sym_directive_reverse_proxy_repeat1] = "directive_reverse_proxy_repeat1",
  [aux_sym_global_options_block_repeat1] = "global_options_block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__horizontal_whitespaces_token1] = aux_sym__horizontal_whitespaces_token1,
  [sym__vertical_whitespace] = sym__vertical_whitespace,
  [sym__vertical_whitespaces] = sym__vertical_whitespaces,
  [sym__empty_line] = sym__empty_line,
  [sym_comment] = sym_comment,
  [sym_comment_line] = sym_comment_line,
  [aux_sym__newline_token1] = aux_sym__newline_token1,
  [aux_sym__newline_token2] = aux_sym__newline_token2,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_site_address_token1] = aux_sym_site_address_token1,
  [anon_sym_http_COLON_SLASH_SLASH] = anon_sym_http_COLON_SLASH_SLASH,
  [anon_sym_https_COLON_SLASH_SLASH] = anon_sym_https_COLON_SLASH_SLASH,
  [anon_sym_localhost] = anon_sym_localhost,
  [sym__ipv4_address] = sym__ipv4_address,
  [sym__ipv6_address] = sym__ipv6_address,
  [sym_domain_address] = sym_domain_address,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__port_number_token1] = aux_sym__port_number_token1,
  [sym_matcher_name] = sym_matcher_name,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_path_regexp] = anon_sym_path_regexp,
  [aux_sym_matcher_path_regexp_token1] = aux_sym_matcher_path_regexp_token1,
  [aux_sym_matcher_path_regexp_token2] = aux_sym_matcher_path_regexp_token2,
  [anon_sym_abort] = anon_sym_abort,
  [anon_sym_basicauth] = anon_sym_basicauth,
  [aux_sym_directive_basicauth_token1] = aux_sym_directive_basicauth_token1,
  [anon_sym_bcrypt] = anon_sym_bcrypt,
  [aux_sym_basicauth_credential_token1] = aux_sym_basicauth_credential_token1,
  [aux_sym_basicauth_credential_token2] = aux_sym_basicauth_credential_token2,
  [anon_sym_bind] = anon_sym_bind,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_tcp] = anon_sym_tcp,
  [anon_sym_udp] = anon_sym_udp,
  [anon_sym_ip] = anon_sym_ip,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_unix] = anon_sym_unix,
  [anon_sym_gram] = anon_sym_gram,
  [anon_sym_packet] = anon_sym_packet,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_unix_path_token1] = aux_sym_unix_path_token1,
  [aux_sym_unix_path_token2] = aux_sym_unix_path_token2,
  [anon_sym_encode] = anon_sym_encode,
  [anon_sym_gzip] = anon_sym_gzip,
  [anon_sym_zstd] = anon_sym_zstd,
  [anon_sym_file_server] = anon_sym_file_server,
  [anon_sym_browse] = anon_sym_browse,
  [anon_sym_error] = anon_sym_error,
  [sym_http_message] = sym_http_message,
  [sym_http_error_code] = sym_http_error_code,
  [anon_sym_handle] = anon_sym_handle,
  [anon_sym_handle_path] = anon_sym_handle_path,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_header_value_token1] = aux_sym_header_value_token1,
  [aux_sym_header_value_token2] = aux_sym_header_value_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_header_value_token3] = aux_sym_header_value_token3,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_stderr] = anon_sym_stderr,
  [anon_sym_stdout] = anon_sym_stdout,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_roll_disabled] = anon_sym_roll_disabled,
  [anon_sym_roll_size] = anon_sym_roll_size,
  [anon_sym_roll_uncompressed] = anon_sym_roll_uncompressed,
  [anon_sym_roll_local_time] = anon_sym_roll_local_time,
  [anon_sym_roll_keep] = anon_sym_roll_keep,
  [aux_sym__log_output_file_token1] = aux_sym__log_output_file_token1,
  [anon_sym_roll_keep_for_days] = anon_sym_roll_keep_for_days,
  [aux_sym__log_output_file_token2] = aux_sym__log_output_file_token2,
  [sym_size_number] = sym_size_number,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_console] = anon_sym_console,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_level] = anon_sym_level,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_redir] = anon_sym_redir,
  [anon_sym_request_body] = anon_sym_request_body,
  [anon_sym_max_size] = anon_sym_max_size,
  [anon_sym_reverse_proxy] = anon_sym_reverse_proxy,
  [sym_uri_path_with_placeholders] = sym_uri_path_with_placeholders,
  [sym__valid_uri_path_string] = sym__valid_uri_path_string,
  [aux_sym_redir_code_token1] = aux_sym_redir_code_token1,
  [anon_sym_401] = anon_sym_401,
  [anon_sym_temporary] = anon_sym_temporary,
  [anon_sym_permanent] = anon_sym_permanent,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_rewrite] = anon_sym_rewrite,
  [anon_sym_root] = anon_sym_root,
  [anon_sym_tls] = anon_sym_tls,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_route] = anon_sym_route,
  [sym_email_address] = sym_email_address,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_email] = anon_sym_email,
  [anon_sym_auto_https] = anon_sym_auto_https,
  [anon_sym_off] = anon_sym_off,
  [anon_sym_disable_redirects] = anon_sym_disable_redirects,
  [anon_sym_ignore_loaded_certs] = anon_sym_ignore_loaded_certs,
  [anon_sym_disable_certs] = anon_sym_disable_certs,
  [sym_snippet_name] = sym_snippet_name,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym__horizontal_whitespaces] = sym__horizontal_whitespaces,
  [sym_site_block] = sym_site_block,
  [sym_site_address] = sym_site_address,
  [sym_protocol] = sym_protocol,
  [sym__ip_or_domain_address] = sym__ip_or_domain_address,
  [sym__port_number] = sym__port_number,
  [sym_matcher_definition] = sym_matcher_definition,
  [sym_standard_matcher] = sym_standard_matcher,
  [sym_matcher_path] = sym_matcher_path,
  [sym_matcher_path_regexp] = sym_matcher_path_regexp,
  [sym_directive_block] = sym_directive_block,
  [sym_directive_abort] = sym_directive_abort,
  [sym_directive_basicauth] = sym_directive_basicauth,
  [sym_hash_algorithm] = sym_hash_algorithm,
  [sym_basicauth_credential] = sym_basicauth_credential,
  [sym_directive_bind] = sym_directive_bind,
  [sym_network_address_wo_port] = sym_network_address_wo_port,
  [sym__network] = sym__network,
  [sym_unix_path] = sym_unix_path,
  [sym_directive_encode] = sym_directive_encode,
  [sym_encode_format] = sym_encode_format,
  [sym_directive_file_server] = sym_directive_file_server,
  [sym_directive_error] = sym_directive_error,
  [sym_directive_handle] = sym_directive_handle,
  [sym_directive_handle_path] = sym_directive_handle_path,
  [sym_directive_header] = sym_directive_header,
  [sym_field_manipulator] = sym_field_manipulator,
  [sym_field_replace] = sym_field_replace,
  [sym_field_add_or_set] = sym_field_add_or_set,
  [sym_field_delete] = sym_field_delete,
  [sym_field_set_default] = sym_field_set_default,
  [sym_header_name] = sym_header_name,
  [sym_header_value] = sym_header_value,
  [sym_directive_import] = sym_directive_import,
  [sym_directive_log] = sym_directive_log,
  [sym_log_option_output] = sym_log_option_output,
  [sym__log_output_file] = sym__log_output_file,
  [sym_log_option_format] = sym_log_option_format,
  [sym_log_option_level] = sym_log_option_level,
  [sym_directive_redir] = sym_directive_redir,
  [sym_directive_request_body] = sym_directive_request_body,
  [sym_redir_or_rewrite_target] = sym_redir_or_rewrite_target,
  [sym_directive_reverse_proxy] = sym_directive_reverse_proxy,
  [sym_redir_code] = sym_redir_code,
  [sym_directive_rewrite] = sym_directive_rewrite,
  [sym_directive_root] = sym_directive_root,
  [sym_directive_tls] = sym_directive_tls,
  [sym_directive_route] = sym_directive_route,
  [sym_matcher_token] = sym_matcher_token,
  [sym_global_options_block] = sym_global_options_block,
  [sym_global_option_email] = sym_global_option_email,
  [sym_global_option_auto_https] = sym_global_option_auto_https,
  [sym_snippet] = sym_snippet,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_site_block_repeat1] = aux_sym_site_block_repeat1,
  [aux_sym_matcher_definition_repeat1] = aux_sym_matcher_definition_repeat1,
  [aux_sym_directive_basicauth_repeat1] = aux_sym_directive_basicauth_repeat1,
  [aux_sym_directive_bind_repeat1] = aux_sym_directive_bind_repeat1,
  [aux_sym_directive_encode_repeat1] = aux_sym_directive_encode_repeat1,
  [aux_sym_directive_file_server_repeat1] = aux_sym_directive_file_server_repeat1,
  [aux_sym_directive_file_server_repeat2] = aux_sym_directive_file_server_repeat2,
  [aux_sym_directive_handle_repeat1] = aux_sym_directive_handle_repeat1,
  [aux_sym_directive_header_repeat1] = aux_sym_directive_header_repeat1,
  [aux_sym_directive_log_repeat1] = aux_sym_directive_log_repeat1,
  [aux_sym__log_output_file_repeat1] = aux_sym__log_output_file_repeat1,
  [aux_sym_directive_request_body_repeat1] = aux_sym_directive_request_body_repeat1,
  [aux_sym_directive_reverse_proxy_repeat1] = aux_sym_directive_reverse_proxy_repeat1,
  [aux_sym_global_options_block_repeat1] = aux_sym_global_options_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__horizontal_whitespaces_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__vertical_whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__vertical_whitespaces] = {
    .visible = false,
    .named = true,
  },
  [sym__empty_line] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__newline_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__newline_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_site_address_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_http_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_localhost] = {
    .visible = true,
    .named = false,
  },
  [sym__ipv4_address] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv6_address] = {
    .visible = false,
    .named = true,
  },
  [sym_domain_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__port_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_matcher_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_regexp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_matcher_path_regexp_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matcher_path_regexp_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_basicauth] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_directive_basicauth_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bcrypt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_basicauth_credential_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_basicauth_credential_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bind] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tcp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_udp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unix] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gram] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unix_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unix_path_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_encode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gzip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_zstd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_browse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [sym_http_message] = {
    .visible = true,
    .named = true,
  },
  [sym_http_error_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_handle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handle_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_header_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_header_value_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stderr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stdout] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll_disabled] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll_uncompressed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll_local_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_roll_keep] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_output_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_roll_keep_for_days] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__log_output_file_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_size_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_console] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_level] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_request_body] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse_proxy] = {
    .visible = true,
    .named = false,
  },
  [sym_uri_path_with_placeholders] = {
    .visible = true,
    .named = true,
  },
  [sym__valid_uri_path_string] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_redir_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_401] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_temporary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permanent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_html] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rewrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_root] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tls] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_route] = {
    .visible = true,
    .named = false,
  },
  [sym_email_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_email] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_https] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_redirects] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignore_loaded_certs] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_disable_certs] = {
    .visible = true,
    .named = false,
  },
  [sym_snippet_name] = {
    .visible = true,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__horizontal_whitespaces] = {
    .visible = false,
    .named = true,
  },
  [sym_site_block] = {
    .visible = true,
    .named = true,
  },
  [sym_site_address] = {
    .visible = true,
    .named = true,
  },
  [sym_protocol] = {
    .visible = true,
    .named = true,
  },
  [sym__ip_or_domain_address] = {
    .visible = false,
    .named = true,
  },
  [sym__port_number] = {
    .visible = false,
    .named = true,
  },
  [sym_matcher_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_standard_matcher] = {
    .visible = true,
    .named = true,
  },
  [sym_matcher_path] = {
    .visible = true,
    .named = true,
  },
  [sym_matcher_path_regexp] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_block] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_abort] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_basicauth] = {
    .visible = true,
    .named = true,
  },
  [sym_hash_algorithm] = {
    .visible = true,
    .named = true,
  },
  [sym_basicauth_credential] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_bind] = {
    .visible = true,
    .named = true,
  },
  [sym_network_address_wo_port] = {
    .visible = true,
    .named = true,
  },
  [sym__network] = {
    .visible = false,
    .named = true,
  },
  [sym_unix_path] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_encode] = {
    .visible = true,
    .named = true,
  },
  [sym_encode_format] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_file_server] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_error] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_handle] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_handle_path] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_header] = {
    .visible = true,
    .named = true,
  },
  [sym_field_manipulator] = {
    .visible = true,
    .named = true,
  },
  [sym_field_replace] = {
    .visible = true,
    .named = true,
  },
  [sym_field_add_or_set] = {
    .visible = true,
    .named = true,
  },
  [sym_field_delete] = {
    .visible = true,
    .named = true,
  },
  [sym_field_set_default] = {
    .visible = true,
    .named = true,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_header_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_import] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_log] = {
    .visible = true,
    .named = true,
  },
  [sym_log_option_output] = {
    .visible = true,
    .named = true,
  },
  [sym__log_output_file] = {
    .visible = false,
    .named = true,
  },
  [sym_log_option_format] = {
    .visible = true,
    .named = true,
  },
  [sym_log_option_level] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_redir] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_request_body] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_or_rewrite_target] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_reverse_proxy] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_code] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_rewrite] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_root] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_tls] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_route] = {
    .visible = true,
    .named = true,
  },
  [sym_matcher_token] = {
    .visible = true,
    .named = true,
  },
  [sym_global_options_block] = {
    .visible = true,
    .named = true,
  },
  [sym_global_option_email] = {
    .visible = true,
    .named = true,
  },
  [sym_global_option_auto_https] = {
    .visible = true,
    .named = true,
  },
  [sym_snippet] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_site_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matcher_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_basicauth_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_bind_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_encode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_file_server_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_file_server_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_handle_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_log_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__log_output_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_request_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_reverse_proxy_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_global_options_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address_target = 1,
  field_basicauth_realm_name = 2,
  field_basicauth_user_name = 3,
  field_basicauth_user_pass = 4,
  field_basicauth_user_pass_saltb64 = 5,
  field_cert_file = 6,
  field_directive_type = 7,
  field_file_server_option_browse = 8,
  field_global_option_type = 9,
  field_key_file = 10,
  field_log_option_type = 11,
  field_matcher_type = 12,
  field_path_matcher = 13,
  field_path_regexp_matcher_name = 14,
  field_uri_path_target = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address_target] = "address_target",
  [field_basicauth_realm_name] = "basicauth_realm_name",
  [field_basicauth_user_name] = "basicauth_user_name",
  [field_basicauth_user_pass] = "basicauth_user_pass",
  [field_basicauth_user_pass_saltb64] = "basicauth_user_pass_saltb64",
  [field_cert_file] = "cert_file",
  [field_directive_type] = "directive_type",
  [field_file_server_option_browse] = "file_server_option_browse",
  [field_global_option_type] = "global_option_type",
  [field_key_file] = "key_file",
  [field_log_option_type] = "log_option_type",
  [field_matcher_type] = "matcher_type",
  [field_path_matcher] = "path_matcher",
  [field_path_regexp_matcher_name] = "path_regexp_matcher_name",
  [field_uri_path_target] = "uri_path_target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 1},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 2},
  [13] = {.index = 16, .length = 3},
  [14] = {.index = 19, .length = 3},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 3},
  [18] = {.index = 28, .length = 2},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 3},
  [22] = {.index = 37, .length = 2},
  [23] = {.index = 39, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_global_option_type, 0},
  [1] =
    {field_directive_type, 0},
  [2] =
    {field_path_matcher, 0},
  [3] =
    {field_file_server_option_browse, 0},
  [4] =
    {field_file_server_option_browse, 1},
  [5] =
    {field_file_server_option_browse, 0, .inherited = true},
    {field_file_server_option_browse, 1, .inherited = true},
  [7] =
    {field_address_target, 0},
  [8] =
    {field_uri_path_target, 0},
  [9] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 1, .inherited = true},
  [11] =
    {field_address_target, 0},
    {field_address_target, 1},
  [13] =
    {field_matcher_type, 0},
  [14] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 2, .inherited = true},
  [16] =
    {field_address_target, 0},
    {field_address_target, 1},
    {field_address_target, 2},
  [19] =
    {field_cert_file, 2},
    {field_directive_type, 0},
    {field_key_file, 4},
  [22] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 3, .inherited = true},
  [24] =
    {field_log_option_type, 0},
  [25] =
    {field_cert_file, 3},
    {field_directive_type, 0},
    {field_key_file, 5},
  [28] =
    {field_matcher_type, 0},
    {field_path_regexp_matcher_name, 2},
  [30] =
    {field_basicauth_user_name, 0},
    {field_basicauth_user_pass, 2},
  [32] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 4, .inherited = true},
  [34] =
    {field_basicauth_user_name, 0},
    {field_basicauth_user_pass, 2},
    {field_basicauth_user_pass_saltb64, 4},
  [37] =
    {field_basicauth_realm_name, 4},
    {field_directive_type, 0},
  [39] =
    {field_basicauth_realm_name, 6},
    {field_directive_type, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 12,
  [16] = 8,
  [17] = 17,
  [18] = 17,
  [19] = 11,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 23,
  [29] = 27,
  [30] = 21,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 38,
  [43] = 39,
  [44] = 37,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 48,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 45,
  [55] = 46,
  [56] = 56,
  [57] = 48,
  [58] = 58,
  [59] = 53,
  [60] = 49,
  [61] = 52,
  [62] = 47,
  [63] = 63,
  [64] = 56,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 65,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 58,
  [75] = 75,
  [76] = 67,
  [77] = 66,
  [78] = 71,
  [79] = 72,
  [80] = 80,
  [81] = 70,
  [82] = 73,
  [83] = 75,
  [84] = 80,
  [85] = 85,
  [86] = 47,
  [87] = 87,
  [88] = 88,
  [89] = 48,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 90,
  [107] = 94,
  [108] = 108,
  [109] = 47,
  [110] = 48,
  [111] = 87,
  [112] = 93,
  [113] = 92,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 85,
  [119] = 119,
  [120] = 120,
  [121] = 91,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 94,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 88,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 90,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 152,
  [161] = 117,
  [162] = 95,
  [163] = 143,
  [164] = 139,
  [165] = 148,
  [166] = 147,
  [167] = 146,
  [168] = 137,
  [169] = 135,
  [170] = 134,
  [171] = 133,
  [172] = 132,
  [173] = 159,
  [174] = 131,
  [175] = 158,
  [176] = 157,
  [177] = 156,
  [178] = 127,
  [179] = 99,
  [180] = 103,
  [181] = 96,
  [182] = 124,
  [183] = 155,
  [184] = 154,
  [185] = 122,
  [186] = 116,
  [187] = 128,
  [188] = 150,
  [189] = 145,
  [190] = 105,
  [191] = 115,
  [192] = 129,
  [193] = 114,
  [194] = 104,
  [195] = 195,
  [196] = 142,
  [197] = 144,
  [198] = 153,
  [199] = 140,
  [200] = 141,
  [201] = 123,
  [202] = 136,
  [203] = 130,
  [204] = 126,
  [205] = 120,
  [206] = 119,
  [207] = 207,
  [208] = 101,
  [209] = 100,
  [210] = 108,
  [211] = 151,
  [212] = 102,
  [213] = 94,
  [214] = 90,
  [215] = 98,
  [216] = 48,
  [217] = 97,
  [218] = 47,
  [219] = 219,
  [220] = 219,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 224,
  [228] = 225,
  [229] = 226,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 141,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 80,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 246,
  [248] = 242,
  [249] = 244,
  [250] = 245,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 256,
  [257] = 254,
  [258] = 253,
  [259] = 259,
  [260] = 260,
  [261] = 254,
  [262] = 256,
  [263] = 263,
  [264] = 94,
  [265] = 260,
  [266] = 90,
  [267] = 129,
  [268] = 268,
  [269] = 94,
  [270] = 270,
  [271] = 271,
  [272] = 123,
  [273] = 147,
  [274] = 274,
  [275] = 131,
  [276] = 127,
  [277] = 274,
  [278] = 278,
  [279] = 268,
  [280] = 90,
  [281] = 130,
  [282] = 270,
  [283] = 283,
  [284] = 284,
  [285] = 284,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 288,
  [291] = 289,
  [292] = 292,
  [293] = 292,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 298,
  [303] = 298,
  [304] = 299,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 301,
  [311] = 311,
  [312] = 296,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 297,
  [317] = 305,
  [318] = 307,
  [319] = 295,
  [320] = 299,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 325,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 330,
  [342] = 342,
  [343] = 329,
  [344] = 344,
  [345] = 342,
  [346] = 328,
  [347] = 327,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 339,
  [352] = 338,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 324,
  [359] = 344,
  [360] = 331,
  [361] = 348,
  [362] = 362,
  [363] = 363,
  [364] = 350,
  [365] = 340,
  [366] = 366,
  [367] = 334,
  [368] = 333,
  [369] = 353,
  [370] = 354,
  [371] = 356,
  [372] = 362,
  [373] = 336,
  [374] = 363,
  [375] = 326,
  [376] = 366,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 380,
  [391] = 391,
  [392] = 384,
  [393] = 337,
  [394] = 394,
  [395] = 388,
  [396] = 396,
  [397] = 391,
  [398] = 386,
  [399] = 399,
  [400] = 396,
  [401] = 381,
  [402] = 385,
  [403] = 389,
  [404] = 377,
  [405] = 380,
  [406] = 385,
  [407] = 377,
  [408] = 408,
  [409] = 389,
  [410] = 399,
  [411] = 382,
  [412] = 378,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 417,
  [420] = 420,
  [421] = 421,
  [422] = 416,
  [423] = 418,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 426,
  [428] = 428,
  [429] = 40,
  [430] = 428,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 437,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 455,
  [456] = 438,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 441,
  [462] = 450,
  [463] = 463,
  [464] = 451,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 440,
  [469] = 469,
  [470] = 465,
  [471] = 466,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 467,
  [477] = 469,
  [478] = 457,
  [479] = 479,
  [480] = 444,
  [481] = 447,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 467,
  [487] = 433,
  [488] = 488,
  [489] = 448,
  [490] = 442,
  [491] = 439,
  [492] = 469,
  [493] = 457,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 479,
  [499] = 38,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 453,
  [506] = 500,
  [507] = 507,
  [508] = 436,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 509,
  [514] = 512,
  [515] = 443,
  [516] = 444,
  [517] = 445,
  [518] = 447,
  [519] = 494,
  [520] = 435,
  [521] = 521,
  [522] = 522,
  [523] = 449,
  [524] = 452,
  [525] = 479,
  [526] = 504,
  [527] = 527,
  [528] = 472,
  [529] = 529,
  [530] = 454,
  [531] = 455,
  [532] = 458,
  [533] = 511,
  [534] = 503,
  [535] = 496,
  [536] = 434,
  [537] = 510,
  [538] = 511,
  [539] = 510,
  [540] = 507,
  [541] = 502,
  [542] = 542,
  [543] = 432,
  [544] = 460,
  [545] = 459,
  [546] = 431,
  [547] = 466,
  [548] = 497,
  [549] = 507,
  [550] = 465,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 123,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 552,
  [561] = 561,
  [562] = 562,
  [563] = 563,
  [564] = 564,
  [565] = 565,
  [566] = 566,
  [567] = 567,
  [568] = 568,
  [569] = 569,
  [570] = 559,
  [571] = 571,
  [572] = 572,
  [573] = 561,
  [574] = 564,
  [575] = 91,
  [576] = 576,
  [577] = 572,
  [578] = 571,
  [579] = 579,
  [580] = 559,
  [581] = 561,
  [582] = 572,
  [583] = 571,
  [584] = 559,
  [585] = 572,
  [586] = 571,
  [587] = 559,
  [588] = 572,
  [589] = 571,
  [590] = 590,
  [591] = 591,
  [592] = 592,
  [593] = 593,
  [594] = 555,
  [595] = 595,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 551,
  [600] = 561,
  [601] = 601,
  [602] = 602,
  [603] = 559,
  [604] = 597,
  [605] = 593,
  [606] = 606,
  [607] = 596,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 614,
  [615] = 615,
  [616] = 616,
  [617] = 617,
  [618] = 618,
  [619] = 612,
  [620] = 620,
  [621] = 621,
  [622] = 566,
  [623] = 562,
  [624] = 624,
  [625] = 595,
  [626] = 626,
  [627] = 602,
  [628] = 628,
  [629] = 629,
  [630] = 630,
  [631] = 617,
  [632] = 565,
  [633] = 564,
  [634] = 579,
  [635] = 590,
  [636] = 562,
  [637] = 576,
  [638] = 597,
  [639] = 92,
  [640] = 590,
  [641] = 565,
  [642] = 552,
  [643] = 595,
  [644] = 597,
  [645] = 552,
  [646] = 595,
  [647] = 552,
  [648] = 595,
  [649] = 552,
  [650] = 595,
  [651] = 93,
  [652] = 652,
  [653] = 558,
  [654] = 654,
  [655] = 601,
  [656] = 610,
  [657] = 38,
  [658] = 566,
  [659] = 556,
  [660] = 660,
  [661] = 661,
  [662] = 662,
  [663] = 663,
  [664] = 664,
  [665] = 563,
  [666] = 553,
  [667] = 667,
  [668] = 668,
  [669] = 569,
  [670] = 663,
  [671] = 40,
  [672] = 572,
  [673] = 571,
  [674] = 598,
  [675] = 675,
  [676] = 676,
  [677] = 664,
  [678] = 678,
  [679] = 679,
  [680] = 591,
  [681] = 681,
  [682] = 624,
  [683] = 683,
  [684] = 611,
  [685] = 618,
  [686] = 567,
  [687] = 678,
  [688] = 87,
  [689] = 689,
  [690] = 690,
  [691] = 630,
  [692] = 662,
  [693] = 661,
  [694] = 694,
  [695] = 668,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(726);
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(729);
      if (lookahead == '\r') ADVANCE(729);
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(733);
      if (lookahead == '\'') ADVANCE(1214);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '/') ADVANCE(934);
      if (lookahead == '1') ADVANCE(895);
      if (lookahead == '2') ADVANCE(889);
      if (lookahead == '3') ADVANCE(892);
      if (lookahead == '4') ADVANCE(942);
      if (lookahead == '6') ADVANCE(944);
      if (lookahead == ':') ADVANCE(885);
      if (lookahead == '?') ADVANCE(1210);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(603);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == 'u') ADVANCE(436);
      if (lookahead == 'z') ADVANCE(640);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(729);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == 8232) ADVANCE(729);
      if (lookahead == 8233) ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(729);
      if (lookahead == '\f') ADVANCE(729);
      if (lookahead == '\r') ADVANCE(729);
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(733);
      if (lookahead == '\'') ADVANCE(1214);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '/') ADVANCE(934);
      if (lookahead == '1') ADVANCE(895);
      if (lookahead == '2') ADVANCE(889);
      if (lookahead == '3') ADVANCE(892);
      if (lookahead == '4') ADVANCE(942);
      if (lookahead == '6') ADVANCE(944);
      if (lookahead == ':') ADVANCE(885);
      if (lookahead == '?') ADVANCE(1210);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'E') ADVANCE(372);
      if (lookahead == 'I') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'c') ADVANCE(561);
      if (lookahead == 'd') ADVANCE(447);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(505);
      if (lookahead == 'g') ADVANCE(603);
      if (lookahead == 'h') ADVANCE(408);
      if (lookahead == 'i') ADVANCE(498);
      if (lookahead == 'j') ADVANCE(639);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead == 'm') ADVANCE(388);
      if (lookahead == 'o') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead == 'r') ADVANCE(450);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == 't') ADVANCE(420);
      if (lookahead == 'u') ADVANCE(436);
      if (lookahead == 'z') ADVANCE(640);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(729);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == 8232) ADVANCE(729);
      if (lookahead == 8233) ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1537);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1537);
      if ((1 <= lookahead && lookahead <= 11) ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1538);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1539);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1539);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1539);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1539);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1539);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '5') ADVANCE(23);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '5') ADVANCE(28);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1538);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(16);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1212);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(39)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1213);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1216);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(40)
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1217);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(958);
      if (lookahead == '2') ADVANCE(954);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'b') ADVANCE(1068);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'f') ADVANCE(1070);
      if (lookahead == 'h') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(1092);
      if (lookahead == 'u') ADVANCE(1096);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(41);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(958);
      if (lookahead == '2') ADVANCE(954);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'b') ADVANCE(1068);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'f') ADVANCE(1070);
      if (lookahead == 'h') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(1092);
      if (lookahead == 'u') ADVANCE(1096);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(42);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1126);
      if (lookahead == 'f') ADVANCE(1116);
      if (lookahead == 'h') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(1121);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(43);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(1089);
      if (lookahead == 'b') ADVANCE(1085);
      if (lookahead == 'e') ADVANCE(1126);
      if (lookahead == 'f') ADVANCE(1116);
      if (lookahead == 'h') ADVANCE(1087);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == 'r') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(1121);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(44);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '\'') ADVANCE(1215);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(45)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(1211);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '/') ADVANCE(953);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(46)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '1') ADVANCE(958);
      if (lookahead == '2') ADVANCE(954);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(1071);
      if (lookahead == 'i') ADVANCE(1137);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == 'u') ADVANCE(1096);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(47)
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '1') ADVANCE(958);
      if (lookahead == '2') ADVANCE(954);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == 'f') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(956);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1077);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(48)
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(949);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(49)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(950);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead == 'b') ADVANCE(964);
      if (lookahead == 'e') ADVANCE(1005);
      if (lookahead == 'f') ADVANCE(996);
      if (lookahead == 'h') ADVANCE(969);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(980);
      if (lookahead == 't') ADVANCE(1002);
      if (lookahead == '}') ADVANCE(740);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(50);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(950);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(970);
      if (lookahead == 'b') ADVANCE(964);
      if (lookahead == 'e') ADVANCE(1005);
      if (lookahead == 'f') ADVANCE(996);
      if (lookahead == 'h') ADVANCE(969);
      if (lookahead == 'i') ADVANCE(1004);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == 'r') ADVANCE(980);
      if (lookahead == 't') ADVANCE(1002);
      if (lookahead == '}') ADVANCE(740);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(724);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(53)
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(284);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(723);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'd') ADVANCE(514);
      if (lookahead == 'f') ADVANCE(520);
      if (lookahead == 's') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(1191);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '3') ADVANCE(1504);
      if (lookahead == '4') ADVANCE(1396);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1407);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'p') ADVANCE(1425);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(56);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '3') ADVANCE(1504);
      if (lookahead == '4') ADVANCE(1396);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1407);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'p') ADVANCE(1425);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(57);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '3') ADVANCE(1504);
      if (lookahead == '4') ADVANCE(1396);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1407);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'p') ADVANCE(1425);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(58);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1408);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(59);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1408);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(60);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1409);
      if (lookahead == 'b') ADVANCE(1401);
      if (lookahead == 'e') ADVANCE(1449);
      if (lookahead == 'f') ADVANCE(1437);
      if (lookahead == 'h') ADVANCE(1408);
      if (lookahead == 'i') ADVANCE(1445);
      if (lookahead == 'l') ADVANCE(1454);
      if (lookahead == 'r') ADVANCE(1419);
      if (lookahead == 't') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(61);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '1') ADVANCE(266);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == ':') ADVANCE(886);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '3') ADVANCE(703);
      if (lookahead == '4') ADVANCE(318);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(391);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'g') ADVANCE(687);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == 'z') ADVANCE(640);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1209);
      if (lookahead == '?') ADVANCE(1210);
      if (lookahead == 'd') ADVANCE(922);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(729);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1209);
      if (lookahead == '?') ADVANCE(1210);
      if (lookahead == 'd') ADVANCE(922);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(729);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '3') ADVANCE(703);
      if (lookahead == '4') ADVANCE(318);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(415);
      if (lookahead == 'b') ADVANCE(393);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'f') ADVANCE(519);
      if (lookahead == 'g') ADVANCE(687);
      if (lookahead == 'h') ADVANCE(409);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(449);
      if (lookahead == 'o') ADVANCE(670);
      if (lookahead == 'p') ADVANCE(405);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == 't') ADVANCE(452);
      if (lookahead == 'z') ADVANCE(640);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'h') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'p') ADVANCE(404);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(728);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'b') ADVANCE(392);
      if (lookahead == 'e') ADVANCE(549);
      if (lookahead == 'f') ADVANCE(518);
      if (lookahead == 'h') ADVANCE(407);
      if (lookahead == 'i') ADVANCE(539);
      if (lookahead == 'l') ADVANCE(563);
      if (lookahead == 'r') ADVANCE(451);
      if (lookahead == 't') ADVANCE(530);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == 133) ADVANCE(730);
      if (lookahead == 134) ADVANCE(731);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(728);
      END_STATE();
    case 69:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '}') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(731);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(732);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(909);
      if (lookahead != 0) ADVANCE(913);
      END_STATE();
    case 70:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '}') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(731);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(732);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(727);
      if (lookahead != 0) ADVANCE(913);
      END_STATE();
    case 71:
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(731);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(732);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(910);
      if (lookahead != 0) ADVANCE(913);
      END_STATE();
    case 72:
      if (lookahead == '%') ADVANCE(721);
      END_STATE();
    case 73:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(789);
      END_STATE();
    case 85:
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 86:
      if (lookahead == '%') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 87:
      if (lookahead == '%') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == '%') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(793);
      END_STATE();
    case 89:
      if (lookahead == '%') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 90:
      if (lookahead == '%') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '*') ADVANCE(1543);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '@') ADVANCE(903);
      if (lookahead == 'h') ADVANCE(1389);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(91)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1391);
      END_STATE();
    case 92:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'h') ADVANCE(1389);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(92)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1391);
      END_STATE();
    case 93:
      if (lookahead == ')') ADVANCE(1550);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '+') ADVANCE(1207);
      if (lookahead == '-') ADVANCE(1209);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '?') ADVANCE(1210);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(94)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(722);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1540);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == '2') ADVANCE(103);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '5') ADVANCE(104);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ']') ADVANCE(1536);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ']') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(107);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ']') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ']') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(376);
      if (lookahead == ']') ADVANCE(1536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == ':') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(133);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(135);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(139);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(161);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(159);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(158);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(166);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(185);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(187);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(195);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(205);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(203);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 't') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 's') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '_') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(232);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'h') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 't') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(252);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '8') ADVANCE(253);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'c') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'p') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'x') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(261);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(262);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == ':') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '_') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'a') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == 'p') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 263:
      if (lookahead == '-') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '5') ADVANCE(234);
      if (lookahead == ':') ADVANCE(333);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 265:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 266:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 267:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '5') ADVANCE(245);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 268:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 269:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '5') ADVANCE(248);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 272:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 273:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 274:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 275:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 276:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 277:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 279:
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 280:
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(883);
      END_STATE();
    case 281:
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(696);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(720);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(284);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '5') ADVANCE(287);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(288);
      END_STATE();
    case 287:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(285);
      END_STATE();
    case 288:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == '.') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '.') ADVANCE(323);
      END_STATE();
    case 291:
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '5') ADVANCE(292);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(293);
      END_STATE();
    case 292:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(290);
      END_STATE();
    case 293:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 294:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == '.') ADVANCE(325);
      END_STATE();
    case 296:
      if (lookahead == '.') ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '.') ADVANCE(328);
      END_STATE();
    case 298:
      if (lookahead == '.') ADVANCE(328);
      if (lookahead == '5') ADVANCE(299);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(300);
      END_STATE();
    case 299:
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(297);
      END_STATE();
    case 300:
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 301:
      if (lookahead == '.') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '.') ADVANCE(320);
      END_STATE();
    case 303:
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '5') ADVANCE(304);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(306);
      END_STATE();
    case 304:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(302);
      END_STATE();
    case 305:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 307:
      if (lookahead == '.') ADVANCE(321);
      END_STATE();
    case 308:
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '5') ADVANCE(309);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(311);
      END_STATE();
    case 309:
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(307);
      END_STATE();
    case 310:
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == '.') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 312:
      if (lookahead == '/') ADVANCE(934);
      if (lookahead == '4') ADVANCE(941);
      if (lookahead == '6') ADVANCE(943);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(312)
      END_STATE();
    case 313:
      if (lookahead == '/') ADVANCE(748);
      END_STATE();
    case 314:
      if (lookahead == '/') ADVANCE(749);
      END_STATE();
    case 315:
      if (lookahead == '/') ADVANCE(313);
      END_STATE();
    case 316:
      if (lookahead == '/') ADVANCE(314);
      END_STATE();
    case 317:
      if (lookahead == '0') ADVANCE(794);
      if (lookahead == '1') ADVANCE(826);
      if (lookahead == '2') ADVANCE(800);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 318:
      if (lookahead == '0') ADVANCE(327);
      END_STATE();
    case 319:
      if (lookahead == '0') ADVANCE(307);
      if (lookahead == '1') ADVANCE(310);
      if (lookahead == '2') ADVANCE(308);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 320:
      if (lookahead == '0') ADVANCE(285);
      if (lookahead == '1') ADVANCE(289);
      if (lookahead == '2') ADVANCE(286);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 321:
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '2') ADVANCE(303);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 322:
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == '2') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 323:
      if (lookahead == '1') ADVANCE(766);
      if (lookahead == '2') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      END_STATE();
    case 324:
      if (lookahead == '1') ADVANCE(272);
      if (lookahead == '2') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 325:
      if (lookahead == '1') ADVANCE(869);
      if (lookahead == '2') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 326:
      if (lookahead == '1') ADVANCE(758);
      if (lookahead == '2') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 327:
      if (lookahead == '1') ADVANCE(1509);
      END_STATE();
    case 328:
      if (lookahead == '1') ADVANCE(294);
      if (lookahead == '2') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 329:
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '2') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 330:
      if (lookahead == '1') ADVANCE(820);
      if (lookahead == '2') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == 's') ADVANCE(349);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(832);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(872);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(335);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(336);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(362);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(363);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(364);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == ':') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 363:
      if (lookahead == ':') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 364:
      if (lookahead == ':') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 365:
      if (lookahead == '@') ADVANCE(373);
      END_STATE();
    case 366:
      if (lookahead == 'F') ADVANCE(368);
      END_STATE();
    case 367:
      if (lookahead == 'N') ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == 'O') ADVANCE(1249);
      END_STATE();
    case 369:
      if (lookahead == 'O') ADVANCE(371);
      END_STATE();
    case 370:
      if (lookahead == 'R') ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == 'R') ADVANCE(1251);
      END_STATE();
    case 372:
      if (lookahead == 'R') ADVANCE(370);
      END_STATE();
    case 373:
      if (lookahead == '[') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 374:
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == ']') ADVANCE(1541);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(374);
      END_STATE();
    case 375:
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == ']') ADVANCE(1541);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(374);
      END_STATE();
    case 376:
      if (lookahead == '\\') ADVANCE(375);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(374);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(428);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(504);
      END_STATE();
    case 380:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(429);
      END_STATE();
    case 382:
      if (lookahead == '_') ADVANCE(533);
      END_STATE();
    case 383:
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 384:
      if (lookahead == '_') ADVANCE(589);
      END_STATE();
    case 385:
      if (lookahead == '_') ADVANCE(442);
      END_STATE();
    case 386:
      if (lookahead == '_') ADVANCE(663);
      END_STATE();
    case 387:
      if (lookahead == '_') ADVANCE(632);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(678);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(419);
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 'r') ADVANCE(559);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(686);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(554);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(529);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(649);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(659);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(645);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(645);
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(602);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 't') ADVANCE(543);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(552);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 't') ADVANCE(542);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(531);
      END_STATE();
    case 411:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 412:
      if (lookahead == 'a') ADVANCE(674);
      END_STATE();
    case 413:
      if (lookahead == 'a') ADVANCE(418);
      END_STATE();
    case 414:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 415:
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'u') ADVANCE(656);
      END_STATE();
    case 416:
      if (lookahead == 'b') ADVANCE(572);
      END_STATE();
    case 417:
      if (lookahead == 'b') ADVANCE(535);
      END_STATE();
    case 418:
      if (lookahead == 'b') ADVANCE(536);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(521);
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(580);
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(569);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'g') ADVANCE(1223);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(402);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 425:
      if (lookahead == 'c') ADVANCE(568);
      END_STATE();
    case 426:
      if (lookahead == 'c') ADVANCE(410);
      END_STATE();
    case 427:
      if (lookahead == 'c') ADVANCE(666);
      END_STATE();
    case 428:
      if (lookahead == 'c') ADVANCE(490);
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 429:
      if (lookahead == 'c') ADVANCE(491);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(930);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(1181);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(1230);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(1233);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(1235);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(481);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(581);
      if (lookahead == 'n') ADVANCE(508);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(683);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(513);
      if (lookahead == 'q') ADVANCE(671);
      if (lookahead == 'v') ADVANCE(478);
      if (lookahead == 'w') ADVANCE(606);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(512);
      if (lookahead == 'k') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(575);
      if (lookahead == 's') ADVANCE(515);
      if (lookahead == 'u') ADVANCE(556);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(456);
      END_STATE();
    case 441:
      if (lookahead == 'd') ADVANCE(381);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(397);
      END_STATE();
    case 443:
      if (lookahead == 'd') ADVANCE(476);
      END_STATE();
    case 444:
      if (lookahead == 'd') ADVANCE(532);
      END_STATE();
    case 445:
      if (lookahead == 'd') ADVANCE(517);
      END_STATE();
    case 446:
      if (lookahead == 'd') ADVANCE(484);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead == 'i') ADVANCE(623);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(422);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(438);
      if (lookahead == 'o') ADVANCE(564);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(548);
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1232);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1532);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1186);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1196);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1246);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1518);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(1260);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(1236);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(427);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(681);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(382);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(524);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(445);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(441);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(622);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(433);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(614);
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(434);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 488:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 489:
      if (lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 490:
      if (lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 491:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 492:
      if (lookahead == 'f') ADVANCE(470);
      END_STATE();
    case 493:
      if (lookahead == 'f') ADVANCE(1546);
      END_STATE();
    case 494:
      if (lookahead == 'f') ADVANCE(493);
      if (lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 495:
      if (lookahead == 'f') ADVANCE(560);
      if (lookahead == 't') ADVANCE(475);
      END_STATE();
    case 496:
      if (lookahead == 'f') ADVANCE(574);
      END_STATE();
    case 497:
      if (lookahead == 'g') ADVANCE(1223);
      END_STATE();
    case 498:
      if (lookahead == 'g') ADVANCE(558);
      if (lookahead == 'm') ADVANCE(593);
      if (lookahead == 'n') ADVANCE(495);
      if (lookahead == 'p') ADVANCE(939);
      END_STATE();
    case 499:
      if (lookahead == 'g') ADVANCE(466);
      END_STATE();
    case 500:
      if (lookahead == 'h') ADVANCE(905);
      END_STATE();
    case 501:
      if (lookahead == 'h') ADVANCE(918);
      END_STATE();
    case 502:
      if (lookahead == 'h') ADVANCE(1197);
      END_STATE();
    case 503:
      if (lookahead == 'h') ADVANCE(578);
      END_STATE();
    case 504:
      if (lookahead == 'h') ADVANCE(669);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(526);
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(688);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(523);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(597);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 516:
      if (lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 517:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 518:
      if (lookahead == 'i') ADVANCE(537);
      END_STATE();
    case 519:
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 520:
      if (lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 521:
      if (lookahead == 'k') ADVANCE(477);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(1516);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(1544);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(1248);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(1530);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(661);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(377);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(503);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(624);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(386);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 534:
      if (lookahead == 'l') ADVANCE(458);
      END_STATE();
    case 535:
      if (lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 536:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 537:
      if (lookahead == 'l') ADVANCE(488);
      END_STATE();
    case 538:
      if (lookahead == 'l') ADVANCE(464);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(593);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(947);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(395);
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(522);
      END_STATE();
    case 543:
      if (lookahead == 'm') ADVANCE(522);
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 544:
      if (lookahead == 'm') ADVANCE(400);
      END_STATE();
    case 545:
      if (lookahead == 'm') ADVANCE(398);
      END_STATE();
    case 546:
      if (lookahead == 'm') ADVANCE(463);
      END_STATE();
    case 547:
      if (lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 548:
      if (lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(619);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(1247);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(444);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(631);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(472);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(655);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(677);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(379);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(646);
      if (lookahead == 'u') ADVANCE(661);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(680);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(440);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(609);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(611);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(426);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(411);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(608);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(534);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(935);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(937);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(1180);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(331);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(1237);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(906);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(672);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(648);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(625);
      END_STATE();
    case 589:
      if (lookahead == 'p') ADVANCE(612);
      END_STATE();
    case 590:
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 591:
      if (lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 592:
      if (lookahead == 'p') ADVANCE(573);
      END_STATE();
    case 593:
      if (lookahead == 'p') ADVANCE(577);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(685);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(1205);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(1187);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(1201);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(1228);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(1182);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(682);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == 'z') ADVANCE(510);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(557);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(516);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(432);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(650);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(406);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(665);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 617:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 618:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 619:
      if (lookahead == 'r') ADVANCE(570);
      END_STATE();
    case 620:
      if (lookahead == 'r') ADVANCE(545);
      END_STATE();
    case 621:
      if (lookahead == 'r') ADVANCE(482);
      END_STATE();
    case 622:
      if (lookahead == 'r') ADVANCE(636);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(390);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(1526);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(1545);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(1549);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(1547);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(1239);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(1548);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(507);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(579);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(506);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(455);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(662);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(471);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 638:
      if (lookahead == 's') ADVANCE(483);
      END_STATE();
    case 639:
      if (lookahead == 's') ADVANCE(566);
      END_STATE();
    case 640:
      if (lookahead == 's') ADVANCE(658);
      END_STATE();
    case 641:
      if (lookahead == 's') ADVANCE(423);
      END_STATE();
    case 642:
      if (lookahead == 's') ADVANCE(638);
      END_STATE();
    case 643:
      if (lookahead == 's') ADVANCE(485);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(500);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(1522);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(914);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(927);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(1245);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(1218);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(1227);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(948);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(1229);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(750);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(1514);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(562);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(501);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(431);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(502);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(586);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(454);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(380);
      END_STATE();
    case 663:
      if (lookahead == 't') ADVANCE(511);
      END_STATE();
    case 664:
      if (lookahead == 't') ADVANCE(588);
      END_STATE();
    case 665:
      if (lookahead == 't') ADVANCE(626);
      END_STATE();
    case 666:
      if (lookahead == 't') ADVANCE(627);
      END_STATE();
    case 667:
      if (lookahead == 't') ADVANCE(629);
      END_STATE();
    case 668:
      if (lookahead == 't') ADVANCE(460);
      END_STATE();
    case 669:
      if (lookahead == 't') ADVANCE(664);
      END_STATE();
    case 670:
      if (lookahead == 'u') ADVANCE(660);
      END_STATE();
    case 671:
      if (lookahead == 'u') ADVANCE(474);
      END_STATE();
    case 672:
      if (lookahead == 'u') ADVANCE(651);
      END_STATE();
    case 673:
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 674:
      if (lookahead == 'u') ADVANCE(657);
      END_STATE();
    case 675:
      if (lookahead == 'v') ADVANCE(468);
      END_STATE();
    case 676:
      if (lookahead == 'v') ADVANCE(486);
      END_STATE();
    case 677:
      if (lookahead == 'w') ADVANCE(633);
      END_STATE();
    case 678:
      if (lookahead == 'x') ADVANCE(387);
      END_STATE();
    case 679:
      if (lookahead == 'x') ADVANCE(945);
      END_STATE();
    case 680:
      if (lookahead == 'x') ADVANCE(684);
      END_STATE();
    case 681:
      if (lookahead == 'x') ADVANCE(585);
      END_STATE();
    case 682:
      if (lookahead == 'y') ADVANCE(1512);
      END_STATE();
    case 683:
      if (lookahead == 'y') ADVANCE(1256);
      END_STATE();
    case 684:
      if (lookahead == 'y') ADVANCE(1261);
      END_STATE();
    case 685:
      if (lookahead == 'y') ADVANCE(587);
      END_STATE();
    case 686:
      if (lookahead == 'y') ADVANCE(628);
      END_STATE();
    case 687:
      if (lookahead == 'z') ADVANCE(510);
      END_STATE();
    case 688:
      if (lookahead == 'z') ADVANCE(461);
      END_STATE();
    case 689:
      if (lookahead == 'z') ADVANCE(462);
      END_STATE();
    case 690:
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(690)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 691:
      if (lookahead == '}') ADVANCE(1506);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 692:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(692)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(913);
      END_STATE();
    case 693:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(951);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(693)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 694:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(694)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(913);
      END_STATE();
    case 695:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1238);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(695)
      END_STATE();
    case 696:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 697:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1508);
      END_STATE();
    case 698:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1192);
      END_STATE();
    case 699:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      END_STATE();
    case 700:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1242);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(700)
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1243);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1240);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(702)
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(698);
      END_STATE();
    case 705:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(902);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(705)
      END_STATE();
    case 706:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(706)
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(928);
      END_STATE();
    case 707:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(707)
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 708:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1507);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1506);
      END_STATE();
    case 710:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 711:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(709);
      END_STATE();
    case 712:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 713:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 714:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(872);
      END_STATE();
    case 715:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 716:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 717:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 718:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(691);
      END_STATE();
    case 719:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1540);
      END_STATE();
    case 720:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(284);
      END_STATE();
    case 721:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(769);
      END_STATE();
    case 722:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(282);
      END_STATE();
    case 723:
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 724:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 725:
      if (eof) ADVANCE(726);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '*') ADVANCE(1542);
      if (lookahead == '/') ADVANCE(1507);
      if (lookahead == '1') ADVANCE(266);
      if (lookahead == '2') ADVANCE(264);
      if (lookahead == ':') ADVANCE(886);
      if (lookahead == '@') ADVANCE(904);
      if (lookahead == 'f') ADVANCE(273);
      if (lookahead == 'h') ADVANCE(279);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'l') ADVANCE(277);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == '{') ADVANCE(738);
      if (lookahead == '}') ADVANCE(739);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(62);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(727);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(727);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(728);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__vertical_whitespace);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__vertical_whitespaces);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__empty_line);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(733);
      if (lookahead != 0) ADVANCE(733);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1537);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(736);
      if (lookahead != 0) ADVANCE(908);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(720);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(284);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (lookahead == ':') ADVANCE(699);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_localhost);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(207);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ipv4_address);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(756);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(756);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(227);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(251);
      if (lookahead == '5') ADVANCE(753);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(762);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(764);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(763);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(765);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(752);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(768);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(771);
      if (lookahead == ':') ADVANCE(84);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(775);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == '1') ADVANCE(774);
      if (lookahead == '2') ADVANCE(770);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(88);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(84);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(787);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(788);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(712);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(790);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(791);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(721);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(792);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '0') ADVANCE(795);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '0') ADVANCE(831);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(801);
      if (lookahead == ':') ADVANCE(717);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(807);
      if (lookahead == ':') ADVANCE(712);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(813);
      if (lookahead == ':') ADVANCE(713);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(819);
      if (lookahead == ':') ADVANCE(715);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == '5') ADVANCE(825);
      if (lookahead == ':') ADVANCE(716);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(805);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(811);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(817);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(823);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(824);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(829);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(296);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(839);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(804);
      if (lookahead == '2') ADVANCE(796);
      if (lookahead == 'f') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(846);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(808);
      if (lookahead == '2') ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(814);
      if (lookahead == '2') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(820);
      if (lookahead == '2') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(826);
      if (lookahead == '2') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(867);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(868);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(330);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == 'f') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(844);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == 'f') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(840);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (lookahead == 'f') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(845);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(714);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(712);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(713);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(715);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(716);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(769);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(868);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(870);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(871);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(872);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1375);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1381);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1373);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(875);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1388);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1387);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(879);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1379);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1378);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(876);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(233);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(880);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(263);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(228);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(832);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '1') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '5') ADVANCE(890);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(894);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(893);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(900);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1238);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(896);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(897);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(899);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(901);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1506);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(903);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(613);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\r') ADVANCE(737);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(736);
      if (lookahead != 0) ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '}') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(732);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(913);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(908);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(71);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(732);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(913);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(913);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_basicauth);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(924);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(925);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'f') ADVANCE(923);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'r') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_bcrypt);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token1);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(928);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token2);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '0') ADVANCE(888);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(365);
      if (lookahead == '\\') ADVANCE(724);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(951);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(952);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '%') ADVANCE(710);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1507);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(953);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == '5') ADVANCE(955);
      if (lookahead == ':') ADVANCE(333);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(959);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(959);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1064);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '_') ADVANCE(1036);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '_') ADVANCE(1018);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '_') ADVANCE(971);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == 'i') ADVANCE(1006);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(1047);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(1001);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(1043);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'a') ADVANCE(1007);
      if (lookahead == 'e') ADVANCE(966);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(1011);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(1015);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'c') ADVANCE(1014);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(932);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(1050);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(998);
      if (lookahead == 'q') ADVANCE(1046);
      if (lookahead == 'v') ADVANCE(989);
      if (lookahead == 'w') ADVANCE(1027);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(1003);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(983);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1012);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1534);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1178);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1194);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1520);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1034);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1025);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1030);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1022);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1023);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'g') ADVANCE(1225);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'h') ADVANCE(920);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'h') ADVANCE(1199);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1000);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(972);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1021);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'i') ADVANCE(1045);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(981);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(1531);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(1032);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'l') ADVANCE(984);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'm') ADVANCE(1019);
      if (lookahead == 'n') ADVANCE(1041);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 'r') ADVANCE(1031);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(974);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(977);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'n') ADVANCE(967);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(1026);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(1037);
      if (lookahead == 'u') ADVANCE(1044);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(1020);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(978);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(975);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(968);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(1028);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'p') ADVANCE(1016);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1189);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1254);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1203);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1184);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1038);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(999);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1010);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1035);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'r') ADVANCE(1013);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 's') ADVANCE(1528);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 's') ADVANCE(997);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 's') ADVANCE(1042);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 's') ADVANCE(986);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 's') ADVANCE(991);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(1524);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(916);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(1221);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(994);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(963);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(995);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(982);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 't') ADVANCE(985);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(987);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'u') ADVANCE(1040);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'v') ADVANCE(992);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'x') ADVANCE(1051);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(1258);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == 'y') ADVANCE(1263);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1065);
      if (lookahead == '5') ADVANCE(1054);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1066);
      if (lookahead == '5') ADVANCE(1059);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1060);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1062);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1062);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1066);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(1079);
      if (lookahead == ':') ADVANCE(333);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1061);
      if (lookahead == '2') ADVANCE(1058);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1060);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(767);
      if (lookahead == '2') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1056);
      if (lookahead == '2') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(1063);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == 'i') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'b') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == 'i') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'n') ADVANCE(1090);
      if (lookahead == 'r') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (lookahead == 's') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(333);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(73);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1158);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1142);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1168);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1155);
      if (lookahead == 'i') ADVANCE(1127);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1164);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1128);
      if (lookahead == 'e') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1135);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1131);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1083);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1138);
      if (lookahead == 'l') ADVANCE(1154);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1138);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(933);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1172);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1139);
      if (lookahead == 'n') ADVANCE(1117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1119);
      if (lookahead == 'q') ADVANCE(1167);
      if (lookahead == 'v') ADVANCE(1109);
      if (lookahead == 'w') ADVANCE(1151);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1123);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1110);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1097);
      if (lookahead == 'o') ADVANCE(1130);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1535);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1179);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1195);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1521);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1156);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1082);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1150);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1145);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1146);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1147);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'g') ADVANCE(1226);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(921);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(1200);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1170);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1091);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1166);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1154);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1141);
      if (lookahead == 'p') ADVANCE(940);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1141);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1090);
      if (lookahead == 'r') ADVANCE(1148);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1094);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1099);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1113);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1159);
      if (lookahead == 'u') ADVANCE(1165);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1149);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1171);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1143);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1098);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1095);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1152);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(940);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(936);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(938);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1086);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1136);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1153);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1190);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1255);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1204);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1169);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1185);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1133);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1157);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1120);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1161);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1132);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1529);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1118);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1163);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1111);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1525);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1222);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1114);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1115);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1107);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1162);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'v') ADVANCE(1112);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(946);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(1173);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1259);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1264);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_file_server);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_browse);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_error);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_http_message);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_http_error_code);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '_') ADVANCE(1463);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '_') ADVANCE(1017);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(591);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(926);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1211);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ') ADVANCE(1212);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1213);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1211);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if (lookahead == ' ') ADVANCE(1216);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1217);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1217);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_log);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_stderr);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '_') ADVANCE(643);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_roll_disabled);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_roll_size);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_roll_uncompressed);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_roll_local_time);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_roll_keep);
      if (lookahead == '_') ADVANCE(496);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym__log_output_file_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1238);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_roll_keep_for_days);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_size_number);
      if (lookahead == '.') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1244);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_size_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1244);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_size_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1244);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(anon_sym_request_body);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(anon_sym_max_size);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1505);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1392);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1505);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1392);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1296);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1296);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1294);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1293);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1294);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1293);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1304);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1303);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1303);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1298);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1308);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1308);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1302);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1312);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1311);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1311);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1316);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1310);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1309);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1310);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1309);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1320);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1319);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1320);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1319);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1314);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1314);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1323);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1324);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1323);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1317);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1317);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1328);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1327);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1328);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1327);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1321);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1322);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1321);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1325);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1325);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1330);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1329);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1330);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1329);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1339);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1340);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1339);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1344);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1344);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1338);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1337);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1338);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1337);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1348);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1348);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1352);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1351);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1352);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1351);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1346);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1345);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1346);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1345);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1356);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1355);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1356);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1355);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1350);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1349);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1350);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1349);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1360);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1359);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1360);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1359);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1358);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1357);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1358);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1357);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1368);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1367);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1368);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1367);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1362);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1362);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1372);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1371);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1372);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1371);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1366);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1365);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1366);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1365);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1376);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1375);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1376);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1375);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1370);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1369);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1370);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1369);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == ':') ADVANCE(1394);
      if (lookahead == 's') ADVANCE(1380);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1381);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1381);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1382);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1381);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == ':') ADVANCE(1395);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1373);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1374);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1373);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1373);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1388);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == 't') ADVANCE(1386);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1388);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1388);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1387);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1379);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == 'p') ADVANCE(1377);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1379);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1379);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1385);
      if (lookahead == 't') ADVANCE(1383);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1384);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1384);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(878);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '-') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1384);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(1503);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '/') ADVANCE(314);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '0') ADVANCE(1397);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '1') ADVANCE(1510);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '_') ADVANCE(1485);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '_') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '_') ADVANCE(1410);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1482);
      if (lookahead == 'i') ADVANCE(1450);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1452);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1496);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1418);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1492);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1471);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1451);
      if (lookahead == 'e') ADVANCE(1404);
      if (lookahead == 't') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'a') ADVANCE(1451);
      if (lookahead == 'e') ADVANCE(1404);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(1457);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'b') ADVANCE(1460);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'c') ADVANCE(1458);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'c') ADVANCE(1403);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(931);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(1500);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(1439);
      if (lookahead == 'q') ADVANCE(1495);
      if (lookahead == 'v') ADVANCE(1429);
      if (lookahead == 'w') ADVANCE(1475);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(1422);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(1444);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'd') ADVANCE(1430);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1415);
      if (lookahead == 'o') ADVANCE(1455);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1398);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1533);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1177);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1519);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1473);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1453);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1399);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1483);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1479);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1469);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1470);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1472);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'e') ADVANCE(1448);
      if (lookahead == 'l') ADVANCE(1481);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'g') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'h') ADVANCE(919);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'h') ADVANCE(1198);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(1442);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(1412);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(1468);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(1494);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'l') ADVANCE(1517);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'l') ADVANCE(1420);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'l') ADVANCE(1481);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'l') ADVANCE(1423);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'm') ADVANCE(1466);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'm') ADVANCE(1441);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'm') ADVANCE(1402);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'm') ADVANCE(1465);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(1411);
      if (lookahead == 'r') ADVANCE(1480);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(1413);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(1417);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(1426);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'n') ADVANCE(1490);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1434);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1486);
      if (lookahead == 'u') ADVANCE(1493);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1498);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1474);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1467);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1414);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1477);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'o') ADVANCE(1478);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(1405);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(1476);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(1461);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'p') ADVANCE(1462);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1188);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1253);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1202);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1497);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1499);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1183);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1447);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1487);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1440);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1456);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1406);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1488);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1484);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(1459);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 's') ADVANCE(1527);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 's') ADVANCE(1438);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 's') ADVANCE(1491);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 's') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 's') ADVANCE(1431);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1523);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(915);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1219);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1435);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1515);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1436);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1421);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 't') ADVANCE(1424);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(1428);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'u') ADVANCE(1489);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'v') ADVANCE(1432);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'x') ADVANCE(1501);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'y') ADVANCE(1513);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'y') ADVANCE(1257);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == 'y') ADVANCE(1262);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1506);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1391);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1390);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1502);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1393);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(710);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1507);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(anon_sym_401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(898);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_rewrite);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_rewrite);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(anon_sym_root);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1528:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1529:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1531:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1532:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 1533:
      ACCEPT_TOKEN(anon_sym_route);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1534:
      ACCEPT_TOKEN(anon_sym_route);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '@') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1052);
      END_STATE();
    case 1535:
      ACCEPT_TOKEN(anon_sym_route);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1175);
      END_STATE();
    case 1536:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f') ADVANCE(735);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1537);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1538);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(734);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(737);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(101);
      if (lookahead == '.') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1540);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(375);
      if (lookahead == ']') ADVANCE(1541);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(374);
      END_STATE();
    case 1542:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '{') ADVANCE(718);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1506);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(anon_sym_auto_https);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1547:
      ACCEPT_TOKEN(anon_sym_disable_redirects);
      END_STATE();
    case 1548:
      ACCEPT_TOKEN(anon_sym_ignore_loaded_certs);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(anon_sym_disable_certs);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 725},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 42},
  [21] = {.lex_state = 42},
  [22] = {.lex_state = 42},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 63},
  [46] = {.lex_state = 63},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 57},
  [51] = {.lex_state = 57},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 66},
  [55] = {.lex_state = 66},
  [56] = {.lex_state = 63},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 63},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 66},
  [61] = {.lex_state = 66},
  [62] = {.lex_state = 58},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 66},
  [65] = {.lex_state = 63},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 66},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 43},
  [71] = {.lex_state = 68},
  [72] = {.lex_state = 68},
  [73] = {.lex_state = 68},
  [74] = {.lex_state = 66},
  [75] = {.lex_state = 63},
  [76] = {.lex_state = 67},
  [77] = {.lex_state = 67},
  [78] = {.lex_state = 67},
  [79] = {.lex_state = 67},
  [80] = {.lex_state = 68},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 67},
  [83] = {.lex_state = 66},
  [84] = {.lex_state = 67},
  [85] = {.lex_state = 68},
  [86] = {.lex_state = 59},
  [87] = {.lex_state = 68},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 59},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 68},
  [95] = {.lex_state = 41},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 60},
  [110] = {.lex_state = 60},
  [111] = {.lex_state = 67},
  [112] = {.lex_state = 67},
  [113] = {.lex_state = 67},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 67},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 67},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 67},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 41},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 42},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 41},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 67},
  [150] = {.lex_state = 41},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 41},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 42},
  [161] = {.lex_state = 42},
  [162] = {.lex_state = 42},
  [163] = {.lex_state = 42},
  [164] = {.lex_state = 42},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 42},
  [167] = {.lex_state = 42},
  [168] = {.lex_state = 42},
  [169] = {.lex_state = 42},
  [170] = {.lex_state = 42},
  [171] = {.lex_state = 42},
  [172] = {.lex_state = 42},
  [173] = {.lex_state = 42},
  [174] = {.lex_state = 42},
  [175] = {.lex_state = 42},
  [176] = {.lex_state = 42},
  [177] = {.lex_state = 42},
  [178] = {.lex_state = 42},
  [179] = {.lex_state = 42},
  [180] = {.lex_state = 42},
  [181] = {.lex_state = 42},
  [182] = {.lex_state = 42},
  [183] = {.lex_state = 42},
  [184] = {.lex_state = 42},
  [185] = {.lex_state = 42},
  [186] = {.lex_state = 42},
  [187] = {.lex_state = 42},
  [188] = {.lex_state = 42},
  [189] = {.lex_state = 42},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 42},
  [192] = {.lex_state = 42},
  [193] = {.lex_state = 42},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 725},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 42},
  [199] = {.lex_state = 42},
  [200] = {.lex_state = 42},
  [201] = {.lex_state = 42},
  [202] = {.lex_state = 42},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 42},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 42},
  [207] = {.lex_state = 725},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 42},
  [211] = {.lex_state = 42},
  [212] = {.lex_state = 42},
  [213] = {.lex_state = 42},
  [214] = {.lex_state = 42},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 61},
  [217] = {.lex_state = 42},
  [218] = {.lex_state = 61},
  [219] = {.lex_state = 65},
  [220] = {.lex_state = 65},
  [221] = {.lex_state = 65},
  [222] = {.lex_state = 65},
  [223] = {.lex_state = 65},
  [224] = {.lex_state = 65},
  [225] = {.lex_state = 65},
  [226] = {.lex_state = 725},
  [227] = {.lex_state = 65},
  [228] = {.lex_state = 65},
  [229] = {.lex_state = 725},
  [230] = {.lex_state = 94},
  [231] = {.lex_state = 94},
  [232] = {.lex_state = 725},
  [233] = {.lex_state = 725},
  [234] = {.lex_state = 725},
  [235] = {.lex_state = 725},
  [236] = {.lex_state = 725},
  [237] = {.lex_state = 725},
  [238] = {.lex_state = 725},
  [239] = {.lex_state = 725},
  [240] = {.lex_state = 47},
  [241] = {.lex_state = 47},
  [242] = {.lex_state = 67},
  [243] = {.lex_state = 64},
  [244] = {.lex_state = 725},
  [245] = {.lex_state = 725},
  [246] = {.lex_state = 94},
  [247] = {.lex_state = 94},
  [248] = {.lex_state = 67},
  [249] = {.lex_state = 725},
  [250] = {.lex_state = 725},
  [251] = {.lex_state = 66},
  [252] = {.lex_state = 725},
  [253] = {.lex_state = 91},
  [254] = {.lex_state = 91},
  [255] = {.lex_state = 91},
  [256] = {.lex_state = 66},
  [257] = {.lex_state = 91},
  [258] = {.lex_state = 91},
  [259] = {.lex_state = 725},
  [260] = {.lex_state = 66},
  [261] = {.lex_state = 91},
  [262] = {.lex_state = 66},
  [263] = {.lex_state = 725},
  [264] = {.lex_state = 64},
  [265] = {.lex_state = 66},
  [266] = {.lex_state = 64},
  [267] = {.lex_state = 65},
  [268] = {.lex_state = 66},
  [269] = {.lex_state = 65},
  [270] = {.lex_state = 66},
  [271] = {.lex_state = 66},
  [272] = {.lex_state = 65},
  [273] = {.lex_state = 65},
  [274] = {.lex_state = 66},
  [275] = {.lex_state = 65},
  [276] = {.lex_state = 65},
  [277] = {.lex_state = 66},
  [278] = {.lex_state = 725},
  [279] = {.lex_state = 66},
  [280] = {.lex_state = 65},
  [281] = {.lex_state = 65},
  [282] = {.lex_state = 66},
  [283] = {.lex_state = 66},
  [284] = {.lex_state = 63},
  [285] = {.lex_state = 63},
  [286] = {.lex_state = 66},
  [287] = {.lex_state = 66},
  [288] = {.lex_state = 725},
  [289] = {.lex_state = 63},
  [290] = {.lex_state = 725},
  [291] = {.lex_state = 63},
  [292] = {.lex_state = 46},
  [293] = {.lex_state = 46},
  [294] = {.lex_state = 725},
  [295] = {.lex_state = 69},
  [296] = {.lex_state = 69},
  [297] = {.lex_state = 54},
  [298] = {.lex_state = 92},
  [299] = {.lex_state = 92},
  [300] = {.lex_state = 70},
  [301] = {.lex_state = 69},
  [302] = {.lex_state = 92},
  [303] = {.lex_state = 92},
  [304] = {.lex_state = 92},
  [305] = {.lex_state = 69},
  [306] = {.lex_state = 66},
  [307] = {.lex_state = 69},
  [308] = {.lex_state = 66},
  [309] = {.lex_state = 66},
  [310] = {.lex_state = 69},
  [311] = {.lex_state = 66},
  [312] = {.lex_state = 69},
  [313] = {.lex_state = 66},
  [314] = {.lex_state = 66},
  [315] = {.lex_state = 69},
  [316] = {.lex_state = 54},
  [317] = {.lex_state = 69},
  [318] = {.lex_state = 69},
  [319] = {.lex_state = 69},
  [320] = {.lex_state = 92},
  [321] = {.lex_state = 66},
  [322] = {.lex_state = 66},
  [323] = {.lex_state = 725},
  [324] = {.lex_state = 63},
  [325] = {.lex_state = 725},
  [326] = {.lex_state = 65},
  [327] = {.lex_state = 71},
  [328] = {.lex_state = 71},
  [329] = {.lex_state = 725},
  [330] = {.lex_state = 725},
  [331] = {.lex_state = 63},
  [332] = {.lex_state = 725},
  [333] = {.lex_state = 65},
  [334] = {.lex_state = 65},
  [335] = {.lex_state = 66},
  [336] = {.lex_state = 65},
  [337] = {.lex_state = 65},
  [338] = {.lex_state = 71},
  [339] = {.lex_state = 725},
  [340] = {.lex_state = 65},
  [341] = {.lex_state = 725},
  [342] = {.lex_state = 71},
  [343] = {.lex_state = 725},
  [344] = {.lex_state = 64},
  [345] = {.lex_state = 71},
  [346] = {.lex_state = 71},
  [347] = {.lex_state = 71},
  [348] = {.lex_state = 71},
  [349] = {.lex_state = 54},
  [350] = {.lex_state = 66},
  [351] = {.lex_state = 725},
  [352] = {.lex_state = 71},
  [353] = {.lex_state = 65},
  [354] = {.lex_state = 65},
  [355] = {.lex_state = 66},
  [356] = {.lex_state = 66},
  [357] = {.lex_state = 66},
  [358] = {.lex_state = 63},
  [359] = {.lex_state = 64},
  [360] = {.lex_state = 63},
  [361] = {.lex_state = 71},
  [362] = {.lex_state = 48},
  [363] = {.lex_state = 64},
  [364] = {.lex_state = 66},
  [365] = {.lex_state = 65},
  [366] = {.lex_state = 65},
  [367] = {.lex_state = 65},
  [368] = {.lex_state = 65},
  [369] = {.lex_state = 65},
  [370] = {.lex_state = 65},
  [371] = {.lex_state = 66},
  [372] = {.lex_state = 48},
  [373] = {.lex_state = 65},
  [374] = {.lex_state = 64},
  [375] = {.lex_state = 65},
  [376] = {.lex_state = 65},
  [377] = {.lex_state = 45},
  [378] = {.lex_state = 64},
  [379] = {.lex_state = 64},
  [380] = {.lex_state = 45},
  [381] = {.lex_state = 66},
  [382] = {.lex_state = 64},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 725},
  [385] = {.lex_state = 45},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 66},
  [388] = {.lex_state = 725},
  [389] = {.lex_state = 45},
  [390] = {.lex_state = 45},
  [391] = {.lex_state = 725},
  [392] = {.lex_state = 725},
  [393] = {.lex_state = 725},
  [394] = {.lex_state = 69},
  [395] = {.lex_state = 725},
  [396] = {.lex_state = 725},
  [397] = {.lex_state = 725},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 66},
  [400] = {.lex_state = 725},
  [401] = {.lex_state = 66},
  [402] = {.lex_state = 45},
  [403] = {.lex_state = 45},
  [404] = {.lex_state = 45},
  [405] = {.lex_state = 45},
  [406] = {.lex_state = 45},
  [407] = {.lex_state = 45},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 45},
  [410] = {.lex_state = 66},
  [411] = {.lex_state = 64},
  [412] = {.lex_state = 64},
  [413] = {.lex_state = 64},
  [414] = {.lex_state = 49},
  [415] = {.lex_state = 64},
  [416] = {.lex_state = 49},
  [417] = {.lex_state = 49},
  [418] = {.lex_state = 49},
  [419] = {.lex_state = 49},
  [420] = {.lex_state = 312},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 49},
  [423] = {.lex_state = 49},
  [424] = {.lex_state = 64},
  [425] = {.lex_state = 49},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 68},
  [429] = {.lex_state = 64},
  [430] = {.lex_state = 68},
  [431] = {.lex_state = 68},
  [432] = {.lex_state = 68},
  [433] = {.lex_state = 68},
  [434] = {.lex_state = 68},
  [435] = {.lex_state = 68},
  [436] = {.lex_state = 68},
  [437] = {.lex_state = 68},
  [438] = {.lex_state = 68},
  [439] = {.lex_state = 690},
  [440] = {.lex_state = 690},
  [441] = {.lex_state = 68},
  [442] = {.lex_state = 68},
  [443] = {.lex_state = 68},
  [444] = {.lex_state = 68},
  [445] = {.lex_state = 68},
  [446] = {.lex_state = 68},
  [447] = {.lex_state = 68},
  [448] = {.lex_state = 68},
  [449] = {.lex_state = 68},
  [450] = {.lex_state = 68},
  [451] = {.lex_state = 68},
  [452] = {.lex_state = 68},
  [453] = {.lex_state = 68},
  [454] = {.lex_state = 68},
  [455] = {.lex_state = 68},
  [456] = {.lex_state = 68},
  [457] = {.lex_state = 68},
  [458] = {.lex_state = 68},
  [459] = {.lex_state = 68},
  [460] = {.lex_state = 68},
  [461] = {.lex_state = 68},
  [462] = {.lex_state = 68},
  [463] = {.lex_state = 68},
  [464] = {.lex_state = 68},
  [465] = {.lex_state = 690},
  [466] = {.lex_state = 690},
  [467] = {.lex_state = 68},
  [468] = {.lex_state = 690},
  [469] = {.lex_state = 68},
  [470] = {.lex_state = 690},
  [471] = {.lex_state = 690},
  [472] = {.lex_state = 68},
  [473] = {.lex_state = 68},
  [474] = {.lex_state = 68},
  [475] = {.lex_state = 68},
  [476] = {.lex_state = 68},
  [477] = {.lex_state = 68},
  [478] = {.lex_state = 68},
  [479] = {.lex_state = 68},
  [480] = {.lex_state = 68},
  [481] = {.lex_state = 68},
  [482] = {.lex_state = 68},
  [483] = {.lex_state = 68},
  [484] = {.lex_state = 68},
  [485] = {.lex_state = 692},
  [486] = {.lex_state = 68},
  [487] = {.lex_state = 68},
  [488] = {.lex_state = 68},
  [489] = {.lex_state = 68},
  [490] = {.lex_state = 68},
  [491] = {.lex_state = 690},
  [492] = {.lex_state = 68},
  [493] = {.lex_state = 68},
  [494] = {.lex_state = 54},
  [495] = {.lex_state = 68},
  [496] = {.lex_state = 68},
  [497] = {.lex_state = 68},
  [498] = {.lex_state = 68},
  [499] = {.lex_state = 64},
  [500] = {.lex_state = 68},
  [501] = {.lex_state = 68},
  [502] = {.lex_state = 68},
  [503] = {.lex_state = 68},
  [504] = {.lex_state = 68},
  [505] = {.lex_state = 68},
  [506] = {.lex_state = 68},
  [507] = {.lex_state = 690},
  [508] = {.lex_state = 68},
  [509] = {.lex_state = 68},
  [510] = {.lex_state = 68},
  [511] = {.lex_state = 68},
  [512] = {.lex_state = 68},
  [513] = {.lex_state = 68},
  [514] = {.lex_state = 68},
  [515] = {.lex_state = 68},
  [516] = {.lex_state = 68},
  [517] = {.lex_state = 68},
  [518] = {.lex_state = 68},
  [519] = {.lex_state = 54},
  [520] = {.lex_state = 68},
  [521] = {.lex_state = 68},
  [522] = {.lex_state = 68},
  [523] = {.lex_state = 68},
  [524] = {.lex_state = 68},
  [525] = {.lex_state = 68},
  [526] = {.lex_state = 68},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 68},
  [529] = {.lex_state = 64},
  [530] = {.lex_state = 68},
  [531] = {.lex_state = 68},
  [532] = {.lex_state = 68},
  [533] = {.lex_state = 68},
  [534] = {.lex_state = 68},
  [535] = {.lex_state = 68},
  [536] = {.lex_state = 68},
  [537] = {.lex_state = 68},
  [538] = {.lex_state = 68},
  [539] = {.lex_state = 68},
  [540] = {.lex_state = 690},
  [541] = {.lex_state = 68},
  [542] = {.lex_state = 68},
  [543] = {.lex_state = 68},
  [544] = {.lex_state = 68},
  [545] = {.lex_state = 68},
  [546] = {.lex_state = 68},
  [547] = {.lex_state = 690},
  [548] = {.lex_state = 68},
  [549] = {.lex_state = 690},
  [550] = {.lex_state = 690},
  [551] = {.lex_state = 65},
  [552] = {.lex_state = 39},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 68},
  [555] = {.lex_state = 65},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 725},
  [560] = {.lex_state = 39},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 705},
  [563] = {.lex_state = 65},
  [564] = {.lex_state = 743},
  [565] = {.lex_state = 743},
  [566] = {.lex_state = 65},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 65},
  [569] = {.lex_state = 65},
  [570] = {.lex_state = 725},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 743},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 54},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 65},
  [580] = {.lex_state = 725},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 725},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 725},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 65},
  [594] = {.lex_state = 65},
  [595] = {.lex_state = 40},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 693},
  [598] = {.lex_state = 54},
  [599] = {.lex_state = 65},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 41},
  [602] = {.lex_state = 700},
  [603] = {.lex_state = 725},
  [604] = {.lex_state = 693},
  [605] = {.lex_state = 65},
  [606] = {.lex_state = 68},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 65},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 700},
  [613] = {.lex_state = 694},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 65},
  [616] = {.lex_state = 706},
  [617] = {.lex_state = 700},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 700},
  [620] = {.lex_state = 702},
  [621] = {.lex_state = 65},
  [622] = {.lex_state = 65},
  [623] = {.lex_state = 705},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 40},
  [626] = {.lex_state = 65},
  [627] = {.lex_state = 700},
  [628] = {.lex_state = 695},
  [629] = {.lex_state = 700},
  [630] = {.lex_state = 700},
  [631] = {.lex_state = 700},
  [632] = {.lex_state = 743},
  [633] = {.lex_state = 743},
  [634] = {.lex_state = 65},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 705},
  [637] = {.lex_state = 54},
  [638] = {.lex_state = 693},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 743},
  [642] = {.lex_state = 39},
  [643] = {.lex_state = 40},
  [644] = {.lex_state = 693},
  [645] = {.lex_state = 39},
  [646] = {.lex_state = 40},
  [647] = {.lex_state = 39},
  [648] = {.lex_state = 40},
  [649] = {.lex_state = 39},
  [650] = {.lex_state = 40},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 53},
  [653] = {.lex_state = 0},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 41},
  [656] = {.lex_state = 65},
  [657] = {.lex_state = 65},
  [658] = {.lex_state = 65},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 0},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 65},
  [664] = {.lex_state = 0},
  [665] = {.lex_state = 65},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 0},
  [668] = {.lex_state = 65},
  [669] = {.lex_state = 65},
  [670] = {.lex_state = 65},
  [671] = {.lex_state = 65},
  [672] = {.lex_state = 0},
  [673] = {.lex_state = 0},
  [674] = {.lex_state = 54},
  [675] = {.lex_state = 65},
  [676] = {.lex_state = 65},
  [677] = {.lex_state = 0},
  [678] = {.lex_state = 0},
  [679] = {.lex_state = 65},
  [680] = {.lex_state = 0},
  [681] = {.lex_state = 65},
  [682] = {.lex_state = 0},
  [683] = {.lex_state = 707},
  [684] = {.lex_state = 0},
  [685] = {.lex_state = 0},
  [686] = {.lex_state = 0},
  [687] = {.lex_state = 0},
  [688] = {.lex_state = 0},
  [689] = {.lex_state = 65},
  [690] = {.lex_state = 65},
  [691] = {.lex_state = 700},
  [692] = {.lex_state = 0},
  [693] = {.lex_state = 0},
  [694] = {.lex_state = 65},
  [695] = {.lex_state = 65},
};

enum {
  ts_external_token__eof = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__eof] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__vertical_whitespace] = ACTIONS(1),
    [sym__empty_line] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_comment_line] = ACTIONS(1),
    [aux_sym__newline_token1] = ACTIONS(1),
    [aux_sym__newline_token2] = ACTIONS(1),
    [aux_sym__newline_token4] = ACTIONS(1),
    [aux_sym__newline_token5] = ACTIONS(1),
    [aux_sym__newline_token6] = ACTIONS(1),
    [aux_sym__newline_token7] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_http_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_localhost] = ACTIONS(1),
    [sym__ipv4_address] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym__port_number_token1] = ACTIONS(1),
    [sym_matcher_name] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_path_regexp] = ACTIONS(1),
    [anon_sym_abort] = ACTIONS(1),
    [anon_sym_basicauth] = ACTIONS(1),
    [anon_sym_bcrypt] = ACTIONS(1),
    [anon_sym_bind] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_tcp] = ACTIONS(1),
    [anon_sym_udp] = ACTIONS(1),
    [anon_sym_ip] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_unix] = ACTIONS(1),
    [anon_sym_gram] = ACTIONS(1),
    [anon_sym_packet] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_encode] = ACTIONS(1),
    [anon_sym_gzip] = ACTIONS(1),
    [anon_sym_zstd] = ACTIONS(1),
    [anon_sym_file_server] = ACTIONS(1),
    [anon_sym_browse] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [sym_http_error_code] = ACTIONS(1),
    [anon_sym_handle] = ACTIONS(1),
    [anon_sym_handle_path] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_stderr] = ACTIONS(1),
    [anon_sym_stdout] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_roll_disabled] = ACTIONS(1),
    [anon_sym_roll_size] = ACTIONS(1),
    [anon_sym_roll_uncompressed] = ACTIONS(1),
    [anon_sym_roll_local_time] = ACTIONS(1),
    [anon_sym_roll_keep] = ACTIONS(1),
    [aux_sym__log_output_file_token1] = ACTIONS(1),
    [anon_sym_roll_keep_for_days] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_console] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_level] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_redir] = ACTIONS(1),
    [anon_sym_request_body] = ACTIONS(1),
    [anon_sym_max_size] = ACTIONS(1),
    [anon_sym_reverse_proxy] = ACTIONS(1),
    [aux_sym_redir_code_token1] = ACTIONS(1),
    [anon_sym_401] = ACTIONS(1),
    [anon_sym_temporary] = ACTIONS(1),
    [anon_sym_permanent] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_rewrite] = ACTIONS(1),
    [anon_sym_root] = ACTIONS(1),
    [anon_sym_tls] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [anon_sym_route] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_email] = ACTIONS(1),
    [anon_sym_auto_https] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_disable_redirects] = ACTIONS(1),
    [anon_sym_ignore_loaded_certs] = ACTIONS(1),
    [anon_sym_disable_certs] = ACTIONS(1),
    [sym_snippet_name] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(609),
    [sym_site_block] = STATE(195),
    [sym_site_address] = STATE(608),
    [sym_protocol] = STATE(288),
    [sym__ip_or_domain_address] = STATE(574),
    [sym__port_number] = STATE(575),
    [sym_directive_import] = STATE(195),
    [sym_global_options_block] = STATE(195),
    [sym_snippet] = STATE(195),
    [aux_sym_document_repeat1] = STATE(195),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__empty_line] = ACTIONS(5),
    [sym_comment_line] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_http_COLON_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(9),
    [anon_sym_localhost] = ACTIONS(11),
    [sym__ipv4_address] = ACTIONS(11),
    [sym__ipv6_address] = ACTIONS(13),
    [sym_domain_address] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_import] = ACTIONS(17),
    [sym_snippet_name] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(21), 1,
      sym__vertical_whitespaces,
    ACTIONS(23), 1,
      sym__empty_line,
    ACTIONS(25), 1,
      sym_comment_line,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      sym_matcher_name,
    ACTIONS(31), 1,
      anon_sym_abort,
    ACTIONS(33), 1,
      anon_sym_basicauth,
    ACTIONS(35), 1,
      anon_sym_bind,
    ACTIONS(37), 1,
      anon_sym_encode,
    ACTIONS(39), 1,
      anon_sym_file_server,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_handle,
    ACTIONS(45), 1,
      anon_sym_handle_path,
    ACTIONS(47), 1,
      anon_sym_header,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_log,
    ACTIONS(53), 1,
      anon_sym_redir,
    ACTIONS(55), 1,
      anon_sym_request_body,
    ACTIONS(57), 1,
      anon_sym_reverse_proxy,
    ACTIONS(59), 1,
      anon_sym_rewrite,
    ACTIONS(61), 1,
      anon_sym_root,
    ACTIONS(63), 1,
      anon_sym_tls,
    ACTIONS(65), 1,
      anon_sym_route,
    STATE(3), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(146), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [95] = 24,
    ACTIONS(69), 1,
      sym__empty_line,
    ACTIONS(72), 1,
      sym_comment_line,
    ACTIONS(75), 1,
      sym_matcher_name,
    ACTIONS(78), 1,
      anon_sym_abort,
    ACTIONS(81), 1,
      anon_sym_basicauth,
    ACTIONS(84), 1,
      anon_sym_bind,
    ACTIONS(87), 1,
      anon_sym_encode,
    ACTIONS(90), 1,
      anon_sym_file_server,
    ACTIONS(93), 1,
      anon_sym_error,
    ACTIONS(96), 1,
      anon_sym_handle,
    ACTIONS(99), 1,
      anon_sym_handle_path,
    ACTIONS(102), 1,
      anon_sym_header,
    ACTIONS(105), 1,
      anon_sym_import,
    ACTIONS(108), 1,
      anon_sym_log,
    ACTIONS(111), 1,
      anon_sym_redir,
    ACTIONS(114), 1,
      anon_sym_request_body,
    ACTIONS(117), 1,
      anon_sym_reverse_proxy,
    ACTIONS(120), 1,
      anon_sym_rewrite,
    ACTIONS(123), 1,
      anon_sym_root,
    ACTIONS(126), 1,
      anon_sym_tls,
    ACTIONS(129), 1,
      anon_sym_route,
    ACTIONS(67), 2,
      sym__vertical_whitespaces,
      anon_sym_RBRACE,
    STATE(3), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(146), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [188] = 25,
    ACTIONS(29), 1,
      sym_matcher_name,
    ACTIONS(31), 1,
      anon_sym_abort,
    ACTIONS(33), 1,
      anon_sym_basicauth,
    ACTIONS(35), 1,
      anon_sym_bind,
    ACTIONS(37), 1,
      anon_sym_encode,
    ACTIONS(39), 1,
      anon_sym_file_server,
    ACTIONS(41), 1,
      anon_sym_error,
    ACTIONS(43), 1,
      anon_sym_handle,
    ACTIONS(45), 1,
      anon_sym_handle_path,
    ACTIONS(47), 1,
      anon_sym_header,
    ACTIONS(49), 1,
      anon_sym_import,
    ACTIONS(51), 1,
      anon_sym_log,
    ACTIONS(53), 1,
      anon_sym_redir,
    ACTIONS(55), 1,
      anon_sym_request_body,
    ACTIONS(57), 1,
      anon_sym_reverse_proxy,
    ACTIONS(59), 1,
      anon_sym_rewrite,
    ACTIONS(61), 1,
      anon_sym_root,
    ACTIONS(63), 1,
      anon_sym_tls,
    ACTIONS(65), 1,
      anon_sym_route,
    ACTIONS(132), 1,
      sym__vertical_whitespaces,
    ACTIONS(134), 1,
      sym__empty_line,
    ACTIONS(136), 1,
      sym_comment_line,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(146), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [283] = 23,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_matcher_name,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(168), 1,
      anon_sym_redir,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(174), 1,
      anon_sym_rewrite,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(140), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(7), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [373] = 23,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(185), 1,
      sym_matcher_name,
    ACTIONS(188), 1,
      anon_sym_abort,
    ACTIONS(191), 1,
      anon_sym_basicauth,
    ACTIONS(194), 1,
      anon_sym_bind,
    ACTIONS(197), 1,
      anon_sym_encode,
    ACTIONS(200), 1,
      anon_sym_file_server,
    ACTIONS(203), 1,
      anon_sym_error,
    ACTIONS(206), 1,
      anon_sym_handle,
    ACTIONS(209), 1,
      anon_sym_handle_path,
    ACTIONS(212), 1,
      anon_sym_header,
    ACTIONS(215), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(221), 1,
      anon_sym_redir,
    ACTIONS(224), 1,
      anon_sym_request_body,
    ACTIONS(227), 1,
      anon_sym_reverse_proxy,
    ACTIONS(230), 1,
      anon_sym_rewrite,
    ACTIONS(233), 1,
      anon_sym_root,
    ACTIONS(236), 1,
      anon_sym_tls,
    ACTIONS(239), 1,
      anon_sym_route,
    ACTIONS(182), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [463] = 23,
    ACTIONS(144), 1,
      sym_matcher_name,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(168), 1,
      anon_sym_redir,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(174), 1,
      anon_sym_rewrite,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [553] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [639] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [725] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [811] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [897] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [983] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1069] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1155] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1241] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1327] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1413] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1499] = 22,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1585] = 22,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_abort,
    ACTIONS(284), 1,
      anon_sym_basicauth,
    ACTIONS(287), 1,
      anon_sym_bind,
    ACTIONS(290), 1,
      anon_sym_encode,
    ACTIONS(293), 1,
      anon_sym_file_server,
    ACTIONS(296), 1,
      anon_sym_error,
    ACTIONS(299), 1,
      anon_sym_handle,
    ACTIONS(302), 1,
      anon_sym_handle_path,
    ACTIONS(305), 1,
      anon_sym_header,
    ACTIONS(308), 1,
      anon_sym_import,
    ACTIONS(311), 1,
      anon_sym_log,
    ACTIONS(314), 1,
      anon_sym_redir,
    ACTIONS(317), 1,
      anon_sym_request_body,
    ACTIONS(320), 1,
      anon_sym_reverse_proxy,
    ACTIONS(323), 1,
      anon_sym_rewrite,
    ACTIONS(326), 1,
      anon_sym_root,
    ACTIONS(329), 1,
      anon_sym_tls,
    ACTIONS(332), 1,
      anon_sym_route,
    ACTIONS(276), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1671] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(335), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1754] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(337), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(9), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1837] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(339), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(13), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1920] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(341), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(14), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2003] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(343), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2086] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(345), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2169] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(347), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(17), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2252] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(349), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(10), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2335] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(351), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(18), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2418] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(353), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(15), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2501] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(355), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(19), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2584] = 21,
    ACTIONS(146), 1,
      anon_sym_abort,
    ACTIONS(148), 1,
      anon_sym_basicauth,
    ACTIONS(150), 1,
      anon_sym_bind,
    ACTIONS(152), 1,
      anon_sym_encode,
    ACTIONS(154), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(158), 1,
      anon_sym_handle,
    ACTIONS(160), 1,
      anon_sym_handle_path,
    ACTIONS(162), 1,
      anon_sym_header,
    ACTIONS(164), 1,
      anon_sym_import,
    ACTIONS(166), 1,
      anon_sym_log,
    ACTIONS(170), 1,
      anon_sym_request_body,
    ACTIONS(172), 1,
      anon_sym_reverse_proxy,
    ACTIONS(176), 1,
      anon_sym_root,
    ACTIONS(178), 1,
      anon_sym_tls,
    ACTIONS(180), 1,
      anon_sym_route,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(252), 1,
      anon_sym_rewrite,
    ACTIONS(357), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(11), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(167), 18,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
      sym_directive_error,
      sym_directive_handle,
      sym_directive_handle_path,
      sym_directive_header,
      sym_directive_import,
      sym_directive_log,
      sym_directive_redir,
      sym_directive_request_body,
      sym_directive_reverse_proxy,
      sym_directive_rewrite,
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2667] = 11,
    ACTIONS(363), 1,
      sym__ipv4_address,
    ACTIONS(365), 1,
      sym__ipv6_address,
    ACTIONS(369), 1,
      anon_sym_unix,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(596), 1,
      sym__network,
    STATE(34), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(367), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(359), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(361), 19,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2725] = 11,
    ACTIONS(379), 1,
      sym__ipv4_address,
    ACTIONS(382), 1,
      sym__ipv6_address,
    ACTIONS(388), 1,
      anon_sym_unix,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    ACTIONS(394), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(596), 1,
      sym__network,
    STATE(34), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(385), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(375), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(377), 19,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2783] = 11,
    ACTIONS(369), 1,
      anon_sym_unix,
    ACTIONS(397), 1,
      sym__ipv4_address,
    ACTIONS(399), 1,
      sym__ipv6_address,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_unix_path_token2,
    STATE(43), 1,
      sym_unix_path,
    STATE(607), 1,
      sym__network,
    STATE(36), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(367), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(359), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(361), 18,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2840] = 11,
    ACTIONS(388), 1,
      anon_sym_unix,
    ACTIONS(405), 1,
      sym__ipv4_address,
    ACTIONS(408), 1,
      sym__ipv6_address,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_unix_path_token2,
    STATE(43), 1,
      sym_unix_path,
    STATE(607), 1,
      sym__network,
    STATE(36), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(385), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(375), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(377), 18,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2897] = 2,
    ACTIONS(417), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(419), 25,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2933] = 2,
    ACTIONS(421), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(423), 25,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2969] = 2,
    ACTIONS(425), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(427), 25,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3005] = 2,
    ACTIONS(429), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(431), 25,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3041] = 2,
    ACTIONS(429), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(431), 24,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3076] = 2,
    ACTIONS(421), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(423), 24,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3111] = 2,
    ACTIONS(425), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(427), 24,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3146] = 2,
    ACTIONS(417), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(419), 24,
      sym__ipv4_address,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3181] = 4,
    STATE(119), 1,
      sym_redir_code,
    ACTIONS(435), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(437), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(433), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3219] = 4,
    STATE(132), 1,
      sym_redir_code,
    ACTIONS(441), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(437), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(439), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3257] = 3,
    ACTIONS(447), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 25,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3293] = 3,
    ACTIONS(453), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 25,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3329] = 2,
    ACTIONS(445), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(443), 26,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3362] = 3,
    ACTIONS(455), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 24,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3397] = 3,
    ACTIONS(457), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 24,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3432] = 2,
    ACTIONS(461), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(459), 26,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3465] = 6,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_unix_path_token2,
    STATE(509), 1,
      sym_unix_path,
    ACTIONS(471), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(463), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(465), 20,
      sym__empty_line,
      anon_sym_RBRACE,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3506] = 4,
    ACTIONS(435), 1,
      anon_sym_handle,
    STATE(206), 1,
      sym_redir_code,
    ACTIONS(473), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(433), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3543] = 4,
    ACTIONS(441), 1,
      anon_sym_handle,
    STATE(172), 1,
      sym_redir_code,
    ACTIONS(473), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(439), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3580] = 2,
    ACTIONS(477), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(475), 26,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3613] = 3,
    ACTIONS(455), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 23,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3647] = 4,
    ACTIONS(481), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(483), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(479), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3683] = 6,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_unix_path_token2,
    STATE(513), 1,
      sym_unix_path,
    ACTIONS(486), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(463), 3,
      sym__empty_line,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(465), 19,
      anon_sym_RBRACE,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3723] = 2,
    ACTIONS(445), 1,
      anon_sym_handle,
    ACTIONS(443), 26,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3755] = 2,
    ACTIONS(461), 1,
      anon_sym_handle,
    ACTIONS(459), 26,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3787] = 3,
    ACTIONS(457), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 23,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3821] = 4,
    ACTIONS(490), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(488), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3857] = 2,
    ACTIONS(477), 1,
      anon_sym_handle,
    ACTIONS(475), 26,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3889] = 4,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(496), 2,
      sym__empty_line,
      anon_sym_handle,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(494), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3925] = 4,
    ACTIONS(498), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(72), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
    ACTIONS(500), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3960] = 4,
    ACTIONS(498), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(73), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
    ACTIONS(502), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3995] = 4,
    ACTIONS(490), 1,
      anon_sym_handle,
    ACTIONS(504), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(74), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(488), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4030] = 4,
    ACTIONS(496), 1,
      anon_sym_handle,
    ACTIONS(504), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(74), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(494), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4065] = 5,
    ACTIONS(469), 1,
      aux_sym_unix_path_token2,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    STATE(472), 1,
      sym_unix_path,
    ACTIONS(506), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(508), 19,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4102] = 4,
    ACTIONS(498), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(66), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
    ACTIONS(512), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4137] = 4,
    ACTIONS(514), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(72), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
    ACTIONS(517), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4172] = 4,
    ACTIONS(498), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(72), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
    ACTIONS(519), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4207] = 4,
    ACTIONS(481), 1,
      anon_sym_handle,
    ACTIONS(521), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(74), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(479), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4242] = 2,
    ACTIONS(526), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(524), 23,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_gzip,
      anon_sym_zstd,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4272] = 4,
    ACTIONS(528), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(82), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(245), 1,
      sym__horizontal_whitespaces,
    ACTIONS(502), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4306] = 4,
    ACTIONS(528), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(245), 1,
      sym__horizontal_whitespaces,
    ACTIONS(500), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4340] = 4,
    ACTIONS(528), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(77), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(245), 1,
      sym__horizontal_whitespaces,
    ACTIONS(512), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4374] = 4,
    ACTIONS(530), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(245), 1,
      sym__horizontal_whitespaces,
    ACTIONS(517), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4408] = 3,
    ACTIONS(533), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(404), 1,
      sym__horizontal_whitespaces,
    ACTIONS(535), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4440] = 5,
    ACTIONS(469), 1,
      aux_sym_unix_path_token2,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    STATE(528), 1,
      sym_unix_path,
    ACTIONS(506), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(508), 18,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4476] = 4,
    ACTIONS(528), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(245), 1,
      sym__horizontal_whitespaces,
    ACTIONS(519), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4510] = 2,
    ACTIONS(526), 1,
      anon_sym_handle,
    ACTIONS(524), 23,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_gzip,
      anon_sym_zstd,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4539] = 3,
    ACTIONS(537), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(377), 1,
      sym__horizontal_whitespaces,
    ACTIONS(535), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4570] = 2,
    ACTIONS(539), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(517), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4599] = 3,
    ACTIONS(447), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 20,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4630] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(543), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4659] = 3,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    ACTIONS(547), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(545), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4690] = 3,
    ACTIONS(453), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 20,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4721] = 2,
    ACTIONS(551), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(553), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4750] = 2,
    ACTIONS(555), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(557), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4779] = 2,
    ACTIONS(559), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(561), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4808] = 2,
    ACTIONS(563), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(565), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4837] = 2,
    ACTIONS(567), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(569), 23,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4866] = 2,
    ACTIONS(573), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(571), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4894] = 2,
    ACTIONS(577), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(575), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4922] = 2,
    ACTIONS(581), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(579), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4950] = 2,
    ACTIONS(585), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(583), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4978] = 2,
    ACTIONS(589), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(587), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5006] = 2,
    ACTIONS(593), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(591), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5034] = 2,
    ACTIONS(597), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(595), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5062] = 2,
    ACTIONS(601), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(599), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5090] = 2,
    ACTIONS(605), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(603), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5118] = 2,
    ACTIONS(609), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(607), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5146] = 2,
    ACTIONS(613), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(611), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5174] = 2,
    ACTIONS(553), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(551), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5202] = 2,
    ACTIONS(569), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(567), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5230] = 2,
    ACTIONS(617), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(615), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5258] = 3,
    ACTIONS(457), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 19,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5288] = 3,
    ACTIONS(455), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 19,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5318] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(543), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5346] = 2,
    ACTIONS(563), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(565), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5374] = 2,
    ACTIONS(559), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(561), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5402] = 2,
    ACTIONS(621), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(619), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5430] = 2,
    ACTIONS(625), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(623), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5458] = 2,
    ACTIONS(629), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(627), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5486] = 2,
    ACTIONS(633), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(631), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5514] = 2,
    ACTIONS(539), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(517), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5542] = 2,
    ACTIONS(637), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(635), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5570] = 2,
    ACTIONS(641), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(639), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5598] = 2,
    ACTIONS(555), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(557), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5626] = 2,
    ACTIONS(645), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(643), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5654] = 2,
    ACTIONS(649), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(647), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5682] = 2,
    ACTIONS(653), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(651), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5710] = 2,
    ACTIONS(567), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(569), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5738] = 2,
    ACTIONS(657), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(655), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5766] = 2,
    ACTIONS(661), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(659), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5794] = 2,
    ACTIONS(665), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(663), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5822] = 2,
    ACTIONS(669), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(667), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5850] = 2,
    ACTIONS(673), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(671), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5878] = 2,
    ACTIONS(677), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(675), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5906] = 2,
    ACTIONS(681), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(679), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5934] = 2,
    ACTIONS(685), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(683), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5962] = 2,
    ACTIONS(689), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(687), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5990] = 2,
    ACTIONS(693), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(691), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6018] = 2,
    ACTIONS(697), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(695), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6046] = 2,
    ACTIONS(701), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(699), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6074] = 3,
    ACTIONS(547), 1,
      anon_sym_handle,
    ACTIONS(703), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6104] = 2,
    ACTIONS(707), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(705), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6132] = 2,
    ACTIONS(711), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(709), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6160] = 2,
    ACTIONS(715), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(713), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6188] = 2,
    ACTIONS(719), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(717), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6216] = 2,
    ACTIONS(723), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(721), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6244] = 2,
    ACTIONS(727), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(725), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6272] = 2,
    ACTIONS(731), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(729), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6300] = 2,
    ACTIONS(735), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(733), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6328] = 2,
    ACTIONS(739), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(737), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6356] = 2,
    ACTIONS(743), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(741), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6384] = 2,
    ACTIONS(551), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(553), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6412] = 2,
    ACTIONS(747), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(745), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6440] = 2,
    ACTIONS(751), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(749), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6468] = 2,
    ACTIONS(755), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(753), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6496] = 2,
    ACTIONS(759), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(757), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6524] = 2,
    ACTIONS(763), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(761), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6552] = 2,
    ACTIONS(767), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(765), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6580] = 2,
    ACTIONS(771), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(769), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6608] = 2,
    ACTIONS(775), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(773), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6636] = 2,
    ACTIONS(779), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(777), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6664] = 2,
    ACTIONS(783), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(781), 21,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6692] = 2,
    ACTIONS(755), 1,
      anon_sym_handle,
    ACTIONS(753), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6719] = 2,
    ACTIONS(633), 1,
      anon_sym_handle,
    ACTIONS(631), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6746] = 2,
    ACTIONS(573), 1,
      anon_sym_handle,
    ACTIONS(571), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6773] = 2,
    ACTIONS(723), 1,
      anon_sym_handle,
    ACTIONS(721), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6800] = 2,
    ACTIONS(707), 1,
      anon_sym_handle,
    ACTIONS(705), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6827] = 2,
    ACTIONS(743), 1,
      anon_sym_handle,
    ACTIONS(741), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6854] = 2,
    ACTIONS(739), 1,
      anon_sym_handle,
    ACTIONS(737), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6881] = 2,
    ACTIONS(735), 1,
      anon_sym_handle,
    ACTIONS(733), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6908] = 2,
    ACTIONS(701), 1,
      anon_sym_handle,
    ACTIONS(699), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6935] = 2,
    ACTIONS(693), 1,
      anon_sym_handle,
    ACTIONS(691), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6962] = 2,
    ACTIONS(689), 1,
      anon_sym_handle,
    ACTIONS(687), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6989] = 2,
    ACTIONS(685), 1,
      anon_sym_handle,
    ACTIONS(683), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7016] = 2,
    ACTIONS(681), 1,
      anon_sym_handle,
    ACTIONS(679), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7043] = 2,
    ACTIONS(783), 1,
      anon_sym_handle,
    ACTIONS(781), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7070] = 2,
    ACTIONS(677), 1,
      anon_sym_handle,
    ACTIONS(675), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7097] = 2,
    ACTIONS(779), 1,
      anon_sym_handle,
    ACTIONS(777), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7124] = 2,
    ACTIONS(775), 1,
      anon_sym_handle,
    ACTIONS(773), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7151] = 2,
    ACTIONS(771), 1,
      anon_sym_handle,
    ACTIONS(769), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7178] = 2,
    ACTIONS(661), 1,
      anon_sym_handle,
    ACTIONS(659), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7205] = 2,
    ACTIONS(589), 1,
      anon_sym_handle,
    ACTIONS(587), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7232] = 2,
    ACTIONS(605), 1,
      anon_sym_handle,
    ACTIONS(603), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7259] = 2,
    ACTIONS(577), 1,
      anon_sym_handle,
    ACTIONS(575), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7286] = 2,
    ACTIONS(653), 1,
      anon_sym_handle,
    ACTIONS(651), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7313] = 2,
    ACTIONS(767), 1,
      anon_sym_handle,
    ACTIONS(765), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7340] = 2,
    ACTIONS(763), 1,
      anon_sym_handle,
    ACTIONS(761), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7367] = 2,
    ACTIONS(645), 1,
      anon_sym_handle,
    ACTIONS(643), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7394] = 2,
    ACTIONS(629), 1,
      anon_sym_handle,
    ACTIONS(627), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7421] = 2,
    ACTIONS(665), 1,
      anon_sym_handle,
    ACTIONS(663), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7448] = 2,
    ACTIONS(747), 1,
      anon_sym_handle,
    ACTIONS(745), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7475] = 2,
    ACTIONS(731), 1,
      anon_sym_handle,
    ACTIONS(729), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7502] = 2,
    ACTIONS(613), 1,
      anon_sym_handle,
    ACTIONS(611), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7529] = 2,
    ACTIONS(625), 1,
      anon_sym_handle,
    ACTIONS(623), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7556] = 2,
    ACTIONS(669), 1,
      anon_sym_handle,
    ACTIONS(667), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7583] = 2,
    ACTIONS(621), 1,
      anon_sym_handle,
    ACTIONS(619), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7610] = 2,
    ACTIONS(609), 1,
      anon_sym_handle,
    ACTIONS(607), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7637] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_snippet_name,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
    STATE(288), 1,
      sym_protocol,
    STATE(574), 1,
      sym__ip_or_domain_address,
    STATE(575), 1,
      sym__port_number,
    STATE(608), 1,
      sym_site_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(11), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(13), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(787), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(207), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [7688] = 2,
    ACTIONS(719), 1,
      anon_sym_handle,
    ACTIONS(717), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7715] = 2,
    ACTIONS(727), 1,
      anon_sym_handle,
    ACTIONS(725), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7742] = 2,
    ACTIONS(759), 1,
      anon_sym_handle,
    ACTIONS(757), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7769] = 2,
    ACTIONS(711), 1,
      anon_sym_handle,
    ACTIONS(709), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7796] = 2,
    ACTIONS(715), 1,
      anon_sym_handle,
    ACTIONS(713), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7823] = 2,
    ACTIONS(649), 1,
      anon_sym_handle,
    ACTIONS(647), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7850] = 2,
    ACTIONS(697), 1,
      anon_sym_handle,
    ACTIONS(695), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7877] = 2,
    ACTIONS(673), 1,
      anon_sym_handle,
    ACTIONS(671), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7904] = 2,
    ACTIONS(657), 1,
      anon_sym_handle,
    ACTIONS(655), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7931] = 2,
    ACTIONS(641), 1,
      anon_sym_handle,
    ACTIONS(639), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7958] = 2,
    ACTIONS(637), 1,
      anon_sym_handle,
    ACTIONS(635), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7985] = 14,
    ACTIONS(789), 1,
      ts_builtin_sym_end,
    ACTIONS(794), 1,
      anon_sym_LBRACE,
    ACTIONS(806), 1,
      anon_sym_COLON,
    ACTIONS(809), 1,
      anon_sym_import,
    ACTIONS(812), 1,
      sym_snippet_name,
    STATE(288), 1,
      sym_protocol,
    STATE(574), 1,
      sym__ip_or_domain_address,
    STATE(575), 1,
      sym__port_number,
    STATE(608), 1,
      sym_site_address,
    ACTIONS(791), 2,
      sym__empty_line,
      sym_comment_line,
    ACTIONS(797), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(800), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(803), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(207), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [8036] = 2,
    ACTIONS(597), 1,
      anon_sym_handle,
    ACTIONS(595), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8063] = 2,
    ACTIONS(593), 1,
      anon_sym_handle,
    ACTIONS(591), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8090] = 2,
    ACTIONS(617), 1,
      anon_sym_handle,
    ACTIONS(615), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8117] = 2,
    ACTIONS(751), 1,
      anon_sym_handle,
    ACTIONS(749), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8144] = 2,
    ACTIONS(601), 1,
      anon_sym_handle,
    ACTIONS(599), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8171] = 2,
    ACTIONS(569), 1,
      anon_sym_handle,
    ACTIONS(567), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8198] = 2,
    ACTIONS(553), 1,
      anon_sym_handle,
    ACTIONS(551), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8225] = 2,
    ACTIONS(585), 1,
      anon_sym_handle,
    ACTIONS(583), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8252] = 3,
    ACTIONS(455), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(449), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(451), 18,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8281] = 2,
    ACTIONS(581), 1,
      anon_sym_handle,
    ACTIONS(579), 21,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8308] = 3,
    ACTIONS(457), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(443), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(445), 18,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_error,
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_rewrite,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [8337] = 10,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(815), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(817), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(223), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8374] = 10,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(815), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(817), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(223), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8411] = 10,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(815), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(817), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(223), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8448] = 10,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    ACTIONS(833), 1,
      anon_sym_RBRACE,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(815), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(817), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(223), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8485] = 10,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
    ACTIONS(843), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(846), 1,
      anon_sym_PLUS,
    ACTIONS(849), 1,
      anon_sym_DASH,
    ACTIONS(852), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(835), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(838), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(223), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8522] = 9,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(855), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(857), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(220), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8556] = 9,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(859), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(861), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(222), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8590] = 11,
    ACTIONS(867), 1,
      anon_sym_COLON,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    STATE(76), 1,
      sym_site_address,
    STATE(121), 1,
      sym__port_number,
    STATE(294), 1,
      sym_protocol,
    STATE(496), 1,
      sym_matcher_token,
    STATE(564), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(863), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(865), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8628] = 9,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(873), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(875), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(219), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8662] = 9,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(823), 1,
      anon_sym_PLUS,
    ACTIONS(825), 1,
      anon_sym_DASH,
    ACTIONS(827), 1,
      anon_sym_QMARK,
    STATE(479), 1,
      sym_header_name,
    ACTIONS(877), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(879), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(221), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(267), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8696] = 11,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(885), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_site_address,
    STATE(91), 1,
      sym__port_number,
    STATE(290), 1,
      sym_protocol,
    STATE(535), 1,
      sym_matcher_token,
    STATE(633), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(881), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(883), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8734] = 11,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(887), 1,
      anon_sym_LBRACE,
    ACTIONS(889), 1,
      anon_sym_PLUS,
    ACTIONS(891), 1,
      anon_sym_DASH,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    STATE(128), 1,
      sym_field_manipulator,
    STATE(525), 1,
      sym_header_name,
    STATE(548), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(129), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8772] = 11,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(895), 1,
      anon_sym_LBRACE,
    ACTIONS(897), 1,
      anon_sym_PLUS,
    ACTIONS(899), 1,
      anon_sym_DASH,
    ACTIONS(901), 1,
      anon_sym_QMARK,
    STATE(187), 1,
      sym_field_manipulator,
    STATE(497), 1,
      sym_matcher_token,
    STATE(498), 1,
      sym_header_name,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(192), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8810] = 2,
    ACTIONS(905), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(903), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8828] = 2,
    ACTIONS(909), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(907), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8846] = 2,
    ACTIONS(715), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(713), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8864] = 2,
    ACTIONS(913), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(911), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8882] = 2,
    ACTIONS(917), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(915), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8900] = 2,
    ACTIONS(921), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(919), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8918] = 2,
    ACTIONS(925), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(923), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8936] = 2,
    ACTIONS(929), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(927), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8954] = 9,
    ACTIONS(363), 1,
      sym__ipv4_address,
    ACTIONS(365), 1,
      sym__ipv6_address,
    ACTIONS(369), 1,
      anon_sym_unix,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(596), 1,
      sym__network,
    STATE(33), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(367), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [8985] = 9,
    ACTIONS(369), 1,
      anon_sym_unix,
    ACTIONS(397), 1,
      sym__ipv4_address,
    ACTIONS(399), 1,
      sym__ipv6_address,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_unix_path_token2,
    STATE(43), 1,
      sym_unix_path,
    STATE(607), 1,
      sym__network,
    STATE(35), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(367), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [9016] = 8,
    ACTIONS(931), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(939), 1,
      anon_sym_path_regexp,
    STATE(282), 1,
      sym__horizontal_whitespaces,
    ACTIONS(933), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9044] = 3,
    ACTIONS(941), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(407), 1,
      sym__horizontal_whitespaces,
    ACTIONS(535), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [9062] = 8,
    ACTIONS(867), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_site_address,
    STATE(121), 1,
      sym__port_number,
    STATE(294), 1,
      sym_protocol,
    STATE(564), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(863), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(865), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9090] = 8,
    ACTIONS(867), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym_site_address,
    STATE(121), 1,
      sym__port_number,
    STATE(294), 1,
      sym_protocol,
    STATE(564), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(863), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(865), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9118] = 8,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(889), 1,
      anon_sym_PLUS,
    ACTIONS(891), 1,
      anon_sym_DASH,
    ACTIONS(893), 1,
      anon_sym_QMARK,
    ACTIONS(943), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_field_manipulator,
    STATE(525), 1,
      sym_header_name,
    STATE(129), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [9146] = 8,
    ACTIONS(821), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(897), 1,
      anon_sym_PLUS,
    ACTIONS(899), 1,
      anon_sym_DASH,
    ACTIONS(901), 1,
      anon_sym_QMARK,
    ACTIONS(945), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_field_manipulator,
    STATE(498), 1,
      sym_header_name,
    STATE(192), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [9174] = 8,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(939), 1,
      anon_sym_path_regexp,
    ACTIONS(947), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(951), 1,
      anon_sym_RBRACE,
    STATE(270), 1,
      sym__horizontal_whitespaces,
    ACTIONS(949), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(274), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9202] = 8,
    ACTIONS(885), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_site_address,
    STATE(91), 1,
      sym__port_number,
    STATE(290), 1,
      sym_protocol,
    STATE(633), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(881), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(883), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9230] = 8,
    ACTIONS(885), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym_site_address,
    STATE(91), 1,
      sym__port_number,
    STATE(290), 1,
      sym_protocol,
    STATE(633), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(881), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(883), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9258] = 6,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    ACTIONS(958), 1,
      anon_sym_output,
    ACTIONS(961), 1,
      anon_sym_format,
    ACTIONS(964), 1,
      anon_sym_level,
    ACTIONS(953), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [9281] = 6,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
    ACTIONS(972), 1,
      anon_sym_roll_size,
    ACTIONS(975), 1,
      anon_sym_roll_keep,
    ACTIONS(978), 1,
      anon_sym_roll_keep_for_days,
    STATE(252), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(967), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [9304] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(981), 1,
      sym_domain_address,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    STATE(54), 1,
      sym_redir_or_rewrite_target,
    STATE(539), 1,
      sym_matcher_token,
    STATE(584), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9331] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(987), 1,
      sym_domain_address,
    ACTIONS(989), 1,
      sym_uri_path_with_placeholders,
    STATE(142), 1,
      sym_redir_or_rewrite_target,
    STATE(533), 1,
      sym_matcher_token,
    STATE(603), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9358] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(989), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(991), 1,
      sym_domain_address,
    STATE(45), 1,
      sym_redir_or_rewrite_target,
    STATE(537), 1,
      sym_matcher_token,
    STATE(559), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9385] = 6,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 1,
      anon_sym_output,
    ACTIONS(999), 1,
      anon_sym_format,
    ACTIONS(1001), 1,
      anon_sym_level,
    ACTIONS(993), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(265), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [9408] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1003), 1,
      sym_domain_address,
    STATE(196), 1,
      sym_redir_or_rewrite_target,
    STATE(511), 1,
      sym_matcher_token,
    STATE(580), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9435] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1005), 1,
      sym_domain_address,
    STATE(54), 1,
      sym_redir_or_rewrite_target,
    STATE(510), 1,
      sym_matcher_token,
    STATE(570), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9462] = 6,
    ACTIONS(1009), 1,
      anon_sym_RBRACE,
    ACTIONS(1011), 1,
      anon_sym_roll_size,
    ACTIONS(1013), 1,
      anon_sym_roll_keep,
    ACTIONS(1015), 1,
      anon_sym_roll_keep_for_days,
    STATE(252), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(1007), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [9485] = 6,
    ACTIONS(997), 1,
      anon_sym_output,
    ACTIONS(999), 1,
      anon_sym_format,
    ACTIONS(1001), 1,
      anon_sym_level,
    ACTIONS(1019), 1,
      anon_sym_RBRACE,
    ACTIONS(1017), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [9508] = 8,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1021), 1,
      sym_domain_address,
    STATE(196), 1,
      sym_redir_or_rewrite_target,
    STATE(538), 1,
      sym_matcher_token,
    STATE(587), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(983), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9535] = 6,
    ACTIONS(997), 1,
      anon_sym_output,
    ACTIONS(999), 1,
      anon_sym_format,
    ACTIONS(1001), 1,
      anon_sym_level,
    ACTIONS(1025), 1,
      anon_sym_RBRACE,
    ACTIONS(1023), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(260), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [9558] = 6,
    ACTIONS(1011), 1,
      anon_sym_roll_size,
    ACTIONS(1013), 1,
      anon_sym_roll_keep,
    ACTIONS(1015), 1,
      anon_sym_roll_keep_for_days,
    ACTIONS(1029), 1,
      anon_sym_RBRACE,
    STATE(259), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(1027), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [9581] = 2,
    ACTIONS(567), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(569), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [9596] = 6,
    ACTIONS(997), 1,
      anon_sym_output,
    ACTIONS(999), 1,
      anon_sym_format,
    ACTIONS(1001), 1,
      anon_sym_level,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(1017), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [9619] = 2,
    ACTIONS(551), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(553), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [9634] = 2,
    ACTIONS(669), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(667), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9648] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1035), 1,
      anon_sym_RBRACE,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1033), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(271), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9670] = 2,
    ACTIONS(569), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(567), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9684] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(1039), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(279), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9706] = 6,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(1048), 1,
      anon_sym_path,
    ACTIONS(1051), 1,
      anon_sym_path_regexp,
    ACTIONS(1043), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(271), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9728] = 2,
    ACTIONS(649), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(647), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9742] = 2,
    ACTIONS(739), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(737), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9756] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1041), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(271), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9778] = 2,
    ACTIONS(677), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(675), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9792] = 2,
    ACTIONS(661), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(659), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9806] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(271), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9828] = 2,
    ACTIONS(1058), 1,
      anon_sym_roll_keep,
    ACTIONS(1056), 8,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_roll_disabled,
      anon_sym_roll_size,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
      anon_sym_roll_keep_for_days,
  [9842] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1060), 1,
      anon_sym_RBRACE,
    ACTIONS(1033), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(271), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9864] = 2,
    ACTIONS(553), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(551), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9878] = 2,
    ACTIONS(673), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(671), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9892] = 6,
    ACTIONS(937), 1,
      anon_sym_path,
    ACTIONS(1037), 1,
      anon_sym_path_regexp,
    ACTIONS(1054), 1,
      anon_sym_RBRACE,
    ACTIONS(1062), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(268), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(621), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9914] = 5,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    ACTIONS(1068), 1,
      anon_sym_email,
    ACTIONS(1070), 1,
      anon_sym_auto_https,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(286), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [9933] = 5,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    STATE(504), 1,
      sym_matcher_token,
    ACTIONS(504), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(68), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9952] = 5,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    STATE(526), 1,
      sym_matcher_token,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(63), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9971] = 5,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
    ACTIONS(1077), 1,
      anon_sym_email,
    ACTIONS(1080), 1,
      anon_sym_auto_https,
    ACTIONS(1072), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(286), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [9990] = 5,
    ACTIONS(1068), 1,
      anon_sym_email,
    ACTIONS(1070), 1,
      anon_sym_auto_https,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    ACTIONS(1083), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(283), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [10009] = 5,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(641), 1,
      sym__ip_or_domain_address,
    STATE(651), 1,
      sym__port_number,
    ACTIONS(1087), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1089), 2,
      sym__ipv6_address,
      sym_domain_address,
  [10027] = 6,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1091), 1,
      anon_sym_LBRACE,
    ACTIONS(1093), 1,
      anon_sym_bcrypt,
    STATE(435), 1,
      sym_matcher_token,
    STATE(436), 1,
      sym_hash_algorithm,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10047] = 5,
    ACTIONS(885), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym__port_number,
    STATE(632), 1,
      sym__ip_or_domain_address,
    ACTIONS(1095), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1097), 2,
      sym__ipv6_address,
      sym_domain_address,
  [10065] = 6,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1093), 1,
      anon_sym_bcrypt,
    ACTIONS(1099), 1,
      anon_sym_LBRACE,
    STATE(508), 1,
      sym_hash_algorithm,
    STATE(520), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10085] = 6,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1101), 1,
      sym__valid_uri_path_string,
    STATE(197), 1,
      sym_unix_path,
    STATE(512), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10105] = 6,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1101), 1,
      sym__valid_uri_path_string,
    STATE(144), 1,
      sym_unix_path,
    STATE(514), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10125] = 5,
    ACTIONS(867), 1,
      anon_sym_COLON,
    STATE(112), 1,
      sym__port_number,
    STATE(565), 1,
      sym__ip_or_domain_address,
    ACTIONS(1103), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1105), 2,
      sym__ipv6_address,
      sym_domain_address,
  [10143] = 4,
    ACTIONS(1109), 1,
      anon_sym_RBRACE,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10158] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1113), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10173] = 5,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1115), 1,
      sym_http_message,
    ACTIONS(1117), 1,
      sym_http_error_code,
    STATE(541), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10190] = 5,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1021), 1,
      sym_domain_address,
    STATE(193), 1,
      sym_redir_or_rewrite_target,
    STATE(587), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10207] = 5,
    ACTIONS(981), 1,
      sym_domain_address,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    STATE(55), 1,
      sym_redir_or_rewrite_target,
    STATE(584), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10224] = 3,
    ACTIONS(1119), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(683), 1,
      sym__horizontal_whitespaces,
    ACTIONS(1121), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [10237] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10252] = 5,
    ACTIONS(987), 1,
      sym_domain_address,
    ACTIONS(989), 1,
      sym_uri_path_with_placeholders,
    STATE(114), 1,
      sym_redir_or_rewrite_target,
    STATE(603), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10269] = 5,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1003), 1,
      sym_domain_address,
    STATE(193), 1,
      sym_redir_or_rewrite_target,
    STATE(580), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10286] = 5,
    ACTIONS(985), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1005), 1,
      sym_domain_address,
    STATE(55), 1,
      sym_redir_or_rewrite_target,
    STATE(570), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10303] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10318] = 1,
    ACTIONS(1127), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10327] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1129), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10342] = 1,
    ACTIONS(1131), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10351] = 1,
    ACTIONS(1133), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10360] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1135), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10375] = 1,
    ACTIONS(1137), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10384] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1139), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10399] = 1,
    ACTIONS(1141), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10408] = 1,
    ACTIONS(1143), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10417] = 4,
    ACTIONS(1148), 1,
      anon_sym_RBRACE,
    ACTIONS(1150), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1145), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10432] = 5,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1153), 1,
      sym_http_message,
    ACTIONS(1155), 1,
      sym_http_error_code,
    STATE(502), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10449] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1157), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10464] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1159), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10479] = 4,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1161), 1,
      anon_sym_RBRACE,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(315), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10494] = 5,
    ACTIONS(989), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(991), 1,
      sym_domain_address,
    STATE(46), 1,
      sym_redir_or_rewrite_target,
    STATE(559), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [10511] = 1,
    ACTIONS(1163), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [10520] = 2,
    ACTIONS(1167), 1,
      anon_sym_path,
    ACTIONS(1165), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_path_regexp,
  [10530] = 2,
    ACTIONS(1171), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(1169), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [10540] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1173), 1,
      anon_sym_browse,
    STATE(374), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10554] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1175), 1,
      anon_sym_LBRACE,
    STATE(434), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10568] = 5,
    ACTIONS(1177), 1,
      sym__vertical_whitespace,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [10584] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1185), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(318), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10596] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1187), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(319), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10608] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1189), 1,
      anon_sym_LBRACE,
    STATE(544), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10622] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1191), 1,
      anon_sym_LBRACE,
    STATE(545), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10636] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1193), 1,
      sym__vertical_whitespaces,
    STATE(500), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10650] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1195), 1,
      anon_sym_LBRACE,
    STATE(536), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10664] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1197), 1,
      sym__vertical_whitespace,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [10680] = 5,
    ACTIONS(1197), 1,
      sym__vertical_whitespace,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
    ACTIONS(1201), 1,
      sym__empty_line,
    ACTIONS(1203), 1,
      sym_comment_line,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [10696] = 1,
    ACTIONS(1205), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [10704] = 5,
    ACTIONS(1177), 1,
      sym__vertical_whitespace,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
    ACTIONS(1207), 1,
      sym__empty_line,
    ACTIONS(1209), 1,
      sym_comment_line,
    STATE(354), 1,
      aux_sym_directive_request_body_repeat1,
  [10720] = 4,
    ACTIONS(1213), 1,
      sym__empty_line,
    ACTIONS(1216), 1,
      sym_comment_line,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1211), 2,
      sym__vertical_whitespace,
      anon_sym_RBRACE,
  [10734] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1219), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(296), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10746] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1221), 1,
      anon_sym_LBRACE,
    STATE(453), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10760] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1223), 1,
      sym__vertical_whitespace,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [10776] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1227), 1,
      anon_sym_LBRACE,
    STATE(459), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10790] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1229), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(317), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10802] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1231), 1,
      anon_sym_LBRACE,
    STATE(460), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10816] = 5,
    ACTIONS(1233), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1235), 1,
      sym__vertical_whitespace,
    ACTIONS(1237), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      sym__horizontal_whitespaces,
    STATE(382), 1,
      aux_sym_directive_file_server_repeat1,
  [10832] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1239), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10844] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1241), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(295), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10856] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1243), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(307), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10868] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1245), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(310), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10880] = 3,
    ACTIONS(1249), 1,
      anon_sym_file,
    STATE(311), 1,
      sym__log_output_file,
    ACTIONS(1247), 3,
      anon_sym_stderr,
      anon_sym_stdout,
      anon_sym_discard,
  [10892] = 4,
    ACTIONS(1253), 1,
      anon_sym_RBRACE,
    ACTIONS(1255), 1,
      anon_sym_browse,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1251), 2,
      sym__empty_line,
      sym_comment_line,
  [10906] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1257), 1,
      anon_sym_LBRACE,
    STATE(505), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10920] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1259), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(312), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10932] = 5,
    ACTIONS(1261), 1,
      sym__vertical_whitespace,
    ACTIONS(1263), 1,
      sym__empty_line,
    ACTIONS(1265), 1,
      sym_comment_line,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_directive_request_body_repeat1,
  [10948] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1261), 1,
      sym__vertical_whitespace,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [10964] = 1,
    ACTIONS(1269), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [10972] = 4,
    ACTIONS(1255), 1,
      anon_sym_browse,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1251), 2,
      sym__empty_line,
      sym_comment_line,
  [10986] = 4,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    ACTIONS(1278), 1,
      anon_sym_browse,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1273), 2,
      sym__empty_line,
      sym_comment_line,
  [11000] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1173), 1,
      anon_sym_browse,
    STATE(363), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [11014] = 5,
    ACTIONS(1281), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1283), 1,
      sym__vertical_whitespace,
    ACTIONS(1285), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym__horizontal_whitespaces,
    STATE(411), 1,
      aux_sym_directive_file_server_repeat1,
  [11030] = 4,
    ACTIONS(871), 1,
      sym__valid_uri_path_string,
    ACTIONS(1287), 1,
      sym__vertical_whitespaces,
    STATE(506), 1,
      sym_matcher_token,
    ACTIONS(869), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [11044] = 3,
    ACTIONS(1111), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1289), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(301), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [11056] = 5,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1291), 1,
      sym__ipv4_address,
    ACTIONS(1293), 1,
      sym__ipv6_address,
    STATE(37), 1,
      sym_unix_path,
  [11072] = 5,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1297), 1,
      sym__vertical_whitespace,
    ACTIONS(1299), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11088] = 4,
    ACTIONS(1255), 1,
      anon_sym_browse,
    ACTIONS(1301), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1251), 2,
      sym__empty_line,
      sym_comment_line,
  [11102] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1303), 1,
      sym__vertical_whitespace,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [11118] = 5,
    ACTIONS(1307), 1,
      sym__vertical_whitespace,
    ACTIONS(1309), 1,
      sym__empty_line,
    ACTIONS(1311), 1,
      sym_comment_line,
    ACTIONS(1313), 1,
      anon_sym_RBRACE,
    STATE(326), 1,
      aux_sym_directive_request_body_repeat1,
  [11134] = 5,
    ACTIONS(1315), 1,
      sym__vertical_whitespace,
    ACTIONS(1317), 1,
      sym__empty_line,
    ACTIONS(1319), 1,
      sym_comment_line,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
    STATE(365), 1,
      aux_sym_directive_request_body_repeat1,
  [11150] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1315), 1,
      sym__vertical_whitespace,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [11166] = 5,
    ACTIONS(1323), 1,
      sym__vertical_whitespace,
    ACTIONS(1325), 1,
      sym__empty_line,
    ACTIONS(1327), 1,
      sym_comment_line,
    ACTIONS(1329), 1,
      anon_sym_RBRACE,
    STATE(368), 1,
      aux_sym_directive_request_body_repeat1,
  [11182] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1323), 1,
      sym__vertical_whitespace,
    ACTIONS(1329), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [11198] = 4,
    ACTIONS(1255), 1,
      anon_sym_browse,
    ACTIONS(1331), 1,
      anon_sym_RBRACE,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1251), 2,
      sym__empty_line,
      sym_comment_line,
  [11212] = 5,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1333), 1,
      sym__ipv4_address,
    ACTIONS(1335), 1,
      sym__ipv6_address,
    STATE(44), 1,
      sym_unix_path,
  [11228] = 5,
    ACTIONS(1337), 1,
      sym__vertical_whitespace,
    ACTIONS(1339), 1,
      sym__empty_line,
    ACTIONS(1341), 1,
      sym_comment_line,
    ACTIONS(1343), 1,
      anon_sym_RBRACE,
    STATE(370), 1,
      aux_sym_directive_request_body_repeat1,
  [11244] = 5,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1345), 1,
      sym__vertical_whitespace,
    ACTIONS(1347), 1,
      anon_sym_LBRACE,
    STATE(412), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11260] = 5,
    ACTIONS(1179), 1,
      sym__empty_line,
    ACTIONS(1181), 1,
      sym_comment_line,
    ACTIONS(1337), 1,
      sym__vertical_whitespace,
    ACTIONS(1343), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      aux_sym_directive_request_body_repeat1,
  [11276] = 5,
    ACTIONS(1349), 1,
      sym__vertical_whitespace,
    ACTIONS(1351), 1,
      sym__empty_line,
    ACTIONS(1353), 1,
      sym_comment_line,
    ACTIONS(1355), 1,
      anon_sym_RBRACE,
    STATE(375), 1,
      aux_sym_directive_request_body_repeat1,
  [11292] = 4,
    ACTIONS(1357), 1,
      anon_sym_DQUOTE,
    ACTIONS(1359), 1,
      aux_sym_header_value_token1,
    ACTIONS(1361), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_header_value,
  [11305] = 4,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1363), 1,
      sym__vertical_whitespace,
    STATE(379), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11318] = 4,
    ACTIONS(1365), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1368), 1,
      sym__vertical_whitespace,
    STATE(379), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11331] = 4,
    ACTIONS(1357), 1,
      anon_sym_DQUOTE,
    ACTIONS(1359), 1,
      aux_sym_header_value_token1,
    ACTIONS(1361), 1,
      anon_sym_SQUOTE,
    STATE(178), 1,
      sym_header_value,
  [11344] = 3,
    ACTIONS(1255), 1,
      anon_sym_browse,
    STATE(371), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1370), 2,
      sym__empty_line,
      sym_comment_line,
  [11355] = 4,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1372), 1,
      sym__vertical_whitespace,
    STATE(379), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11368] = 1,
    ACTIONS(1374), 4,
      anon_sym_error,
      anon_sym_INFO,
      anon_sym_info,
      anon_sym_ERROR,
  [11375] = 3,
    ACTIONS(1378), 1,
      anon_sym_max_size,
    STATE(393), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1376), 2,
      sym__empty_line,
      sym_comment_line,
  [11386] = 4,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(1382), 1,
      aux_sym_header_value_token1,
    ACTIONS(1384), 1,
      anon_sym_SQUOTE,
    STATE(131), 1,
      sym_header_value,
  [11399] = 2,
    ACTIONS(504), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(69), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [11408] = 1,
    ACTIONS(1386), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_browse,
  [11415] = 3,
    ACTIONS(1390), 1,
      anon_sym_max_size,
    STATE(384), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1388), 2,
      sym__empty_line,
      sym_comment_line,
  [11426] = 4,
    ACTIONS(1392), 1,
      anon_sym_DQUOTE,
    ACTIONS(1394), 1,
      aux_sym_header_value_token1,
    ACTIONS(1396), 1,
      anon_sym_SQUOTE,
    STATE(84), 1,
      sym_header_value,
  [11439] = 4,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(1382), 1,
      aux_sym_header_value_token1,
    ACTIONS(1384), 1,
      anon_sym_SQUOTE,
    STATE(127), 1,
      sym_header_value,
  [11452] = 3,
    ACTIONS(1398), 1,
      anon_sym_max_size,
    STATE(393), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1376), 2,
      sym__empty_line,
      sym_comment_line,
  [11463] = 3,
    ACTIONS(1400), 1,
      anon_sym_max_size,
    STATE(393), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1376), 2,
      sym__empty_line,
      sym_comment_line,
  [11474] = 3,
    ACTIONS(1211), 1,
      anon_sym_max_size,
    STATE(393), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1402), 2,
      sym__empty_line,
      sym_comment_line,
  [11485] = 1,
    ACTIONS(1405), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [11492] = 3,
    ACTIONS(1409), 1,
      anon_sym_max_size,
    STATE(392), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1407), 2,
      sym__empty_line,
      sym_comment_line,
  [11503] = 3,
    ACTIONS(1413), 1,
      anon_sym_max_size,
    STATE(397), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1411), 2,
      sym__empty_line,
      sym_comment_line,
  [11514] = 3,
    ACTIONS(1415), 1,
      anon_sym_max_size,
    STATE(393), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1376), 2,
      sym__empty_line,
      sym_comment_line,
  [11525] = 2,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(65), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [11534] = 3,
    ACTIONS(1255), 1,
      anon_sym_browse,
    STATE(350), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1417), 2,
      sym__empty_line,
      sym_comment_line,
  [11545] = 3,
    ACTIONS(1421), 1,
      anon_sym_max_size,
    STATE(391), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1419), 2,
      sym__empty_line,
      sym_comment_line,
  [11556] = 3,
    ACTIONS(1255), 1,
      anon_sym_browse,
    STATE(356), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1423), 2,
      sym__empty_line,
      sym_comment_line,
  [11567] = 4,
    ACTIONS(1357), 1,
      anon_sym_DQUOTE,
    ACTIONS(1359), 1,
      aux_sym_header_value_token1,
    ACTIONS(1361), 1,
      anon_sym_SQUOTE,
    STATE(174), 1,
      sym_header_value,
  [11580] = 4,
    ACTIONS(1425), 1,
      anon_sym_DQUOTE,
    ACTIONS(1427), 1,
      aux_sym_header_value_token1,
    ACTIONS(1429), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym_header_value,
  [11593] = 4,
    ACTIONS(1380), 1,
      anon_sym_DQUOTE,
    ACTIONS(1382), 1,
      aux_sym_header_value_token1,
    ACTIONS(1384), 1,
      anon_sym_SQUOTE,
    STATE(147), 1,
      sym_header_value,
  [11606] = 4,
    ACTIONS(1431), 1,
      anon_sym_DQUOTE,
    ACTIONS(1433), 1,
      aux_sym_header_value_token1,
    ACTIONS(1435), 1,
      anon_sym_SQUOTE,
    STATE(276), 1,
      sym_header_value,
  [11619] = 4,
    ACTIONS(1431), 1,
      anon_sym_DQUOTE,
    ACTIONS(1433), 1,
      aux_sym_header_value_token1,
    ACTIONS(1435), 1,
      anon_sym_SQUOTE,
    STATE(275), 1,
      sym_header_value,
  [11632] = 4,
    ACTIONS(1431), 1,
      anon_sym_DQUOTE,
    ACTIONS(1433), 1,
      aux_sym_header_value_token1,
    ACTIONS(1435), 1,
      anon_sym_SQUOTE,
    STATE(273), 1,
      sym_header_value,
  [11645] = 1,
    ACTIONS(1437), 4,
      anon_sym_off,
      anon_sym_disable_redirects,
      anon_sym_ignore_loaded_certs,
      anon_sym_disable_certs,
  [11652] = 4,
    ACTIONS(1439), 1,
      anon_sym_DQUOTE,
    ACTIONS(1441), 1,
      aux_sym_header_value_token1,
    ACTIONS(1443), 1,
      anon_sym_SQUOTE,
    STATE(80), 1,
      sym_header_value,
  [11665] = 3,
    ACTIONS(1255), 1,
      anon_sym_browse,
    STATE(364), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1445), 2,
      sym__empty_line,
      sym_comment_line,
  [11676] = 4,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1447), 1,
      sym__vertical_whitespace,
    STATE(379), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11689] = 4,
    ACTIONS(1295), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1449), 1,
      sym__vertical_whitespace,
    STATE(379), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(592), 1,
      sym__horizontal_whitespaces,
  [11702] = 2,
    ACTIONS(1451), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1453), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [11710] = 3,
    ACTIONS(1455), 1,
      anon_sym_DQUOTE,
    ACTIONS(1457), 1,
      aux_sym_unix_path_token2,
    STATE(626), 1,
      sym_unix_path,
  [11720] = 2,
    ACTIONS(1459), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1461), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [11728] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1463), 1,
      aux_sym_unix_path_token2,
    STATE(135), 1,
      sym_unix_path,
  [11738] = 3,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(1465), 1,
      aux_sym_unix_path_token2,
    STATE(186), 1,
      sym_unix_path,
  [11748] = 3,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(1465), 1,
      aux_sym_unix_path_token2,
    STATE(191), 1,
      sym_unix_path,
  [11758] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1463), 1,
      aux_sym_unix_path_token2,
    STATE(116), 1,
      sym_unix_path,
  [11768] = 2,
    ACTIONS(1467), 1,
      anon_sym_SLASH,
    ACTIONS(1469), 2,
      anon_sym_4,
      anon_sym_6,
  [11776] = 2,
    ACTIONS(1467), 1,
      anon_sym_SLASH,
    ACTIONS(1469), 2,
      anon_sym_gram,
      anon_sym_packet,
  [11784] = 3,
    ACTIONS(401), 1,
      anon_sym_DQUOTE,
    ACTIONS(1465), 1,
      aux_sym_unix_path_token2,
    STATE(169), 1,
      sym_unix_path,
  [11794] = 3,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1463), 1,
      aux_sym_unix_path_token2,
    STATE(115), 1,
      sym_unix_path,
  [11804] = 3,
    ACTIONS(1471), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1473), 1,
      sym__vertical_whitespace,
    STATE(660), 1,
      sym__horizontal_whitespaces,
  [11814] = 3,
    ACTIONS(510), 1,
      anon_sym_DQUOTE,
    ACTIONS(1475), 1,
      aux_sym_unix_path_token2,
    STATE(424), 1,
      sym_unix_path,
  [11824] = 3,
    ACTIONS(1093), 1,
      anon_sym_bcrypt,
    ACTIONS(1477), 1,
      anon_sym_LBRACE,
    STATE(431), 1,
      sym_hash_algorithm,
  [11834] = 3,
    ACTIONS(1093), 1,
      anon_sym_bcrypt,
    ACTIONS(1479), 1,
      anon_sym_LBRACE,
    STATE(546), 1,
      sym_hash_algorithm,
  [11844] = 2,
    ACTIONS(1481), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(678), 1,
      sym__horizontal_whitespaces,
  [11851] = 2,
    ACTIONS(429), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(431), 1,
      sym__vertical_whitespace,
  [11858] = 2,
    ACTIONS(1483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(687), 1,
      sym__horizontal_whitespaces,
  [11865] = 2,
    ACTIONS(1485), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(439), 1,
      sym__horizontal_whitespaces,
  [11872] = 2,
    ACTIONS(1487), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(685), 1,
      sym__horizontal_whitespaces,
  [11879] = 2,
    ACTIONS(1489), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(637), 1,
      sym__horizontal_whitespaces,
  [11886] = 2,
    ACTIONS(1491), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(684), 1,
      sym__horizontal_whitespaces,
  [11893] = 2,
    ACTIONS(1493), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(426), 1,
      sym__horizontal_whitespaces,
  [11900] = 2,
    ACTIONS(1495), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(440), 1,
      sym__horizontal_whitespaces,
  [11907] = 2,
    ACTIONS(1497), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(325), 1,
      sym__horizontal_whitespaces,
  [11914] = 2,
    ACTIONS(1499), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(289), 1,
      sym__horizontal_whitespaces,
  [11921] = 2,
    ACTIONS(1501), 1,
      anon_sym_LBRACE,
    ACTIONS(1503), 1,
      aux_sym_directive_basicauth_token1,
  [11928] = 2,
    ACTIONS(1477), 1,
      anon_sym_LBRACE,
    ACTIONS(1505), 1,
      aux_sym_directive_basicauth_token1,
  [11935] = 2,
    ACTIONS(1507), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(351), 1,
      sym__horizontal_whitespaces,
  [11942] = 2,
    ACTIONS(1509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(53), 1,
      sym__horizontal_whitespaces,
  [11949] = 2,
    ACTIONS(1511), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(293), 1,
      sym__horizontal_whitespaces,
  [11956] = 2,
    ACTIONS(1513), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(254), 1,
      sym__horizontal_whitespaces,
  [11963] = 2,
    ACTIONS(1515), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
  [11970] = 2,
    ACTIONS(1517), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(332), 1,
      sym__horizontal_whitespaces,
  [11977] = 2,
    ACTIONS(1519), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(255), 1,
      sym__horizontal_whitespaces,
  [11984] = 2,
    ACTIONS(1521), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(88), 1,
      sym__horizontal_whitespaces,
  [11991] = 2,
    ACTIONS(1523), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(230), 1,
      sym__horizontal_whitespaces,
  [11998] = 2,
    ACTIONS(1525), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(330), 1,
      sym__horizontal_whitespaces,
  [12005] = 2,
    ACTIONS(1527), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(329), 1,
      sym__horizontal_whitespaces,
  [12012] = 2,
    ACTIONS(1529), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(297), 1,
      sym__horizontal_whitespaces,
  [12019] = 2,
    ACTIONS(1531), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(664), 1,
      sym__horizontal_whitespaces,
  [12026] = 2,
    ACTIONS(1533), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(285), 1,
      sym__horizontal_whitespaces,
  [12033] = 2,
    ACTIONS(1535), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(240), 1,
      sym__horizontal_whitespaces,
  [12040] = 2,
    ACTIONS(1537), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(291), 1,
      sym__horizontal_whitespaces,
  [12047] = 2,
    ACTIONS(1539), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(390), 1,
      sym__horizontal_whitespaces,
  [12054] = 2,
    ACTIONS(1541), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(331), 1,
      sym__horizontal_whitespaces,
  [12061] = 2,
    ACTIONS(1543), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(662), 1,
      sym__horizontal_whitespaces,
  [12068] = 2,
    ACTIONS(1545), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(661), 1,
      sym__horizontal_whitespaces,
  [12075] = 2,
    ACTIONS(1547), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(339), 1,
      sym__horizontal_whitespaces,
  [12082] = 2,
    ACTIONS(1549), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(341), 1,
      sym__horizontal_whitespaces,
  [12089] = 2,
    ACTIONS(1551), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(425), 1,
      sym__horizontal_whitespaces,
  [12096] = 2,
    ACTIONS(1553), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(343), 1,
      sym__horizontal_whitespaces,
  [12103] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(477), 1,
      sym_header_name,
  [12110] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(478), 1,
      sym_header_name,
  [12117] = 2,
    ACTIONS(1557), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(635), 1,
      sym__horizontal_whitespaces,
  [12124] = 2,
    ACTIONS(1479), 1,
      anon_sym_LBRACE,
    ACTIONS(1559), 1,
      aux_sym_directive_basicauth_token1,
  [12131] = 2,
    ACTIONS(1561), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(385), 1,
      sym__horizontal_whitespaces,
  [12138] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(492), 1,
      sym_header_name,
  [12145] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(493), 1,
      sym_header_name,
  [12152] = 2,
    ACTIONS(1563), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(416), 1,
      sym__horizontal_whitespaces,
  [12159] = 2,
    ACTIONS(1565), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(629), 1,
      sym__horizontal_whitespaces,
  [12166] = 2,
    ACTIONS(1567), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(349), 1,
      sym__horizontal_whitespaces,
  [12173] = 2,
    ACTIONS(1569), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(414), 1,
      sym__horizontal_whitespaces,
  [12180] = 2,
    ACTIONS(1571), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(590), 1,
      sym__horizontal_whitespaces,
  [12187] = 2,
    ACTIONS(1573), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(406), 1,
      sym__horizontal_whitespaces,
  [12194] = 2,
    ACTIONS(1575), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(405), 1,
      sym__horizontal_whitespaces,
  [12201] = 2,
    ACTIONS(1577), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(403), 1,
      sym__horizontal_whitespaces,
  [12208] = 2,
    ACTIONS(1579), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(261), 1,
      sym__horizontal_whitespaces,
  [12215] = 2,
    ACTIONS(1581), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(253), 1,
      sym__horizontal_whitespaces,
  [12222] = 2,
    ACTIONS(1583), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(527), 1,
      sym__horizontal_whitespaces,
  [12229] = 2,
    ACTIONS(1585), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(628), 1,
      sym__horizontal_whitespaces,
  [12236] = 2,
    ACTIONS(1587), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(620), 1,
      sym__horizontal_whitespaces,
  [12243] = 2,
    ACTIONS(1589), 1,
      aux_sym_matcher_path_regexp_token1,
    ACTIONS(1591), 1,
      aux_sym_matcher_path_regexp_token2,
  [12250] = 2,
    ACTIONS(1593), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(640), 1,
      sym__horizontal_whitespaces,
  [12257] = 2,
    ACTIONS(1595), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(576), 1,
      sym__horizontal_whitespaces,
  [12264] = 2,
    ACTIONS(1597), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(485), 1,
      sym__horizontal_whitespaces,
  [12271] = 2,
    ACTIONS(1599), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(138), 1,
      sym__horizontal_whitespaces,
  [12278] = 2,
    ACTIONS(1601), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(59), 1,
      sym__horizontal_whitespaces,
  [12285] = 2,
    ACTIONS(1603), 1,
      anon_sym_LBRACE,
    ACTIONS(1605), 1,
      aux_sym_directive_basicauth_token1,
  [12292] = 2,
    ACTIONS(1607), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(402), 1,
      sym__horizontal_whitespaces,
  [12299] = 2,
    ACTIONS(1609), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(380), 1,
      sym__horizontal_whitespaces,
  [12306] = 2,
    ACTIONS(1611), 1,
      sym_http_message,
    ACTIONS(1613), 1,
      sym_http_error_code,
  [12313] = 2,
    ACTIONS(1615), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(383), 1,
      sym__horizontal_whitespaces,
  [12320] = 2,
    ACTIONS(1617), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(244), 1,
      sym__horizontal_whitespaces,
  [12327] = 2,
    ACTIONS(1619), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(247), 1,
      sym__horizontal_whitespaces,
  [12334] = 2,
    ACTIONS(1621), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(389), 1,
      sym__horizontal_whitespaces,
  [12341] = 2,
    ACTIONS(421), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(423), 1,
      sym__vertical_whitespace,
  [12348] = 2,
    ACTIONS(1623), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(655), 1,
      sym__horizontal_whitespaces,
  [12355] = 2,
    ACTIONS(1625), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(613), 1,
      sym__horizontal_whitespaces,
  [12362] = 2,
    ACTIONS(1627), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(519), 1,
      sym__horizontal_whitespaces,
  [12369] = 2,
    ACTIONS(1629), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(598), 1,
      sym__horizontal_whitespaces,
  [12376] = 2,
    ACTIONS(1631), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(386), 1,
      sym__horizontal_whitespaces,
  [12383] = 2,
    ACTIONS(1633), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(677), 1,
      sym__horizontal_whitespaces,
  [12390] = 2,
    ACTIONS(1635), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(601), 1,
      sym__horizontal_whitespaces,
  [12397] = 2,
    ACTIONS(1637), 1,
      aux_sym_directive_basicauth_token1,
    STATE(203), 1,
      sym_header_name,
  [12404] = 2,
    ACTIONS(1639), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(468), 1,
      sym__horizontal_whitespaces,
  [12411] = 2,
    ACTIONS(1641), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(419), 1,
      sym__horizontal_whitespaces,
  [12418] = 2,
    ACTIONS(1643), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(304), 1,
      sym__horizontal_whitespaces,
  [12425] = 2,
    ACTIONS(1645), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(303), 1,
      sym__horizontal_whitespaces,
  [12432] = 2,
    ACTIONS(1647), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(418), 1,
      sym__horizontal_whitespaces,
  [12439] = 2,
    ACTIONS(1649), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(417), 1,
      sym__horizontal_whitespaces,
  [12446] = 2,
    ACTIONS(1651), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(423), 1,
      sym__horizontal_whitespaces,
  [12453] = 2,
    ACTIONS(1653), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(292), 1,
      sym__horizontal_whitespaces,
  [12460] = 2,
    ACTIONS(1655), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(257), 1,
      sym__horizontal_whitespaces,
  [12467] = 2,
    ACTIONS(1657), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
  [12474] = 2,
    ACTIONS(1659), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(258), 1,
      sym__horizontal_whitespaces,
  [12481] = 2,
    ACTIONS(1661), 1,
      sym_http_message,
    ACTIONS(1663), 1,
      sym_http_error_code,
  [12488] = 2,
    ACTIONS(1665), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(427), 1,
      sym__horizontal_whitespaces,
  [12495] = 2,
    ACTIONS(1667), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(408), 1,
      sym__horizontal_whitespaces,
  [12502] = 2,
    ACTIONS(1669), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(652), 1,
      sym__horizontal_whitespaces,
  [12509] = 2,
    ACTIONS(1671), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(231), 1,
      sym__horizontal_whitespaces,
  [12516] = 2,
    ACTIONS(1673), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(316), 1,
      sym__horizontal_whitespaces,
  [12523] = 2,
    ACTIONS(1675), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(409), 1,
      sym__horizontal_whitespaces,
  [12530] = 2,
    ACTIONS(1677), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(398), 1,
      sym__horizontal_whitespaces,
  [12537] = 1,
    ACTIONS(1679), 2,
      anon_sym_console,
      anon_sym_json,
  [12542] = 2,
    ACTIONS(1681), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(422), 1,
      sym__horizontal_whitespaces,
  [12549] = 2,
    ACTIONS(1683), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1685), 1,
      sym__vertical_whitespace,
  [12556] = 2,
    ACTIONS(1687), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(284), 1,
      sym__horizontal_whitespaces,
  [12563] = 2,
    ACTIONS(1689), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(241), 1,
      sym__horizontal_whitespaces,
  [12570] = 2,
    ACTIONS(1691), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(360), 1,
      sym__horizontal_whitespaces,
  [12577] = 2,
    ACTIONS(1693), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(302), 1,
      sym__horizontal_whitespaces,
  [12584] = 2,
    ACTIONS(1695), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(674), 1,
      sym__horizontal_whitespaces,
  [12591] = 2,
    ACTIONS(1697), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(249), 1,
      sym__horizontal_whitespaces,
  [12598] = 2,
    ACTIONS(1699), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(611), 1,
      sym__horizontal_whitespaces,
  [12605] = 2,
    ACTIONS(1701), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(320), 1,
      sym__horizontal_whitespaces,
  [12612] = 2,
    ACTIONS(1703), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(298), 1,
      sym__horizontal_whitespaces,
  [12619] = 2,
    ACTIONS(1705), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(299), 1,
      sym__horizontal_whitespaces,
  [12626] = 2,
    ACTIONS(1707), 1,
      aux_sym_directive_basicauth_token1,
    STATE(281), 1,
      sym_header_name,
  [12633] = 2,
    ACTIONS(1709), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(494), 1,
      sym__horizontal_whitespaces,
  [12640] = 2,
    ACTIONS(1711), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(616), 1,
      sym__horizontal_whitespaces,
  [12647] = 2,
    ACTIONS(1713), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(618), 1,
      sym__horizontal_whitespaces,
  [12654] = 2,
    ACTIONS(1715), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(693), 1,
      sym__horizontal_whitespaces,
  [12661] = 2,
    ACTIONS(1717), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(692), 1,
      sym__horizontal_whitespaces,
  [12668] = 2,
    ACTIONS(1719), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(491), 1,
      sym__horizontal_whitespaces,
  [12675] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(457), 1,
      sym_header_name,
  [12682] = 2,
    ACTIONS(1721), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(246), 1,
      sym__horizontal_whitespaces,
  [12689] = 2,
    ACTIONS(1723), 1,
      aux_sym_directive_basicauth_token1,
    STATE(130), 1,
      sym_header_name,
  [12696] = 2,
    ACTIONS(1555), 1,
      aux_sym_directive_basicauth_token1,
    STATE(469), 1,
      sym_header_name,
  [12703] = 1,
    ACTIONS(1725), 1,
      sym__vertical_whitespace,
  [12707] = 1,
    ACTIONS(1727), 1,
      aux_sym_header_value_token2,
  [12711] = 1,
    ACTIONS(1321), 1,
      anon_sym_RBRACE,
  [12715] = 1,
    ACTIONS(647), 1,
      aux_sym__horizontal_whitespaces_token1,
  [12719] = 1,
    ACTIONS(1729), 1,
      sym__vertical_whitespace,
  [12723] = 1,
    ACTIONS(1305), 1,
      anon_sym_RBRACE,
  [12727] = 1,
    ACTIONS(1731), 1,
      anon_sym_SLASH,
  [12731] = 1,
    ACTIONS(1733), 1,
      anon_sym_RBRACE,
  [12735] = 1,
    ACTIONS(1735), 1,
      sym_domain_address,
  [12739] = 1,
    ACTIONS(1737), 1,
      aux_sym_header_value_token2,
  [12743] = 1,
    ACTIONS(1739), 1,
      anon_sym_DQUOTE,
  [12747] = 1,
    ACTIONS(1741), 1,
      aux_sym__port_number_token1,
  [12751] = 1,
    ACTIONS(1743), 1,
      sym__vertical_whitespace,
  [12755] = 1,
    ACTIONS(1745), 1,
      aux_sym_site_address_token1,
  [12759] = 1,
    ACTIONS(1747), 1,
      aux_sym_site_address_token1,
  [12763] = 1,
    ACTIONS(1749), 1,
      sym__vertical_whitespace,
  [12767] = 1,
    ACTIONS(1343), 1,
      anon_sym_RBRACE,
  [12771] = 1,
    ACTIONS(1751), 1,
      sym__vertical_whitespace,
  [12775] = 1,
    ACTIONS(1753), 1,
      sym__vertical_whitespace,
  [12779] = 1,
    ACTIONS(1755), 1,
      sym_domain_address,
  [12783] = 1,
    ACTIONS(1757), 1,
      anon_sym_SQUOTE,
  [12787] = 1,
    ACTIONS(1757), 1,
      anon_sym_DQUOTE,
  [12791] = 1,
    ACTIONS(1759), 1,
      anon_sym_DQUOTE,
  [12795] = 1,
    ACTIONS(1761), 1,
      aux_sym_site_address_token1,
  [12799] = 1,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [12803] = 1,
    ACTIONS(1763), 1,
      sym_http_error_code,
  [12807] = 1,
    ACTIONS(1765), 1,
      anon_sym_DQUOTE,
  [12811] = 1,
    ACTIONS(1765), 1,
      anon_sym_SQUOTE,
  [12815] = 1,
    ACTIONS(1767), 1,
      sym__vertical_whitespace,
  [12819] = 1,
    ACTIONS(1769), 1,
      sym_domain_address,
  [12823] = 1,
    ACTIONS(1771), 1,
      anon_sym_DQUOTE,
  [12827] = 1,
    ACTIONS(1773), 1,
      anon_sym_DQUOTE,
  [12831] = 1,
    ACTIONS(1773), 1,
      anon_sym_SQUOTE,
  [12835] = 1,
    ACTIONS(1775), 1,
      sym_domain_address,
  [12839] = 1,
    ACTIONS(1777), 1,
      anon_sym_DQUOTE,
  [12843] = 1,
    ACTIONS(1777), 1,
      anon_sym_SQUOTE,
  [12847] = 1,
    ACTIONS(1779), 1,
      sym_domain_address,
  [12851] = 1,
    ACTIONS(1781), 1,
      anon_sym_DQUOTE,
  [12855] = 1,
    ACTIONS(1781), 1,
      anon_sym_SQUOTE,
  [12859] = 1,
    ACTIONS(1783), 1,
      sym_snippet_name,
  [12863] = 1,
    ACTIONS(1785), 1,
      anon_sym_LBRACE,
  [12867] = 1,
    ACTIONS(1173), 1,
      anon_sym_browse,
  [12871] = 1,
    ACTIONS(1787), 1,
      sym__vertical_whitespace,
  [12875] = 1,
    ACTIONS(1789), 1,
      sym__vertical_whitespace,
  [12879] = 1,
    ACTIONS(1791), 1,
      aux_sym_header_value_token3,
  [12883] = 1,
    ACTIONS(1793), 1,
      anon_sym_SLASH,
  [12887] = 1,
    ACTIONS(1795), 1,
      aux_sym_unix_path_token1,
  [12891] = 1,
    ACTIONS(1663), 1,
      sym_http_error_code,
  [12895] = 1,
    ACTIONS(1797), 1,
      sym__vertical_whitespace,
  [12899] = 1,
    ACTIONS(1799), 1,
      anon_sym_DQUOTE,
  [12903] = 1,
    ACTIONS(1801), 1,
      sym__vertical_whitespaces,
  [12907] = 1,
    ACTIONS(1803), 1,
      sym_size_number,
  [12911] = 1,
    ACTIONS(1805), 1,
      sym_domain_address,
  [12915] = 1,
    ACTIONS(1807), 1,
      aux_sym_unix_path_token1,
  [12919] = 1,
    ACTIONS(1809), 1,
      sym__vertical_whitespace,
  [12923] = 1,
    ACTIONS(1811), 1,
      aux_sym__horizontal_whitespaces_token1,
  [12927] = 1,
    ACTIONS(1813), 1,
      anon_sym_SLASH,
  [12931] = 1,
    ACTIONS(1815), 1,
      anon_sym_LBRACE,
  [12935] = 1,
    ACTIONS(1817), 1,
      ts_builtin_sym_end,
  [12939] = 1,
    ACTIONS(1819), 1,
      sym__vertical_whitespace,
  [12943] = 1,
    ACTIONS(1821), 1,
      anon_sym_LBRACE,
  [12947] = 1,
    ACTIONS(1823), 1,
      sym_size_number,
  [12951] = 1,
    ACTIONS(1825), 1,
      aux_sym_matcher_path_regexp_token2,
  [12955] = 1,
    ACTIONS(1827), 1,
      anon_sym_LBRACE,
  [12959] = 1,
    ACTIONS(1829), 1,
      sym__vertical_whitespace,
  [12963] = 1,
    ACTIONS(1831), 1,
      aux_sym_basicauth_credential_token1,
  [12967] = 1,
    ACTIONS(1833), 1,
      sym_size_number,
  [12971] = 1,
    ACTIONS(1835), 1,
      anon_sym_LBRACE,
  [12975] = 1,
    ACTIONS(1837), 1,
      sym_size_number,
  [12979] = 1,
    ACTIONS(1839), 1,
      aux_sym__log_output_file_token2,
  [12983] = 1,
    ACTIONS(1841), 1,
      sym__vertical_whitespace,
  [12987] = 1,
    ACTIONS(1843), 1,
      sym__vertical_whitespace,
  [12991] = 1,
    ACTIONS(1845), 1,
      aux_sym__port_number_token1,
  [12995] = 1,
    ACTIONS(1329), 1,
      anon_sym_RBRACE,
  [12999] = 1,
    ACTIONS(1847), 1,
      aux_sym_header_value_token3,
  [13003] = 1,
    ACTIONS(1849), 1,
      sym__vertical_whitespace,
  [13007] = 1,
    ACTIONS(1851), 1,
      sym_size_number,
  [13011] = 1,
    ACTIONS(1839), 1,
      aux_sym__log_output_file_token1,
  [13015] = 1,
    ACTIONS(1839), 1,
      sym_size_number,
  [13019] = 1,
    ACTIONS(1853), 1,
      sym_size_number,
  [13023] = 1,
    ACTIONS(1855), 1,
      sym_size_number,
  [13027] = 1,
    ACTIONS(1857), 1,
      aux_sym_site_address_token1,
  [13031] = 1,
    ACTIONS(1859), 1,
      aux_sym_site_address_token1,
  [13035] = 1,
    ACTIONS(1861), 1,
      sym__vertical_whitespace,
  [13039] = 1,
    ACTIONS(1863), 1,
      sym_snippet_name,
  [13043] = 1,
    ACTIONS(1865), 1,
      aux_sym__port_number_token1,
  [13047] = 1,
    ACTIONS(1867), 1,
      sym_http_error_code,
  [13051] = 1,
    ACTIONS(1869), 1,
      aux_sym_unix_path_token1,
  [13055] = 1,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
  [13059] = 1,
    ACTIONS(1871), 1,
      sym_snippet_name,
  [13063] = 1,
    ACTIONS(1873), 1,
      aux_sym_site_address_token1,
  [13067] = 1,
    ACTIONS(1875), 1,
      aux_sym_header_value_token2,
  [13071] = 1,
    ACTIONS(1877), 1,
      aux_sym_header_value_token3,
  [13075] = 1,
    ACTIONS(1879), 1,
      aux_sym_unix_path_token1,
  [13079] = 1,
    ACTIONS(1881), 1,
      aux_sym_header_value_token2,
  [13083] = 1,
    ACTIONS(1883), 1,
      aux_sym_header_value_token3,
  [13087] = 1,
    ACTIONS(1885), 1,
      aux_sym_header_value_token2,
  [13091] = 1,
    ACTIONS(1887), 1,
      aux_sym_header_value_token3,
  [13095] = 1,
    ACTIONS(1889), 1,
      aux_sym_header_value_token2,
  [13099] = 1,
    ACTIONS(1891), 1,
      aux_sym_header_value_token3,
  [13103] = 1,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
  [13107] = 1,
    ACTIONS(1893), 1,
      sym_email_address,
  [13111] = 1,
    ACTIONS(1895), 1,
      anon_sym_RBRACE,
  [13115] = 1,
    ACTIONS(1897), 1,
      anon_sym_RBRACE,
  [13119] = 1,
    ACTIONS(1899), 1,
      sym__vertical_whitespaces,
  [13123] = 1,
    ACTIONS(1901), 1,
      sym__vertical_whitespace,
  [13127] = 1,
    ACTIONS(421), 1,
      sym__vertical_whitespace,
  [13131] = 1,
    ACTIONS(1903), 1,
      sym__vertical_whitespace,
  [13135] = 1,
    ACTIONS(1225), 1,
      anon_sym_RBRACE,
  [13139] = 1,
    ACTIONS(1905), 1,
      anon_sym_LBRACE,
  [13143] = 1,
    ACTIONS(1907), 1,
      anon_sym_LBRACE,
  [13147] = 1,
    ACTIONS(1909), 1,
      anon_sym_LBRACE,
  [13151] = 1,
    ACTIONS(1911), 1,
      sym__vertical_whitespace,
  [13155] = 1,
    ACTIONS(1913), 1,
      anon_sym_LBRACE,
  [13159] = 1,
    ACTIONS(1915), 1,
      sym__vertical_whitespace,
  [13163] = 1,
    ACTIONS(1199), 1,
      anon_sym_RBRACE,
  [13167] = 1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
  [13171] = 1,
    ACTIONS(1917), 1,
      sym__vertical_whitespace,
  [13175] = 1,
    ACTIONS(1919), 1,
      sym__vertical_whitespace,
  [13179] = 1,
    ACTIONS(1921), 1,
      sym__vertical_whitespace,
  [13183] = 1,
    ACTIONS(429), 1,
      sym__vertical_whitespace,
  [13187] = 1,
    ACTIONS(1923), 1,
      anon_sym_DQUOTE,
  [13191] = 1,
    ACTIONS(1923), 1,
      anon_sym_SQUOTE,
  [13195] = 1,
    ACTIONS(1613), 1,
      sym_http_error_code,
  [13199] = 1,
    ACTIONS(1925), 1,
      sym__vertical_whitespace,
  [13203] = 1,
    ACTIONS(1927), 1,
      sym__vertical_whitespace,
  [13207] = 1,
    ACTIONS(1929), 1,
      anon_sym_LBRACE,
  [13211] = 1,
    ACTIONS(1931), 1,
      anon_sym_LBRACE,
  [13215] = 1,
    ACTIONS(1933), 1,
      sym__vertical_whitespace,
  [13219] = 1,
    ACTIONS(1935), 1,
      anon_sym_LBRACE,
  [13223] = 1,
    ACTIONS(1937), 1,
      sym__vertical_whitespace,
  [13227] = 1,
    ACTIONS(1267), 1,
      anon_sym_RBRACE,
  [13231] = 1,
    ACTIONS(1939), 1,
      aux_sym_basicauth_credential_token2,
  [13235] = 1,
    ACTIONS(1941), 1,
      anon_sym_LBRACE,
  [13239] = 1,
    ACTIONS(1943), 1,
      anon_sym_LBRACE,
  [13243] = 1,
    ACTIONS(1183), 1,
      anon_sym_RBRACE,
  [13247] = 1,
    ACTIONS(1945), 1,
      anon_sym_LBRACE,
  [13251] = 1,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [13255] = 1,
    ACTIONS(1947), 1,
      sym__vertical_whitespace,
  [13259] = 1,
    ACTIONS(1949), 1,
      sym__vertical_whitespace,
  [13263] = 1,
    ACTIONS(1951), 1,
      sym_size_number,
  [13267] = 1,
    ACTIONS(1953), 1,
      anon_sym_LBRACE,
  [13271] = 1,
    ACTIONS(1955), 1,
      anon_sym_LBRACE,
  [13275] = 1,
    ACTIONS(1957), 1,
      sym__vertical_whitespace,
  [13279] = 1,
    ACTIONS(1959), 1,
      sym__vertical_whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 188,
  [SMALL_STATE(5)] = 283,
  [SMALL_STATE(6)] = 373,
  [SMALL_STATE(7)] = 463,
  [SMALL_STATE(8)] = 553,
  [SMALL_STATE(9)] = 639,
  [SMALL_STATE(10)] = 725,
  [SMALL_STATE(11)] = 811,
  [SMALL_STATE(12)] = 897,
  [SMALL_STATE(13)] = 983,
  [SMALL_STATE(14)] = 1069,
  [SMALL_STATE(15)] = 1155,
  [SMALL_STATE(16)] = 1241,
  [SMALL_STATE(17)] = 1327,
  [SMALL_STATE(18)] = 1413,
  [SMALL_STATE(19)] = 1499,
  [SMALL_STATE(20)] = 1585,
  [SMALL_STATE(21)] = 1671,
  [SMALL_STATE(22)] = 1754,
  [SMALL_STATE(23)] = 1837,
  [SMALL_STATE(24)] = 1920,
  [SMALL_STATE(25)] = 2003,
  [SMALL_STATE(26)] = 2086,
  [SMALL_STATE(27)] = 2169,
  [SMALL_STATE(28)] = 2252,
  [SMALL_STATE(29)] = 2335,
  [SMALL_STATE(30)] = 2418,
  [SMALL_STATE(31)] = 2501,
  [SMALL_STATE(32)] = 2584,
  [SMALL_STATE(33)] = 2667,
  [SMALL_STATE(34)] = 2725,
  [SMALL_STATE(35)] = 2783,
  [SMALL_STATE(36)] = 2840,
  [SMALL_STATE(37)] = 2897,
  [SMALL_STATE(38)] = 2933,
  [SMALL_STATE(39)] = 2969,
  [SMALL_STATE(40)] = 3005,
  [SMALL_STATE(41)] = 3041,
  [SMALL_STATE(42)] = 3076,
  [SMALL_STATE(43)] = 3111,
  [SMALL_STATE(44)] = 3146,
  [SMALL_STATE(45)] = 3181,
  [SMALL_STATE(46)] = 3219,
  [SMALL_STATE(47)] = 3257,
  [SMALL_STATE(48)] = 3293,
  [SMALL_STATE(49)] = 3329,
  [SMALL_STATE(50)] = 3362,
  [SMALL_STATE(51)] = 3397,
  [SMALL_STATE(52)] = 3432,
  [SMALL_STATE(53)] = 3465,
  [SMALL_STATE(54)] = 3506,
  [SMALL_STATE(55)] = 3543,
  [SMALL_STATE(56)] = 3580,
  [SMALL_STATE(57)] = 3613,
  [SMALL_STATE(58)] = 3647,
  [SMALL_STATE(59)] = 3683,
  [SMALL_STATE(60)] = 3723,
  [SMALL_STATE(61)] = 3755,
  [SMALL_STATE(62)] = 3787,
  [SMALL_STATE(63)] = 3821,
  [SMALL_STATE(64)] = 3857,
  [SMALL_STATE(65)] = 3889,
  [SMALL_STATE(66)] = 3925,
  [SMALL_STATE(67)] = 3960,
  [SMALL_STATE(68)] = 3995,
  [SMALL_STATE(69)] = 4030,
  [SMALL_STATE(70)] = 4065,
  [SMALL_STATE(71)] = 4102,
  [SMALL_STATE(72)] = 4137,
  [SMALL_STATE(73)] = 4172,
  [SMALL_STATE(74)] = 4207,
  [SMALL_STATE(75)] = 4242,
  [SMALL_STATE(76)] = 4272,
  [SMALL_STATE(77)] = 4306,
  [SMALL_STATE(78)] = 4340,
  [SMALL_STATE(79)] = 4374,
  [SMALL_STATE(80)] = 4408,
  [SMALL_STATE(81)] = 4440,
  [SMALL_STATE(82)] = 4476,
  [SMALL_STATE(83)] = 4510,
  [SMALL_STATE(84)] = 4539,
  [SMALL_STATE(85)] = 4570,
  [SMALL_STATE(86)] = 4599,
  [SMALL_STATE(87)] = 4630,
  [SMALL_STATE(88)] = 4659,
  [SMALL_STATE(89)] = 4690,
  [SMALL_STATE(90)] = 4721,
  [SMALL_STATE(91)] = 4750,
  [SMALL_STATE(92)] = 4779,
  [SMALL_STATE(93)] = 4808,
  [SMALL_STATE(94)] = 4837,
  [SMALL_STATE(95)] = 4866,
  [SMALL_STATE(96)] = 4894,
  [SMALL_STATE(97)] = 4922,
  [SMALL_STATE(98)] = 4950,
  [SMALL_STATE(99)] = 4978,
  [SMALL_STATE(100)] = 5006,
  [SMALL_STATE(101)] = 5034,
  [SMALL_STATE(102)] = 5062,
  [SMALL_STATE(103)] = 5090,
  [SMALL_STATE(104)] = 5118,
  [SMALL_STATE(105)] = 5146,
  [SMALL_STATE(106)] = 5174,
  [SMALL_STATE(107)] = 5202,
  [SMALL_STATE(108)] = 5230,
  [SMALL_STATE(109)] = 5258,
  [SMALL_STATE(110)] = 5288,
  [SMALL_STATE(111)] = 5318,
  [SMALL_STATE(112)] = 5346,
  [SMALL_STATE(113)] = 5374,
  [SMALL_STATE(114)] = 5402,
  [SMALL_STATE(115)] = 5430,
  [SMALL_STATE(116)] = 5458,
  [SMALL_STATE(117)] = 5486,
  [SMALL_STATE(118)] = 5514,
  [SMALL_STATE(119)] = 5542,
  [SMALL_STATE(120)] = 5570,
  [SMALL_STATE(121)] = 5598,
  [SMALL_STATE(122)] = 5626,
  [SMALL_STATE(123)] = 5654,
  [SMALL_STATE(124)] = 5682,
  [SMALL_STATE(125)] = 5710,
  [SMALL_STATE(126)] = 5738,
  [SMALL_STATE(127)] = 5766,
  [SMALL_STATE(128)] = 5794,
  [SMALL_STATE(129)] = 5822,
  [SMALL_STATE(130)] = 5850,
  [SMALL_STATE(131)] = 5878,
  [SMALL_STATE(132)] = 5906,
  [SMALL_STATE(133)] = 5934,
  [SMALL_STATE(134)] = 5962,
  [SMALL_STATE(135)] = 5990,
  [SMALL_STATE(136)] = 6018,
  [SMALL_STATE(137)] = 6046,
  [SMALL_STATE(138)] = 6074,
  [SMALL_STATE(139)] = 6104,
  [SMALL_STATE(140)] = 6132,
  [SMALL_STATE(141)] = 6160,
  [SMALL_STATE(142)] = 6188,
  [SMALL_STATE(143)] = 6216,
  [SMALL_STATE(144)] = 6244,
  [SMALL_STATE(145)] = 6272,
  [SMALL_STATE(146)] = 6300,
  [SMALL_STATE(147)] = 6328,
  [SMALL_STATE(148)] = 6356,
  [SMALL_STATE(149)] = 6384,
  [SMALL_STATE(150)] = 6412,
  [SMALL_STATE(151)] = 6440,
  [SMALL_STATE(152)] = 6468,
  [SMALL_STATE(153)] = 6496,
  [SMALL_STATE(154)] = 6524,
  [SMALL_STATE(155)] = 6552,
  [SMALL_STATE(156)] = 6580,
  [SMALL_STATE(157)] = 6608,
  [SMALL_STATE(158)] = 6636,
  [SMALL_STATE(159)] = 6664,
  [SMALL_STATE(160)] = 6692,
  [SMALL_STATE(161)] = 6719,
  [SMALL_STATE(162)] = 6746,
  [SMALL_STATE(163)] = 6773,
  [SMALL_STATE(164)] = 6800,
  [SMALL_STATE(165)] = 6827,
  [SMALL_STATE(166)] = 6854,
  [SMALL_STATE(167)] = 6881,
  [SMALL_STATE(168)] = 6908,
  [SMALL_STATE(169)] = 6935,
  [SMALL_STATE(170)] = 6962,
  [SMALL_STATE(171)] = 6989,
  [SMALL_STATE(172)] = 7016,
  [SMALL_STATE(173)] = 7043,
  [SMALL_STATE(174)] = 7070,
  [SMALL_STATE(175)] = 7097,
  [SMALL_STATE(176)] = 7124,
  [SMALL_STATE(177)] = 7151,
  [SMALL_STATE(178)] = 7178,
  [SMALL_STATE(179)] = 7205,
  [SMALL_STATE(180)] = 7232,
  [SMALL_STATE(181)] = 7259,
  [SMALL_STATE(182)] = 7286,
  [SMALL_STATE(183)] = 7313,
  [SMALL_STATE(184)] = 7340,
  [SMALL_STATE(185)] = 7367,
  [SMALL_STATE(186)] = 7394,
  [SMALL_STATE(187)] = 7421,
  [SMALL_STATE(188)] = 7448,
  [SMALL_STATE(189)] = 7475,
  [SMALL_STATE(190)] = 7502,
  [SMALL_STATE(191)] = 7529,
  [SMALL_STATE(192)] = 7556,
  [SMALL_STATE(193)] = 7583,
  [SMALL_STATE(194)] = 7610,
  [SMALL_STATE(195)] = 7637,
  [SMALL_STATE(196)] = 7688,
  [SMALL_STATE(197)] = 7715,
  [SMALL_STATE(198)] = 7742,
  [SMALL_STATE(199)] = 7769,
  [SMALL_STATE(200)] = 7796,
  [SMALL_STATE(201)] = 7823,
  [SMALL_STATE(202)] = 7850,
  [SMALL_STATE(203)] = 7877,
  [SMALL_STATE(204)] = 7904,
  [SMALL_STATE(205)] = 7931,
  [SMALL_STATE(206)] = 7958,
  [SMALL_STATE(207)] = 7985,
  [SMALL_STATE(208)] = 8036,
  [SMALL_STATE(209)] = 8063,
  [SMALL_STATE(210)] = 8090,
  [SMALL_STATE(211)] = 8117,
  [SMALL_STATE(212)] = 8144,
  [SMALL_STATE(213)] = 8171,
  [SMALL_STATE(214)] = 8198,
  [SMALL_STATE(215)] = 8225,
  [SMALL_STATE(216)] = 8252,
  [SMALL_STATE(217)] = 8281,
  [SMALL_STATE(218)] = 8308,
  [SMALL_STATE(219)] = 8337,
  [SMALL_STATE(220)] = 8374,
  [SMALL_STATE(221)] = 8411,
  [SMALL_STATE(222)] = 8448,
  [SMALL_STATE(223)] = 8485,
  [SMALL_STATE(224)] = 8522,
  [SMALL_STATE(225)] = 8556,
  [SMALL_STATE(226)] = 8590,
  [SMALL_STATE(227)] = 8628,
  [SMALL_STATE(228)] = 8662,
  [SMALL_STATE(229)] = 8696,
  [SMALL_STATE(230)] = 8734,
  [SMALL_STATE(231)] = 8772,
  [SMALL_STATE(232)] = 8810,
  [SMALL_STATE(233)] = 8828,
  [SMALL_STATE(234)] = 8846,
  [SMALL_STATE(235)] = 8864,
  [SMALL_STATE(236)] = 8882,
  [SMALL_STATE(237)] = 8900,
  [SMALL_STATE(238)] = 8918,
  [SMALL_STATE(239)] = 8936,
  [SMALL_STATE(240)] = 8954,
  [SMALL_STATE(241)] = 8985,
  [SMALL_STATE(242)] = 9016,
  [SMALL_STATE(243)] = 9044,
  [SMALL_STATE(244)] = 9062,
  [SMALL_STATE(245)] = 9090,
  [SMALL_STATE(246)] = 9118,
  [SMALL_STATE(247)] = 9146,
  [SMALL_STATE(248)] = 9174,
  [SMALL_STATE(249)] = 9202,
  [SMALL_STATE(250)] = 9230,
  [SMALL_STATE(251)] = 9258,
  [SMALL_STATE(252)] = 9281,
  [SMALL_STATE(253)] = 9304,
  [SMALL_STATE(254)] = 9331,
  [SMALL_STATE(255)] = 9358,
  [SMALL_STATE(256)] = 9385,
  [SMALL_STATE(257)] = 9408,
  [SMALL_STATE(258)] = 9435,
  [SMALL_STATE(259)] = 9462,
  [SMALL_STATE(260)] = 9485,
  [SMALL_STATE(261)] = 9508,
  [SMALL_STATE(262)] = 9535,
  [SMALL_STATE(263)] = 9558,
  [SMALL_STATE(264)] = 9581,
  [SMALL_STATE(265)] = 9596,
  [SMALL_STATE(266)] = 9619,
  [SMALL_STATE(267)] = 9634,
  [SMALL_STATE(268)] = 9648,
  [SMALL_STATE(269)] = 9670,
  [SMALL_STATE(270)] = 9684,
  [SMALL_STATE(271)] = 9706,
  [SMALL_STATE(272)] = 9728,
  [SMALL_STATE(273)] = 9742,
  [SMALL_STATE(274)] = 9756,
  [SMALL_STATE(275)] = 9778,
  [SMALL_STATE(276)] = 9792,
  [SMALL_STATE(277)] = 9806,
  [SMALL_STATE(278)] = 9828,
  [SMALL_STATE(279)] = 9842,
  [SMALL_STATE(280)] = 9864,
  [SMALL_STATE(281)] = 9878,
  [SMALL_STATE(282)] = 9892,
  [SMALL_STATE(283)] = 9914,
  [SMALL_STATE(284)] = 9933,
  [SMALL_STATE(285)] = 9952,
  [SMALL_STATE(286)] = 9971,
  [SMALL_STATE(287)] = 9990,
  [SMALL_STATE(288)] = 10009,
  [SMALL_STATE(289)] = 10027,
  [SMALL_STATE(290)] = 10047,
  [SMALL_STATE(291)] = 10065,
  [SMALL_STATE(292)] = 10085,
  [SMALL_STATE(293)] = 10105,
  [SMALL_STATE(294)] = 10125,
  [SMALL_STATE(295)] = 10143,
  [SMALL_STATE(296)] = 10158,
  [SMALL_STATE(297)] = 10173,
  [SMALL_STATE(298)] = 10190,
  [SMALL_STATE(299)] = 10207,
  [SMALL_STATE(300)] = 10224,
  [SMALL_STATE(301)] = 10237,
  [SMALL_STATE(302)] = 10252,
  [SMALL_STATE(303)] = 10269,
  [SMALL_STATE(304)] = 10286,
  [SMALL_STATE(305)] = 10303,
  [SMALL_STATE(306)] = 10318,
  [SMALL_STATE(307)] = 10327,
  [SMALL_STATE(308)] = 10342,
  [SMALL_STATE(309)] = 10351,
  [SMALL_STATE(310)] = 10360,
  [SMALL_STATE(311)] = 10375,
  [SMALL_STATE(312)] = 10384,
  [SMALL_STATE(313)] = 10399,
  [SMALL_STATE(314)] = 10408,
  [SMALL_STATE(315)] = 10417,
  [SMALL_STATE(316)] = 10432,
  [SMALL_STATE(317)] = 10449,
  [SMALL_STATE(318)] = 10464,
  [SMALL_STATE(319)] = 10479,
  [SMALL_STATE(320)] = 10494,
  [SMALL_STATE(321)] = 10511,
  [SMALL_STATE(322)] = 10520,
  [SMALL_STATE(323)] = 10530,
  [SMALL_STATE(324)] = 10540,
  [SMALL_STATE(325)] = 10554,
  [SMALL_STATE(326)] = 10568,
  [SMALL_STATE(327)] = 10584,
  [SMALL_STATE(328)] = 10596,
  [SMALL_STATE(329)] = 10608,
  [SMALL_STATE(330)] = 10622,
  [SMALL_STATE(331)] = 10636,
  [SMALL_STATE(332)] = 10650,
  [SMALL_STATE(333)] = 10664,
  [SMALL_STATE(334)] = 10680,
  [SMALL_STATE(335)] = 10696,
  [SMALL_STATE(336)] = 10704,
  [SMALL_STATE(337)] = 10720,
  [SMALL_STATE(338)] = 10734,
  [SMALL_STATE(339)] = 10746,
  [SMALL_STATE(340)] = 10760,
  [SMALL_STATE(341)] = 10776,
  [SMALL_STATE(342)] = 10790,
  [SMALL_STATE(343)] = 10802,
  [SMALL_STATE(344)] = 10816,
  [SMALL_STATE(345)] = 10832,
  [SMALL_STATE(346)] = 10844,
  [SMALL_STATE(347)] = 10856,
  [SMALL_STATE(348)] = 10868,
  [SMALL_STATE(349)] = 10880,
  [SMALL_STATE(350)] = 10892,
  [SMALL_STATE(351)] = 10906,
  [SMALL_STATE(352)] = 10920,
  [SMALL_STATE(353)] = 10932,
  [SMALL_STATE(354)] = 10948,
  [SMALL_STATE(355)] = 10964,
  [SMALL_STATE(356)] = 10972,
  [SMALL_STATE(357)] = 10986,
  [SMALL_STATE(358)] = 11000,
  [SMALL_STATE(359)] = 11014,
  [SMALL_STATE(360)] = 11030,
  [SMALL_STATE(361)] = 11044,
  [SMALL_STATE(362)] = 11056,
  [SMALL_STATE(363)] = 11072,
  [SMALL_STATE(364)] = 11088,
  [SMALL_STATE(365)] = 11102,
  [SMALL_STATE(366)] = 11118,
  [SMALL_STATE(367)] = 11134,
  [SMALL_STATE(368)] = 11150,
  [SMALL_STATE(369)] = 11166,
  [SMALL_STATE(370)] = 11182,
  [SMALL_STATE(371)] = 11198,
  [SMALL_STATE(372)] = 11212,
  [SMALL_STATE(373)] = 11228,
  [SMALL_STATE(374)] = 11244,
  [SMALL_STATE(375)] = 11260,
  [SMALL_STATE(376)] = 11276,
  [SMALL_STATE(377)] = 11292,
  [SMALL_STATE(378)] = 11305,
  [SMALL_STATE(379)] = 11318,
  [SMALL_STATE(380)] = 11331,
  [SMALL_STATE(381)] = 11344,
  [SMALL_STATE(382)] = 11355,
  [SMALL_STATE(383)] = 11368,
  [SMALL_STATE(384)] = 11375,
  [SMALL_STATE(385)] = 11386,
  [SMALL_STATE(386)] = 11399,
  [SMALL_STATE(387)] = 11408,
  [SMALL_STATE(388)] = 11415,
  [SMALL_STATE(389)] = 11426,
  [SMALL_STATE(390)] = 11439,
  [SMALL_STATE(391)] = 11452,
  [SMALL_STATE(392)] = 11463,
  [SMALL_STATE(393)] = 11474,
  [SMALL_STATE(394)] = 11485,
  [SMALL_STATE(395)] = 11492,
  [SMALL_STATE(396)] = 11503,
  [SMALL_STATE(397)] = 11514,
  [SMALL_STATE(398)] = 11525,
  [SMALL_STATE(399)] = 11534,
  [SMALL_STATE(400)] = 11545,
  [SMALL_STATE(401)] = 11556,
  [SMALL_STATE(402)] = 11567,
  [SMALL_STATE(403)] = 11580,
  [SMALL_STATE(404)] = 11593,
  [SMALL_STATE(405)] = 11606,
  [SMALL_STATE(406)] = 11619,
  [SMALL_STATE(407)] = 11632,
  [SMALL_STATE(408)] = 11645,
  [SMALL_STATE(409)] = 11652,
  [SMALL_STATE(410)] = 11665,
  [SMALL_STATE(411)] = 11676,
  [SMALL_STATE(412)] = 11689,
  [SMALL_STATE(413)] = 11702,
  [SMALL_STATE(414)] = 11710,
  [SMALL_STATE(415)] = 11720,
  [SMALL_STATE(416)] = 11728,
  [SMALL_STATE(417)] = 11738,
  [SMALL_STATE(418)] = 11748,
  [SMALL_STATE(419)] = 11758,
  [SMALL_STATE(420)] = 11768,
  [SMALL_STATE(421)] = 11776,
  [SMALL_STATE(422)] = 11784,
  [SMALL_STATE(423)] = 11794,
  [SMALL_STATE(424)] = 11804,
  [SMALL_STATE(425)] = 11814,
  [SMALL_STATE(426)] = 11824,
  [SMALL_STATE(427)] = 11834,
  [SMALL_STATE(428)] = 11844,
  [SMALL_STATE(429)] = 11851,
  [SMALL_STATE(430)] = 11858,
  [SMALL_STATE(431)] = 11865,
  [SMALL_STATE(432)] = 11872,
  [SMALL_STATE(433)] = 11879,
  [SMALL_STATE(434)] = 11886,
  [SMALL_STATE(435)] = 11893,
  [SMALL_STATE(436)] = 11900,
  [SMALL_STATE(437)] = 11907,
  [SMALL_STATE(438)] = 11914,
  [SMALL_STATE(439)] = 11921,
  [SMALL_STATE(440)] = 11928,
  [SMALL_STATE(441)] = 11935,
  [SMALL_STATE(442)] = 11942,
  [SMALL_STATE(443)] = 11949,
  [SMALL_STATE(444)] = 11956,
  [SMALL_STATE(445)] = 11963,
  [SMALL_STATE(446)] = 11970,
  [SMALL_STATE(447)] = 11977,
  [SMALL_STATE(448)] = 11984,
  [SMALL_STATE(449)] = 11991,
  [SMALL_STATE(450)] = 11998,
  [SMALL_STATE(451)] = 12005,
  [SMALL_STATE(452)] = 12012,
  [SMALL_STATE(453)] = 12019,
  [SMALL_STATE(454)] = 12026,
  [SMALL_STATE(455)] = 12033,
  [SMALL_STATE(456)] = 12040,
  [SMALL_STATE(457)] = 12047,
  [SMALL_STATE(458)] = 12054,
  [SMALL_STATE(459)] = 12061,
  [SMALL_STATE(460)] = 12068,
  [SMALL_STATE(461)] = 12075,
  [SMALL_STATE(462)] = 12082,
  [SMALL_STATE(463)] = 12089,
  [SMALL_STATE(464)] = 12096,
  [SMALL_STATE(465)] = 12103,
  [SMALL_STATE(466)] = 12110,
  [SMALL_STATE(467)] = 12117,
  [SMALL_STATE(468)] = 12124,
  [SMALL_STATE(469)] = 12131,
  [SMALL_STATE(470)] = 12138,
  [SMALL_STATE(471)] = 12145,
  [SMALL_STATE(472)] = 12152,
  [SMALL_STATE(473)] = 12159,
  [SMALL_STATE(474)] = 12166,
  [SMALL_STATE(475)] = 12173,
  [SMALL_STATE(476)] = 12180,
  [SMALL_STATE(477)] = 12187,
  [SMALL_STATE(478)] = 12194,
  [SMALL_STATE(479)] = 12201,
  [SMALL_STATE(480)] = 12208,
  [SMALL_STATE(481)] = 12215,
  [SMALL_STATE(482)] = 12222,
  [SMALL_STATE(483)] = 12229,
  [SMALL_STATE(484)] = 12236,
  [SMALL_STATE(485)] = 12243,
  [SMALL_STATE(486)] = 12250,
  [SMALL_STATE(487)] = 12257,
  [SMALL_STATE(488)] = 12264,
  [SMALL_STATE(489)] = 12271,
  [SMALL_STATE(490)] = 12278,
  [SMALL_STATE(491)] = 12285,
  [SMALL_STATE(492)] = 12292,
  [SMALL_STATE(493)] = 12299,
  [SMALL_STATE(494)] = 12306,
  [SMALL_STATE(495)] = 12313,
  [SMALL_STATE(496)] = 12320,
  [SMALL_STATE(497)] = 12327,
  [SMALL_STATE(498)] = 12334,
  [SMALL_STATE(499)] = 12341,
  [SMALL_STATE(500)] = 12348,
  [SMALL_STATE(501)] = 12355,
  [SMALL_STATE(502)] = 12362,
  [SMALL_STATE(503)] = 12369,
  [SMALL_STATE(504)] = 12376,
  [SMALL_STATE(505)] = 12383,
  [SMALL_STATE(506)] = 12390,
  [SMALL_STATE(507)] = 12397,
  [SMALL_STATE(508)] = 12404,
  [SMALL_STATE(509)] = 12411,
  [SMALL_STATE(510)] = 12418,
  [SMALL_STATE(511)] = 12425,
  [SMALL_STATE(512)] = 12432,
  [SMALL_STATE(513)] = 12439,
  [SMALL_STATE(514)] = 12446,
  [SMALL_STATE(515)] = 12453,
  [SMALL_STATE(516)] = 12460,
  [SMALL_STATE(517)] = 12467,
  [SMALL_STATE(518)] = 12474,
  [SMALL_STATE(519)] = 12481,
  [SMALL_STATE(520)] = 12488,
  [SMALL_STATE(521)] = 12495,
  [SMALL_STATE(522)] = 12502,
  [SMALL_STATE(523)] = 12509,
  [SMALL_STATE(524)] = 12516,
  [SMALL_STATE(525)] = 12523,
  [SMALL_STATE(526)] = 12530,
  [SMALL_STATE(527)] = 12537,
  [SMALL_STATE(528)] = 12542,
  [SMALL_STATE(529)] = 12549,
  [SMALL_STATE(530)] = 12556,
  [SMALL_STATE(531)] = 12563,
  [SMALL_STATE(532)] = 12570,
  [SMALL_STATE(533)] = 12577,
  [SMALL_STATE(534)] = 12584,
  [SMALL_STATE(535)] = 12591,
  [SMALL_STATE(536)] = 12598,
  [SMALL_STATE(537)] = 12605,
  [SMALL_STATE(538)] = 12612,
  [SMALL_STATE(539)] = 12619,
  [SMALL_STATE(540)] = 12626,
  [SMALL_STATE(541)] = 12633,
  [SMALL_STATE(542)] = 12640,
  [SMALL_STATE(543)] = 12647,
  [SMALL_STATE(544)] = 12654,
  [SMALL_STATE(545)] = 12661,
  [SMALL_STATE(546)] = 12668,
  [SMALL_STATE(547)] = 12675,
  [SMALL_STATE(548)] = 12682,
  [SMALL_STATE(549)] = 12689,
  [SMALL_STATE(550)] = 12696,
  [SMALL_STATE(551)] = 12703,
  [SMALL_STATE(552)] = 12707,
  [SMALL_STATE(553)] = 12711,
  [SMALL_STATE(554)] = 12715,
  [SMALL_STATE(555)] = 12719,
  [SMALL_STATE(556)] = 12723,
  [SMALL_STATE(557)] = 12727,
  [SMALL_STATE(558)] = 12731,
  [SMALL_STATE(559)] = 12735,
  [SMALL_STATE(560)] = 12739,
  [SMALL_STATE(561)] = 12743,
  [SMALL_STATE(562)] = 12747,
  [SMALL_STATE(563)] = 12751,
  [SMALL_STATE(564)] = 12755,
  [SMALL_STATE(565)] = 12759,
  [SMALL_STATE(566)] = 12763,
  [SMALL_STATE(567)] = 12767,
  [SMALL_STATE(568)] = 12771,
  [SMALL_STATE(569)] = 12775,
  [SMALL_STATE(570)] = 12779,
  [SMALL_STATE(571)] = 12783,
  [SMALL_STATE(572)] = 12787,
  [SMALL_STATE(573)] = 12791,
  [SMALL_STATE(574)] = 12795,
  [SMALL_STATE(575)] = 12799,
  [SMALL_STATE(576)] = 12803,
  [SMALL_STATE(577)] = 12807,
  [SMALL_STATE(578)] = 12811,
  [SMALL_STATE(579)] = 12815,
  [SMALL_STATE(580)] = 12819,
  [SMALL_STATE(581)] = 12823,
  [SMALL_STATE(582)] = 12827,
  [SMALL_STATE(583)] = 12831,
  [SMALL_STATE(584)] = 12835,
  [SMALL_STATE(585)] = 12839,
  [SMALL_STATE(586)] = 12843,
  [SMALL_STATE(587)] = 12847,
  [SMALL_STATE(588)] = 12851,
  [SMALL_STATE(589)] = 12855,
  [SMALL_STATE(590)] = 12859,
  [SMALL_STATE(591)] = 12863,
  [SMALL_STATE(592)] = 12867,
  [SMALL_STATE(593)] = 12871,
  [SMALL_STATE(594)] = 12875,
  [SMALL_STATE(595)] = 12879,
  [SMALL_STATE(596)] = 12883,
  [SMALL_STATE(597)] = 12887,
  [SMALL_STATE(598)] = 12891,
  [SMALL_STATE(599)] = 12895,
  [SMALL_STATE(600)] = 12899,
  [SMALL_STATE(601)] = 12903,
  [SMALL_STATE(602)] = 12907,
  [SMALL_STATE(603)] = 12911,
  [SMALL_STATE(604)] = 12915,
  [SMALL_STATE(605)] = 12919,
  [SMALL_STATE(606)] = 12923,
  [SMALL_STATE(607)] = 12927,
  [SMALL_STATE(608)] = 12931,
  [SMALL_STATE(609)] = 12935,
  [SMALL_STATE(610)] = 12939,
  [SMALL_STATE(611)] = 12943,
  [SMALL_STATE(612)] = 12947,
  [SMALL_STATE(613)] = 12951,
  [SMALL_STATE(614)] = 12955,
  [SMALL_STATE(615)] = 12959,
  [SMALL_STATE(616)] = 12963,
  [SMALL_STATE(617)] = 12967,
  [SMALL_STATE(618)] = 12971,
  [SMALL_STATE(619)] = 12975,
  [SMALL_STATE(620)] = 12979,
  [SMALL_STATE(621)] = 12983,
  [SMALL_STATE(622)] = 12987,
  [SMALL_STATE(623)] = 12991,
  [SMALL_STATE(624)] = 12995,
  [SMALL_STATE(625)] = 12999,
  [SMALL_STATE(626)] = 13003,
  [SMALL_STATE(627)] = 13007,
  [SMALL_STATE(628)] = 13011,
  [SMALL_STATE(629)] = 13015,
  [SMALL_STATE(630)] = 13019,
  [SMALL_STATE(631)] = 13023,
  [SMALL_STATE(632)] = 13027,
  [SMALL_STATE(633)] = 13031,
  [SMALL_STATE(634)] = 13035,
  [SMALL_STATE(635)] = 13039,
  [SMALL_STATE(636)] = 13043,
  [SMALL_STATE(637)] = 13047,
  [SMALL_STATE(638)] = 13051,
  [SMALL_STATE(639)] = 13055,
  [SMALL_STATE(640)] = 13059,
  [SMALL_STATE(641)] = 13063,
  [SMALL_STATE(642)] = 13067,
  [SMALL_STATE(643)] = 13071,
  [SMALL_STATE(644)] = 13075,
  [SMALL_STATE(645)] = 13079,
  [SMALL_STATE(646)] = 13083,
  [SMALL_STATE(647)] = 13087,
  [SMALL_STATE(648)] = 13091,
  [SMALL_STATE(649)] = 13095,
  [SMALL_STATE(650)] = 13099,
  [SMALL_STATE(651)] = 13103,
  [SMALL_STATE(652)] = 13107,
  [SMALL_STATE(653)] = 13111,
  [SMALL_STATE(654)] = 13115,
  [SMALL_STATE(655)] = 13119,
  [SMALL_STATE(656)] = 13123,
  [SMALL_STATE(657)] = 13127,
  [SMALL_STATE(658)] = 13131,
  [SMALL_STATE(659)] = 13135,
  [SMALL_STATE(660)] = 13139,
  [SMALL_STATE(661)] = 13143,
  [SMALL_STATE(662)] = 13147,
  [SMALL_STATE(663)] = 13151,
  [SMALL_STATE(664)] = 13155,
  [SMALL_STATE(665)] = 13159,
  [SMALL_STATE(666)] = 13163,
  [SMALL_STATE(667)] = 13167,
  [SMALL_STATE(668)] = 13171,
  [SMALL_STATE(669)] = 13175,
  [SMALL_STATE(670)] = 13179,
  [SMALL_STATE(671)] = 13183,
  [SMALL_STATE(672)] = 13187,
  [SMALL_STATE(673)] = 13191,
  [SMALL_STATE(674)] = 13195,
  [SMALL_STATE(675)] = 13199,
  [SMALL_STATE(676)] = 13203,
  [SMALL_STATE(677)] = 13207,
  [SMALL_STATE(678)] = 13211,
  [SMALL_STATE(679)] = 13215,
  [SMALL_STATE(680)] = 13219,
  [SMALL_STATE(681)] = 13223,
  [SMALL_STATE(682)] = 13227,
  [SMALL_STATE(683)] = 13231,
  [SMALL_STATE(684)] = 13235,
  [SMALL_STATE(685)] = 13239,
  [SMALL_STATE(686)] = 13243,
  [SMALL_STATE(687)] = 13247,
  [SMALL_STATE(688)] = 13251,
  [SMALL_STATE(689)] = 13255,
  [SMALL_STATE(690)] = 13259,
  [SMALL_STATE(691)] = 13263,
  [SMALL_STATE(692)] = 13267,
  [SMALL_STATE(693)] = 13271,
  [SMALL_STATE(694)] = 13275,
  [SMALL_STATE(695)] = 13279,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(486),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(654),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(690),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(680),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(451),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(680),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(458),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(456),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(455),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(454),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(344),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(452),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(451),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(450),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(449),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(476),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(448),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(447),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(446),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(445),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(444),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(443),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(442),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(441),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(667),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(679),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(6),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(591),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(532),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(438),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(531),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(530),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(359),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(524),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(464),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(462),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(523),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(467),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(489),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(518),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(437),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(517),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(516),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(515),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(490),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(461),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(532),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(438),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(531),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(530),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(359),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(524),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(464),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(462),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(523),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(467),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(489),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(481),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(437),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(517),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(480),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(515),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(490),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(461),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(39),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(39),
  [385] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(420),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(421),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(597),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(40),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(43),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(43),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(638),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(41),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 1),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(75),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 6, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 3, .production_id = 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 5, .production_id = 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(250),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 4, .production_id = 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(83),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encode_format, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(245),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 3),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__port_number, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 3),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 5),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 5),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_rewrite, 5, .production_id = 2),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_rewrite, 5, .production_id = 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_code, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_route, 5, .production_id = 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_route, 5, .production_id = 2),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_name, 1),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_name, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 4),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 4),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 4),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 4),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_rewrite, 3, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_rewrite, 3, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [731] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 5),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 5),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_route, 7, .production_id = 2),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_route, 7, .production_id = 2),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 4),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [763] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [783] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [791] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [794] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(287),
  [797] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(323),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(574),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(574),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(623),
  [809] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(486),
  [812] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(614),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [821] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [825] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [835] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(223),
  [838] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(223),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [843] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(554),
  [846] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(466),
  [849] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(540),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(465),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [861] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [863] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(633),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [891] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(507),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 6),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 2),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 2),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 3),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 3),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 5),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 5),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [933] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [935] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [937] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(488),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [949] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [953] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(251),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2),
  [958] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(474),
  [961] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(482),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(495),
  [967] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(252),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(473),
  [975] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(483),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(484),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [985] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(271),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2),
  [1048] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(475),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(488),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [1058] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1072] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(286),
  [1075] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2),
  [1077] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(522),
  [1080] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(521),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(656),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(632),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [1109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [1113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(683),
  [1121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 3, .production_id = 19),
  [1123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [1125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [1127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 4, .production_id = 16),
  [1129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [1131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_format, 4, .production_id = 16),
  [1133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_level, 4, .production_id = 16),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 3, .production_id = 16),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 7),
  [1143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 6),
  [1145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(315),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2),
  [1150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(542),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [1157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [1163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 4),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_matcher, 2),
  [1169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(682),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_auto_https, 3, .production_id = 1),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2),
  [1213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(337),
  [1216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(337),
  [1219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(653),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(675),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_email, 4, .production_id = 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(357),
  [1276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6),
  [1278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(387),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [1299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(686),
  [1309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [1363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6), SHIFT_REPEAT(592),
  [1368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(681),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [1384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(646),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 1, .production_id = 4),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [1396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(393),
  [1405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 5, .production_id = 21),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(691),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(643),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [1443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(555),
  [1451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [1453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(671),
  [1459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(678),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(687),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(685),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(684),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(661),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(677),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(676),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(674),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(693),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(692),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(672),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 3, .production_id = 11),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(673),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_algorithm, 1),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1817] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(694),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(695),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path, 3, .production_id = 11),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(688),
  [1875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [1889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(689),
  [1895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 5, .production_id = 18),
  [1959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_caddy_external_scanner_create(void);
void tree_sitter_caddy_external_scanner_destroy(void *);
bool tree_sitter_caddy_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_caddy_external_scanner_serialize(void *, char *);
void tree_sitter_caddy_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_caddy(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_caddy_external_scanner_create,
      tree_sitter_caddy_external_scanner_destroy,
      tree_sitter_caddy_external_scanner_scan,
      tree_sitter_caddy_external_scanner_serialize,
      tree_sitter_caddy_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
