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
#define STATE_COUNT 671
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 183
#define ALIAS_COUNT 0
#define TOKEN_COUNT 115
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
  anon_sym_root = 101,
  anon_sym_tls = 102,
  anon_sym_internal = 103,
  anon_sym_route = 104,
  sym_email_address = 105,
  anon_sym_STAR = 106,
  anon_sym_email = 107,
  anon_sym_auto_https = 108,
  anon_sym_off = 109,
  anon_sym_disable_redirects = 110,
  anon_sym_ignore_loaded_certs = 111,
  anon_sym_disable_certs = 112,
  sym_snippet_name = 113,
  sym__eof = 114,
  sym_document = 115,
  sym__horizontal_whitespaces = 116,
  sym_site_block = 117,
  sym_site_address = 118,
  sym_protocol = 119,
  sym__ip_or_domain_address = 120,
  sym__port_number = 121,
  sym_matcher_definition = 122,
  sym_standard_matcher = 123,
  sym_matcher_path = 124,
  sym_matcher_path_regexp = 125,
  sym_directive_block = 126,
  sym_directive_abort = 127,
  sym_directive_basicauth = 128,
  sym_hash_algorithm = 129,
  sym_basicauth_credential = 130,
  sym_directive_bind = 131,
  sym_network_address_wo_port = 132,
  sym__network = 133,
  sym_unix_path = 134,
  sym_directive_encode = 135,
  sym_encode_format = 136,
  sym_directive_file_server = 137,
  sym_directive_error = 138,
  sym_directive_handle = 139,
  sym_directive_handle_path = 140,
  sym_directive_header = 141,
  sym_field_manipulator = 142,
  sym_field_replace = 143,
  sym_field_add_or_set = 144,
  sym_field_delete = 145,
  sym_field_set_default = 146,
  sym_header_name = 147,
  sym_header_value = 148,
  sym_directive_import = 149,
  sym_directive_log = 150,
  sym_log_option_output = 151,
  sym__log_output_file = 152,
  sym_log_option_format = 153,
  sym_log_option_level = 154,
  sym_directive_redir = 155,
  sym_directive_request_body = 156,
  sym_redir_or_rewrite_target = 157,
  sym_directive_reverse_proxy = 158,
  sym_redir_code = 159,
  sym_directive_root = 160,
  sym_directive_tls = 161,
  sym_directive_route = 162,
  sym_matcher_token = 163,
  sym_global_options_block = 164,
  sym_global_option_email = 165,
  sym_global_option_auto_https = 166,
  sym_snippet = 167,
  aux_sym_document_repeat1 = 168,
  aux_sym_site_block_repeat1 = 169,
  aux_sym_matcher_definition_repeat1 = 170,
  aux_sym_directive_basicauth_repeat1 = 171,
  aux_sym_directive_bind_repeat1 = 172,
  aux_sym_directive_encode_repeat1 = 173,
  aux_sym_directive_file_server_repeat1 = 174,
  aux_sym_directive_file_server_repeat2 = 175,
  aux_sym_directive_handle_repeat1 = 176,
  aux_sym_directive_header_repeat1 = 177,
  aux_sym_directive_log_repeat1 = 178,
  aux_sym__log_output_file_repeat1 = 179,
  aux_sym_directive_request_body_repeat1 = 180,
  aux_sym_directive_reverse_proxy_repeat1 = 181,
  aux_sym_global_options_block_repeat1 = 182,
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 9,
  [15] = 10,
  [16] = 13,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 22,
  [31] = 29,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 33,
  [36] = 34,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 39,
  [43] = 37,
  [44] = 40,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 46,
  [53] = 45,
  [54] = 54,
  [55] = 48,
  [56] = 47,
  [57] = 57,
  [58] = 48,
  [59] = 47,
  [60] = 51,
  [61] = 50,
  [62] = 54,
  [63] = 63,
  [64] = 49,
  [65] = 65,
  [66] = 66,
  [67] = 57,
  [68] = 68,
  [69] = 63,
  [70] = 70,
  [71] = 65,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 68,
  [76] = 70,
  [77] = 74,
  [78] = 72,
  [79] = 73,
  [80] = 80,
  [81] = 81,
  [82] = 66,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 80,
  [87] = 87,
  [88] = 88,
  [89] = 81,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 87,
  [96] = 96,
  [97] = 97,
  [98] = 90,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 83,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 91,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 91,
  [129] = 83,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 92,
  [144] = 144,
  [145] = 88,
  [146] = 146,
  [147] = 147,
  [148] = 84,
  [149] = 149,
  [150] = 85,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 138,
  [157] = 132,
  [158] = 154,
  [159] = 97,
  [160] = 96,
  [161] = 112,
  [162] = 119,
  [163] = 155,
  [164] = 153,
  [165] = 100,
  [166] = 149,
  [167] = 146,
  [168] = 124,
  [169] = 101,
  [170] = 152,
  [171] = 103,
  [172] = 147,
  [173] = 139,
  [174] = 144,
  [175] = 99,
  [176] = 142,
  [177] = 134,
  [178] = 141,
  [179] = 105,
  [180] = 127,
  [181] = 126,
  [182] = 137,
  [183] = 136,
  [184] = 135,
  [185] = 115,
  [186] = 120,
  [187] = 94,
  [188] = 83,
  [189] = 91,
  [190] = 106,
  [191] = 133,
  [192] = 93,
  [193] = 102,
  [194] = 108,
  [195] = 109,
  [196] = 123,
  [197] = 107,
  [198] = 131,
  [199] = 130,
  [200] = 111,
  [201] = 125,
  [202] = 113,
  [203] = 122,
  [204] = 118,
  [205] = 116,
  [206] = 114,
  [207] = 110,
  [208] = 117,
  [209] = 209,
  [210] = 210,
  [211] = 210,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 214,
  [218] = 218,
  [219] = 215,
  [220] = 216,
  [221] = 218,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 154,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 233,
  [237] = 81,
  [238] = 235,
  [239] = 232,
  [240] = 234,
  [241] = 241,
  [242] = 83,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 91,
  [248] = 241,
  [249] = 243,
  [250] = 243,
  [251] = 245,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 107,
  [256] = 256,
  [257] = 257,
  [258] = 111,
  [259] = 127,
  [260] = 91,
  [261] = 254,
  [262] = 120,
  [263] = 263,
  [264] = 83,
  [265] = 153,
  [266] = 263,
  [267] = 267,
  [268] = 267,
  [269] = 132,
  [270] = 270,
  [271] = 271,
  [272] = 270,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 275,
  [279] = 279,
  [280] = 279,
  [281] = 276,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 283,
  [288] = 288,
  [289] = 289,
  [290] = 284,
  [291] = 291,
  [292] = 292,
  [293] = 289,
  [294] = 294,
  [295] = 295,
  [296] = 282,
  [297] = 294,
  [298] = 292,
  [299] = 299,
  [300] = 284,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 291,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 315,
  [317] = 317,
  [318] = 306,
  [319] = 310,
  [320] = 320,
  [321] = 307,
  [322] = 311,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 317,
  [328] = 308,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 323,
  [333] = 324,
  [334] = 334,
  [335] = 309,
  [336] = 314,
  [337] = 337,
  [338] = 334,
  [339] = 339,
  [340] = 340,
  [341] = 312,
  [342] = 342,
  [343] = 329,
  [344] = 344,
  [345] = 313,
  [346] = 325,
  [347] = 337,
  [348] = 348,
  [349] = 331,
  [350] = 350,
  [351] = 340,
  [352] = 352,
  [353] = 342,
  [354] = 350,
  [355] = 355,
  [356] = 339,
  [357] = 348,
  [358] = 358,
  [359] = 359,
  [360] = 320,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 363,
  [366] = 366,
  [367] = 367,
  [368] = 362,
  [369] = 361,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 355,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 377,
  [382] = 371,
  [383] = 376,
  [384] = 378,
  [385] = 379,
  [386] = 366,
  [387] = 380,
  [388] = 374,
  [389] = 380,
  [390] = 370,
  [391] = 391,
  [392] = 367,
  [393] = 377,
  [394] = 394,
  [395] = 378,
  [396] = 379,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 398,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 400,
  [406] = 397,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 399,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 38,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 417,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 418,
  [432] = 419,
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
  [446] = 412,
  [447] = 447,
  [448] = 435,
  [449] = 449,
  [450] = 416,
  [451] = 441,
  [452] = 447,
  [453] = 435,
  [454] = 427,
  [455] = 445,
  [456] = 456,
  [457] = 412,
  [458] = 428,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 420,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 463,
  [469] = 441,
  [470] = 470,
  [471] = 447,
  [472] = 472,
  [473] = 429,
  [474] = 445,
  [475] = 461,
  [476] = 467,
  [477] = 430,
  [478] = 413,
  [479] = 479,
  [480] = 433,
  [481] = 481,
  [482] = 482,
  [483] = 463,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 481,
  [488] = 482,
  [489] = 424,
  [490] = 486,
  [491] = 491,
  [492] = 470,
  [493] = 493,
  [494] = 494,
  [495] = 464,
  [496] = 460,
  [497] = 459,
  [498] = 421,
  [499] = 499,
  [500] = 500,
  [501] = 465,
  [502] = 502,
  [503] = 449,
  [504] = 422,
  [505] = 505,
  [506] = 506,
  [507] = 494,
  [508] = 491,
  [509] = 484,
  [510] = 510,
  [511] = 464,
  [512] = 439,
  [513] = 513,
  [514] = 514,
  [515] = 470,
  [516] = 40,
  [517] = 506,
  [518] = 505,
  [519] = 440,
  [520] = 437,
  [521] = 479,
  [522] = 502,
  [523] = 499,
  [524] = 500,
  [525] = 525,
  [526] = 438,
  [527] = 423,
  [528] = 465,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 92,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 535,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 542,
  [557] = 533,
  [558] = 534,
  [559] = 529,
  [560] = 553,
  [561] = 533,
  [562] = 534,
  [563] = 533,
  [564] = 534,
  [565] = 533,
  [566] = 534,
  [567] = 567,
  [568] = 568,
  [569] = 534,
  [570] = 536,
  [571] = 571,
  [572] = 572,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 553,
  [577] = 577,
  [578] = 578,
  [579] = 551,
  [580] = 580,
  [581] = 581,
  [582] = 582,
  [583] = 580,
  [584] = 582,
  [585] = 568,
  [586] = 586,
  [587] = 581,
  [588] = 588,
  [589] = 548,
  [590] = 590,
  [591] = 548,
  [592] = 592,
  [593] = 593,
  [594] = 547,
  [595] = 595,
  [596] = 540,
  [597] = 546,
  [598] = 598,
  [599] = 88,
  [600] = 600,
  [601] = 601,
  [602] = 547,
  [603] = 603,
  [604] = 567,
  [605] = 84,
  [606] = 593,
  [607] = 607,
  [608] = 120,
  [609] = 535,
  [610] = 85,
  [611] = 567,
  [612] = 612,
  [613] = 580,
  [614] = 38,
  [615] = 40,
  [616] = 616,
  [617] = 530,
  [618] = 601,
  [619] = 580,
  [620] = 530,
  [621] = 601,
  [622] = 530,
  [623] = 601,
  [624] = 530,
  [625] = 601,
  [626] = 577,
  [627] = 627,
  [628] = 546,
  [629] = 629,
  [630] = 630,
  [631] = 572,
  [632] = 632,
  [633] = 553,
  [634] = 634,
  [635] = 607,
  [636] = 636,
  [637] = 637,
  [638] = 539,
  [639] = 639,
  [640] = 640,
  [641] = 575,
  [642] = 642,
  [643] = 643,
  [644] = 642,
  [645] = 592,
  [646] = 574,
  [647] = 636,
  [648] = 637,
  [649] = 595,
  [650] = 650,
  [651] = 639,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 640,
  [656] = 552,
  [657] = 530,
  [658] = 643,
  [659] = 650,
  [660] = 660,
  [661] = 601,
  [662] = 627,
  [663] = 603,
  [664] = 664,
  [665] = 665,
  [666] = 660,
  [667] = 551,
  [668] = 545,
  [669] = 600,
  [670] = 533,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(719);
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '\f') ADVANCE(722);
      if (lookahead == '\r') ADVANCE(722);
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(726);
      if (lookahead == '\'') ADVANCE(1199);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '+') ADVANCE(1192);
      if (lookahead == '-') ADVANCE(1193);
      if (lookahead == '/') ADVANCE(927);
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '3') ADVANCE(885);
      if (lookahead == '4') ADVANCE(935);
      if (lookahead == '6') ADVANCE(937);
      if (lookahead == ':') ADVANCE(878);
      if (lookahead == '?') ADVANCE(1195);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'E') ADVANCE(369);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'z') ADVANCE(634);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(722);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == 8232) ADVANCE(722);
      if (lookahead == 8233) ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
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
      if (lookahead == '\n') ADVANCE(722);
      if (lookahead == '\f') ADVANCE(722);
      if (lookahead == '\r') ADVANCE(722);
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(726);
      if (lookahead == '\'') ADVANCE(1199);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '+') ADVANCE(1192);
      if (lookahead == '-') ADVANCE(1193);
      if (lookahead == '/') ADVANCE(927);
      if (lookahead == '1') ADVANCE(888);
      if (lookahead == '2') ADVANCE(882);
      if (lookahead == '3') ADVANCE(885);
      if (lookahead == '4') ADVANCE(935);
      if (lookahead == '6') ADVANCE(937);
      if (lookahead == ':') ADVANCE(878);
      if (lookahead == '?') ADVANCE(1195);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'E') ADVANCE(369);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(556);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(501);
      if (lookahead == 'g') ADVANCE(598);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(494);
      if (lookahead == 'j') ADVANCE(633);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'z') ADVANCE(634);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(722);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == 8232) ADVANCE(722);
      if (lookahead == 8233) ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(885);
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
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1512);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1512);
      if ((1 <= lookahead && lookahead <= 11) ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1513);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1514);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1514);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1514);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1514);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1514);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
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
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '5') ADVANCE(23);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '5') ADVANCE(28);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1513);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
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
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1197);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(39)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1198);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1201);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(40)
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1202);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(951);
      if (lookahead == '2') ADVANCE(947);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(1058);
      if (lookahead == 'b') ADVANCE(1057);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == 'f') ADVANCE(1059);
      if (lookahead == 'h') ADVANCE(1076);
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == 't') ADVANCE(1081);
      if (lookahead == 'u') ADVANCE(1085);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1066);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(951);
      if (lookahead == '2') ADVANCE(947);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(1058);
      if (lookahead == 'b') ADVANCE(1057);
      if (lookahead == 'e') ADVANCE(1061);
      if (lookahead == 'f') ADVANCE(1059);
      if (lookahead == 'h') ADVANCE(1076);
      if (lookahead == 'i') ADVANCE(1111);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == 't') ADVANCE(1081);
      if (lookahead == 'u') ADVANCE(1085);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1066);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(1078);
      if (lookahead == 'b') ADVANCE(1074);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == 'f') ADVANCE(1104);
      if (lookahead == 'h') ADVANCE(1076);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == 't') ADVANCE(1108);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(1078);
      if (lookahead == 'b') ADVANCE(1074);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == 'f') ADVANCE(1104);
      if (lookahead == 'h') ADVANCE(1076);
      if (lookahead == 'i') ADVANCE(1112);
      if (lookahead == 'l') ADVANCE(1116);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == 't') ADVANCE(1108);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '\'') ADVANCE(1200);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(45)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(1196);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '/') ADVANCE(946);
      if (lookahead == '@') ADVANCE(897);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '1') ADVANCE(951);
      if (lookahead == '2') ADVANCE(947);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(1060);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 't') ADVANCE(1082);
      if (lookahead == 'u') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1066);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(942);
      if (lookahead == '1') ADVANCE(951);
      if (lookahead == '2') ADVANCE(947);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1066);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(942);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(943);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'b') ADVANCE(957);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(988);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead == 'l') ADVANCE(1000);
      if (lookahead == 'r') ADVANCE(973);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(50);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(943);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'b') ADVANCE(957);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead == 'f') ADVANCE(988);
      if (lookahead == 'h') ADVANCE(962);
      if (lookahead == 'i') ADVANCE(995);
      if (lookahead == 'l') ADVANCE(1000);
      if (lookahead == 'r') ADVANCE(973);
      if (lookahead == 't') ADVANCE(993);
      if (lookahead == '}') ADVANCE(733);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(717);
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
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(281);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(716);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'd') ADVANCE(510);
      if (lookahead == 'f') ADVANCE(515);
      if (lookahead == 's') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(697);
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
      if (lookahead == '"') ADVANCE(1176);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '3') ADVANCE(1483);
      if (lookahead == '4') ADVANCE(1381);
      if (lookahead == '@') ADVANCE(896);
      if (lookahead == 'a') ADVANCE(1393);
      if (lookahead == 'b') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'f') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1392);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'l') ADVANCE(1435);
      if (lookahead == 'p') ADVANCE(1408);
      if (lookahead == 'r') ADVANCE(1403);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
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
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '3') ADVANCE(1483);
      if (lookahead == '4') ADVANCE(1381);
      if (lookahead == '@') ADVANCE(896);
      if (lookahead == 'a') ADVANCE(1393);
      if (lookahead == 'b') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'f') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1392);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'l') ADVANCE(1435);
      if (lookahead == 'p') ADVANCE(1408);
      if (lookahead == 'r') ADVANCE(1403);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
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
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '3') ADVANCE(1483);
      if (lookahead == '4') ADVANCE(1381);
      if (lookahead == 'a') ADVANCE(1393);
      if (lookahead == 'b') ADVANCE(1386);
      if (lookahead == 'e') ADVANCE(1430);
      if (lookahead == 'f') ADVANCE(1420);
      if (lookahead == 'h') ADVANCE(1392);
      if (lookahead == 'i') ADVANCE(1426);
      if (lookahead == 'l') ADVANCE(1435);
      if (lookahead == 'p') ADVANCE(1408);
      if (lookahead == 'r') ADVANCE(1403);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
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
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '1') ADVANCE(263);
      if (lookahead == '2') ADVANCE(261);
      if (lookahead == ':') ADVANCE(879);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '3') ADVANCE(696);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'g') ADVANCE(680);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'z') ADVANCE(634);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(60);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1192);
      if (lookahead == '-') ADVANCE(1194);
      if (lookahead == '?') ADVANCE(1195);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(722);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1192);
      if (lookahead == '-') ADVANCE(1194);
      if (lookahead == '?') ADVANCE(1195);
      if (lookahead == 'd') ADVANCE(915);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(722);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '3') ADVANCE(696);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(536);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == 'g') ADVANCE(680);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'z') ADVANCE(634);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
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
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(721);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(544);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(534);
      if (lookahead == 'l') ADVANCE(558);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(525);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == 133) ADVANCE(723);
      if (lookahead == 134) ADVANCE(724);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(721);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == '}') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(725);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(902);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == '}') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(725);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(720);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(725);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(903);
      if (lookahead != 0) ADVANCE(906);
      END_STATE();
    case 69:
      if (lookahead == '%') ADVANCE(714);
      END_STATE();
    case 70:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 71:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 82:
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == '%') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == '%') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == '%') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(786);
      END_STATE();
    case 86:
      if (lookahead == '%') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == '%') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '*') ADVANCE(1518);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '@') ADVANCE(896);
      if (lookahead == 'h') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 89:
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'h') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(89)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1376);
      END_STATE();
    case 90:
      if (lookahead == ')') ADVANCE(1525);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '+') ADVANCE(1192);
      if (lookahead == '-') ADVANCE(1194);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '?') ADVANCE(1195);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == '{') ADVANCE(731);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1515);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '2') ADVANCE(100);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '5') ADVANCE(101);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1511);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(104);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 't') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(211);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 's') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 's') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '_') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'h') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 't') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(249);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '8') ADVANCE(250);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'x') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(258);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(259);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '0') ADVANCE(220);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == '_') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'l') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'o') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (lookahead == 'p') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '5') ADVANCE(231);
      if (lookahead == ':') ADVANCE(330);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 263:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '5') ADVANCE(242);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 265:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 266:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 267:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '5') ADVANCE(245);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 268:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 269:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 272:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 'a') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 273:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 'm') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 274:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 275:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 276:
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 277:
      if (lookahead == '-') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(876);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(689);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(713);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(281);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '5') ADVANCE(284);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(285);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(282);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == '.') ADVANCE(320);
      END_STATE();
    case 288:
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '5') ADVANCE(289);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(290);
      END_STATE();
    case 289:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(287);
      END_STATE();
    case 290:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 291:
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '.') ADVANCE(322);
      END_STATE();
    case 293:
      if (lookahead == '.') ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == '.') ADVANCE(325);
      END_STATE();
    case 295:
      if (lookahead == '.') ADVANCE(325);
      if (lookahead == '5') ADVANCE(296);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(297);
      END_STATE();
    case 296:
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(294);
      END_STATE();
    case 297:
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 298:
      if (lookahead == '.') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 299:
      if (lookahead == '.') ADVANCE(317);
      END_STATE();
    case 300:
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '5') ADVANCE(301);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(303);
      END_STATE();
    case 301:
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(299);
      END_STATE();
    case 302:
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 304:
      if (lookahead == '.') ADVANCE(318);
      END_STATE();
    case 305:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '5') ADVANCE(306);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(308);
      END_STATE();
    case 306:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(304);
      END_STATE();
    case 307:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 309:
      if (lookahead == '/') ADVANCE(927);
      if (lookahead == '4') ADVANCE(934);
      if (lookahead == '6') ADVANCE(936);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(309)
      END_STATE();
    case 310:
      if (lookahead == '/') ADVANCE(741);
      END_STATE();
    case 311:
      if (lookahead == '/') ADVANCE(742);
      END_STATE();
    case 312:
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 313:
      if (lookahead == '/') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == '0') ADVANCE(787);
      if (lookahead == '1') ADVANCE(819);
      if (lookahead == '2') ADVANCE(793);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 315:
      if (lookahead == '0') ADVANCE(324);
      END_STATE();
    case 316:
      if (lookahead == '0') ADVANCE(304);
      if (lookahead == '1') ADVANCE(307);
      if (lookahead == '2') ADVANCE(305);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 317:
      if (lookahead == '0') ADVANCE(282);
      if (lookahead == '1') ADVANCE(286);
      if (lookahead == '2') ADVANCE(283);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 318:
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == '1') ADVANCE(302);
      if (lookahead == '2') ADVANCE(300);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 319:
      if (lookahead == '1') ADVANCE(298);
      if (lookahead == '2') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 320:
      if (lookahead == '1') ADVANCE(759);
      if (lookahead == '2') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      END_STATE();
    case 321:
      if (lookahead == '1') ADVANCE(269);
      if (lookahead == '2') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 322:
      if (lookahead == '1') ADVANCE(862);
      if (lookahead == '2') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 323:
      if (lookahead == '1') ADVANCE(751);
      if (lookahead == '2') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 324:
      if (lookahead == '1') ADVANCE(1488);
      END_STATE();
    case 325:
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == '2') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 326:
      if (lookahead == '1') ADVANCE(266);
      if (lookahead == '2') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 327:
      if (lookahead == '1') ADVANCE(813);
      if (lookahead == '2') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(332);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(333);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(331);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(313);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(359);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(360);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(361);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 362:
      if (lookahead == '@') ADVANCE(370);
      END_STATE();
    case 363:
      if (lookahead == 'F') ADVANCE(365);
      END_STATE();
    case 364:
      if (lookahead == 'N') ADVANCE(363);
      END_STATE();
    case 365:
      if (lookahead == 'O') ADVANCE(1234);
      END_STATE();
    case 366:
      if (lookahead == 'O') ADVANCE(368);
      END_STATE();
    case 367:
      if (lookahead == 'R') ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == 'R') ADVANCE(1236);
      END_STATE();
    case 369:
      if (lookahead == 'R') ADVANCE(367);
      END_STATE();
    case 370:
      if (lookahead == '[') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 371:
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1516);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1516);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 373:
      if (lookahead == '\\') ADVANCE(372);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 374:
      if (lookahead == '_') ADVANCE(436);
      END_STATE();
    case 375:
      if (lookahead == '_') ADVANCE(425);
      END_STATE();
    case 376:
      if (lookahead == '_') ADVANCE(500);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(528);
      END_STATE();
    case 380:
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(584);
      END_STATE();
    case 382:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 383:
      if (lookahead == '_') ADVANCE(657);
      END_STATE();
    case 384:
      if (lookahead == '_') ADVANCE(625);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(671);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(624);
      if (lookahead == 'i') ADVANCE(546);
      if (lookahead == 'r') ADVANCE(554);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(535);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(505);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(679);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(549);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(643);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(601);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(653);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(639);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(597);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 't') ADVANCE(538);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(547);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 411:
      if (lookahead == 'b') ADVANCE(560);
      END_STATE();
    case 412:
      if (lookahead == 'b') ADVANCE(560);
      if (lookahead == 'u') ADVANCE(650);
      END_STATE();
    case 413:
      if (lookahead == 'b') ADVANCE(567);
      END_STATE();
    case 414:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 415:
      if (lookahead == 'b') ADVANCE(531);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(516);
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 417:
      if (lookahead == 'c') ADVANCE(575);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(565);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(660);
      END_STATE();
    case 425:
      if (lookahead == 'c') ADVANCE(486);
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 426:
      if (lookahead == 'c') ADVANCE(487);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(923);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(1166);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(1215);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(1218);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(1220);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(676);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'q') ADVANCE(664);
      if (lookahead == 'v') ADVANCE(472);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == 'k') ADVANCE(483);
      if (lookahead == 'l') ADVANCE(570);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == 'u') ADVANCE(551);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(378);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(394);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(473);
      END_STATE();
    case 441:
      if (lookahead == 'd') ADVANCE(527);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(512);
      END_STATE();
    case 443:
      if (lookahead == 'd') ADVANCE(479);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(668);
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(522);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(559);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1217);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1507);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1161);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1181);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1231);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1245);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1219);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1221);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(1216);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(519);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(550);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(616);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(666);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(579);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 487:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(464);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(1521);
      END_STATE();
    case 490:
      if (lookahead == 'f') ADVANCE(489);
      if (lookahead == 'u') ADVANCE(654);
      END_STATE();
    case 491:
      if (lookahead == 'f') ADVANCE(555);
      if (lookahead == 't') ADVANCE(468);
      END_STATE();
    case 492:
      if (lookahead == 'f') ADVANCE(569);
      END_STATE();
    case 493:
      if (lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 494:
      if (lookahead == 'g') ADVANCE(553);
      if (lookahead == 'm') ADVANCE(588);
      if (lookahead == 'n') ADVANCE(491);
      if (lookahead == 'p') ADVANCE(932);
      END_STATE();
    case 495:
      if (lookahead == 'g') ADVANCE(462);
      END_STATE();
    case 496:
      if (lookahead == 'h') ADVANCE(898);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(911);
      END_STATE();
    case 498:
      if (lookahead == 'h') ADVANCE(1182);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 500:
      if (lookahead == 'h') ADVANCE(662);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(681);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(672);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(518);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(577);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(541);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(628);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(682);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead == 'o') ADVANCE(596);
      END_STATE();
    case 515:
      if (lookahead == 'i') ADVANCE(533);
      END_STATE();
    case 516:
      if (lookahead == 'k') ADVANCE(474);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(1495);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(1519);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(1233);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(1505);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(523);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(499);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(618);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(571);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(484);
      END_STATE();
    case 533:
      if (lookahead == 'l') ADVANCE(460);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(588);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(940);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(517);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead == 't') ADVANCE(578);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(459);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 543:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(1232);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(469);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(649);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(566);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(1235);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(548);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(493);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(673);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(542);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(591);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(631);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(928);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(930);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(1165);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(1222);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(899);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(665);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(642);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(619);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(606);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(568);
      END_STATE();
    case 588:
      if (lookahead == 'p') ADVANCE(572);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(678);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(1190);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(1172);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(1237);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(1186);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(1213);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == 'z') ADVANCE(506);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(641);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(594);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(461);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(669);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(564);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 616:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(1501);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(1520);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(1524);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(1522);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(1224);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(1523);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(503);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(574);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(452);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(656);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(467);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(648);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(561);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(652);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(632);
      END_STATE();
    case 637:
      if (lookahead == 's') ADVANCE(481);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(1497);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(907);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(920);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(1230);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(1212);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(941);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(1493);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(557);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(451);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(507);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(583);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 661:
      if (lookahead == 't') ADVANCE(623);
      END_STATE();
    case 662:
      if (lookahead == 't') ADVANCE(658);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(654);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(471);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 666:
      if (lookahead == 'u') ADVANCE(647);
      END_STATE();
    case 667:
      if (lookahead == 'u') ADVANCE(651);
      END_STATE();
    case 668:
      if (lookahead == 'v') ADVANCE(465);
      END_STATE();
    case 669:
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 670:
      if (lookahead == 'w') ADVANCE(627);
      END_STATE();
    case 671:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 672:
      if (lookahead == 'x') ADVANCE(938);
      END_STATE();
    case 673:
      if (lookahead == 'x') ADVANCE(677);
      END_STATE();
    case 674:
      if (lookahead == 'x') ADVANCE(580);
      END_STATE();
    case 675:
      if (lookahead == 'y') ADVANCE(1491);
      END_STATE();
    case 676:
      if (lookahead == 'y') ADVANCE(1241);
      END_STATE();
    case 677:
      if (lookahead == 'y') ADVANCE(1246);
      END_STATE();
    case 678:
      if (lookahead == 'y') ADVANCE(582);
      END_STATE();
    case 679:
      if (lookahead == 'y') ADVANCE(622);
      END_STATE();
    case 680:
      if (lookahead == 'z') ADVANCE(506);
      END_STATE();
    case 681:
      if (lookahead == 'z') ADVANCE(457);
      END_STATE();
    case 682:
      if (lookahead == 'z') ADVANCE(458);
      END_STATE();
    case 683:
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(683)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 684:
      if (lookahead == '}') ADVANCE(1485);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 685:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(685)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(906);
      END_STATE();
    case 686:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(686)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 687:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(687)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(906);
      END_STATE();
    case 688:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1223);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(688)
      END_STATE();
    case 689:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 690:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1487);
      END_STATE();
    case 691:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1177);
      END_STATE();
    case 692:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1227);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(692)
      END_STATE();
    case 693:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1228);
      END_STATE();
    case 694:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      END_STATE();
    case 695:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1225);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      END_STATE();
    case 697:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(691);
      END_STATE();
    case 698:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(698)
      END_STATE();
    case 699:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(699)
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(922);
      END_STATE();
    case 700:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(700)
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1486);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1485);
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(701);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(702);
      END_STATE();
    case 705:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 706:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 707:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 708:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 710:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 711:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 712:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1515);
      END_STATE();
    case 713:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(281);
      END_STATE();
    case 714:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(762);
      END_STATE();
    case 715:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 716:
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 717:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 718:
      if (eof) ADVANCE(719);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1517);
      if (lookahead == '/') ADVANCE(1486);
      if (lookahead == '1') ADVANCE(263);
      if (lookahead == '2') ADVANCE(261);
      if (lookahead == ':') ADVANCE(879);
      if (lookahead == '@') ADVANCE(897);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'h') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == 'l') ADVANCE(274);
      if (lookahead == 'm') ADVANCE(272);
      if (lookahead == 'r') ADVANCE(275);
      if (lookahead == '{') ADVANCE(731);
      if (lookahead == '}') ADVANCE(732);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(720);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(721);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__vertical_whitespace);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__vertical_whitespaces);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__empty_line);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(726);
      if (lookahead != 0) ADVANCE(726);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1512);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\r') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(729);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(713);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(281);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (lookahead == ':') ADVANCE(694);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_localhost);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ipv4_address);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(749);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(224);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(248);
      if (lookahead == '5') ADVANCE(746);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(755);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(757);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(756);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(758);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(745);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(761);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(757);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(764);
      if (lookahead == ':') ADVANCE(81);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(768);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(775);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == '1') ADVANCE(767);
      if (lookahead == '2') ADVANCE(763);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(772);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(775);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(705);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(784);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(714);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(785);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '0') ADVANCE(788);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '0') ADVANCE(824);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(794);
      if (lookahead == ':') ADVANCE(710);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(800);
      if (lookahead == ':') ADVANCE(705);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(806);
      if (lookahead == ':') ADVANCE(706);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(812);
      if (lookahead == ':') ADVANCE(708);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(818);
      if (lookahead == ':') ADVANCE(709);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(798);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(804);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(810);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(816);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(822);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(823);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(822);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(832);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(797);
      if (lookahead == '2') ADVANCE(789);
      if (lookahead == 'f') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(839);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(801);
      if (lookahead == '2') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(807);
      if (lookahead == '2') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(813);
      if (lookahead == '2') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(819);
      if (lookahead == '2') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(860);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(861);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(314);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(327);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(837);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(833);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (lookahead == 'f') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(838);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(708);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(709);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(762);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1361);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1360);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1367);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1366);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1359);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1358);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(868);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1373);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1372);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1363);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(869);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(875);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(873);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(877);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(225);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(874);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '1') ADVANCE(1490);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '5') ADVANCE(883);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(887);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(886);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(893);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(886);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(887);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1223);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(889);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(890);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(892);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(894);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(896);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(897);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\r') ADVANCE(730);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(729);
      if (lookahead != 0) ADVANCE(901);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == '}') ADVANCE(734);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(725);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(906);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(901);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(725);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(906);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_basicauth);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'f') ADVANCE(916);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'r') ADVANCE(1191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_bcrypt);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token1);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token2);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(922);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '0') ADVANCE(881);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(717);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(944);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '%') ADVANCE(703);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(946);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == '5') ADVANCE(948);
      if (lookahead == ':') ADVANCE(330);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(950);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(952);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(953);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(952);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(950);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1053);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(1026);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(1009);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(964);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1023);
      if (lookahead == 'i') ADVANCE(997);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1036);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(972);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(992);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1033);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(998);
      if (lookahead == 'e') ADVANCE(959);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'b') ADVANCE(1002);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'b') ADVANCE(1006);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(958);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(1005);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(925);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(1039);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(990);
      if (lookahead == 'q') ADVANCE(1035);
      if (lookahead == 'v') ADVANCE(981);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(994);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(976);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(982);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(969);
      if (lookahead == 'o') ADVANCE(1003);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(954);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1509);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1163);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1179);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(955);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1020);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1013);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1014);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1015);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'g') ADVANCE(1210);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(913);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(1184);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(991);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(965);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(1012);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(974);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(1506);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(977);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(1010);
      if (lookahead == 'n') ADVANCE(1031);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(966);
      if (lookahead == 'r') ADVANCE(1021);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(967);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(970);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(985);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1038);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1027);
      if (lookahead == 'u') ADVANCE(1034);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1011);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(971);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(968);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1019);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(961);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(1018);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(1007);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1174);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1239);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1188);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1037);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(999);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1028);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1001);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1025);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1004);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(1503);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(989);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(1032);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(983);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(1499);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(909);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(1206);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(986);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(956);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(987);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(975);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(979);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(1030);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(984);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'x') ADVANCE(1040);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(1243);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(1248);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1054);
      if (lookahead == '5') ADVANCE(1043);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1054);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1055);
      if (lookahead == '5') ADVANCE(1048);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1049);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1049);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(1068);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1050);
      if (lookahead == '2') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1049);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(760);
      if (lookahead == '2') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1045);
      if (lookahead == '2') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(1052);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(1063);
      if (lookahead == 'i') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(1062);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(1056);
      if (lookahead == 'i') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(1079);
      if (lookahead == 'r') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 's') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(70);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1077);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1129);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1153);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1089);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1141);
      if (lookahead == 'i') ADVANCE(1114);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1150);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1115);
      if (lookahead == 'e') ADVANCE(1073);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1118);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1121);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1072);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1125);
      if (lookahead == 'l') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1125);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(926);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1157);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1126);
      if (lookahead == 'n') ADVANCE(1105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1107);
      if (lookahead == 'q') ADVANCE(1152);
      if (lookahead == 'v') ADVANCE(1097);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1093);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1110);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1098);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead == 'o') ADVANCE(1117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1070);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1510);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1164);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1180);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1142);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1071);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1137);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1132);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1133);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'g') ADVANCE(1211);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(1185);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1155);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1131);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1091);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1094);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1128);
      if (lookahead == 'p') ADVANCE(933);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1128);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1079);
      if (lookahead == 'r') ADVANCE(1135);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1083);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1145);
      if (lookahead == 'u') ADVANCE(1151);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1136);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1156);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1130);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1087);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1138);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(933);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(929);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(931);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1123);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1139);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1240);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1189);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1154);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1170);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1120);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1146);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1143);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1147);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1119);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1504);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1149);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1096);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1099);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1500);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1207);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1069);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1092);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1095);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1148);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'v') ADVANCE(1100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(939);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(1158);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1244);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1249);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_file_server);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_browse);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_error);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_http_message);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_http_error_code);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '_') ADVANCE(1444);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(1008);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(1127);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1196);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ') ADVANCE(1197);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1198);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1198);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1196);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if (lookahead == ' ') ADVANCE(1201);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1202);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1202);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(217);
      if (lookahead == '.') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_log);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_stderr);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '_') ADVANCE(637);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_roll_disabled);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_roll_size);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_roll_uncompressed);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_roll_local_time);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_roll_keep);
      if (lookahead == '_') ADVANCE(492);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym__log_output_file_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1223);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_roll_keep_for_days);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1226);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1226);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_size_number);
      if (lookahead == '.') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1229);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_size_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1229);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_size_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1229);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(anon_sym_request_body);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(anon_sym_max_size);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1484);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1484);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1377);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1250);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1250);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1257);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1257);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1253);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1253);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1261);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1261);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1255);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1254);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1255);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1254);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1265);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1265);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1259);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1259);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1269);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1269);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1263);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1262);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1263);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1262);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1273);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1272);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1273);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1272);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1267);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1267);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1277);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1277);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1281);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1280);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1281);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1280);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1275);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1274);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1275);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1274);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1285);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1284);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1285);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1284);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1279);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1278);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1279);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1278);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1289);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1288);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1289);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1288);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1283);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1282);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1283);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1282);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1293);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1293);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1291);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1290);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1291);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1290);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1301);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1300);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1300);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1305);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1304);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1304);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1299);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1298);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1298);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1309);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1309);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1313);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1312);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1313);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1312);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1307);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1306);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1307);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1306);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1317);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1316);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1317);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1316);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1310);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1310);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1321);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1320);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1321);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1320);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1315);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1314);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1315);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1314);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1325);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1325);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1319);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1318);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1319);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1318);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1329);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1328);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1328);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1323);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1333);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1333);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1332);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1326);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1326);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1337);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1336);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1337);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1336);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1331);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1331);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1341);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1340);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1341);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1340);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1335);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1334);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1335);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1334);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1344);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1344);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1349);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1343);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1342);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1343);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1342);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1353);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1352);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1353);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1352);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1347);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1347);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1357);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1356);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1357);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1356);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1351);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1351);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1361);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1360);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1361);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1360);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1355);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1354);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1355);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1354);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1367);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == ':') ADVANCE(1379);
      if (lookahead == 's') ADVANCE(1365);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1366);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1367);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1366);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1367);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1366);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1359);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == ':') ADVANCE(1380);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1358);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1359);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1358);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1359);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1358);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1373);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == 't') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1372);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1373);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1372);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1373);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1372);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == 'p') ADVANCE(1362);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1364);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1370);
      if (lookahead == 't') ADVANCE(1368);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1369);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1370);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1369);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(871);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '-') ADVANCE(1370);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1369);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '.') ADVANCE(1482);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '0') ADVANCE(1382);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '1') ADVANCE(1489);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '_') ADVANCE(1465);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '_') ADVANCE(1445);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '_') ADVANCE(1394);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1462);
      if (lookahead == 'i') ADVANCE(1431);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1475);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1402);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1472);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1452);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'a') ADVANCE(1432);
      if (lookahead == 'e') ADVANCE(1389);
      if (lookahead == 't') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'b') ADVANCE(1438);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'b') ADVANCE(1441);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'c') ADVANCE(1440);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'c') ADVANCE(1388);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(924);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(1479);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(1422);
      if (lookahead == 'q') ADVANCE(1474);
      if (lookahead == 'v') ADVANCE(1412);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(1406);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(1425);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'd') ADVANCE(1413);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1399);
      if (lookahead == 'o') ADVANCE(1436);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1383);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1508);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1162);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1178);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1454);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1434);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1463);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1459);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1450);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1451);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1453);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'e') ADVANCE(1429);
      if (lookahead == 'l') ADVANCE(1461);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'g') ADVANCE(1209);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'h') ADVANCE(912);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'h') ADVANCE(1183);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'i') ADVANCE(1424);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'i') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'i') ADVANCE(1449);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(1496);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(1404);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'l') ADVANCE(1407);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'm') ADVANCE(1447);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'm') ADVANCE(1423);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'm') ADVANCE(1387);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'm') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(1395);
      if (lookahead == 'r') ADVANCE(1460);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(1397);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(1401);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(1409);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'n') ADVANCE(1470);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1417);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1466);
      if (lookahead == 'u') ADVANCE(1473);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1477);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1455);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1448);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1398);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1457);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'o') ADVANCE(1458);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1390);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1456);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1442);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'p') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1173);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1238);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1187);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1476);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1478);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1168);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1428);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1467);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1437);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1391);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1468);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'r') ADVANCE(1439);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 's') ADVANCE(1502);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 's') ADVANCE(1421);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 's') ADVANCE(1471);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 's') ADVANCE(1410);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 's') ADVANCE(1414);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1498);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(908);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1204);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1418);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1494);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1419);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 't') ADVANCE(1405);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(1411);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'u') ADVANCE(1469);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'v') ADVANCE(1415);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'x') ADVANCE(1480);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'y') ADVANCE(1492);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'y') ADVANCE(1242);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == 'y') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1485);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1375);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1481);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(703);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1486);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(anon_sym_401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(891);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_root);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1506:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(anon_sym_route);
      END_STATE();
    case 1508:
      ACCEPT_TOKEN(anon_sym_route);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(anon_sym_route);
      if (lookahead == '.') ADVANCE(1159);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1160);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1041);
      END_STATE();
    case 1510:
      ACCEPT_TOKEN(anon_sym_route);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1160);
      END_STATE();
    case 1511:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f') ADVANCE(728);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1512);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1513:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1513);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(727);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(730);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1515);
      END_STATE();
    case 1516:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1516);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 1517:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1518:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(704);
      if (lookahead == '{') ADVANCE(711);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1485);
      END_STATE();
    case 1519:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(anon_sym_auto_https);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(anon_sym_disable_redirects);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(anon_sym_ignore_loaded_certs);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(anon_sym_disable_certs);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 718},
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
  [45] = {.lex_state = 60},
  [46] = {.lex_state = 60},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 56},
  [49] = {.lex_state = 60},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 60},
  [52] = {.lex_state = 63},
  [53] = {.lex_state = 63},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 60},
  [58] = {.lex_state = 58},
  [59] = {.lex_state = 58},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 51},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 60},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 60},
  [66] = {.lex_state = 65},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 65},
  [69] = {.lex_state = 63},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 63},
  [72] = {.lex_state = 43},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 64},
  [76] = {.lex_state = 64},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 64},
  [80] = {.lex_state = 60},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 64},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 65},
  [88] = {.lex_state = 65},
  [89] = {.lex_state = 64},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 65},
  [92] = {.lex_state = 65},
  [93] = {.lex_state = 41},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 64},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 42},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 64},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 41},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 64},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 41},
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
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 41},
  [140] = {.lex_state = 718},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 64},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 64},
  [146] = {.lex_state = 41},
  [147] = {.lex_state = 41},
  [148] = {.lex_state = 64},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 64},
  [151] = {.lex_state = 718},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 42},
  [157] = {.lex_state = 42},
  [158] = {.lex_state = 42},
  [159] = {.lex_state = 42},
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
  [195] = {.lex_state = 42},
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
  [207] = {.lex_state = 42},
  [208] = {.lex_state = 42},
  [209] = {.lex_state = 62},
  [210] = {.lex_state = 62},
  [211] = {.lex_state = 62},
  [212] = {.lex_state = 62},
  [213] = {.lex_state = 62},
  [214] = {.lex_state = 62},
  [215] = {.lex_state = 718},
  [216] = {.lex_state = 62},
  [217] = {.lex_state = 62},
  [218] = {.lex_state = 91},
  [219] = {.lex_state = 718},
  [220] = {.lex_state = 62},
  [221] = {.lex_state = 91},
  [222] = {.lex_state = 718},
  [223] = {.lex_state = 718},
  [224] = {.lex_state = 718},
  [225] = {.lex_state = 718},
  [226] = {.lex_state = 718},
  [227] = {.lex_state = 718},
  [228] = {.lex_state = 718},
  [229] = {.lex_state = 718},
  [230] = {.lex_state = 47},
  [231] = {.lex_state = 47},
  [232] = {.lex_state = 64},
  [233] = {.lex_state = 91},
  [234] = {.lex_state = 718},
  [235] = {.lex_state = 718},
  [236] = {.lex_state = 91},
  [237] = {.lex_state = 61},
  [238] = {.lex_state = 718},
  [239] = {.lex_state = 64},
  [240] = {.lex_state = 718},
  [241] = {.lex_state = 63},
  [242] = {.lex_state = 61},
  [243] = {.lex_state = 88},
  [244] = {.lex_state = 63},
  [245] = {.lex_state = 63},
  [246] = {.lex_state = 718},
  [247] = {.lex_state = 61},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 88},
  [250] = {.lex_state = 88},
  [251] = {.lex_state = 63},
  [252] = {.lex_state = 718},
  [253] = {.lex_state = 718},
  [254] = {.lex_state = 63},
  [255] = {.lex_state = 62},
  [256] = {.lex_state = 63},
  [257] = {.lex_state = 718},
  [258] = {.lex_state = 62},
  [259] = {.lex_state = 62},
  [260] = {.lex_state = 62},
  [261] = {.lex_state = 63},
  [262] = {.lex_state = 62},
  [263] = {.lex_state = 63},
  [264] = {.lex_state = 62},
  [265] = {.lex_state = 62},
  [266] = {.lex_state = 63},
  [267] = {.lex_state = 63},
  [268] = {.lex_state = 63},
  [269] = {.lex_state = 62},
  [270] = {.lex_state = 60},
  [271] = {.lex_state = 63},
  [272] = {.lex_state = 60},
  [273] = {.lex_state = 63},
  [274] = {.lex_state = 63},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 718},
  [277] = {.lex_state = 718},
  [278] = {.lex_state = 60},
  [279] = {.lex_state = 46},
  [280] = {.lex_state = 46},
  [281] = {.lex_state = 718},
  [282] = {.lex_state = 54},
  [283] = {.lex_state = 66},
  [284] = {.lex_state = 89},
  [285] = {.lex_state = 63},
  [286] = {.lex_state = 63},
  [287] = {.lex_state = 66},
  [288] = {.lex_state = 67},
  [289] = {.lex_state = 66},
  [290] = {.lex_state = 89},
  [291] = {.lex_state = 66},
  [292] = {.lex_state = 66},
  [293] = {.lex_state = 66},
  [294] = {.lex_state = 66},
  [295] = {.lex_state = 63},
  [296] = {.lex_state = 54},
  [297] = {.lex_state = 66},
  [298] = {.lex_state = 66},
  [299] = {.lex_state = 63},
  [300] = {.lex_state = 89},
  [301] = {.lex_state = 63},
  [302] = {.lex_state = 63},
  [303] = {.lex_state = 63},
  [304] = {.lex_state = 66},
  [305] = {.lex_state = 66},
  [306] = {.lex_state = 62},
  [307] = {.lex_state = 62},
  [308] = {.lex_state = 62},
  [309] = {.lex_state = 61},
  [310] = {.lex_state = 62},
  [311] = {.lex_state = 62},
  [312] = {.lex_state = 68},
  [313] = {.lex_state = 68},
  [314] = {.lex_state = 60},
  [315] = {.lex_state = 63},
  [316] = {.lex_state = 63},
  [317] = {.lex_state = 68},
  [318] = {.lex_state = 62},
  [319] = {.lex_state = 62},
  [320] = {.lex_state = 61},
  [321] = {.lex_state = 62},
  [322] = {.lex_state = 62},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 62},
  [325] = {.lex_state = 48},
  [326] = {.lex_state = 63},
  [327] = {.lex_state = 68},
  [328] = {.lex_state = 62},
  [329] = {.lex_state = 63},
  [330] = {.lex_state = 63},
  [331] = {.lex_state = 68},
  [332] = {.lex_state = 62},
  [333] = {.lex_state = 62},
  [334] = {.lex_state = 60},
  [335] = {.lex_state = 61},
  [336] = {.lex_state = 60},
  [337] = {.lex_state = 68},
  [338] = {.lex_state = 60},
  [339] = {.lex_state = 62},
  [340] = {.lex_state = 718},
  [341] = {.lex_state = 68},
  [342] = {.lex_state = 718},
  [343] = {.lex_state = 63},
  [344] = {.lex_state = 63},
  [345] = {.lex_state = 68},
  [346] = {.lex_state = 48},
  [347] = {.lex_state = 68},
  [348] = {.lex_state = 718},
  [349] = {.lex_state = 68},
  [350] = {.lex_state = 718},
  [351] = {.lex_state = 718},
  [352] = {.lex_state = 63},
  [353] = {.lex_state = 718},
  [354] = {.lex_state = 718},
  [355] = {.lex_state = 62},
  [356] = {.lex_state = 62},
  [357] = {.lex_state = 718},
  [358] = {.lex_state = 718},
  [359] = {.lex_state = 54},
  [360] = {.lex_state = 61},
  [361] = {.lex_state = 63},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 718},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 718},
  [366] = {.lex_state = 718},
  [367] = {.lex_state = 718},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 63},
  [370] = {.lex_state = 718},
  [371] = {.lex_state = 63},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 718},
  [374] = {.lex_state = 61},
  [375] = {.lex_state = 66},
  [376] = {.lex_state = 61},
  [377] = {.lex_state = 45},
  [378] = {.lex_state = 45},
  [379] = {.lex_state = 45},
  [380] = {.lex_state = 45},
  [381] = {.lex_state = 45},
  [382] = {.lex_state = 63},
  [383] = {.lex_state = 61},
  [384] = {.lex_state = 45},
  [385] = {.lex_state = 45},
  [386] = {.lex_state = 718},
  [387] = {.lex_state = 45},
  [388] = {.lex_state = 61},
  [389] = {.lex_state = 45},
  [390] = {.lex_state = 718},
  [391] = {.lex_state = 61},
  [392] = {.lex_state = 718},
  [393] = {.lex_state = 45},
  [394] = {.lex_state = 63},
  [395] = {.lex_state = 45},
  [396] = {.lex_state = 45},
  [397] = {.lex_state = 49},
  [398] = {.lex_state = 49},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 49},
  [401] = {.lex_state = 49},
  [402] = {.lex_state = 309},
  [403] = {.lex_state = 61},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 49},
  [406] = {.lex_state = 49},
  [407] = {.lex_state = 61},
  [408] = {.lex_state = 61},
  [409] = {.lex_state = 49},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 49},
  [412] = {.lex_state = 65},
  [413] = {.lex_state = 65},
  [414] = {.lex_state = 65},
  [415] = {.lex_state = 61},
  [416] = {.lex_state = 65},
  [417] = {.lex_state = 683},
  [418] = {.lex_state = 65},
  [419] = {.lex_state = 65},
  [420] = {.lex_state = 65},
  [421] = {.lex_state = 65},
  [422] = {.lex_state = 65},
  [423] = {.lex_state = 65},
  [424] = {.lex_state = 65},
  [425] = {.lex_state = 683},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 683},
  [428] = {.lex_state = 65},
  [429] = {.lex_state = 65},
  [430] = {.lex_state = 65},
  [431] = {.lex_state = 65},
  [432] = {.lex_state = 65},
  [433] = {.lex_state = 65},
  [434] = {.lex_state = 65},
  [435] = {.lex_state = 65},
  [436] = {.lex_state = 65},
  [437] = {.lex_state = 65},
  [438] = {.lex_state = 65},
  [439] = {.lex_state = 65},
  [440] = {.lex_state = 65},
  [441] = {.lex_state = 683},
  [442] = {.lex_state = 65},
  [443] = {.lex_state = 65},
  [444] = {.lex_state = 65},
  [445] = {.lex_state = 65},
  [446] = {.lex_state = 65},
  [447] = {.lex_state = 683},
  [448] = {.lex_state = 65},
  [449] = {.lex_state = 54},
  [450] = {.lex_state = 65},
  [451] = {.lex_state = 683},
  [452] = {.lex_state = 683},
  [453] = {.lex_state = 65},
  [454] = {.lex_state = 683},
  [455] = {.lex_state = 65},
  [456] = {.lex_state = 685},
  [457] = {.lex_state = 65},
  [458] = {.lex_state = 65},
  [459] = {.lex_state = 65},
  [460] = {.lex_state = 65},
  [461] = {.lex_state = 65},
  [462] = {.lex_state = 65},
  [463] = {.lex_state = 65},
  [464] = {.lex_state = 65},
  [465] = {.lex_state = 65},
  [466] = {.lex_state = 65},
  [467] = {.lex_state = 65},
  [468] = {.lex_state = 65},
  [469] = {.lex_state = 683},
  [470] = {.lex_state = 683},
  [471] = {.lex_state = 683},
  [472] = {.lex_state = 65},
  [473] = {.lex_state = 65},
  [474] = {.lex_state = 65},
  [475] = {.lex_state = 65},
  [476] = {.lex_state = 65},
  [477] = {.lex_state = 65},
  [478] = {.lex_state = 65},
  [479] = {.lex_state = 65},
  [480] = {.lex_state = 65},
  [481] = {.lex_state = 65},
  [482] = {.lex_state = 65},
  [483] = {.lex_state = 65},
  [484] = {.lex_state = 65},
  [485] = {.lex_state = 61},
  [486] = {.lex_state = 65},
  [487] = {.lex_state = 65},
  [488] = {.lex_state = 65},
  [489] = {.lex_state = 65},
  [490] = {.lex_state = 65},
  [491] = {.lex_state = 65},
  [492] = {.lex_state = 683},
  [493] = {.lex_state = 65},
  [494] = {.lex_state = 65},
  [495] = {.lex_state = 65},
  [496] = {.lex_state = 65},
  [497] = {.lex_state = 65},
  [498] = {.lex_state = 65},
  [499] = {.lex_state = 65},
  [500] = {.lex_state = 65},
  [501] = {.lex_state = 65},
  [502] = {.lex_state = 65},
  [503] = {.lex_state = 54},
  [504] = {.lex_state = 65},
  [505] = {.lex_state = 65},
  [506] = {.lex_state = 65},
  [507] = {.lex_state = 65},
  [508] = {.lex_state = 65},
  [509] = {.lex_state = 65},
  [510] = {.lex_state = 65},
  [511] = {.lex_state = 65},
  [512] = {.lex_state = 65},
  [513] = {.lex_state = 65},
  [514] = {.lex_state = 65},
  [515] = {.lex_state = 683},
  [516] = {.lex_state = 61},
  [517] = {.lex_state = 65},
  [518] = {.lex_state = 65},
  [519] = {.lex_state = 65},
  [520] = {.lex_state = 65},
  [521] = {.lex_state = 65},
  [522] = {.lex_state = 65},
  [523] = {.lex_state = 65},
  [524] = {.lex_state = 65},
  [525] = {.lex_state = 65},
  [526] = {.lex_state = 65},
  [527] = {.lex_state = 65},
  [528] = {.lex_state = 65},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 39},
  [531] = {.lex_state = 688},
  [532] = {.lex_state = 692},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 698},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 62},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 62},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 62},
  [544] = {.lex_state = 698},
  [545] = {.lex_state = 62},
  [546] = {.lex_state = 736},
  [547] = {.lex_state = 736},
  [548] = {.lex_state = 62},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 695},
  [551] = {.lex_state = 718},
  [552] = {.lex_state = 62},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 62},
  [555] = {.lex_state = 62},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 0},
  [558] = {.lex_state = 0},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 0},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 0},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 62},
  [572] = {.lex_state = 62},
  [573] = {.lex_state = 65},
  [574] = {.lex_state = 54},
  [575] = {.lex_state = 62},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 41},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 718},
  [580] = {.lex_state = 686},
  [581] = {.lex_state = 62},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 686},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 62},
  [587] = {.lex_state = 62},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 62},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 62},
  [592] = {.lex_state = 62},
  [593] = {.lex_state = 692},
  [594] = {.lex_state = 736},
  [595] = {.lex_state = 692},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 736},
  [598] = {.lex_state = 53},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 54},
  [601] = {.lex_state = 40},
  [602] = {.lex_state = 736},
  [603] = {.lex_state = 692},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 692},
  [607] = {.lex_state = 692},
  [608] = {.lex_state = 65},
  [609] = {.lex_state = 698},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 62},
  [613] = {.lex_state = 686},
  [614] = {.lex_state = 62},
  [615] = {.lex_state = 62},
  [616] = {.lex_state = 62},
  [617] = {.lex_state = 39},
  [618] = {.lex_state = 40},
  [619] = {.lex_state = 686},
  [620] = {.lex_state = 39},
  [621] = {.lex_state = 40},
  [622] = {.lex_state = 39},
  [623] = {.lex_state = 40},
  [624] = {.lex_state = 39},
  [625] = {.lex_state = 40},
  [626] = {.lex_state = 41},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 736},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 62},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 699},
  [635] = {.lex_state = 692},
  [636] = {.lex_state = 0},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 62},
  [641] = {.lex_state = 62},
  [642] = {.lex_state = 62},
  [643] = {.lex_state = 62},
  [644] = {.lex_state = 62},
  [645] = {.lex_state = 62},
  [646] = {.lex_state = 54},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 692},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 0},
  [652] = {.lex_state = 0},
  [653] = {.lex_state = 62},
  [654] = {.lex_state = 62},
  [655] = {.lex_state = 62},
  [656] = {.lex_state = 62},
  [657] = {.lex_state = 39},
  [658] = {.lex_state = 62},
  [659] = {.lex_state = 0},
  [660] = {.lex_state = 0},
  [661] = {.lex_state = 40},
  [662] = {.lex_state = 0},
  [663] = {.lex_state = 692},
  [664] = {.lex_state = 687},
  [665] = {.lex_state = 700},
  [666] = {.lex_state = 0},
  [667] = {.lex_state = 718},
  [668] = {.lex_state = 62},
  [669] = {.lex_state = 54},
  [670] = {.lex_state = 0},
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
    [sym_document] = STATE(630),
    [sym_site_block] = STATE(151),
    [sym_site_address] = STATE(629),
    [sym_protocol] = STATE(276),
    [sym__ip_or_domain_address] = STATE(628),
    [sym__port_number] = STATE(610),
    [sym_directive_import] = STATE(151),
    [sym_global_options_block] = STATE(151),
    [sym_snippet] = STATE(151),
    [aux_sym_document_repeat1] = STATE(151),
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
  [0] = 24,
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
      anon_sym_root,
    ACTIONS(61), 1,
      anon_sym_tls,
    ACTIONS(63), 1,
      anon_sym_route,
    STATE(3), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(119), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [91] = 24,
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
      anon_sym_root,
    ACTIONS(61), 1,
      anon_sym_tls,
    ACTIONS(63), 1,
      anon_sym_route,
    ACTIONS(65), 1,
      sym__vertical_whitespaces,
    ACTIONS(67), 1,
      sym__empty_line,
    ACTIONS(69), 1,
      sym_comment_line,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(119), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [182] = 23,
    ACTIONS(75), 1,
      sym__empty_line,
    ACTIONS(78), 1,
      sym_comment_line,
    ACTIONS(81), 1,
      sym_matcher_name,
    ACTIONS(84), 1,
      anon_sym_abort,
    ACTIONS(87), 1,
      anon_sym_basicauth,
    ACTIONS(90), 1,
      anon_sym_bind,
    ACTIONS(93), 1,
      anon_sym_encode,
    ACTIONS(96), 1,
      anon_sym_file_server,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(102), 1,
      anon_sym_handle,
    ACTIONS(105), 1,
      anon_sym_handle_path,
    ACTIONS(108), 1,
      anon_sym_header,
    ACTIONS(111), 1,
      anon_sym_import,
    ACTIONS(114), 1,
      anon_sym_log,
    ACTIONS(117), 1,
      anon_sym_redir,
    ACTIONS(120), 1,
      anon_sym_request_body,
    ACTIONS(123), 1,
      anon_sym_reverse_proxy,
    ACTIONS(126), 1,
      anon_sym_root,
    ACTIONS(129), 1,
      anon_sym_tls,
    ACTIONS(132), 1,
      anon_sym_route,
    ACTIONS(73), 2,
      sym__vertical_whitespaces,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(119), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [271] = 22,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      sym_matcher_name,
    ACTIONS(141), 1,
      anon_sym_abort,
    ACTIONS(144), 1,
      anon_sym_basicauth,
    ACTIONS(147), 1,
      anon_sym_bind,
    ACTIONS(150), 1,
      anon_sym_encode,
    ACTIONS(153), 1,
      anon_sym_file_server,
    ACTIONS(156), 1,
      anon_sym_error,
    ACTIONS(159), 1,
      anon_sym_handle,
    ACTIONS(162), 1,
      anon_sym_handle_path,
    ACTIONS(165), 1,
      anon_sym_header,
    ACTIONS(168), 1,
      anon_sym_import,
    ACTIONS(171), 1,
      anon_sym_log,
    ACTIONS(174), 1,
      anon_sym_redir,
    ACTIONS(177), 1,
      anon_sym_request_body,
    ACTIONS(180), 1,
      anon_sym_reverse_proxy,
    ACTIONS(183), 1,
      anon_sym_root,
    ACTIONS(186), 1,
      anon_sym_tls,
    ACTIONS(189), 1,
      anon_sym_route,
    ACTIONS(135), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(5), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [357] = 22,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      sym_matcher_name,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(192), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(7), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [443] = 22,
    ACTIONS(196), 1,
      sym_matcher_name,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(232), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(5), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [529] = 21,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      anon_sym_abort,
    ACTIONS(244), 1,
      anon_sym_basicauth,
    ACTIONS(247), 1,
      anon_sym_bind,
    ACTIONS(250), 1,
      anon_sym_encode,
    ACTIONS(253), 1,
      anon_sym_file_server,
    ACTIONS(256), 1,
      anon_sym_error,
    ACTIONS(259), 1,
      anon_sym_handle,
    ACTIONS(262), 1,
      anon_sym_handle_path,
    ACTIONS(265), 1,
      anon_sym_header,
    ACTIONS(268), 1,
      anon_sym_import,
    ACTIONS(271), 1,
      anon_sym_log,
    ACTIONS(274), 1,
      anon_sym_redir,
    ACTIONS(277), 1,
      anon_sym_request_body,
    ACTIONS(280), 1,
      anon_sym_reverse_proxy,
    ACTIONS(283), 1,
      anon_sym_root,
    ACTIONS(286), 1,
      anon_sym_tls,
    ACTIONS(289), 1,
      anon_sym_route,
    ACTIONS(236), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [611] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [693] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [775] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [857] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [939] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1021] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1103] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1185] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1267] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1349] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1431] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1513] = 21,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1595] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(320), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1674] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(322), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(19), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1753] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(324), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(14), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1832] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(326), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(13), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1911] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(328), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(9), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [1990] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(330), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(15), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2069] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(332), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(18), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2148] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(334), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(17), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2227] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(336), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(11), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2306] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(338), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(20), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2385] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(340), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2464] = 20,
    ACTIONS(198), 1,
      anon_sym_abort,
    ACTIONS(200), 1,
      anon_sym_basicauth,
    ACTIONS(202), 1,
      anon_sym_bind,
    ACTIONS(204), 1,
      anon_sym_encode,
    ACTIONS(206), 1,
      anon_sym_file_server,
    ACTIONS(208), 1,
      anon_sym_error,
    ACTIONS(210), 1,
      anon_sym_handle,
    ACTIONS(212), 1,
      anon_sym_handle_path,
    ACTIONS(214), 1,
      anon_sym_header,
    ACTIONS(216), 1,
      anon_sym_import,
    ACTIONS(218), 1,
      anon_sym_log,
    ACTIONS(222), 1,
      anon_sym_request_body,
    ACTIONS(224), 1,
      anon_sym_reverse_proxy,
    ACTIONS(226), 1,
      anon_sym_root,
    ACTIONS(228), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_route,
    ACTIONS(296), 1,
      anon_sym_redir,
    ACTIONS(342), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(10), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(162), 17,
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
      sym_directive_root,
      sym_directive_tls,
      sym_directive_route,
  [2543] = 11,
    ACTIONS(348), 1,
      sym__ipv4_address,
    ACTIONS(350), 1,
      sym__ipv6_address,
    ACTIONS(354), 1,
      anon_sym_unix,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(584), 1,
      sym__network,
    STATE(34), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(352), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(344), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(346), 18,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2600] = 11,
    ACTIONS(364), 1,
      sym__ipv4_address,
    ACTIONS(367), 1,
      sym__ipv6_address,
    ACTIONS(373), 1,
      anon_sym_unix,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(379), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(584), 1,
      sym__network,
    STATE(34), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(370), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(360), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(362), 18,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2657] = 11,
    ACTIONS(354), 1,
      anon_sym_unix,
    ACTIONS(382), 1,
      sym__ipv4_address,
    ACTIONS(384), 1,
      sym__ipv6_address,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym_unix_path_token2,
    STATE(42), 1,
      sym_unix_path,
    STATE(582), 1,
      sym__network,
    STATE(36), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(352), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(344), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(346), 17,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2713] = 11,
    ACTIONS(373), 1,
      anon_sym_unix,
    ACTIONS(390), 1,
      sym__ipv4_address,
    ACTIONS(393), 1,
      sym__ipv6_address,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    ACTIONS(399), 1,
      aux_sym_unix_path_token2,
    STATE(42), 1,
      sym_unix_path,
    STATE(582), 1,
      sym__network,
    STATE(36), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(370), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(360), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(362), 17,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2769] = 2,
    ACTIONS(402), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(404), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2804] = 2,
    ACTIONS(406), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(408), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2839] = 2,
    ACTIONS(410), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(412), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2874] = 2,
    ACTIONS(414), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(416), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2909] = 2,
    ACTIONS(406), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(408), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2943] = 2,
    ACTIONS(410), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(412), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [2977] = 2,
    ACTIONS(402), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(404), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3011] = 2,
    ACTIONS(414), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(416), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3045] = 4,
    STATE(123), 1,
      sym_redir_code,
    ACTIONS(420), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(422), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(418), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3082] = 4,
    STATE(113), 1,
      sym_redir_code,
    ACTIONS(426), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(422), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(424), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3119] = 3,
    ACTIONS(432), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(428), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(430), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3154] = 3,
    ACTIONS(438), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(434), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(436), 24,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3189] = 2,
    ACTIONS(436), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(434), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3221] = 6,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      aux_sym_unix_path_token2,
    STATE(459), 1,
      sym_unix_path,
    ACTIONS(448), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(440), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(442), 19,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3261] = 2,
    ACTIONS(452), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(450), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3293] = 4,
    ACTIONS(426), 1,
      anon_sym_handle,
    STATE(202), 1,
      sym_redir_code,
    ACTIONS(454), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(424), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3329] = 4,
    ACTIONS(420), 1,
      anon_sym_handle,
    STATE(196), 1,
      sym_redir_code,
    ACTIONS(454), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(418), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3365] = 2,
    ACTIONS(458), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(456), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3397] = 3,
    ACTIONS(460), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(434), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(436), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3431] = 3,
    ACTIONS(462), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(428), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(430), 23,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3465] = 4,
    ACTIONS(466), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(468), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(57), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(464), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3500] = 3,
    ACTIONS(460), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(434), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(436), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3533] = 3,
    ACTIONS(462), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(428), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(430), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3566] = 2,
    ACTIONS(452), 1,
      anon_sym_handle,
    ACTIONS(450), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3597] = 6,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      aux_sym_unix_path_token2,
    STATE(497), 1,
      sym_unix_path,
    ACTIONS(471), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(440), 3,
      sym__empty_line,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(442), 18,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3636] = 2,
    ACTIONS(458), 1,
      anon_sym_handle,
    ACTIONS(456), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3667] = 4,
    ACTIONS(475), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(477), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(57), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(473), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3702] = 2,
    ACTIONS(436), 1,
      anon_sym_handle,
    ACTIONS(434), 25,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3733] = 4,
    ACTIONS(477), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(481), 2,
      sym__empty_line,
      anon_sym_handle,
    STATE(57), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(479), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3768] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(74), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
    ACTIONS(485), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3802] = 4,
    ACTIONS(466), 1,
      anon_sym_handle,
    ACTIONS(487), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(67), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(464), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3836] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(70), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
    ACTIONS(490), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3870] = 4,
    ACTIONS(475), 1,
      anon_sym_handle,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(67), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(473), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3904] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(73), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
    ACTIONS(494), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3938] = 4,
    ACTIONS(481), 1,
      anon_sym_handle,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(67), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(479), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [3972] = 5,
    ACTIONS(446), 1,
      aux_sym_unix_path_token2,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    STATE(439), 1,
      sym_unix_path,
    ACTIONS(496), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(498), 18,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4008] = 4,
    ACTIONS(502), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(73), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
    ACTIONS(505), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4042] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(73), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
    ACTIONS(507), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4076] = 4,
    ACTIONS(509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(76), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(235), 1,
      sym__horizontal_whitespaces,
    ACTIONS(490), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4109] = 4,
    ACTIONS(509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(235), 1,
      sym__horizontal_whitespaces,
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
      anon_sym_handle,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4142] = 4,
    ACTIONS(509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(235), 1,
      sym__horizontal_whitespaces,
    ACTIONS(507), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4175] = 5,
    ACTIONS(446), 1,
      aux_sym_unix_path_token2,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    STATE(512), 1,
      sym_unix_path,
    ACTIONS(496), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(498), 17,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4210] = 4,
    ACTIONS(511), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(235), 1,
      sym__horizontal_whitespaces,
    ACTIONS(505), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4243] = 2,
    ACTIONS(516), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(514), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4272] = 3,
    ACTIONS(518), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(393), 1,
      sym__horizontal_whitespaces,
    ACTIONS(520), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4303] = 4,
    ACTIONS(509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(77), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(235), 1,
      sym__horizontal_whitespaces,
    ACTIONS(485), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4336] = 2,
    ACTIONS(522), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(524), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4364] = 2,
    ACTIONS(526), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(528), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4392] = 2,
    ACTIONS(530), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(532), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4420] = 2,
    ACTIONS(516), 1,
      anon_sym_handle,
    ACTIONS(514), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4448] = 2,
    ACTIONS(534), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(505), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4476] = 2,
    ACTIONS(536), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(538), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4504] = 3,
    ACTIONS(540), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(381), 1,
      sym__horizontal_whitespaces,
    ACTIONS(520), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4534] = 3,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(544), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(542), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4564] = 2,
    ACTIONS(548), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(550), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4592] = 2,
    ACTIONS(552), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(554), 22,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4620] = 2,
    ACTIONS(558), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(556), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4647] = 2,
    ACTIONS(562), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(560), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4674] = 2,
    ACTIONS(534), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(505), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4701] = 2,
    ACTIONS(566), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(564), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4728] = 2,
    ACTIONS(570), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(568), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4755] = 3,
    ACTIONS(544), 1,
      anon_sym_handle,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
    ACTIONS(542), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4784] = 2,
    ACTIONS(576), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(574), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4811] = 2,
    ACTIONS(580), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(578), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4838] = 2,
    ACTIONS(584), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(582), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4865] = 2,
    ACTIONS(588), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(586), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4892] = 2,
    ACTIONS(592), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(590), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4919] = 2,
    ACTIONS(522), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(524), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4946] = 2,
    ACTIONS(596), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(594), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [4973] = 2,
    ACTIONS(600), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(598), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5000] = 2,
    ACTIONS(604), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(602), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5027] = 2,
    ACTIONS(608), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(606), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5054] = 2,
    ACTIONS(612), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(610), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5081] = 2,
    ACTIONS(616), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(614), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5108] = 2,
    ACTIONS(620), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(618), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5135] = 2,
    ACTIONS(624), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(622), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5162] = 2,
    ACTIONS(628), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(626), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5189] = 2,
    ACTIONS(632), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(630), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5216] = 2,
    ACTIONS(636), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(634), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5243] = 2,
    ACTIONS(640), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(638), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5270] = 2,
    ACTIONS(644), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(642), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5297] = 2,
    ACTIONS(648), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(646), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5324] = 2,
    ACTIONS(652), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(650), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5351] = 2,
    ACTIONS(656), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(654), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5378] = 2,
    ACTIONS(548), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(550), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5405] = 2,
    ACTIONS(660), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(658), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5432] = 2,
    ACTIONS(664), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(662), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5459] = 2,
    ACTIONS(668), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(666), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5486] = 2,
    ACTIONS(672), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(670), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5513] = 2,
    ACTIONS(676), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(674), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5540] = 2,
    ACTIONS(680), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(678), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5567] = 2,
    ACTIONS(550), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(548), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5594] = 2,
    ACTIONS(524), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(522), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5621] = 2,
    ACTIONS(684), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(682), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5648] = 2,
    ACTIONS(688), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(686), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5675] = 2,
    ACTIONS(692), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(690), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5702] = 2,
    ACTIONS(696), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(694), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5729] = 2,
    ACTIONS(700), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(698), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5756] = 2,
    ACTIONS(704), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(702), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5783] = 2,
    ACTIONS(708), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(706), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5810] = 2,
    ACTIONS(712), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(710), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5837] = 2,
    ACTIONS(716), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(714), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5864] = 2,
    ACTIONS(720), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(718), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5891] = 14,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    ACTIONS(727), 1,
      anon_sym_LBRACE,
    ACTIONS(739), 1,
      anon_sym_COLON,
    ACTIONS(742), 1,
      anon_sym_import,
    ACTIONS(745), 1,
      sym_snippet_name,
    STATE(276), 1,
      sym_protocol,
    STATE(610), 1,
      sym__port_number,
    STATE(628), 1,
      sym__ip_or_domain_address,
    STATE(629), 1,
      sym_site_address,
    ACTIONS(724), 2,
      sym__empty_line,
      sym_comment_line,
    ACTIONS(730), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(733), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(736), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(140), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [5942] = 2,
    ACTIONS(750), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(748), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5969] = 2,
    ACTIONS(754), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(752), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [5996] = 2,
    ACTIONS(552), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(554), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6023] = 2,
    ACTIONS(758), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(756), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6050] = 2,
    ACTIONS(536), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(538), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6077] = 2,
    ACTIONS(762), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(760), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6104] = 2,
    ACTIONS(766), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(764), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6131] = 2,
    ACTIONS(526), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(528), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6158] = 2,
    ACTIONS(770), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(768), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6185] = 2,
    ACTIONS(530), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(532), 21,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6212] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_snippet_name,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
    STATE(276), 1,
      sym_protocol,
    STATE(610), 1,
      sym__port_number,
    STATE(628), 1,
      sym__ip_or_domain_address,
    STATE(629), 1,
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
    ACTIONS(774), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(140), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [6263] = 2,
    ACTIONS(778), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(776), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6290] = 2,
    ACTIONS(782), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(780), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6317] = 2,
    ACTIONS(786), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(784), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6344] = 2,
    ACTIONS(790), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(788), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6371] = 2,
    ACTIONS(716), 1,
      anon_sym_handle,
    ACTIONS(714), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6397] = 2,
    ACTIONS(692), 1,
      anon_sym_handle,
    ACTIONS(690), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6423] = 2,
    ACTIONS(786), 1,
      anon_sym_handle,
    ACTIONS(784), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6449] = 2,
    ACTIONS(570), 1,
      anon_sym_handle,
    ACTIONS(568), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6475] = 2,
    ACTIONS(566), 1,
      anon_sym_handle,
    ACTIONS(564), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6501] = 2,
    ACTIONS(624), 1,
      anon_sym_handle,
    ACTIONS(622), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6527] = 2,
    ACTIONS(652), 1,
      anon_sym_handle,
    ACTIONS(650), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6553] = 2,
    ACTIONS(790), 1,
      anon_sym_handle,
    ACTIONS(788), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6579] = 2,
    ACTIONS(782), 1,
      anon_sym_handle,
    ACTIONS(780), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6605] = 2,
    ACTIONS(580), 1,
      anon_sym_handle,
    ACTIONS(578), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6631] = 2,
    ACTIONS(770), 1,
      anon_sym_handle,
    ACTIONS(768), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6657] = 2,
    ACTIONS(762), 1,
      anon_sym_handle,
    ACTIONS(760), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6683] = 2,
    ACTIONS(668), 1,
      anon_sym_handle,
    ACTIONS(666), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6709] = 2,
    ACTIONS(584), 1,
      anon_sym_handle,
    ACTIONS(582), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6735] = 2,
    ACTIONS(778), 1,
      anon_sym_handle,
    ACTIONS(776), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6761] = 2,
    ACTIONS(592), 1,
      anon_sym_handle,
    ACTIONS(590), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6787] = 2,
    ACTIONS(766), 1,
      anon_sym_handle,
    ACTIONS(764), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6813] = 2,
    ACTIONS(720), 1,
      anon_sym_handle,
    ACTIONS(718), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6839] = 2,
    ACTIONS(758), 1,
      anon_sym_handle,
    ACTIONS(756), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6865] = 2,
    ACTIONS(576), 1,
      anon_sym_handle,
    ACTIONS(574), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6891] = 2,
    ACTIONS(754), 1,
      anon_sym_handle,
    ACTIONS(752), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6917] = 2,
    ACTIONS(700), 1,
      anon_sym_handle,
    ACTIONS(698), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6943] = 2,
    ACTIONS(750), 1,
      anon_sym_handle,
    ACTIONS(748), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6969] = 2,
    ACTIONS(596), 1,
      anon_sym_handle,
    ACTIONS(594), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [6995] = 2,
    ACTIONS(680), 1,
      anon_sym_handle,
    ACTIONS(678), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7021] = 2,
    ACTIONS(676), 1,
      anon_sym_handle,
    ACTIONS(674), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7047] = 2,
    ACTIONS(712), 1,
      anon_sym_handle,
    ACTIONS(710), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7073] = 2,
    ACTIONS(708), 1,
      anon_sym_handle,
    ACTIONS(706), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7099] = 2,
    ACTIONS(704), 1,
      anon_sym_handle,
    ACTIONS(702), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7125] = 2,
    ACTIONS(636), 1,
      anon_sym_handle,
    ACTIONS(634), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7151] = 2,
    ACTIONS(656), 1,
      anon_sym_handle,
    ACTIONS(654), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7177] = 2,
    ACTIONS(562), 1,
      anon_sym_handle,
    ACTIONS(560), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7203] = 2,
    ACTIONS(524), 1,
      anon_sym_handle,
    ACTIONS(522), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7229] = 2,
    ACTIONS(550), 1,
      anon_sym_handle,
    ACTIONS(548), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7255] = 2,
    ACTIONS(600), 1,
      anon_sym_handle,
    ACTIONS(598), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7281] = 2,
    ACTIONS(696), 1,
      anon_sym_handle,
    ACTIONS(694), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7307] = 2,
    ACTIONS(558), 1,
      anon_sym_handle,
    ACTIONS(556), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7333] = 2,
    ACTIONS(588), 1,
      anon_sym_handle,
    ACTIONS(586), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7359] = 2,
    ACTIONS(608), 1,
      anon_sym_handle,
    ACTIONS(606), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7385] = 2,
    ACTIONS(612), 1,
      anon_sym_handle,
    ACTIONS(610), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7411] = 2,
    ACTIONS(664), 1,
      anon_sym_handle,
    ACTIONS(662), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7437] = 2,
    ACTIONS(604), 1,
      anon_sym_handle,
    ACTIONS(602), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7463] = 2,
    ACTIONS(688), 1,
      anon_sym_handle,
    ACTIONS(686), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7489] = 2,
    ACTIONS(684), 1,
      anon_sym_handle,
    ACTIONS(682), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7515] = 2,
    ACTIONS(620), 1,
      anon_sym_handle,
    ACTIONS(618), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7541] = 2,
    ACTIONS(672), 1,
      anon_sym_handle,
    ACTIONS(670), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7567] = 2,
    ACTIONS(628), 1,
      anon_sym_handle,
    ACTIONS(626), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7593] = 2,
    ACTIONS(660), 1,
      anon_sym_handle,
    ACTIONS(658), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7619] = 2,
    ACTIONS(648), 1,
      anon_sym_handle,
    ACTIONS(646), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7645] = 2,
    ACTIONS(640), 1,
      anon_sym_handle,
    ACTIONS(638), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7671] = 2,
    ACTIONS(632), 1,
      anon_sym_handle,
    ACTIONS(630), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7697] = 2,
    ACTIONS(616), 1,
      anon_sym_handle,
    ACTIONS(614), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7723] = 2,
    ACTIONS(644), 1,
      anon_sym_handle,
    ACTIONS(642), 20,
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
      anon_sym_root,
      anon_sym_tls,
      anon_sym_route,
  [7749] = 10,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(803), 1,
      anon_sym_PLUS,
    ACTIONS(806), 1,
      anon_sym_DASH,
    ACTIONS(809), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(792), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(795), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(209), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7786] = 10,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(812), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(814), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(209), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7823] = 10,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(812), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(814), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(209), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7860] = 10,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    ACTIONS(828), 1,
      anon_sym_RBRACE,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(812), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(814), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(209), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7897] = 10,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(812), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(814), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(209), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7934] = 9,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(832), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(834), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(213), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7968] = 11,
    ACTIONS(840), 1,
      anon_sym_COLON,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    STATE(68), 1,
      sym_site_address,
    STATE(85), 1,
      sym__port_number,
    STATE(277), 1,
      sym_protocol,
    STATE(461), 1,
      sym_matcher_token,
    STATE(597), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(836), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(838), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8006] = 9,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(846), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(848), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(211), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8040] = 9,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(850), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(852), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(212), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8074] = 11,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_DASH,
    ACTIONS(860), 1,
      anon_sym_QMARK,
    STATE(126), 1,
      sym_field_manipulator,
    STATE(467), 1,
      sym_matcher_token,
    STATE(468), 1,
      sym_header_name,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(127), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8112] = 11,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(866), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_site_address,
    STATE(150), 1,
      sym__port_number,
    STATE(281), 1,
      sym_protocol,
    STATE(475), 1,
      sym_matcher_token,
    STATE(546), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(862), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(864), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8150] = 9,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(820), 1,
      anon_sym_PLUS,
    ACTIONS(822), 1,
      anon_sym_DASH,
    ACTIONS(824), 1,
      anon_sym_QMARK,
    STATE(463), 1,
      sym_header_name,
    ACTIONS(868), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(870), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(210), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(259), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8184] = 11,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    ACTIONS(874), 1,
      anon_sym_PLUS,
    ACTIONS(876), 1,
      anon_sym_DASH,
    ACTIONS(878), 1,
      anon_sym_QMARK,
    STATE(181), 1,
      sym_field_manipulator,
    STATE(476), 1,
      sym_matcher_token,
    STATE(483), 1,
      sym_header_name,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(180), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8222] = 2,
    ACTIONS(882), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(880), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8240] = 2,
    ACTIONS(886), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(884), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8258] = 2,
    ACTIONS(890), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(888), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8276] = 2,
    ACTIONS(894), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(892), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8294] = 2,
    ACTIONS(786), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(784), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8312] = 2,
    ACTIONS(898), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(896), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8330] = 2,
    ACTIONS(902), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(900), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8348] = 2,
    ACTIONS(906), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(904), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [8366] = 9,
    ACTIONS(354), 1,
      anon_sym_unix,
    ACTIONS(382), 1,
      sym__ipv4_address,
    ACTIONS(384), 1,
      sym__ipv6_address,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym_unix_path_token2,
    STATE(42), 1,
      sym_unix_path,
    STATE(582), 1,
      sym__network,
    STATE(35), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(352), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [8397] = 9,
    ACTIONS(348), 1,
      sym__ipv4_address,
    ACTIONS(350), 1,
      sym__ipv6_address,
    ACTIONS(354), 1,
      anon_sym_unix,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    STATE(39), 1,
      sym_unix_path,
    STATE(584), 1,
      sym__network,
    STATE(33), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(352), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [8428] = 8,
    ACTIONS(908), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(916), 1,
      anon_sym_path_regexp,
    STATE(261), 1,
      sym__horizontal_whitespaces,
    ACTIONS(910), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(268), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8456] = 8,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(874), 1,
      anon_sym_PLUS,
    ACTIONS(876), 1,
      anon_sym_DASH,
    ACTIONS(878), 1,
      anon_sym_QMARK,
    ACTIONS(918), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_field_manipulator,
    STATE(483), 1,
      sym_header_name,
    STATE(180), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8484] = 8,
    ACTIONS(866), 1,
      anon_sym_COLON,
    STATE(82), 1,
      sym_site_address,
    STATE(150), 1,
      sym__port_number,
    STATE(281), 1,
      sym_protocol,
    STATE(546), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(862), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(864), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8512] = 8,
    ACTIONS(866), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym_site_address,
    STATE(150), 1,
      sym__port_number,
    STATE(281), 1,
      sym_protocol,
    STATE(546), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(862), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(864), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8540] = 8,
    ACTIONS(818), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(856), 1,
      anon_sym_PLUS,
    ACTIONS(858), 1,
      anon_sym_DASH,
    ACTIONS(860), 1,
      anon_sym_QMARK,
    ACTIONS(920), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_field_manipulator,
    STATE(468), 1,
      sym_header_name,
    STATE(127), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [8568] = 3,
    ACTIONS(922), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(377), 1,
      sym__horizontal_whitespaces,
    ACTIONS(520), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [8586] = 8,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(85), 1,
      sym__port_number,
    STATE(87), 1,
      sym_site_address,
    STATE(277), 1,
      sym_protocol,
    STATE(597), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(836), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(838), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8614] = 8,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(916), 1,
      anon_sym_path_regexp,
    ACTIONS(924), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym__horizontal_whitespaces,
    ACTIONS(926), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(267), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8642] = 8,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_site_address,
    STATE(85), 1,
      sym__port_number,
    STATE(277), 1,
      sym_protocol,
    STATE(597), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(836), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(838), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8670] = 6,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      anon_sym_output,
    ACTIONS(936), 1,
      anon_sym_format,
    ACTIONS(938), 1,
      anon_sym_level,
    ACTIONS(930), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(245), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [8693] = 2,
    ACTIONS(522), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(524), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [8708] = 8,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(940), 1,
      sym_domain_address,
    ACTIONS(944), 1,
      sym_uri_path_with_placeholders,
    STATE(45), 1,
      sym_redir_or_rewrite_target,
    STATE(464), 1,
      sym_matcher_token,
    STATE(667), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(942), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8735] = 6,
    ACTIONS(949), 1,
      anon_sym_RBRACE,
    ACTIONS(951), 1,
      anon_sym_output,
    ACTIONS(954), 1,
      anon_sym_format,
    ACTIONS(957), 1,
      anon_sym_level,
    ACTIONS(946), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [8758] = 6,
    ACTIONS(934), 1,
      anon_sym_output,
    ACTIONS(936), 1,
      anon_sym_format,
    ACTIONS(938), 1,
      anon_sym_level,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(960), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [8781] = 6,
    ACTIONS(966), 1,
      anon_sym_RBRACE,
    ACTIONS(968), 1,
      anon_sym_roll_size,
    ACTIONS(970), 1,
      anon_sym_roll_keep,
    ACTIONS(972), 1,
      anon_sym_roll_keep_for_days,
    STATE(252), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(964), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [8804] = 2,
    ACTIONS(548), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(550), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [8819] = 6,
    ACTIONS(934), 1,
      anon_sym_output,
    ACTIONS(936), 1,
      anon_sym_format,
    ACTIONS(938), 1,
      anon_sym_level,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
    ACTIONS(974), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [8842] = 8,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(978), 1,
      sym_domain_address,
    ACTIONS(980), 1,
      sym_uri_path_with_placeholders,
    STATE(53), 1,
      sym_redir_or_rewrite_target,
    STATE(495), 1,
      sym_matcher_token,
    STATE(579), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(942), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8869] = 8,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(980), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(982), 1,
      sym_domain_address,
    STATE(53), 1,
      sym_redir_or_rewrite_target,
    STATE(511), 1,
      sym_matcher_token,
    STATE(551), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(942), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8896] = 6,
    ACTIONS(934), 1,
      anon_sym_output,
    ACTIONS(936), 1,
      anon_sym_format,
    ACTIONS(938), 1,
      anon_sym_level,
    ACTIONS(984), 1,
      anon_sym_RBRACE,
    ACTIONS(960), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [8919] = 6,
    ACTIONS(968), 1,
      anon_sym_roll_size,
    ACTIONS(970), 1,
      anon_sym_roll_keep,
    ACTIONS(972), 1,
      anon_sym_roll_keep_for_days,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    STATE(253), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(986), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [8942] = 6,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(995), 1,
      anon_sym_roll_size,
    ACTIONS(998), 1,
      anon_sym_roll_keep,
    ACTIONS(1001), 1,
      anon_sym_roll_keep_for_days,
    STATE(253), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(990), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [8965] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1004), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(266), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8987] = 2,
    ACTIONS(604), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(602), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9001] = 6,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(1015), 1,
      anon_sym_path,
    ACTIONS(1018), 1,
      anon_sym_path_regexp,
    ACTIONS(1010), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(256), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9023] = 2,
    ACTIONS(1023), 1,
      anon_sym_roll_keep,
    ACTIONS(1021), 8,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_roll_disabled,
      anon_sym_roll_size,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
      anon_sym_roll_keep_for_days,
  [9037] = 2,
    ACTIONS(620), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(618), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9051] = 2,
    ACTIONS(680), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(678), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9065] = 2,
    ACTIONS(550), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(548), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9079] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1025), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(263), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9101] = 2,
    ACTIONS(656), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(654), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9115] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1031), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(256), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9137] = 2,
    ACTIONS(524), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(522), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9151] = 2,
    ACTIONS(782), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(780), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9165] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1033), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(256), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9187] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1006), 1,
      anon_sym_RBRACE,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1029), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(256), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9209] = 6,
    ACTIONS(914), 1,
      anon_sym_path,
    ACTIONS(1008), 1,
      anon_sym_path_regexp,
    ACTIONS(1027), 1,
      anon_sym_RBRACE,
    ACTIONS(1029), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(256), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(555), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [9231] = 2,
    ACTIONS(692), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(690), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [9245] = 5,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    STATE(486), 1,
      sym_matcher_token,
    ACTIONS(477), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(65), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9264] = 5,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(1039), 1,
      anon_sym_email,
    ACTIONS(1041), 1,
      anon_sym_auto_https,
    ACTIONS(1035), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(274), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [9283] = 5,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    STATE(490), 1,
      sym_matcher_token,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(71), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9302] = 5,
    ACTIONS(1046), 1,
      anon_sym_RBRACE,
    ACTIONS(1048), 1,
      anon_sym_email,
    ACTIONS(1051), 1,
      anon_sym_auto_https,
    ACTIONS(1043), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(273), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [9321] = 5,
    ACTIONS(1039), 1,
      anon_sym_email,
    ACTIONS(1041), 1,
      anon_sym_auto_https,
    ACTIONS(1056), 1,
      anon_sym_RBRACE,
    ACTIONS(1054), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(273), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [9340] = 6,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1058), 1,
      anon_sym_LBRACE,
    ACTIONS(1060), 1,
      anon_sym_bcrypt,
    STATE(421), 1,
      sym_matcher_token,
    STATE(422), 1,
      sym_hash_algorithm,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9360] = 5,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(599), 1,
      sym__port_number,
    STATE(602), 1,
      sym__ip_or_domain_address,
    ACTIONS(1062), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1064), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9378] = 5,
    ACTIONS(840), 1,
      anon_sym_COLON,
    STATE(88), 1,
      sym__port_number,
    STATE(594), 1,
      sym__ip_or_domain_address,
    ACTIONS(1066), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1068), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9396] = 6,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1060), 1,
      anon_sym_bcrypt,
    ACTIONS(1070), 1,
      anon_sym_LBRACE,
    STATE(498), 1,
      sym_matcher_token,
    STATE(504), 1,
      sym_hash_algorithm,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9416] = 6,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1072), 1,
      sym__valid_uri_path_string,
    STATE(177), 1,
      sym_unix_path,
    STATE(496), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9436] = 6,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1072), 1,
      sym__valid_uri_path_string,
    STATE(134), 1,
      sym_unix_path,
    STATE(460), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9456] = 5,
    ACTIONS(866), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym__port_number,
    STATE(547), 1,
      sym__ip_or_domain_address,
    ACTIONS(1074), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1076), 2,
      sym__ipv6_address,
      sym_domain_address,
  [9474] = 5,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1078), 1,
      sym_http_message,
    ACTIONS(1080), 1,
      sym_http_error_code,
    STATE(481), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9491] = 4,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9506] = 5,
    ACTIONS(978), 1,
      sym_domain_address,
    ACTIONS(980), 1,
      sym_uri_path_with_placeholders,
    STATE(52), 1,
      sym_redir_or_rewrite_target,
    STATE(579), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [9523] = 1,
    ACTIONS(1088), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9532] = 1,
    ACTIONS(1090), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9541] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1092), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9556] = 3,
    ACTIONS(1094), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(634), 1,
      sym__horizontal_whitespaces,
    ACTIONS(1096), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [9569] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1098), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9584] = 5,
    ACTIONS(940), 1,
      sym_domain_address,
    ACTIONS(944), 1,
      sym_uri_path_with_placeholders,
    STATE(46), 1,
      sym_redir_or_rewrite_target,
    STATE(667), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [9601] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1100), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9616] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1102), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9631] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9646] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9661] = 1,
    ACTIONS(1108), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9670] = 5,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1110), 1,
      sym_http_message,
    ACTIONS(1112), 1,
      sym_http_error_code,
    STATE(487), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9687] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1114), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9702] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9717] = 1,
    ACTIONS(1118), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9726] = 5,
    ACTIONS(980), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(982), 1,
      sym_domain_address,
    STATE(52), 1,
      sym_redir_or_rewrite_target,
    STATE(551), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [9743] = 1,
    ACTIONS(1120), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9752] = 1,
    ACTIONS(1122), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9761] = 1,
    ACTIONS(1124), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [9770] = 4,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1126), 1,
      anon_sym_RBRACE,
    ACTIONS(1082), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9785] = 4,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    ACTIONS(1133), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1128), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(305), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9800] = 5,
    ACTIONS(1136), 1,
      sym__vertical_whitespace,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [9816] = 5,
    ACTIONS(1144), 1,
      sym__vertical_whitespace,
    ACTIONS(1146), 1,
      sym__empty_line,
    ACTIONS(1148), 1,
      sym_comment_line,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_directive_request_body_repeat1,
  [9832] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1152), 1,
      sym__vertical_whitespace,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [9848] = 5,
    ACTIONS(1156), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1158), 1,
      sym__vertical_whitespace,
    ACTIONS(1160), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym__horizontal_whitespaces,
    STATE(383), 1,
      aux_sym_directive_file_server_repeat1,
  [9864] = 5,
    ACTIONS(1136), 1,
      sym__vertical_whitespace,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
    ACTIONS(1162), 1,
      sym__empty_line,
    ACTIONS(1164), 1,
      sym_comment_line,
    STATE(308), 1,
      aux_sym_directive_request_body_repeat1,
  [9880] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1144), 1,
      sym__vertical_whitespace,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [9896] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1166), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(294), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9908] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1168), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(292), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9920] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1170), 1,
      anon_sym_browse,
    STATE(360), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9934] = 4,
    ACTIONS(1174), 1,
      anon_sym_RBRACE,
    ACTIONS(1176), 1,
      anon_sym_browse,
    STATE(344), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1172), 2,
      sym__empty_line,
      sym_comment_line,
  [9948] = 4,
    ACTIONS(1176), 1,
      anon_sym_browse,
    ACTIONS(1178), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1172), 2,
      sym__empty_line,
      sym_comment_line,
  [9962] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1180), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(287), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9974] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1182), 1,
      sym__vertical_whitespace,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [9990] = 5,
    ACTIONS(1182), 1,
      sym__vertical_whitespace,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
    ACTIONS(1186), 1,
      sym__empty_line,
    ACTIONS(1188), 1,
      sym_comment_line,
    STATE(328), 1,
      aux_sym_directive_request_body_repeat1,
  [10006] = 5,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1192), 1,
      sym__vertical_whitespace,
    ACTIONS(1194), 1,
      anon_sym_LBRACE,
    STATE(388), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10022] = 5,
    ACTIONS(1196), 1,
      sym__vertical_whitespace,
    ACTIONS(1198), 1,
      sym__empty_line,
    ACTIONS(1200), 1,
      sym_comment_line,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      aux_sym_directive_request_body_repeat1,
  [10038] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1196), 1,
      sym__vertical_whitespace,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [10054] = 5,
    ACTIONS(1204), 1,
      sym__vertical_whitespace,
    ACTIONS(1206), 1,
      sym__empty_line,
    ACTIONS(1208), 1,
      sym_comment_line,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
  [10070] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1204), 1,
      sym__vertical_whitespace,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [10086] = 5,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1212), 1,
      sym__ipv4_address,
    ACTIONS(1214), 1,
      sym__ipv6_address,
    STATE(43), 1,
      sym_unix_path,
  [10102] = 1,
    ACTIONS(1216), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [10110] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1218), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(283), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10122] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1220), 1,
      sym__vertical_whitespace,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [10138] = 4,
    ACTIONS(1176), 1,
      anon_sym_browse,
    ACTIONS(1224), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1172), 2,
      sym__empty_line,
      sym_comment_line,
  [10152] = 2,
    ACTIONS(1228), 1,
      anon_sym_path,
    ACTIONS(1226), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_path_regexp,
  [10162] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1230), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(291), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10174] = 5,
    ACTIONS(1232), 1,
      sym__vertical_whitespace,
    ACTIONS(1234), 1,
      sym__empty_line,
    ACTIONS(1236), 1,
      sym_comment_line,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      aux_sym_directive_request_body_repeat1,
  [10190] = 5,
    ACTIONS(1138), 1,
      sym__empty_line,
    ACTIONS(1140), 1,
      sym_comment_line,
    ACTIONS(1232), 1,
      sym__vertical_whitespace,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
  [10206] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1240), 1,
      sym__vertical_whitespaces,
    STATE(508), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10220] = 5,
    ACTIONS(1242), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1244), 1,
      sym__vertical_whitespace,
    ACTIONS(1246), 1,
      anon_sym_LBRACE,
    STATE(314), 1,
      sym__horizontal_whitespaces,
    STATE(376), 1,
      aux_sym_directive_file_server_repeat1,
  [10236] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1170), 1,
      anon_sym_browse,
    STATE(320), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10250] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1248), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10262] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1250), 1,
      sym__vertical_whitespaces,
    STATE(491), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10276] = 5,
    ACTIONS(1252), 1,
      sym__vertical_whitespace,
    ACTIONS(1254), 1,
      sym__empty_line,
    ACTIONS(1256), 1,
      sym_comment_line,
    ACTIONS(1258), 1,
      anon_sym_RBRACE,
    STATE(324), 1,
      aux_sym_directive_request_body_repeat1,
  [10292] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1260), 1,
      anon_sym_LBRACE,
    STATE(480), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10306] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1262), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(297), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10318] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1264), 1,
      anon_sym_LBRACE,
    STATE(477), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10332] = 4,
    ACTIONS(1176), 1,
      anon_sym_browse,
    ACTIONS(1266), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1172), 2,
      sym__empty_line,
      sym_comment_line,
  [10346] = 4,
    ACTIONS(1271), 1,
      anon_sym_RBRACE,
    ACTIONS(1273), 1,
      anon_sym_browse,
    STATE(344), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1268), 2,
      sym__empty_line,
      sym_comment_line,
  [10360] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1276), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(298), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10372] = 5,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1278), 1,
      sym__ipv4_address,
    ACTIONS(1280), 1,
      sym__ipv6_address,
    STATE(37), 1,
      sym_unix_path,
  [10388] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1282), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(289), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10400] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1284), 1,
      anon_sym_LBRACE,
    STATE(462), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10414] = 3,
    ACTIONS(1086), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1286), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(304), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [10426] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1288), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10440] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1290), 1,
      anon_sym_LBRACE,
    STATE(433), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10454] = 1,
    ACTIONS(1292), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [10462] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1294), 1,
      anon_sym_LBRACE,
    STATE(430), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10476] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1296), 1,
      anon_sym_LBRACE,
    STATE(428), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10490] = 4,
    ACTIONS(1300), 1,
      sym__empty_line,
    ACTIONS(1303), 1,
      sym_comment_line,
    STATE(355), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1298), 2,
      sym__vertical_whitespace,
      anon_sym_RBRACE,
  [10504] = 5,
    ACTIONS(1306), 1,
      sym__vertical_whitespace,
    ACTIONS(1308), 1,
      sym__empty_line,
    ACTIONS(1310), 1,
      sym_comment_line,
    ACTIONS(1312), 1,
      anon_sym_RBRACE,
    STATE(333), 1,
      aux_sym_directive_request_body_repeat1,
  [10520] = 4,
    ACTIONS(844), 1,
      sym__valid_uri_path_string,
    ACTIONS(1314), 1,
      anon_sym_LBRACE,
    STATE(420), 1,
      sym_matcher_token,
    ACTIONS(842), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [10534] = 2,
    ACTIONS(1318), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(1316), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [10544] = 3,
    ACTIONS(1322), 1,
      anon_sym_file,
    STATE(286), 1,
      sym__log_output_file,
    ACTIONS(1320), 3,
      anon_sym_stderr,
      anon_sym_stdout,
      anon_sym_discard,
  [10556] = 5,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1324), 1,
      sym__vertical_whitespace,
    ACTIONS(1326), 1,
      anon_sym_LBRACE,
    STATE(374), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10572] = 3,
    ACTIONS(1176), 1,
      anon_sym_browse,
    STATE(343), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1328), 2,
      sym__empty_line,
      sym_comment_line,
  [10583] = 2,
    ACTIONS(492), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(69), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [10592] = 3,
    ACTIONS(1332), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1330), 2,
      sym__empty_line,
      sym_comment_line,
  [10603] = 1,
    ACTIONS(1334), 4,
      anon_sym_error,
      anon_sym_INFO,
      anon_sym_info,
      anon_sym_ERROR,
  [10610] = 3,
    ACTIONS(1336), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1330), 2,
      sym__empty_line,
      sym_comment_line,
  [10621] = 3,
    ACTIONS(1340), 1,
      anon_sym_max_size,
    STATE(365), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1338), 2,
      sym__empty_line,
      sym_comment_line,
  [10632] = 3,
    ACTIONS(1342), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1330), 2,
      sym__empty_line,
      sym_comment_line,
  [10643] = 2,
    ACTIONS(477), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(63), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [10652] = 3,
    ACTIONS(1176), 1,
      anon_sym_browse,
    STATE(329), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1344), 2,
      sym__empty_line,
      sym_comment_line,
  [10663] = 3,
    ACTIONS(1348), 1,
      anon_sym_max_size,
    STATE(367), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1346), 2,
      sym__empty_line,
      sym_comment_line,
  [10674] = 3,
    ACTIONS(1176), 1,
      anon_sym_browse,
    STATE(315), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1350), 2,
      sym__empty_line,
      sym_comment_line,
  [10685] = 1,
    ACTIONS(1352), 4,
      anon_sym_off,
      anon_sym_disable_redirects,
      anon_sym_ignore_loaded_certs,
      anon_sym_disable_certs,
  [10692] = 3,
    ACTIONS(1298), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1354), 2,
      sym__empty_line,
      sym_comment_line,
  [10703] = 4,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1357), 1,
      sym__vertical_whitespace,
    STATE(391), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10716] = 1,
    ACTIONS(1359), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [10723] = 4,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1361), 1,
      sym__vertical_whitespace,
    STATE(391), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10736] = 4,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      aux_sym_header_value_token1,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(269), 1,
      sym_header_value,
  [10749] = 4,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      aux_sym_header_value_token1,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(258), 1,
      sym_header_value,
  [10762] = 4,
    ACTIONS(1363), 1,
      anon_sym_DQUOTE,
    ACTIONS(1365), 1,
      aux_sym_header_value_token1,
    ACTIONS(1367), 1,
      anon_sym_SQUOTE,
    STATE(255), 1,
      sym_header_value,
  [10775] = 4,
    ACTIONS(1369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1371), 1,
      aux_sym_header_value_token1,
    ACTIONS(1373), 1,
      anon_sym_SQUOTE,
    STATE(237), 1,
      sym_header_value,
  [10788] = 4,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    ACTIONS(1377), 1,
      aux_sym_header_value_token1,
    ACTIONS(1379), 1,
      anon_sym_SQUOTE,
    STATE(157), 1,
      sym_header_value,
  [10801] = 3,
    ACTIONS(1176), 1,
      anon_sym_browse,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1381), 2,
      sym__empty_line,
      sym_comment_line,
  [10812] = 4,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1383), 1,
      sym__vertical_whitespace,
    STATE(391), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10825] = 4,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    ACTIONS(1377), 1,
      aux_sym_header_value_token1,
    ACTIONS(1379), 1,
      anon_sym_SQUOTE,
    STATE(200), 1,
      sym_header_value,
  [10838] = 4,
    ACTIONS(1375), 1,
      anon_sym_DQUOTE,
    ACTIONS(1377), 1,
      aux_sym_header_value_token1,
    ACTIONS(1379), 1,
      anon_sym_SQUOTE,
    STATE(197), 1,
      sym_header_value,
  [10851] = 3,
    ACTIONS(1387), 1,
      anon_sym_max_size,
    STATE(363), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1385), 2,
      sym__empty_line,
      sym_comment_line,
  [10862] = 4,
    ACTIONS(1389), 1,
      anon_sym_DQUOTE,
    ACTIONS(1391), 1,
      aux_sym_header_value_token1,
    ACTIONS(1393), 1,
      anon_sym_SQUOTE,
    STATE(81), 1,
      sym_header_value,
  [10875] = 4,
    ACTIONS(1190), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1395), 1,
      sym__vertical_whitespace,
    STATE(391), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10888] = 4,
    ACTIONS(1397), 1,
      anon_sym_DQUOTE,
    ACTIONS(1399), 1,
      aux_sym_header_value_token1,
    ACTIONS(1401), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      sym_header_value,
  [10901] = 3,
    ACTIONS(1405), 1,
      anon_sym_max_size,
    STATE(392), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1403), 2,
      sym__empty_line,
      sym_comment_line,
  [10912] = 4,
    ACTIONS(1407), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1410), 1,
      sym__vertical_whitespace,
    STATE(391), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(588), 1,
      sym__horizontal_whitespaces,
  [10925] = 3,
    ACTIONS(1412), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1330), 2,
      sym__empty_line,
      sym_comment_line,
  [10936] = 4,
    ACTIONS(1414), 1,
      anon_sym_DQUOTE,
    ACTIONS(1416), 1,
      aux_sym_header_value_token1,
    ACTIONS(1418), 1,
      anon_sym_SQUOTE,
    STATE(132), 1,
      sym_header_value,
  [10949] = 1,
    ACTIONS(1420), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_browse,
  [10956] = 4,
    ACTIONS(1414), 1,
      anon_sym_DQUOTE,
    ACTIONS(1416), 1,
      aux_sym_header_value_token1,
    ACTIONS(1418), 1,
      anon_sym_SQUOTE,
    STATE(111), 1,
      sym_header_value,
  [10969] = 4,
    ACTIONS(1414), 1,
      anon_sym_DQUOTE,
    ACTIONS(1416), 1,
      aux_sym_header_value_token1,
    ACTIONS(1418), 1,
      anon_sym_SQUOTE,
    STATE(107), 1,
      sym_header_value,
  [10982] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(1422), 1,
      aux_sym_unix_path_token2,
    STATE(204), 1,
      sym_unix_path,
  [10992] = 3,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(1424), 1,
      aux_sym_unix_path_token2,
    STATE(100), 1,
      sym_unix_path,
  [11002] = 3,
    ACTIONS(1060), 1,
      anon_sym_bcrypt,
    ACTIONS(1426), 1,
      anon_sym_LBRACE,
    STATE(431), 1,
      sym_hash_algorithm,
  [11012] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(1422), 1,
      aux_sym_unix_path_token2,
    STATE(169), 1,
      sym_unix_path,
  [11022] = 3,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(1422), 1,
      aux_sym_unix_path_token2,
    STATE(165), 1,
      sym_unix_path,
  [11032] = 2,
    ACTIONS(1428), 1,
      anon_sym_SLASH,
    ACTIONS(1430), 2,
      anon_sym_4,
      anon_sym_6,
  [11040] = 2,
    ACTIONS(1432), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1434), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [11048] = 2,
    ACTIONS(1428), 1,
      anon_sym_SLASH,
    ACTIONS(1430), 2,
      anon_sym_gram,
      anon_sym_packet,
  [11056] = 3,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(1424), 1,
      aux_sym_unix_path_token2,
    STATE(101), 1,
      sym_unix_path,
  [11066] = 3,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(1424), 1,
      aux_sym_unix_path_token2,
    STATE(118), 1,
      sym_unix_path,
  [11076] = 2,
    ACTIONS(1436), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1438), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [11084] = 3,
    ACTIONS(1440), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1442), 1,
      sym__vertical_whitespace,
    STATE(578), 1,
      sym__horizontal_whitespaces,
  [11094] = 3,
    ACTIONS(500), 1,
      anon_sym_DQUOTE,
    ACTIONS(1444), 1,
      aux_sym_unix_path_token2,
    STATE(408), 1,
      sym_unix_path,
  [11104] = 3,
    ACTIONS(1060), 1,
      anon_sym_bcrypt,
    ACTIONS(1446), 1,
      anon_sym_LBRACE,
    STATE(418), 1,
      sym_hash_algorithm,
  [11114] = 3,
    ACTIONS(1448), 1,
      anon_sym_DQUOTE,
    ACTIONS(1450), 1,
      aux_sym_unix_path_token2,
    STATE(653), 1,
      sym_unix_path,
  [11124] = 2,
    ACTIONS(1452), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(385), 1,
      sym__horizontal_whitespaces,
  [11131] = 2,
    ACTIONS(1454), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(90), 1,
      sym__horizontal_whitespaces,
  [11138] = 2,
    ACTIONS(1456), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(409), 1,
      sym__horizontal_whitespaces,
  [11145] = 2,
    ACTIONS(406), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(408), 1,
      sym__vertical_whitespace,
  [11152] = 2,
    ACTIONS(1458), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(662), 1,
      sym__horizontal_whitespaces,
  [11159] = 2,
    ACTIONS(1460), 1,
      anon_sym_LBRACE,
    ACTIONS(1462), 1,
      aux_sym_directive_basicauth_token1,
  [11166] = 2,
    ACTIONS(1464), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(425), 1,
      sym__horizontal_whitespaces,
  [11173] = 2,
    ACTIONS(1466), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(660), 1,
      sym__horizontal_whitespaces,
  [11180] = 2,
    ACTIONS(1468), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(659), 1,
      sym__horizontal_whitespaces,
  [11187] = 2,
    ACTIONS(1470), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(410), 1,
      sym__horizontal_whitespaces,
  [11194] = 2,
    ACTIONS(1472), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(427), 1,
      sym__horizontal_whitespaces,
  [11201] = 2,
    ACTIONS(1474), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(357), 1,
      sym__horizontal_whitespaces,
  [11208] = 2,
    ACTIONS(1476), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(275), 1,
      sym__horizontal_whitespaces,
  [11215] = 2,
    ACTIONS(1478), 1,
      anon_sym_LBRACE,
    ACTIONS(1480), 1,
      aux_sym_directive_basicauth_token1,
  [11222] = 1,
    ACTIONS(1482), 2,
      anon_sym_console,
      anon_sym_json,
  [11227] = 2,
    ACTIONS(1446), 1,
      anon_sym_LBRACE,
    ACTIONS(1484), 1,
      aux_sym_directive_basicauth_token1,
  [11234] = 2,
    ACTIONS(1486), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(639), 1,
      sym__horizontal_whitespaces,
  [11241] = 2,
    ACTIONS(1488), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(669), 1,
      sym__horizontal_whitespaces,
  [11248] = 2,
    ACTIONS(1490), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(637), 1,
      sym__horizontal_whitespaces,
  [11255] = 2,
    ACTIONS(1492), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(417), 1,
      sym__horizontal_whitespaces,
  [11262] = 2,
    ACTIONS(1494), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(666), 1,
      sym__horizontal_whitespaces,
  [11269] = 2,
    ACTIONS(1496), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(636), 1,
      sym__horizontal_whitespaces,
  [11276] = 2,
    ACTIONS(1498), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(665), 1,
      sym__horizontal_whitespaces,
  [11283] = 2,
    ACTIONS(1500), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(604), 1,
      sym__horizontal_whitespaces,
  [11290] = 2,
    ACTIONS(1502), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(664), 1,
      sym__horizontal_whitespaces,
  [11297] = 2,
    ACTIONS(1504), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(354), 1,
      sym__horizontal_whitespaces,
  [11304] = 2,
    ACTIONS(1506), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(353), 1,
      sym__horizontal_whitespaces,
  [11311] = 2,
    ACTIONS(1508), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(406), 1,
      sym__horizontal_whitespaces,
  [11318] = 2,
    ACTIONS(1510), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(351), 1,
      sym__horizontal_whitespaces,
  [11325] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(455), 1,
      sym_header_name,
  [11332] = 2,
    ACTIONS(1514), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(364), 1,
      sym__horizontal_whitespaces,
  [11339] = 2,
    ACTIONS(1516), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(426), 1,
      sym__horizontal_whitespaces,
  [11346] = 2,
    ACTIONS(1518), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(359), 1,
      sym__horizontal_whitespaces,
  [11353] = 2,
    ACTIONS(1520), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(395), 1,
      sym__horizontal_whitespaces,
  [11360] = 2,
    ACTIONS(1522), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(396), 1,
      sym__horizontal_whitespaces,
  [11367] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(457), 1,
      sym_header_name,
  [11374] = 2,
    ACTIONS(1524), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(611), 1,
      sym__horizontal_whitespaces,
  [11381] = 2,
    ACTIONS(1526), 1,
      sym_http_message,
    ACTIONS(1528), 1,
      sym_http_error_code,
  [11388] = 2,
    ACTIONS(1530), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(627), 1,
      sym__horizontal_whitespaces,
  [11395] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(474), 1,
      sym_header_name,
  [11402] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(412), 1,
      sym_header_name,
  [11409] = 2,
    ACTIONS(1532), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(567), 1,
      sym__horizontal_whitespaces,
  [11416] = 2,
    ACTIONS(1426), 1,
      anon_sym_LBRACE,
    ACTIONS(1534), 1,
      aux_sym_directive_basicauth_token1,
  [11423] = 2,
    ACTIONS(1536), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(378), 1,
      sym__horizontal_whitespaces,
  [11430] = 2,
    ACTIONS(1538), 1,
      aux_sym_matcher_path_regexp_token1,
    ACTIONS(1540), 1,
      aux_sym_matcher_path_regexp_token2,
  [11437] = 2,
    ACTIONS(1542), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(379), 1,
      sym__horizontal_whitespaces,
  [11444] = 2,
    ACTIONS(1544), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(651), 1,
      sym__horizontal_whitespaces,
  [11451] = 2,
    ACTIONS(1546), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(405), 1,
      sym__horizontal_whitespaces,
  [11458] = 2,
    ACTIONS(1548), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(398), 1,
      sym__horizontal_whitespaces,
  [11465] = 2,
    ACTIONS(1550), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(240), 1,
      sym__horizontal_whitespaces,
  [11472] = 2,
    ACTIONS(1552), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(650), 1,
      sym__horizontal_whitespaces,
  [11479] = 2,
    ACTIONS(1554), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(380), 1,
      sym__horizontal_whitespaces,
  [11486] = 2,
    ACTIONS(1556), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(290), 1,
      sym__horizontal_whitespaces,
  [11493] = 2,
    ACTIONS(1558), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(250), 1,
      sym__horizontal_whitespaces,
  [11500] = 2,
    ACTIONS(1560), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(598), 1,
      sym__horizontal_whitespaces,
  [11507] = 2,
    ACTIONS(1562), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(236), 1,
      sym__horizontal_whitespaces,
  [11514] = 2,
    ACTIONS(1564), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(387), 1,
      sym__horizontal_whitespaces,
  [11521] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(445), 1,
      sym_header_name,
  [11528] = 2,
    ACTIONS(1566), 1,
      aux_sym_directive_basicauth_token1,
    STATE(153), 1,
      sym_header_name,
  [11535] = 2,
    ACTIONS(1512), 1,
      aux_sym_directive_basicauth_token1,
    STATE(446), 1,
      sym_header_name,
  [11542] = 2,
    ACTIONS(1568), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(372), 1,
      sym__horizontal_whitespaces,
  [11549] = 2,
    ACTIONS(1570), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(600), 1,
      sym__horizontal_whitespaces,
  [11556] = 2,
    ACTIONS(1572), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(384), 1,
      sym__horizontal_whitespaces,
  [11563] = 2,
    ACTIONS(1574), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(234), 1,
      sym__horizontal_whitespaces,
  [11570] = 2,
    ACTIONS(1576), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(233), 1,
      sym__horizontal_whitespaces,
  [11577] = 2,
    ACTIONS(1578), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(648), 1,
      sym__horizontal_whitespaces,
  [11584] = 2,
    ACTIONS(1580), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(98), 1,
      sym__horizontal_whitespaces,
  [11591] = 2,
    ACTIONS(1582), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(61), 1,
      sym__horizontal_whitespaces,
  [11598] = 2,
    ACTIONS(1584), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(647), 1,
      sym__horizontal_whitespaces,
  [11605] = 2,
    ACTIONS(1586), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(449), 1,
      sym__horizontal_whitespaces,
  [11612] = 2,
    ACTIONS(1588), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(646), 1,
      sym__horizontal_whitespaces,
  [11619] = 2,
    ACTIONS(1590), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(389), 1,
      sym__horizontal_whitespaces,
  [11626] = 2,
    ACTIONS(1592), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(334), 1,
      sym__horizontal_whitespaces,
  [11633] = 2,
    ACTIONS(1594), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1596), 1,
      sym__vertical_whitespace,
  [11640] = 2,
    ACTIONS(1598), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(368), 1,
      sym__horizontal_whitespaces,
  [11647] = 2,
    ACTIONS(1600), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(503), 1,
      sym__horizontal_whitespaces,
  [11654] = 2,
    ACTIONS(1602), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(574), 1,
      sym__horizontal_whitespaces,
  [11661] = 2,
    ACTIONS(1604), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(278), 1,
      sym__horizontal_whitespaces,
  [11668] = 2,
    ACTIONS(1606), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(362), 1,
      sym__horizontal_whitespaces,
  [11675] = 2,
    ACTIONS(1608), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(577), 1,
      sym__horizontal_whitespaces,
  [11682] = 2,
    ACTIONS(1610), 1,
      aux_sym_directive_basicauth_token1,
    STATE(164), 1,
      sym_header_name,
  [11689] = 2,
    ACTIONS(1612), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(531), 1,
      sym__horizontal_whitespaces,
  [11696] = 2,
    ACTIONS(1614), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(231), 1,
      sym__horizontal_whitespaces,
  [11703] = 2,
    ACTIONS(1616), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(284), 1,
      sym__horizontal_whitespaces,
  [11710] = 2,
    ACTIONS(1618), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(401), 1,
      sym__horizontal_whitespaces,
  [11717] = 2,
    ACTIONS(1620), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(400), 1,
      sym__horizontal_whitespaces,
  [11724] = 2,
    ACTIONS(1622), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(399), 1,
      sym__horizontal_whitespaces,
  [11731] = 2,
    ACTIONS(1624), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(279), 1,
      sym__horizontal_whitespaces,
  [11738] = 2,
    ACTIONS(1626), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(219), 1,
      sym__horizontal_whitespaces,
  [11745] = 2,
    ACTIONS(1628), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(249), 1,
      sym__horizontal_whitespaces,
  [11752] = 2,
    ACTIONS(1630), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(221), 1,
      sym__horizontal_whitespaces,
  [11759] = 2,
    ACTIONS(1632), 1,
      sym_http_message,
    ACTIONS(1634), 1,
      sym_http_error_code,
  [11766] = 2,
    ACTIONS(1636), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(454), 1,
      sym__horizontal_whitespaces,
  [11773] = 2,
    ACTIONS(1638), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(296), 1,
      sym__horizontal_whitespaces,
  [11780] = 2,
    ACTIONS(1640), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(272), 1,
      sym__horizontal_whitespaces,
  [11787] = 2,
    ACTIONS(1642), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(230), 1,
      sym__horizontal_whitespaces,
  [11794] = 2,
    ACTIONS(1644), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(626), 1,
      sym__horizontal_whitespaces,
  [11801] = 2,
    ACTIONS(1646), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(338), 1,
      sym__horizontal_whitespaces,
  [11808] = 2,
    ACTIONS(1648), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(532), 1,
      sym__horizontal_whitespaces,
  [11815] = 2,
    ACTIONS(1650), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(300), 1,
      sym__horizontal_whitespaces,
  [11822] = 2,
    ACTIONS(1652), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(397), 1,
      sym__horizontal_whitespaces,
  [11829] = 2,
    ACTIONS(1654), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(456), 1,
      sym__horizontal_whitespaces,
  [11836] = 2,
    ACTIONS(1656), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(411), 1,
      sym__horizontal_whitespaces,
  [11843] = 2,
    ACTIONS(1658), 1,
      aux_sym_directive_basicauth_token1,
    STATE(265), 1,
      sym_header_name,
  [11850] = 2,
    ACTIONS(414), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(416), 1,
      sym__vertical_whitespace,
  [11857] = 2,
    ACTIONS(1660), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(270), 1,
      sym__horizontal_whitespaces,
  [11864] = 2,
    ACTIONS(1662), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(282), 1,
      sym__horizontal_whitespaces,
  [11871] = 2,
    ACTIONS(1664), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(340), 1,
      sym__horizontal_whitespaces,
  [11878] = 2,
    ACTIONS(1666), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(350), 1,
      sym__horizontal_whitespaces,
  [11885] = 2,
    ACTIONS(1668), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(50), 1,
      sym__horizontal_whitespaces,
  [11892] = 2,
    ACTIONS(1670), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(218), 1,
      sym__horizontal_whitespaces,
  [11899] = 2,
    ACTIONS(1672), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(280), 1,
      sym__horizontal_whitespaces,
  [11906] = 2,
    ACTIONS(1674), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(215), 1,
      sym__horizontal_whitespaces,
  [11913] = 2,
    ACTIONS(1676), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(550), 1,
      sym__horizontal_whitespaces,
  [11920] = 2,
    ACTIONS(1678), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(342), 1,
      sym__horizontal_whitespaces,
  [11927] = 2,
    ACTIONS(1680), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(348), 1,
      sym__horizontal_whitespaces,
  [11934] = 2,
    ACTIONS(1682), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(243), 1,
      sym__horizontal_whitespaces,
  [11941] = 1,
    ACTIONS(1154), 1,
      anon_sym_RBRACE,
  [11945] = 1,
    ACTIONS(1684), 1,
      aux_sym_header_value_token2,
  [11949] = 1,
    ACTIONS(1686), 1,
      aux_sym__log_output_file_token1,
  [11953] = 1,
    ACTIONS(1686), 1,
      sym_size_number,
  [11957] = 1,
    ACTIONS(1688), 1,
      anon_sym_DQUOTE,
  [11961] = 1,
    ACTIONS(1688), 1,
      anon_sym_SQUOTE,
  [11965] = 1,
    ACTIONS(1690), 1,
      aux_sym__port_number_token1,
  [11969] = 1,
    ACTIONS(1210), 1,
      anon_sym_RBRACE,
  [11973] = 1,
    ACTIONS(1692), 1,
      sym__vertical_whitespace,
  [11977] = 1,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [11981] = 1,
    ACTIONS(1202), 1,
      anon_sym_RBRACE,
  [11985] = 1,
    ACTIONS(1142), 1,
      anon_sym_RBRACE,
  [11989] = 1,
    ACTIONS(1694), 1,
      sym__vertical_whitespace,
  [11993] = 1,
    ACTIONS(1696), 1,
      anon_sym_RBRACE,
  [11997] = 1,
    ACTIONS(1698), 1,
      sym__vertical_whitespace,
  [12001] = 1,
    ACTIONS(1700), 1,
      aux_sym__port_number_token1,
  [12005] = 1,
    ACTIONS(1702), 1,
      sym__vertical_whitespace,
  [12009] = 1,
    ACTIONS(1704), 1,
      aux_sym_site_address_token1,
  [12013] = 1,
    ACTIONS(1706), 1,
      aux_sym_site_address_token1,
  [12017] = 1,
    ACTIONS(1708), 1,
      sym__vertical_whitespace,
  [12021] = 1,
    ACTIONS(1710), 1,
      anon_sym_RBRACE,
  [12025] = 1,
    ACTIONS(1686), 1,
      aux_sym__log_output_file_token2,
  [12029] = 1,
    ACTIONS(1712), 1,
      sym_domain_address,
  [12033] = 1,
    ACTIONS(1714), 1,
      sym__vertical_whitespace,
  [12037] = 1,
    ACTIONS(1716), 1,
      anon_sym_DQUOTE,
  [12041] = 1,
    ACTIONS(1718), 1,
      sym__vertical_whitespace,
  [12045] = 1,
    ACTIONS(1720), 1,
      sym__vertical_whitespace,
  [12049] = 1,
    ACTIONS(1722), 1,
      anon_sym_RBRACE,
  [12053] = 1,
    ACTIONS(1724), 1,
      anon_sym_DQUOTE,
  [12057] = 1,
    ACTIONS(1724), 1,
      anon_sym_SQUOTE,
  [12061] = 1,
    ACTIONS(1222), 1,
      anon_sym_RBRACE,
  [12065] = 1,
    ACTIONS(1726), 1,
      anon_sym_DQUOTE,
  [12069] = 1,
    ACTIONS(1728), 1,
      anon_sym_DQUOTE,
  [12073] = 1,
    ACTIONS(1728), 1,
      anon_sym_SQUOTE,
  [12077] = 1,
    ACTIONS(1730), 1,
      anon_sym_DQUOTE,
  [12081] = 1,
    ACTIONS(1730), 1,
      anon_sym_SQUOTE,
  [12085] = 1,
    ACTIONS(1732), 1,
      anon_sym_DQUOTE,
  [12089] = 1,
    ACTIONS(1732), 1,
      anon_sym_SQUOTE,
  [12093] = 1,
    ACTIONS(1734), 1,
      sym_snippet_name,
  [12097] = 1,
    ACTIONS(1736), 1,
      anon_sym_LBRACE,
  [12101] = 1,
    ACTIONS(1738), 1,
      anon_sym_SQUOTE,
  [12105] = 1,
    ACTIONS(1238), 1,
      anon_sym_RBRACE,
  [12109] = 1,
    ACTIONS(1740), 1,
      sym__vertical_whitespace,
  [12113] = 1,
    ACTIONS(1742), 1,
      sym__vertical_whitespace,
  [12117] = 1,
    ACTIONS(1744), 1,
      aux_sym__horizontal_whitespaces_token1,
  [12121] = 1,
    ACTIONS(1634), 1,
      sym_http_error_code,
  [12125] = 1,
    ACTIONS(1746), 1,
      sym__vertical_whitespace,
  [12129] = 1,
    ACTIONS(1748), 1,
      anon_sym_DQUOTE,
  [12133] = 1,
    ACTIONS(1750), 1,
      sym__vertical_whitespaces,
  [12137] = 1,
    ACTIONS(1752), 1,
      anon_sym_LBRACE,
  [12141] = 1,
    ACTIONS(1754), 1,
      sym_domain_address,
  [12145] = 1,
    ACTIONS(1756), 1,
      aux_sym_unix_path_token1,
  [12149] = 1,
    ACTIONS(1758), 1,
      sym__vertical_whitespace,
  [12153] = 1,
    ACTIONS(1760), 1,
      anon_sym_SLASH,
  [12157] = 1,
    ACTIONS(1762), 1,
      aux_sym_unix_path_token1,
  [12161] = 1,
    ACTIONS(1764), 1,
      anon_sym_SLASH,
  [12165] = 1,
    ACTIONS(1766), 1,
      anon_sym_LBRACE,
  [12169] = 1,
    ACTIONS(1768), 1,
      sym__vertical_whitespace,
  [12173] = 1,
    ACTIONS(1770), 1,
      sym__vertical_whitespace,
  [12177] = 1,
    ACTIONS(1170), 1,
      anon_sym_browse,
  [12181] = 1,
    ACTIONS(1772), 1,
      sym__vertical_whitespace,
  [12185] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
  [12189] = 1,
    ACTIONS(1774), 1,
      sym__vertical_whitespace,
  [12193] = 1,
    ACTIONS(1776), 1,
      sym__vertical_whitespace,
  [12197] = 1,
    ACTIONS(1778), 1,
      sym_size_number,
  [12201] = 1,
    ACTIONS(1780), 1,
      aux_sym_site_address_token1,
  [12205] = 1,
    ACTIONS(1782), 1,
      sym_size_number,
  [12209] = 1,
    ACTIONS(1184), 1,
      anon_sym_RBRACE,
  [12213] = 1,
    ACTIONS(1784), 1,
      aux_sym_site_address_token1,
  [12217] = 1,
    ACTIONS(1786), 1,
      sym_email_address,
  [12221] = 1,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
  [12225] = 1,
    ACTIONS(1788), 1,
      sym_http_error_code,
  [12229] = 1,
    ACTIONS(1790), 1,
      aux_sym_header_value_token3,
  [12233] = 1,
    ACTIONS(1792), 1,
      aux_sym_site_address_token1,
  [12237] = 1,
    ACTIONS(1794), 1,
      sym_size_number,
  [12241] = 1,
    ACTIONS(1796), 1,
      sym_snippet_name,
  [12245] = 1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [12249] = 1,
    ACTIONS(1798), 1,
      sym_size_number,
  [12253] = 1,
    ACTIONS(1800), 1,
      sym_size_number,
  [12257] = 1,
    ACTIONS(654), 1,
      aux_sym__horizontal_whitespaces_token1,
  [12261] = 1,
    ACTIONS(1802), 1,
      aux_sym__port_number_token1,
  [12265] = 1,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
  [12269] = 1,
    ACTIONS(1804), 1,
      sym_snippet_name,
  [12273] = 1,
    ACTIONS(1806), 1,
      sym__vertical_whitespace,
  [12277] = 1,
    ACTIONS(1808), 1,
      aux_sym_unix_path_token1,
  [12281] = 1,
    ACTIONS(406), 1,
      sym__vertical_whitespace,
  [12285] = 1,
    ACTIONS(414), 1,
      sym__vertical_whitespace,
  [12289] = 1,
    ACTIONS(1810), 1,
      sym__vertical_whitespace,
  [12293] = 1,
    ACTIONS(1812), 1,
      aux_sym_header_value_token2,
  [12297] = 1,
    ACTIONS(1814), 1,
      aux_sym_header_value_token3,
  [12301] = 1,
    ACTIONS(1816), 1,
      aux_sym_unix_path_token1,
  [12305] = 1,
    ACTIONS(1818), 1,
      aux_sym_header_value_token2,
  [12309] = 1,
    ACTIONS(1820), 1,
      aux_sym_header_value_token3,
  [12313] = 1,
    ACTIONS(1822), 1,
      aux_sym_header_value_token2,
  [12317] = 1,
    ACTIONS(1824), 1,
      aux_sym_header_value_token3,
  [12321] = 1,
    ACTIONS(1826), 1,
      aux_sym_header_value_token2,
  [12325] = 1,
    ACTIONS(1828), 1,
      aux_sym_header_value_token3,
  [12329] = 1,
    ACTIONS(1830), 1,
      sym__vertical_whitespaces,
  [12333] = 1,
    ACTIONS(1832), 1,
      anon_sym_LBRACE,
  [12337] = 1,
    ACTIONS(1834), 1,
      aux_sym_site_address_token1,
  [12341] = 1,
    ACTIONS(1836), 1,
      anon_sym_LBRACE,
  [12345] = 1,
    ACTIONS(1838), 1,
      ts_builtin_sym_end,
  [12349] = 1,
    ACTIONS(1840), 1,
      sym__vertical_whitespace,
  [12353] = 1,
    ACTIONS(1842), 1,
      anon_sym_SLASH,
  [12357] = 1,
    ACTIONS(1844), 1,
      anon_sym_DQUOTE,
  [12361] = 1,
    ACTIONS(1846), 1,
      aux_sym_basicauth_credential_token2,
  [12365] = 1,
    ACTIONS(1848), 1,
      sym_size_number,
  [12369] = 1,
    ACTIONS(1850), 1,
      anon_sym_LBRACE,
  [12373] = 1,
    ACTIONS(1852), 1,
      anon_sym_LBRACE,
  [12377] = 1,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
  [12381] = 1,
    ACTIONS(1854), 1,
      anon_sym_LBRACE,
  [12385] = 1,
    ACTIONS(1856), 1,
      sym__vertical_whitespace,
  [12389] = 1,
    ACTIONS(1858), 1,
      sym__vertical_whitespace,
  [12393] = 1,
    ACTIONS(1860), 1,
      sym__vertical_whitespace,
  [12397] = 1,
    ACTIONS(1862), 1,
      sym__vertical_whitespace,
  [12401] = 1,
    ACTIONS(1864), 1,
      sym__vertical_whitespace,
  [12405] = 1,
    ACTIONS(1866), 1,
      sym__vertical_whitespace,
  [12409] = 1,
    ACTIONS(1528), 1,
      sym_http_error_code,
  [12413] = 1,
    ACTIONS(1868), 1,
      anon_sym_LBRACE,
  [12417] = 1,
    ACTIONS(1870), 1,
      anon_sym_LBRACE,
  [12421] = 1,
    ACTIONS(1872), 1,
      sym_size_number,
  [12425] = 1,
    ACTIONS(1874), 1,
      anon_sym_LBRACE,
  [12429] = 1,
    ACTIONS(1876), 1,
      anon_sym_LBRACE,
  [12433] = 1,
    ACTIONS(1878), 1,
      anon_sym_LBRACE,
  [12437] = 1,
    ACTIONS(1880), 1,
      sym__vertical_whitespace,
  [12441] = 1,
    ACTIONS(1882), 1,
      sym__vertical_whitespace,
  [12445] = 1,
    ACTIONS(1884), 1,
      sym__vertical_whitespace,
  [12449] = 1,
    ACTIONS(1886), 1,
      sym__vertical_whitespace,
  [12453] = 1,
    ACTIONS(1888), 1,
      aux_sym_header_value_token2,
  [12457] = 1,
    ACTIONS(1890), 1,
      sym__vertical_whitespace,
  [12461] = 1,
    ACTIONS(1892), 1,
      anon_sym_LBRACE,
  [12465] = 1,
    ACTIONS(1894), 1,
      anon_sym_LBRACE,
  [12469] = 1,
    ACTIONS(1896), 1,
      aux_sym_header_value_token3,
  [12473] = 1,
    ACTIONS(1898), 1,
      anon_sym_LBRACE,
  [12477] = 1,
    ACTIONS(1900), 1,
      sym_size_number,
  [12481] = 1,
    ACTIONS(1902), 1,
      aux_sym_matcher_path_regexp_token2,
  [12485] = 1,
    ACTIONS(1904), 1,
      aux_sym_basicauth_credential_token1,
  [12489] = 1,
    ACTIONS(1906), 1,
      anon_sym_LBRACE,
  [12493] = 1,
    ACTIONS(1908), 1,
      sym_domain_address,
  [12497] = 1,
    ACTIONS(1910), 1,
      sym__vertical_whitespace,
  [12501] = 1,
    ACTIONS(1912), 1,
      sym_http_error_code,
  [12505] = 1,
    ACTIONS(1738), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 271,
  [SMALL_STATE(6)] = 357,
  [SMALL_STATE(7)] = 443,
  [SMALL_STATE(8)] = 529,
  [SMALL_STATE(9)] = 611,
  [SMALL_STATE(10)] = 693,
  [SMALL_STATE(11)] = 775,
  [SMALL_STATE(12)] = 857,
  [SMALL_STATE(13)] = 939,
  [SMALL_STATE(14)] = 1021,
  [SMALL_STATE(15)] = 1103,
  [SMALL_STATE(16)] = 1185,
  [SMALL_STATE(17)] = 1267,
  [SMALL_STATE(18)] = 1349,
  [SMALL_STATE(19)] = 1431,
  [SMALL_STATE(20)] = 1513,
  [SMALL_STATE(21)] = 1595,
  [SMALL_STATE(22)] = 1674,
  [SMALL_STATE(23)] = 1753,
  [SMALL_STATE(24)] = 1832,
  [SMALL_STATE(25)] = 1911,
  [SMALL_STATE(26)] = 1990,
  [SMALL_STATE(27)] = 2069,
  [SMALL_STATE(28)] = 2148,
  [SMALL_STATE(29)] = 2227,
  [SMALL_STATE(30)] = 2306,
  [SMALL_STATE(31)] = 2385,
  [SMALL_STATE(32)] = 2464,
  [SMALL_STATE(33)] = 2543,
  [SMALL_STATE(34)] = 2600,
  [SMALL_STATE(35)] = 2657,
  [SMALL_STATE(36)] = 2713,
  [SMALL_STATE(37)] = 2769,
  [SMALL_STATE(38)] = 2804,
  [SMALL_STATE(39)] = 2839,
  [SMALL_STATE(40)] = 2874,
  [SMALL_STATE(41)] = 2909,
  [SMALL_STATE(42)] = 2943,
  [SMALL_STATE(43)] = 2977,
  [SMALL_STATE(44)] = 3011,
  [SMALL_STATE(45)] = 3045,
  [SMALL_STATE(46)] = 3082,
  [SMALL_STATE(47)] = 3119,
  [SMALL_STATE(48)] = 3154,
  [SMALL_STATE(49)] = 3189,
  [SMALL_STATE(50)] = 3221,
  [SMALL_STATE(51)] = 3261,
  [SMALL_STATE(52)] = 3293,
  [SMALL_STATE(53)] = 3329,
  [SMALL_STATE(54)] = 3365,
  [SMALL_STATE(55)] = 3397,
  [SMALL_STATE(56)] = 3431,
  [SMALL_STATE(57)] = 3465,
  [SMALL_STATE(58)] = 3500,
  [SMALL_STATE(59)] = 3533,
  [SMALL_STATE(60)] = 3566,
  [SMALL_STATE(61)] = 3597,
  [SMALL_STATE(62)] = 3636,
  [SMALL_STATE(63)] = 3667,
  [SMALL_STATE(64)] = 3702,
  [SMALL_STATE(65)] = 3733,
  [SMALL_STATE(66)] = 3768,
  [SMALL_STATE(67)] = 3802,
  [SMALL_STATE(68)] = 3836,
  [SMALL_STATE(69)] = 3870,
  [SMALL_STATE(70)] = 3904,
  [SMALL_STATE(71)] = 3938,
  [SMALL_STATE(72)] = 3972,
  [SMALL_STATE(73)] = 4008,
  [SMALL_STATE(74)] = 4042,
  [SMALL_STATE(75)] = 4076,
  [SMALL_STATE(76)] = 4109,
  [SMALL_STATE(77)] = 4142,
  [SMALL_STATE(78)] = 4175,
  [SMALL_STATE(79)] = 4210,
  [SMALL_STATE(80)] = 4243,
  [SMALL_STATE(81)] = 4272,
  [SMALL_STATE(82)] = 4303,
  [SMALL_STATE(83)] = 4336,
  [SMALL_STATE(84)] = 4364,
  [SMALL_STATE(85)] = 4392,
  [SMALL_STATE(86)] = 4420,
  [SMALL_STATE(87)] = 4448,
  [SMALL_STATE(88)] = 4476,
  [SMALL_STATE(89)] = 4504,
  [SMALL_STATE(90)] = 4534,
  [SMALL_STATE(91)] = 4564,
  [SMALL_STATE(92)] = 4592,
  [SMALL_STATE(93)] = 4620,
  [SMALL_STATE(94)] = 4647,
  [SMALL_STATE(95)] = 4674,
  [SMALL_STATE(96)] = 4701,
  [SMALL_STATE(97)] = 4728,
  [SMALL_STATE(98)] = 4755,
  [SMALL_STATE(99)] = 4784,
  [SMALL_STATE(100)] = 4811,
  [SMALL_STATE(101)] = 4838,
  [SMALL_STATE(102)] = 4865,
  [SMALL_STATE(103)] = 4892,
  [SMALL_STATE(104)] = 4919,
  [SMALL_STATE(105)] = 4946,
  [SMALL_STATE(106)] = 4973,
  [SMALL_STATE(107)] = 5000,
  [SMALL_STATE(108)] = 5027,
  [SMALL_STATE(109)] = 5054,
  [SMALL_STATE(110)] = 5081,
  [SMALL_STATE(111)] = 5108,
  [SMALL_STATE(112)] = 5135,
  [SMALL_STATE(113)] = 5162,
  [SMALL_STATE(114)] = 5189,
  [SMALL_STATE(115)] = 5216,
  [SMALL_STATE(116)] = 5243,
  [SMALL_STATE(117)] = 5270,
  [SMALL_STATE(118)] = 5297,
  [SMALL_STATE(119)] = 5324,
  [SMALL_STATE(120)] = 5351,
  [SMALL_STATE(121)] = 5378,
  [SMALL_STATE(122)] = 5405,
  [SMALL_STATE(123)] = 5432,
  [SMALL_STATE(124)] = 5459,
  [SMALL_STATE(125)] = 5486,
  [SMALL_STATE(126)] = 5513,
  [SMALL_STATE(127)] = 5540,
  [SMALL_STATE(128)] = 5567,
  [SMALL_STATE(129)] = 5594,
  [SMALL_STATE(130)] = 5621,
  [SMALL_STATE(131)] = 5648,
  [SMALL_STATE(132)] = 5675,
  [SMALL_STATE(133)] = 5702,
  [SMALL_STATE(134)] = 5729,
  [SMALL_STATE(135)] = 5756,
  [SMALL_STATE(136)] = 5783,
  [SMALL_STATE(137)] = 5810,
  [SMALL_STATE(138)] = 5837,
  [SMALL_STATE(139)] = 5864,
  [SMALL_STATE(140)] = 5891,
  [SMALL_STATE(141)] = 5942,
  [SMALL_STATE(142)] = 5969,
  [SMALL_STATE(143)] = 5996,
  [SMALL_STATE(144)] = 6023,
  [SMALL_STATE(145)] = 6050,
  [SMALL_STATE(146)] = 6077,
  [SMALL_STATE(147)] = 6104,
  [SMALL_STATE(148)] = 6131,
  [SMALL_STATE(149)] = 6158,
  [SMALL_STATE(150)] = 6185,
  [SMALL_STATE(151)] = 6212,
  [SMALL_STATE(152)] = 6263,
  [SMALL_STATE(153)] = 6290,
  [SMALL_STATE(154)] = 6317,
  [SMALL_STATE(155)] = 6344,
  [SMALL_STATE(156)] = 6371,
  [SMALL_STATE(157)] = 6397,
  [SMALL_STATE(158)] = 6423,
  [SMALL_STATE(159)] = 6449,
  [SMALL_STATE(160)] = 6475,
  [SMALL_STATE(161)] = 6501,
  [SMALL_STATE(162)] = 6527,
  [SMALL_STATE(163)] = 6553,
  [SMALL_STATE(164)] = 6579,
  [SMALL_STATE(165)] = 6605,
  [SMALL_STATE(166)] = 6631,
  [SMALL_STATE(167)] = 6657,
  [SMALL_STATE(168)] = 6683,
  [SMALL_STATE(169)] = 6709,
  [SMALL_STATE(170)] = 6735,
  [SMALL_STATE(171)] = 6761,
  [SMALL_STATE(172)] = 6787,
  [SMALL_STATE(173)] = 6813,
  [SMALL_STATE(174)] = 6839,
  [SMALL_STATE(175)] = 6865,
  [SMALL_STATE(176)] = 6891,
  [SMALL_STATE(177)] = 6917,
  [SMALL_STATE(178)] = 6943,
  [SMALL_STATE(179)] = 6969,
  [SMALL_STATE(180)] = 6995,
  [SMALL_STATE(181)] = 7021,
  [SMALL_STATE(182)] = 7047,
  [SMALL_STATE(183)] = 7073,
  [SMALL_STATE(184)] = 7099,
  [SMALL_STATE(185)] = 7125,
  [SMALL_STATE(186)] = 7151,
  [SMALL_STATE(187)] = 7177,
  [SMALL_STATE(188)] = 7203,
  [SMALL_STATE(189)] = 7229,
  [SMALL_STATE(190)] = 7255,
  [SMALL_STATE(191)] = 7281,
  [SMALL_STATE(192)] = 7307,
  [SMALL_STATE(193)] = 7333,
  [SMALL_STATE(194)] = 7359,
  [SMALL_STATE(195)] = 7385,
  [SMALL_STATE(196)] = 7411,
  [SMALL_STATE(197)] = 7437,
  [SMALL_STATE(198)] = 7463,
  [SMALL_STATE(199)] = 7489,
  [SMALL_STATE(200)] = 7515,
  [SMALL_STATE(201)] = 7541,
  [SMALL_STATE(202)] = 7567,
  [SMALL_STATE(203)] = 7593,
  [SMALL_STATE(204)] = 7619,
  [SMALL_STATE(205)] = 7645,
  [SMALL_STATE(206)] = 7671,
  [SMALL_STATE(207)] = 7697,
  [SMALL_STATE(208)] = 7723,
  [SMALL_STATE(209)] = 7749,
  [SMALL_STATE(210)] = 7786,
  [SMALL_STATE(211)] = 7823,
  [SMALL_STATE(212)] = 7860,
  [SMALL_STATE(213)] = 7897,
  [SMALL_STATE(214)] = 7934,
  [SMALL_STATE(215)] = 7968,
  [SMALL_STATE(216)] = 8006,
  [SMALL_STATE(217)] = 8040,
  [SMALL_STATE(218)] = 8074,
  [SMALL_STATE(219)] = 8112,
  [SMALL_STATE(220)] = 8150,
  [SMALL_STATE(221)] = 8184,
  [SMALL_STATE(222)] = 8222,
  [SMALL_STATE(223)] = 8240,
  [SMALL_STATE(224)] = 8258,
  [SMALL_STATE(225)] = 8276,
  [SMALL_STATE(226)] = 8294,
  [SMALL_STATE(227)] = 8312,
  [SMALL_STATE(228)] = 8330,
  [SMALL_STATE(229)] = 8348,
  [SMALL_STATE(230)] = 8366,
  [SMALL_STATE(231)] = 8397,
  [SMALL_STATE(232)] = 8428,
  [SMALL_STATE(233)] = 8456,
  [SMALL_STATE(234)] = 8484,
  [SMALL_STATE(235)] = 8512,
  [SMALL_STATE(236)] = 8540,
  [SMALL_STATE(237)] = 8568,
  [SMALL_STATE(238)] = 8586,
  [SMALL_STATE(239)] = 8614,
  [SMALL_STATE(240)] = 8642,
  [SMALL_STATE(241)] = 8670,
  [SMALL_STATE(242)] = 8693,
  [SMALL_STATE(243)] = 8708,
  [SMALL_STATE(244)] = 8735,
  [SMALL_STATE(245)] = 8758,
  [SMALL_STATE(246)] = 8781,
  [SMALL_STATE(247)] = 8804,
  [SMALL_STATE(248)] = 8819,
  [SMALL_STATE(249)] = 8842,
  [SMALL_STATE(250)] = 8869,
  [SMALL_STATE(251)] = 8896,
  [SMALL_STATE(252)] = 8919,
  [SMALL_STATE(253)] = 8942,
  [SMALL_STATE(254)] = 8965,
  [SMALL_STATE(255)] = 8987,
  [SMALL_STATE(256)] = 9001,
  [SMALL_STATE(257)] = 9023,
  [SMALL_STATE(258)] = 9037,
  [SMALL_STATE(259)] = 9051,
  [SMALL_STATE(260)] = 9065,
  [SMALL_STATE(261)] = 9079,
  [SMALL_STATE(262)] = 9101,
  [SMALL_STATE(263)] = 9115,
  [SMALL_STATE(264)] = 9137,
  [SMALL_STATE(265)] = 9151,
  [SMALL_STATE(266)] = 9165,
  [SMALL_STATE(267)] = 9187,
  [SMALL_STATE(268)] = 9209,
  [SMALL_STATE(269)] = 9231,
  [SMALL_STATE(270)] = 9245,
  [SMALL_STATE(271)] = 9264,
  [SMALL_STATE(272)] = 9283,
  [SMALL_STATE(273)] = 9302,
  [SMALL_STATE(274)] = 9321,
  [SMALL_STATE(275)] = 9340,
  [SMALL_STATE(276)] = 9360,
  [SMALL_STATE(277)] = 9378,
  [SMALL_STATE(278)] = 9396,
  [SMALL_STATE(279)] = 9416,
  [SMALL_STATE(280)] = 9436,
  [SMALL_STATE(281)] = 9456,
  [SMALL_STATE(282)] = 9474,
  [SMALL_STATE(283)] = 9491,
  [SMALL_STATE(284)] = 9506,
  [SMALL_STATE(285)] = 9523,
  [SMALL_STATE(286)] = 9532,
  [SMALL_STATE(287)] = 9541,
  [SMALL_STATE(288)] = 9556,
  [SMALL_STATE(289)] = 9569,
  [SMALL_STATE(290)] = 9584,
  [SMALL_STATE(291)] = 9601,
  [SMALL_STATE(292)] = 9616,
  [SMALL_STATE(293)] = 9631,
  [SMALL_STATE(294)] = 9646,
  [SMALL_STATE(295)] = 9661,
  [SMALL_STATE(296)] = 9670,
  [SMALL_STATE(297)] = 9687,
  [SMALL_STATE(298)] = 9702,
  [SMALL_STATE(299)] = 9717,
  [SMALL_STATE(300)] = 9726,
  [SMALL_STATE(301)] = 9743,
  [SMALL_STATE(302)] = 9752,
  [SMALL_STATE(303)] = 9761,
  [SMALL_STATE(304)] = 9770,
  [SMALL_STATE(305)] = 9785,
  [SMALL_STATE(306)] = 9800,
  [SMALL_STATE(307)] = 9816,
  [SMALL_STATE(308)] = 9832,
  [SMALL_STATE(309)] = 9848,
  [SMALL_STATE(310)] = 9864,
  [SMALL_STATE(311)] = 9880,
  [SMALL_STATE(312)] = 9896,
  [SMALL_STATE(313)] = 9908,
  [SMALL_STATE(314)] = 9920,
  [SMALL_STATE(315)] = 9934,
  [SMALL_STATE(316)] = 9948,
  [SMALL_STATE(317)] = 9962,
  [SMALL_STATE(318)] = 9974,
  [SMALL_STATE(319)] = 9990,
  [SMALL_STATE(320)] = 10006,
  [SMALL_STATE(321)] = 10022,
  [SMALL_STATE(322)] = 10038,
  [SMALL_STATE(323)] = 10054,
  [SMALL_STATE(324)] = 10070,
  [SMALL_STATE(325)] = 10086,
  [SMALL_STATE(326)] = 10102,
  [SMALL_STATE(327)] = 10110,
  [SMALL_STATE(328)] = 10122,
  [SMALL_STATE(329)] = 10138,
  [SMALL_STATE(330)] = 10152,
  [SMALL_STATE(331)] = 10162,
  [SMALL_STATE(332)] = 10174,
  [SMALL_STATE(333)] = 10190,
  [SMALL_STATE(334)] = 10206,
  [SMALL_STATE(335)] = 10220,
  [SMALL_STATE(336)] = 10236,
  [SMALL_STATE(337)] = 10250,
  [SMALL_STATE(338)] = 10262,
  [SMALL_STATE(339)] = 10276,
  [SMALL_STATE(340)] = 10292,
  [SMALL_STATE(341)] = 10306,
  [SMALL_STATE(342)] = 10318,
  [SMALL_STATE(343)] = 10332,
  [SMALL_STATE(344)] = 10346,
  [SMALL_STATE(345)] = 10360,
  [SMALL_STATE(346)] = 10372,
  [SMALL_STATE(347)] = 10388,
  [SMALL_STATE(348)] = 10400,
  [SMALL_STATE(349)] = 10414,
  [SMALL_STATE(350)] = 10426,
  [SMALL_STATE(351)] = 10440,
  [SMALL_STATE(352)] = 10454,
  [SMALL_STATE(353)] = 10462,
  [SMALL_STATE(354)] = 10476,
  [SMALL_STATE(355)] = 10490,
  [SMALL_STATE(356)] = 10504,
  [SMALL_STATE(357)] = 10520,
  [SMALL_STATE(358)] = 10534,
  [SMALL_STATE(359)] = 10544,
  [SMALL_STATE(360)] = 10556,
  [SMALL_STATE(361)] = 10572,
  [SMALL_STATE(362)] = 10583,
  [SMALL_STATE(363)] = 10592,
  [SMALL_STATE(364)] = 10603,
  [SMALL_STATE(365)] = 10610,
  [SMALL_STATE(366)] = 10621,
  [SMALL_STATE(367)] = 10632,
  [SMALL_STATE(368)] = 10643,
  [SMALL_STATE(369)] = 10652,
  [SMALL_STATE(370)] = 10663,
  [SMALL_STATE(371)] = 10674,
  [SMALL_STATE(372)] = 10685,
  [SMALL_STATE(373)] = 10692,
  [SMALL_STATE(374)] = 10703,
  [SMALL_STATE(375)] = 10716,
  [SMALL_STATE(376)] = 10723,
  [SMALL_STATE(377)] = 10736,
  [SMALL_STATE(378)] = 10749,
  [SMALL_STATE(379)] = 10762,
  [SMALL_STATE(380)] = 10775,
  [SMALL_STATE(381)] = 10788,
  [SMALL_STATE(382)] = 10801,
  [SMALL_STATE(383)] = 10812,
  [SMALL_STATE(384)] = 10825,
  [SMALL_STATE(385)] = 10838,
  [SMALL_STATE(386)] = 10851,
  [SMALL_STATE(387)] = 10862,
  [SMALL_STATE(388)] = 10875,
  [SMALL_STATE(389)] = 10888,
  [SMALL_STATE(390)] = 10901,
  [SMALL_STATE(391)] = 10912,
  [SMALL_STATE(392)] = 10925,
  [SMALL_STATE(393)] = 10936,
  [SMALL_STATE(394)] = 10949,
  [SMALL_STATE(395)] = 10956,
  [SMALL_STATE(396)] = 10969,
  [SMALL_STATE(397)] = 10982,
  [SMALL_STATE(398)] = 10992,
  [SMALL_STATE(399)] = 11002,
  [SMALL_STATE(400)] = 11012,
  [SMALL_STATE(401)] = 11022,
  [SMALL_STATE(402)] = 11032,
  [SMALL_STATE(403)] = 11040,
  [SMALL_STATE(404)] = 11048,
  [SMALL_STATE(405)] = 11056,
  [SMALL_STATE(406)] = 11066,
  [SMALL_STATE(407)] = 11076,
  [SMALL_STATE(408)] = 11084,
  [SMALL_STATE(409)] = 11094,
  [SMALL_STATE(410)] = 11104,
  [SMALL_STATE(411)] = 11114,
  [SMALL_STATE(412)] = 11124,
  [SMALL_STATE(413)] = 11131,
  [SMALL_STATE(414)] = 11138,
  [SMALL_STATE(415)] = 11145,
  [SMALL_STATE(416)] = 11152,
  [SMALL_STATE(417)] = 11159,
  [SMALL_STATE(418)] = 11166,
  [SMALL_STATE(419)] = 11173,
  [SMALL_STATE(420)] = 11180,
  [SMALL_STATE(421)] = 11187,
  [SMALL_STATE(422)] = 11194,
  [SMALL_STATE(423)] = 11201,
  [SMALL_STATE(424)] = 11208,
  [SMALL_STATE(425)] = 11215,
  [SMALL_STATE(426)] = 11222,
  [SMALL_STATE(427)] = 11227,
  [SMALL_STATE(428)] = 11234,
  [SMALL_STATE(429)] = 11241,
  [SMALL_STATE(430)] = 11248,
  [SMALL_STATE(431)] = 11255,
  [SMALL_STATE(432)] = 11262,
  [SMALL_STATE(433)] = 11269,
  [SMALL_STATE(434)] = 11276,
  [SMALL_STATE(435)] = 11283,
  [SMALL_STATE(436)] = 11290,
  [SMALL_STATE(437)] = 11297,
  [SMALL_STATE(438)] = 11304,
  [SMALL_STATE(439)] = 11311,
  [SMALL_STATE(440)] = 11318,
  [SMALL_STATE(441)] = 11325,
  [SMALL_STATE(442)] = 11332,
  [SMALL_STATE(443)] = 11339,
  [SMALL_STATE(444)] = 11346,
  [SMALL_STATE(445)] = 11353,
  [SMALL_STATE(446)] = 11360,
  [SMALL_STATE(447)] = 11367,
  [SMALL_STATE(448)] = 11374,
  [SMALL_STATE(449)] = 11381,
  [SMALL_STATE(450)] = 11388,
  [SMALL_STATE(451)] = 11395,
  [SMALL_STATE(452)] = 11402,
  [SMALL_STATE(453)] = 11409,
  [SMALL_STATE(454)] = 11416,
  [SMALL_STATE(455)] = 11423,
  [SMALL_STATE(456)] = 11430,
  [SMALL_STATE(457)] = 11437,
  [SMALL_STATE(458)] = 11444,
  [SMALL_STATE(459)] = 11451,
  [SMALL_STATE(460)] = 11458,
  [SMALL_STATE(461)] = 11465,
  [SMALL_STATE(462)] = 11472,
  [SMALL_STATE(463)] = 11479,
  [SMALL_STATE(464)] = 11486,
  [SMALL_STATE(465)] = 11493,
  [SMALL_STATE(466)] = 11500,
  [SMALL_STATE(467)] = 11507,
  [SMALL_STATE(468)] = 11514,
  [SMALL_STATE(469)] = 11521,
  [SMALL_STATE(470)] = 11528,
  [SMALL_STATE(471)] = 11535,
  [SMALL_STATE(472)] = 11542,
  [SMALL_STATE(473)] = 11549,
  [SMALL_STATE(474)] = 11556,
  [SMALL_STATE(475)] = 11563,
  [SMALL_STATE(476)] = 11570,
  [SMALL_STATE(477)] = 11577,
  [SMALL_STATE(478)] = 11584,
  [SMALL_STATE(479)] = 11591,
  [SMALL_STATE(480)] = 11598,
  [SMALL_STATE(481)] = 11605,
  [SMALL_STATE(482)] = 11612,
  [SMALL_STATE(483)] = 11619,
  [SMALL_STATE(484)] = 11626,
  [SMALL_STATE(485)] = 11633,
  [SMALL_STATE(486)] = 11640,
  [SMALL_STATE(487)] = 11647,
  [SMALL_STATE(488)] = 11654,
  [SMALL_STATE(489)] = 11661,
  [SMALL_STATE(490)] = 11668,
  [SMALL_STATE(491)] = 11675,
  [SMALL_STATE(492)] = 11682,
  [SMALL_STATE(493)] = 11689,
  [SMALL_STATE(494)] = 11696,
  [SMALL_STATE(495)] = 11703,
  [SMALL_STATE(496)] = 11710,
  [SMALL_STATE(497)] = 11717,
  [SMALL_STATE(498)] = 11724,
  [SMALL_STATE(499)] = 11731,
  [SMALL_STATE(500)] = 11738,
  [SMALL_STATE(501)] = 11745,
  [SMALL_STATE(502)] = 11752,
  [SMALL_STATE(503)] = 11759,
  [SMALL_STATE(504)] = 11766,
  [SMALL_STATE(505)] = 11773,
  [SMALL_STATE(506)] = 11780,
  [SMALL_STATE(507)] = 11787,
  [SMALL_STATE(508)] = 11794,
  [SMALL_STATE(509)] = 11801,
  [SMALL_STATE(510)] = 11808,
  [SMALL_STATE(511)] = 11815,
  [SMALL_STATE(512)] = 11822,
  [SMALL_STATE(513)] = 11829,
  [SMALL_STATE(514)] = 11836,
  [SMALL_STATE(515)] = 11843,
  [SMALL_STATE(516)] = 11850,
  [SMALL_STATE(517)] = 11857,
  [SMALL_STATE(518)] = 11864,
  [SMALL_STATE(519)] = 11871,
  [SMALL_STATE(520)] = 11878,
  [SMALL_STATE(521)] = 11885,
  [SMALL_STATE(522)] = 11892,
  [SMALL_STATE(523)] = 11899,
  [SMALL_STATE(524)] = 11906,
  [SMALL_STATE(525)] = 11913,
  [SMALL_STATE(526)] = 11920,
  [SMALL_STATE(527)] = 11927,
  [SMALL_STATE(528)] = 11934,
  [SMALL_STATE(529)] = 11941,
  [SMALL_STATE(530)] = 11945,
  [SMALL_STATE(531)] = 11949,
  [SMALL_STATE(532)] = 11953,
  [SMALL_STATE(533)] = 11957,
  [SMALL_STATE(534)] = 11961,
  [SMALL_STATE(535)] = 11965,
  [SMALL_STATE(536)] = 11969,
  [SMALL_STATE(537)] = 11973,
  [SMALL_STATE(538)] = 11977,
  [SMALL_STATE(539)] = 11981,
  [SMALL_STATE(540)] = 11985,
  [SMALL_STATE(541)] = 11989,
  [SMALL_STATE(542)] = 11993,
  [SMALL_STATE(543)] = 11997,
  [SMALL_STATE(544)] = 12001,
  [SMALL_STATE(545)] = 12005,
  [SMALL_STATE(546)] = 12009,
  [SMALL_STATE(547)] = 12013,
  [SMALL_STATE(548)] = 12017,
  [SMALL_STATE(549)] = 12021,
  [SMALL_STATE(550)] = 12025,
  [SMALL_STATE(551)] = 12029,
  [SMALL_STATE(552)] = 12033,
  [SMALL_STATE(553)] = 12037,
  [SMALL_STATE(554)] = 12041,
  [SMALL_STATE(555)] = 12045,
  [SMALL_STATE(556)] = 12049,
  [SMALL_STATE(557)] = 12053,
  [SMALL_STATE(558)] = 12057,
  [SMALL_STATE(559)] = 12061,
  [SMALL_STATE(560)] = 12065,
  [SMALL_STATE(561)] = 12069,
  [SMALL_STATE(562)] = 12073,
  [SMALL_STATE(563)] = 12077,
  [SMALL_STATE(564)] = 12081,
  [SMALL_STATE(565)] = 12085,
  [SMALL_STATE(566)] = 12089,
  [SMALL_STATE(567)] = 12093,
  [SMALL_STATE(568)] = 12097,
  [SMALL_STATE(569)] = 12101,
  [SMALL_STATE(570)] = 12105,
  [SMALL_STATE(571)] = 12109,
  [SMALL_STATE(572)] = 12113,
  [SMALL_STATE(573)] = 12117,
  [SMALL_STATE(574)] = 12121,
  [SMALL_STATE(575)] = 12125,
  [SMALL_STATE(576)] = 12129,
  [SMALL_STATE(577)] = 12133,
  [SMALL_STATE(578)] = 12137,
  [SMALL_STATE(579)] = 12141,
  [SMALL_STATE(580)] = 12145,
  [SMALL_STATE(581)] = 12149,
  [SMALL_STATE(582)] = 12153,
  [SMALL_STATE(583)] = 12157,
  [SMALL_STATE(584)] = 12161,
  [SMALL_STATE(585)] = 12165,
  [SMALL_STATE(586)] = 12169,
  [SMALL_STATE(587)] = 12173,
  [SMALL_STATE(588)] = 12177,
  [SMALL_STATE(589)] = 12181,
  [SMALL_STATE(590)] = 12185,
  [SMALL_STATE(591)] = 12189,
  [SMALL_STATE(592)] = 12193,
  [SMALL_STATE(593)] = 12197,
  [SMALL_STATE(594)] = 12201,
  [SMALL_STATE(595)] = 12205,
  [SMALL_STATE(596)] = 12209,
  [SMALL_STATE(597)] = 12213,
  [SMALL_STATE(598)] = 12217,
  [SMALL_STATE(599)] = 12221,
  [SMALL_STATE(600)] = 12225,
  [SMALL_STATE(601)] = 12229,
  [SMALL_STATE(602)] = 12233,
  [SMALL_STATE(603)] = 12237,
  [SMALL_STATE(604)] = 12241,
  [SMALL_STATE(605)] = 12245,
  [SMALL_STATE(606)] = 12249,
  [SMALL_STATE(607)] = 12253,
  [SMALL_STATE(608)] = 12257,
  [SMALL_STATE(609)] = 12261,
  [SMALL_STATE(610)] = 12265,
  [SMALL_STATE(611)] = 12269,
  [SMALL_STATE(612)] = 12273,
  [SMALL_STATE(613)] = 12277,
  [SMALL_STATE(614)] = 12281,
  [SMALL_STATE(615)] = 12285,
  [SMALL_STATE(616)] = 12289,
  [SMALL_STATE(617)] = 12293,
  [SMALL_STATE(618)] = 12297,
  [SMALL_STATE(619)] = 12301,
  [SMALL_STATE(620)] = 12305,
  [SMALL_STATE(621)] = 12309,
  [SMALL_STATE(622)] = 12313,
  [SMALL_STATE(623)] = 12317,
  [SMALL_STATE(624)] = 12321,
  [SMALL_STATE(625)] = 12325,
  [SMALL_STATE(626)] = 12329,
  [SMALL_STATE(627)] = 12333,
  [SMALL_STATE(628)] = 12337,
  [SMALL_STATE(629)] = 12341,
  [SMALL_STATE(630)] = 12345,
  [SMALL_STATE(631)] = 12349,
  [SMALL_STATE(632)] = 12353,
  [SMALL_STATE(633)] = 12357,
  [SMALL_STATE(634)] = 12361,
  [SMALL_STATE(635)] = 12365,
  [SMALL_STATE(636)] = 12369,
  [SMALL_STATE(637)] = 12373,
  [SMALL_STATE(638)] = 12377,
  [SMALL_STATE(639)] = 12381,
  [SMALL_STATE(640)] = 12385,
  [SMALL_STATE(641)] = 12389,
  [SMALL_STATE(642)] = 12393,
  [SMALL_STATE(643)] = 12397,
  [SMALL_STATE(644)] = 12401,
  [SMALL_STATE(645)] = 12405,
  [SMALL_STATE(646)] = 12409,
  [SMALL_STATE(647)] = 12413,
  [SMALL_STATE(648)] = 12417,
  [SMALL_STATE(649)] = 12421,
  [SMALL_STATE(650)] = 12425,
  [SMALL_STATE(651)] = 12429,
  [SMALL_STATE(652)] = 12433,
  [SMALL_STATE(653)] = 12437,
  [SMALL_STATE(654)] = 12441,
  [SMALL_STATE(655)] = 12445,
  [SMALL_STATE(656)] = 12449,
  [SMALL_STATE(657)] = 12453,
  [SMALL_STATE(658)] = 12457,
  [SMALL_STATE(659)] = 12461,
  [SMALL_STATE(660)] = 12465,
  [SMALL_STATE(661)] = 12469,
  [SMALL_STATE(662)] = 12473,
  [SMALL_STATE(663)] = 12477,
  [SMALL_STATE(664)] = 12481,
  [SMALL_STATE(665)] = 12485,
  [SMALL_STATE(666)] = 12489,
  [SMALL_STATE(667)] = 12493,
  [SMALL_STATE(668)] = 12497,
  [SMALL_STATE(669)] = 12501,
  [SMALL_STATE(670)] = 12505,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(628),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(535),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(585),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(484),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(489),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(494),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(517),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(309),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(518),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(519),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(526),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(522),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(453),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(413),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(528),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(527),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(524),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(523),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(521),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(520),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(5),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(568),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(509),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(424),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(507),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(506),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(335),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(505),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(440),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(438),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(502),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(448),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(478),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(501),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(423),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(500),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(499),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(479),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(437),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(8),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(509),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(424),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(507),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(506),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(335),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(505),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(440),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(438),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(502),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(448),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(478),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(465),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(423),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(500),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(499),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(479),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(437),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(39),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(39),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(402),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(404),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(583),
  [379] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(40),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(42),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(42),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(613),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(44),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 1),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(80),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 5, .production_id = 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(86),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 3, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 4, .production_id = 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(238),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 6, .production_id = 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(235),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encode_format, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__port_number, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 3),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_route, 5, .production_id = 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_route, 5, .production_id = 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 4),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 4),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 5),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 5),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_name, 1),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_name, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_code, 1),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 5),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 5),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_route, 7, .production_id = 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_route, 7, .production_id = 2),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [727] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(271),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(358),
  [733] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(628),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(628),
  [739] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(535),
  [742] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(435),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(652),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(209),
  [795] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(209),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [800] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(608),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(447),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(515),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(441),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [814] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [834] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(544),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [870] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(492),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 6),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 5),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 5),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 3),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 3),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [902] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 2),
  [906] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 2),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [914] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(513),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [940] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [942] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [946] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(244),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(444),
  [954] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(443),
  [957] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(442),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [978] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [982] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [990] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(253),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2),
  [995] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(510),
  [998] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(493),
  [1001] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(525),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(256),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2),
  [1015] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(514),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(513),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1043] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(273),
  [1046] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2),
  [1048] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(466),
  [1051] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(472),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(547),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [1086] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 4),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 3, .production_id = 16),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1094] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1096] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 3, .production_id = 19),
  [1098] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [1100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [1102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 6),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 4, .production_id = 16),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_format, 4, .production_id = 16),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_level, 4, .production_id = 16),
  [1124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 7),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(305),
  [1131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2),
  [1133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(434),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [1162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [1180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_auto_https, 3, .production_id = 1),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [1228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_matcher, 2),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [1246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(668),
  [1268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(344),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6),
  [1273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(394),
  [1276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_email, 4, .production_id = 1),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2),
  [1300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(355),
  [1303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(355),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [1318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [1326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1354] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(373),
  [1357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(552),
  [1359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 5, .production_id = 21),
  [1361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [1391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(661),
  [1395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6), SHIFT_REPEAT(588),
  [1410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(663),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [1420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 1, .production_id = 4),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(655),
  [1428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [1432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [1438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(662),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(660),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(659),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(669),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(666),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(665),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(664),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(436),
  [1540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(654),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 5, .production_id = 18),
  [1720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_algorithm, 1),
  [1746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [1822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1838] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [1844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [1880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path, 3, .production_id = 11),
  [1882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 3, .production_id = 11),
  [1884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(670),
  [1890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [1904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(658),
  [1908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [1910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [1912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
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
