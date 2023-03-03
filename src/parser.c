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
#define STATE_COUNT 651
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 180
#define ALIAS_COUNT 0
#define TOKEN_COUNT 113
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
  anon_sym_bind = 34,
  anon_sym_SLASH = 35,
  anon_sym_tcp = 36,
  anon_sym_udp = 37,
  anon_sym_ip = 38,
  anon_sym_4 = 39,
  anon_sym_6 = 40,
  anon_sym_unix = 41,
  anon_sym_gram = 42,
  anon_sym_packet = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_unix_path_token1 = 45,
  aux_sym_unix_path_token2 = 46,
  anon_sym_encode = 47,
  anon_sym_gzip = 48,
  anon_sym_zstd = 49,
  anon_sym_file_server = 50,
  anon_sym_browse = 51,
  anon_sym_error = 52,
  sym_http_message = 53,
  sym_http_error_code = 54,
  anon_sym_handle = 55,
  anon_sym_handle_path = 56,
  anon_sym_header = 57,
  anon_sym_defer = 58,
  anon_sym_PLUS = 59,
  anon_sym_DASH = 60,
  anon_sym_QMARK = 61,
  aux_sym_header_value_token1 = 62,
  aux_sym_header_value_token2 = 63,
  anon_sym_SQUOTE = 64,
  aux_sym_header_value_token3 = 65,
  anon_sym_import = 66,
  anon_sym_log = 67,
  anon_sym_output = 68,
  anon_sym_stderr = 69,
  anon_sym_stdout = 70,
  anon_sym_discard = 71,
  anon_sym_file = 72,
  anon_sym_roll_disabled = 73,
  anon_sym_roll_size = 74,
  anon_sym_roll_uncompressed = 75,
  anon_sym_roll_local_time = 76,
  anon_sym_roll_keep = 77,
  aux_sym__log_output_file_token1 = 78,
  anon_sym_roll_keep_for_days = 79,
  aux_sym__log_output_file_token2 = 80,
  sym_size_number = 81,
  anon_sym_format = 82,
  anon_sym_console = 83,
  anon_sym_json = 84,
  anon_sym_level = 85,
  anon_sym_INFO = 86,
  anon_sym_info = 87,
  anon_sym_ERROR = 88,
  anon_sym_redir = 89,
  anon_sym_request_body = 90,
  anon_sym_max_size = 91,
  anon_sym_reverse_proxy = 92,
  sym_uri_path_with_placeholders = 93,
  sym__valid_uri_path_string = 94,
  aux_sym_redir_code_token1 = 95,
  anon_sym_401 = 96,
  anon_sym_temporary = 97,
  anon_sym_permanent = 98,
  anon_sym_html = 99,
  anon_sym_root = 100,
  anon_sym_tls = 101,
  anon_sym_internal = 102,
  sym_email_address = 103,
  anon_sym_STAR = 104,
  anon_sym_email = 105,
  anon_sym_auto_https = 106,
  anon_sym_off = 107,
  anon_sym_disable_redirects = 108,
  anon_sym_ignore_loaded_certs = 109,
  anon_sym_disable_certs = 110,
  sym_snippet_name = 111,
  sym__eof = 112,
  sym_document = 113,
  sym__horizontal_whitespaces = 114,
  sym_site_block = 115,
  sym_site_address = 116,
  sym_protocol = 117,
  sym__ip_or_domain_address = 118,
  sym__port_number = 119,
  sym_matcher_definition = 120,
  sym_standard_matcher = 121,
  sym_matcher_path = 122,
  sym_matcher_path_regexp = 123,
  sym_directive_block = 124,
  sym_directive_abort = 125,
  sym_directive_basicauth = 126,
  sym_hash_algorithm = 127,
  sym_basicauth_credential = 128,
  sym_directive_bind = 129,
  sym_network_address_wo_port = 130,
  sym__network = 131,
  sym_unix_path = 132,
  sym_directive_encode = 133,
  sym_encode_format = 134,
  sym_directive_file_server = 135,
  sym_directive_error = 136,
  sym_directive_handle = 137,
  sym_directive_handle_path = 138,
  sym_directive_header = 139,
  sym_field_manipulator = 140,
  sym_field_replace = 141,
  sym_field_add_or_set = 142,
  sym_field_delete = 143,
  sym_field_set_default = 144,
  sym_header_name = 145,
  sym_header_value = 146,
  sym_directive_import = 147,
  sym_directive_log = 148,
  sym_log_option_output = 149,
  sym__log_output_file = 150,
  sym_log_option_format = 151,
  sym_log_option_level = 152,
  sym_directive_redir = 153,
  sym_directive_request_body = 154,
  sym_redir_or_rewrite_target = 155,
  sym_directive_reverse_proxy = 156,
  sym_redir_code = 157,
  sym_directive_root = 158,
  sym_directive_tls = 159,
  sym_matcher_token = 160,
  sym_global_options_block = 161,
  sym_global_option_email = 162,
  sym_global_option_auto_https = 163,
  sym_snippet = 164,
  aux_sym_document_repeat1 = 165,
  aux_sym_site_block_repeat1 = 166,
  aux_sym_matcher_definition_repeat1 = 167,
  aux_sym_directive_basicauth_repeat1 = 168,
  aux_sym_directive_bind_repeat1 = 169,
  aux_sym_directive_encode_repeat1 = 170,
  aux_sym_directive_file_server_repeat1 = 171,
  aux_sym_directive_file_server_repeat2 = 172,
  aux_sym_directive_handle_repeat1 = 173,
  aux_sym_directive_header_repeat1 = 174,
  aux_sym_directive_log_repeat1 = 175,
  aux_sym__log_output_file_repeat1 = 176,
  aux_sym_directive_request_body_repeat1 = 177,
  aux_sym_directive_reverse_proxy_repeat1 = 178,
  aux_sym_global_options_block_repeat1 = 179,
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
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 8,
  [12] = 12,
  [13] = 10,
  [14] = 9,
  [15] = 12,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 31,
  [34] = 32,
  [35] = 29,
  [36] = 30,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 37,
  [43] = 43,
  [44] = 38,
  [45] = 39,
  [46] = 46,
  [47] = 40,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 41,
  [52] = 52,
  [53] = 48,
  [54] = 37,
  [55] = 55,
  [56] = 39,
  [57] = 46,
  [58] = 58,
  [59] = 59,
  [60] = 50,
  [61] = 52,
  [62] = 62,
  [63] = 63,
  [64] = 55,
  [65] = 65,
  [66] = 66,
  [67] = 59,
  [68] = 62,
  [69] = 65,
  [70] = 58,
  [71] = 63,
  [72] = 66,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 73,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 76,
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
  [105] = 82,
  [106] = 106,
  [107] = 107,
  [108] = 81,
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
  [121] = 79,
  [122] = 82,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 79,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 83,
  [138] = 138,
  [139] = 86,
  [140] = 85,
  [141] = 141,
  [142] = 142,
  [143] = 84,
  [144] = 144,
  [145] = 145,
  [146] = 142,
  [147] = 90,
  [148] = 117,
  [149] = 114,
  [150] = 136,
  [151] = 110,
  [152] = 88,
  [153] = 134,
  [154] = 109,
  [155] = 125,
  [156] = 107,
  [157] = 116,
  [158] = 94,
  [159] = 106,
  [160] = 131,
  [161] = 128,
  [162] = 102,
  [163] = 127,
  [164] = 111,
  [165] = 145,
  [166] = 79,
  [167] = 113,
  [168] = 132,
  [169] = 135,
  [170] = 141,
  [171] = 104,
  [172] = 144,
  [173] = 126,
  [174] = 124,
  [175] = 119,
  [176] = 82,
  [177] = 103,
  [178] = 115,
  [179] = 112,
  [180] = 129,
  [181] = 96,
  [182] = 101,
  [183] = 138,
  [184] = 91,
  [185] = 100,
  [186] = 87,
  [187] = 133,
  [188] = 118,
  [189] = 92,
  [190] = 120,
  [191] = 99,
  [192] = 98,
  [193] = 93,
  [194] = 95,
  [195] = 123,
  [196] = 97,
  [197] = 197,
  [198] = 197,
  [199] = 199,
  [200] = 199,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 202,
  [205] = 203,
  [206] = 206,
  [207] = 207,
  [208] = 206,
  [209] = 207,
  [210] = 102,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 218,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 221,
  [225] = 223,
  [226] = 222,
  [227] = 220,
  [228] = 73,
  [229] = 229,
  [230] = 230,
  [231] = 230,
  [232] = 232,
  [233] = 230,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 82,
  [238] = 235,
  [239] = 236,
  [240] = 240,
  [241] = 79,
  [242] = 99,
  [243] = 112,
  [244] = 79,
  [245] = 245,
  [246] = 94,
  [247] = 87,
  [248] = 248,
  [249] = 82,
  [250] = 250,
  [251] = 251,
  [252] = 251,
  [253] = 245,
  [254] = 126,
  [255] = 248,
  [256] = 136,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 260,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 263,
  [267] = 265,
  [268] = 264,
  [269] = 265,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 275,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 272,
  [283] = 274,
  [284] = 284,
  [285] = 285,
  [286] = 284,
  [287] = 273,
  [288] = 270,
  [289] = 289,
  [290] = 275,
  [291] = 291,
  [292] = 292,
  [293] = 291,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 294,
  [306] = 306,
  [307] = 303,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 299,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 304,
  [316] = 316,
  [317] = 317,
  [318] = 312,
  [319] = 319,
  [320] = 313,
  [321] = 298,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 308,
  [326] = 322,
  [327] = 327,
  [328] = 328,
  [329] = 300,
  [330] = 330,
  [331] = 310,
  [332] = 324,
  [333] = 333,
  [334] = 295,
  [335] = 319,
  [336] = 302,
  [337] = 301,
  [338] = 309,
  [339] = 323,
  [340] = 340,
  [341] = 328,
  [342] = 314,
  [343] = 343,
  [344] = 330,
  [345] = 306,
  [346] = 333,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 347,
  [354] = 350,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 340,
  [365] = 348,
  [366] = 366,
  [367] = 361,
  [368] = 362,
  [369] = 363,
  [370] = 356,
  [371] = 360,
  [372] = 351,
  [373] = 355,
  [374] = 348,
  [375] = 375,
  [376] = 362,
  [377] = 363,
  [378] = 378,
  [379] = 352,
  [380] = 361,
  [381] = 378,
  [382] = 357,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 383,
  [393] = 387,
  [394] = 394,
  [395] = 385,
  [396] = 396,
  [397] = 391,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 31,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 32,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 408,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 402,
  [419] = 403,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 399,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 420,
  [434] = 426,
  [435] = 435,
  [436] = 427,
  [437] = 420,
  [438] = 431,
  [439] = 432,
  [440] = 414,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 406,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 441,
  [452] = 416,
  [453] = 426,
  [454] = 431,
  [455] = 455,
  [456] = 427,
  [457] = 432,
  [458] = 415,
  [459] = 417,
  [460] = 460,
  [461] = 400,
  [462] = 462,
  [463] = 446,
  [464] = 450,
  [465] = 441,
  [466] = 466,
  [467] = 467,
  [468] = 460,
  [469] = 462,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 407,
  [475] = 409,
  [476] = 476,
  [477] = 471,
  [478] = 443,
  [479] = 479,
  [480] = 455,
  [481] = 481,
  [482] = 482,
  [483] = 404,
  [484] = 445,
  [485] = 444,
  [486] = 472,
  [487] = 487,
  [488] = 488,
  [489] = 404,
  [490] = 455,
  [491] = 435,
  [492] = 488,
  [493] = 411,
  [494] = 487,
  [495] = 495,
  [496] = 496,
  [497] = 482,
  [498] = 481,
  [499] = 499,
  [500] = 425,
  [501] = 501,
  [502] = 502,
  [503] = 467,
  [504] = 479,
  [505] = 473,
  [506] = 476,
  [507] = 410,
  [508] = 422,
  [509] = 443,
  [510] = 466,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 511,
  [519] = 83,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 514,
  [527] = 527,
  [528] = 513,
  [529] = 529,
  [530] = 511,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 524,
  [542] = 542,
  [543] = 520,
  [544] = 521,
  [545] = 545,
  [546] = 539,
  [547] = 520,
  [548] = 521,
  [549] = 520,
  [550] = 521,
  [551] = 520,
  [552] = 521,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 539,
  [557] = 557,
  [558] = 537,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 562,
  [563] = 554,
  [564] = 564,
  [565] = 565,
  [566] = 565,
  [567] = 567,
  [568] = 562,
  [569] = 560,
  [570] = 570,
  [571] = 534,
  [572] = 523,
  [573] = 573,
  [574] = 534,
  [575] = 533,
  [576] = 576,
  [577] = 532,
  [578] = 578,
  [579] = 94,
  [580] = 580,
  [581] = 86,
  [582] = 32,
  [583] = 533,
  [584] = 553,
  [585] = 585,
  [586] = 586,
  [587] = 85,
  [588] = 588,
  [589] = 31,
  [590] = 590,
  [591] = 564,
  [592] = 537,
  [593] = 84,
  [594] = 532,
  [595] = 553,
  [596] = 596,
  [597] = 565,
  [598] = 598,
  [599] = 557,
  [600] = 600,
  [601] = 585,
  [602] = 586,
  [603] = 565,
  [604] = 585,
  [605] = 586,
  [606] = 585,
  [607] = 586,
  [608] = 585,
  [609] = 586,
  [610] = 539,
  [611] = 611,
  [612] = 612,
  [613] = 613,
  [614] = 559,
  [615] = 555,
  [616] = 538,
  [617] = 617,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 590,
  [622] = 622,
  [623] = 522,
  [624] = 624,
  [625] = 617,
  [626] = 611,
  [627] = 540,
  [628] = 619,
  [629] = 620,
  [630] = 512,
  [631] = 631,
  [632] = 632,
  [633] = 633,
  [634] = 634,
  [635] = 622,
  [636] = 580,
  [637] = 585,
  [638] = 638,
  [639] = 631,
  [640] = 640,
  [641] = 586,
  [642] = 542,
  [643] = 588,
  [644] = 644,
  [645] = 645,
  [646] = 640,
  [647] = 516,
  [648] = 517,
  [649] = 521,
  [650] = 520,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(716);
      if (lookahead == '\n') ADVANCE(719);
      if (lookahead == '\f') ADVANCE(719);
      if (lookahead == '\r') ADVANCE(719);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '\'') ADVANCE(1183);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '+') ADVANCE(1176);
      if (lookahead == '-') ADVANCE(1177);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '1') ADVANCE(877);
      if (lookahead == '2') ADVANCE(871);
      if (lookahead == '3') ADVANCE(874);
      if (lookahead == '4') ADVANCE(923);
      if (lookahead == '6') ADVANCE(925);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '?') ADVANCE(1179);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'E') ADVANCE(369);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'z') ADVANCE(633);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(719);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == 8232) ADVANCE(719);
      if (lookahead == 8233) ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
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
      if (lookahead == '\n') ADVANCE(719);
      if (lookahead == '\f') ADVANCE(719);
      if (lookahead == '\r') ADVANCE(719);
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(723);
      if (lookahead == '\'') ADVANCE(1183);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '+') ADVANCE(1176);
      if (lookahead == '-') ADVANCE(1177);
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '1') ADVANCE(877);
      if (lookahead == '2') ADVANCE(871);
      if (lookahead == '3') ADVANCE(874);
      if (lookahead == '4') ADVANCE(923);
      if (lookahead == '6') ADVANCE(925);
      if (lookahead == ':') ADVANCE(867);
      if (lookahead == '?') ADVANCE(1179);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'E') ADVANCE(369);
      if (lookahead == 'I') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'c') ADVANCE(555);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(500);
      if (lookahead == 'g') ADVANCE(597);
      if (lookahead == 'h') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(493);
      if (lookahead == 'j') ADVANCE(632);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(385);
      if (lookahead == 'o') ADVANCE(489);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == 't') ADVANCE(417);
      if (lookahead == 'u') ADVANCE(433);
      if (lookahead == 'z') ADVANCE(633);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(719);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == 8232) ADVANCE(719);
      if (lookahead == 8233) ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
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
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1490);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1490);
      if ((1 <= lookahead && lookahead <= 11) ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1491);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1492);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1492);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1492);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1492);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1492);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
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
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '5') ADVANCE(23);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '5') ADVANCE(28);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1491);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
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
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1181);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(39)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1182);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1185);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(40)
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1186);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(939);
      if (lookahead == '2') ADVANCE(935);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(1044);
      if (lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'h') ADVANCE(1062);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1066);
      if (lookahead == 'u') ADVANCE(1071);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1052);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(939);
      if (lookahead == '2') ADVANCE(935);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(1044);
      if (lookahead == 'b') ADVANCE(1043);
      if (lookahead == 'e') ADVANCE(1047);
      if (lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'h') ADVANCE(1062);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1066);
      if (lookahead == 'u') ADVANCE(1071);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1052);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(1089);
      if (lookahead == 'h') ADVANCE(1062);
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(1064);
      if (lookahead == 'b') ADVANCE(1060);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == 'f') ADVANCE(1089);
      if (lookahead == 'h') ADVANCE(1062);
      if (lookahead == 'i') ADVANCE(1097);
      if (lookahead == 'l') ADVANCE(1101);
      if (lookahead == 'r') ADVANCE(1076);
      if (lookahead == 't') ADVANCE(1093);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '\'') ADVANCE(1184);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(45)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(1180);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '/') ADVANCE(934);
      if (lookahead == '@') ADVANCE(886);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '1') ADVANCE(939);
      if (lookahead == '2') ADVANCE(935);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(1046);
      if (lookahead == 'i') ADVANCE(1109);
      if (lookahead == 't') ADVANCE(1067);
      if (lookahead == 'u') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1052);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(930);
      if (lookahead == '1') ADVANCE(939);
      if (lookahead == '2') ADVANCE(935);
      if (lookahead == ':') ADVANCE(329);
      if (lookahead == 'f') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1052);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(930);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == 'h') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(987);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == '}') ADVANCE(730);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
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
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(931);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(951);
      if (lookahead == 'b') ADVANCE(945);
      if (lookahead == 'e') ADVANCE(983);
      if (lookahead == 'f') ADVANCE(975);
      if (lookahead == 'h') ADVANCE(950);
      if (lookahead == 'i') ADVANCE(982);
      if (lookahead == 'l') ADVANCE(987);
      if (lookahead == 'r') ADVANCE(961);
      if (lookahead == 't') ADVANCE(980);
      if (lookahead == '}') ADVANCE(730);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
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
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(714);
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
      if (lookahead == '"') ADVANCE(713);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'd') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(514);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(695);
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
      if (lookahead == '"') ADVANCE(1160);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '3') ADVANCE(1465);
      if (lookahead == '4') ADVANCE(1365);
      if (lookahead == '@') ADVANCE(885);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1370);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead == 'f') ADVANCE(1403);
      if (lookahead == 'h') ADVANCE(1376);
      if (lookahead == 'i') ADVANCE(1409);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'p') ADVANCE(1391);
      if (lookahead == 'r') ADVANCE(1387);
      if (lookahead == 't') ADVANCE(1399);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
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
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '3') ADVANCE(1465);
      if (lookahead == '4') ADVANCE(1365);
      if (lookahead == '@') ADVANCE(885);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1370);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead == 'f') ADVANCE(1403);
      if (lookahead == 'h') ADVANCE(1376);
      if (lookahead == 'i') ADVANCE(1409);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'p') ADVANCE(1391);
      if (lookahead == 'r') ADVANCE(1387);
      if (lookahead == 't') ADVANCE(1399);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
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
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '3') ADVANCE(1465);
      if (lookahead == '4') ADVANCE(1365);
      if (lookahead == 'a') ADVANCE(1377);
      if (lookahead == 'b') ADVANCE(1370);
      if (lookahead == 'e') ADVANCE(1413);
      if (lookahead == 'f') ADVANCE(1403);
      if (lookahead == 'h') ADVANCE(1376);
      if (lookahead == 'i') ADVANCE(1409);
      if (lookahead == 'l') ADVANCE(1418);
      if (lookahead == 'p') ADVANCE(1391);
      if (lookahead == 'r') ADVANCE(1387);
      if (lookahead == 't') ADVANCE(1399);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
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
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == ':') ADVANCE(868);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '3') ADVANCE(694);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'g') ADVANCE(678);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(484);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'z') ADVANCE(633);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
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
      if (lookahead == '+') ADVANCE(1176);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '?') ADVANCE(1179);
      if (lookahead == 'd') ADVANCE(904);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(719);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(719);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1176);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '?') ADVANCE(1179);
      if (lookahead == 'd') ADVANCE(904);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(719);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(719);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '3') ADVANCE(694);
      if (lookahead == '4') ADVANCE(315);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'b') ADVANCE(390);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == 'f') ADVANCE(513);
      if (lookahead == 'g') ADVANCE(678);
      if (lookahead == 'h') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(446);
      if (lookahead == 'o') ADVANCE(661);
      if (lookahead == 'p') ADVANCE(402);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(449);
      if (lookahead == 'z') ADVANCE(633);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
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
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(718);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'a') ADVANCE(411);
      if (lookahead == 'b') ADVANCE(389);
      if (lookahead == 'e') ADVANCE(543);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(557);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 't') ADVANCE(524);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == 133) ADVANCE(720);
      if (lookahead == 134) ADVANCE(721);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(718);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(890);
      if (lookahead == '}') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(721);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(891);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 67:
      if (lookahead == '#') ADVANCE(890);
      if (lookahead == '}') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(721);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(717);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 68:
      if (lookahead == '#') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(721);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(892);
      if (lookahead != 0) ADVANCE(895);
      END_STATE();
    case 69:
      if (lookahead == '%') ADVANCE(711);
      END_STATE();
    case 70:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 71:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 75:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 82:
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == '%') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 84:
      if (lookahead == '%') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == '%') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(783);
      END_STATE();
    case 86:
      if (lookahead == '%') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 87:
      if (lookahead == '%') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '*') ADVANCE(1496);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '@') ADVANCE(885);
      if (lookahead == 'h') ADVANCE(1234);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1236);
      END_STATE();
    case 89:
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'h') ADVANCE(1234);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1236);
      END_STATE();
    case 90:
      if (lookahead == ')') ADVANCE(1503);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '+') ADVANCE(1176);
      if (lookahead == '-') ADVANCE(1178);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '?') ADVANCE(1179);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == '{') ADVANCE(728);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == '5') ADVANCE(261);
      if (lookahead == ':') ADVANCE(330);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 't') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(322);
      if (lookahead == '5') ADVANCE(272);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(326);
      if (lookahead == '5') ADVANCE(275);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(712);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1493);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '1') ADVANCE(123);
      if (lookahead == '2') ADVANCE(120);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '5') ADVANCE(121);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1489);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(124);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(373);
      if (lookahead == ']') ADVANCE(1489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(687);
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
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 's') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(232);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 't') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'h') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 't') ADVANCE(1189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(240);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '0') ADVANCE(255);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '_') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'o') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '_') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'l') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(236);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(241);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 263:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(321);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '8') ADVANCE(242);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 265:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 266:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'c') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 267:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 268:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 269:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == 'x') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 272:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(250);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 273:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 274:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 275:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(251);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 276:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 277:
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 278:
      if (lookahead == '-') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(687);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(710);
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
      if (lookahead == '.') ADVANCE(119);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '5') ADVANCE(284);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(285);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(282);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(119);
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
      if (lookahead == '.') ADVANCE(323);
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
      if (lookahead == '/') ADVANCE(915);
      if (lookahead == '4') ADVANCE(922);
      if (lookahead == '6') ADVANCE(924);
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
      if (lookahead == '/') ADVANCE(738);
      END_STATE();
    case 311:
      if (lookahead == '/') ADVANCE(739);
      END_STATE();
    case 312:
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 313:
      if (lookahead == '/') ADVANCE(311);
      END_STATE();
    case 314:
      if (lookahead == '0') ADVANCE(784);
      if (lookahead == '1') ADVANCE(816);
      if (lookahead == '2') ADVANCE(790);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
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
      if (lookahead == '1') ADVANCE(756);
      if (lookahead == '2') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 321:
      if (lookahead == '1') ADVANCE(109);
      if (lookahead == '2') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 322:
      if (lookahead == '1') ADVANCE(745);
      if (lookahead == '2') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 323:
      if (lookahead == '1') ADVANCE(859);
      if (lookahead == '2') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(858);
      END_STATE();
    case 324:
      if (lookahead == '1') ADVANCE(1470);
      END_STATE();
    case 325:
      if (lookahead == '1') ADVANCE(291);
      if (lookahead == '2') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 326:
      if (lookahead == '1') ADVANCE(106);
      if (lookahead == '2') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 327:
      if (lookahead == '1') ADVANCE(810);
      if (lookahead == '2') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(312);
      if (lookahead == 's') ADVANCE(346);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(864);
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
      if (lookahead == ':') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 360:
      if (lookahead == ':') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 361:
      if (lookahead == ':') ADVANCE(825);
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
      if (lookahead == 'O') ADVANCE(1218);
      END_STATE();
    case 366:
      if (lookahead == 'O') ADVANCE(368);
      END_STATE();
    case 367:
      if (lookahead == 'R') ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == 'R') ADVANCE(1220);
      END_STATE();
    case 369:
      if (lookahead == 'R') ADVANCE(367);
      END_STATE();
    case 370:
      if (lookahead == '[') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 371:
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1494);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 372:
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1494);
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
      if (lookahead == '_') ADVANCE(499);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(527);
      END_STATE();
    case 380:
      if (lookahead == '_') ADVANCE(636);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 382:
      if (lookahead == '_') ADVANCE(439);
      END_STATE();
    case 383:
      if (lookahead == '_') ADVANCE(655);
      END_STATE();
    case 384:
      if (lookahead == '_') ADVANCE(624);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(669);
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
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'c') ADVANCE(588);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(545);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(545);
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(534);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(443);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(677);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(548);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(523);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(642);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(600);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(652);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(638);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(638);
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(596);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 't') ADVANCE(537);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(546);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(526);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(440);
      END_STATE();
    case 409:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 410:
      if (lookahead == 'a') ADVANCE(415);
      END_STATE();
    case 411:
      if (lookahead == 'b') ADVANCE(559);
      END_STATE();
    case 412:
      if (lookahead == 'b') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 413:
      if (lookahead == 'b') ADVANCE(566);
      END_STATE();
    case 414:
      if (lookahead == 'b') ADVANCE(529);
      END_STATE();
    case 415:
      if (lookahead == 'b') ADVANCE(530);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(515);
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 417:
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(617);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(564);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(396);
      if (lookahead == 'g') ADVANCE(1192);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(399);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(409);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(562);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(658);
      END_STATE();
    case 425:
      if (lookahead == 'c') ADVANCE(485);
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 426:
      if (lookahead == 'c') ADVANCE(486);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(911);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(1150);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(1199);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(1202);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(1204);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(474);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(575);
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(674);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'q') ADVANCE(662);
      if (lookahead == 'v') ADVANCE(472);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(508);
      if (lookahead == 'k') ADVANCE(481);
      if (lookahead == 'l') ADVANCE(569);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(452);
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
      if (lookahead == 'd') ADVANCE(525);
      END_STATE();
    case 442:
      if (lookahead == 'd') ADVANCE(511);
      END_STATE();
    case 443:
      if (lookahead == 'd') ADVANCE(477);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(487);
      if (lookahead == 'i') ADVANCE(616);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(419);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'o') ADVANCE(558);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'l') ADVANCE(617);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1155);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(1165);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1215);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(494);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1229);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1203);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(1205);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(672);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(589);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(518);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(381);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(442);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(628);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(438);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(664);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(592);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(431);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(594);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 485:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 486:
      if (lookahead == 'e') ADVANCE(610);
      END_STATE();
    case 487:
      if (lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(1499);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(488);
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 490:
      if (lookahead == 'f') ADVANCE(554);
      if (lookahead == 't') ADVANCE(467);
      END_STATE();
    case 491:
      if (lookahead == 'f') ADVANCE(568);
      END_STATE();
    case 492:
      if (lookahead == 'g') ADVANCE(1192);
      END_STATE();
    case 493:
      if (lookahead == 'g') ADVANCE(552);
      if (lookahead == 'm') ADVANCE(587);
      if (lookahead == 'n') ADVANCE(490);
      if (lookahead == 'p') ADVANCE(920);
      END_STATE();
    case 494:
      if (lookahead == 'g') ADVANCE(461);
      END_STATE();
    case 495:
      if (lookahead == 'h') ADVANCE(887);
      END_STATE();
    case 496:
      if (lookahead == 'h') ADVANCE(900);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(1166);
      END_STATE();
    case 498:
      if (lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 499:
      if (lookahead == 'h') ADVANCE(660);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(421);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(670);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(576);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(540);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(627);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(635);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(680);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(611);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 513:
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 514:
      if (lookahead == 'i') ADVANCE(532);
      END_STATE();
    case 515:
      if (lookahead == 'k') ADVANCE(471);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(1477);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(1497);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(1217);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(1487);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(450);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(522);
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(374);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(498);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(617);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(453);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(383);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(570);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(454);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(476);
      END_STATE();
    case 531:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 532:
      if (lookahead == 'l') ADVANCE(459);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(587);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(928);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(516);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(516);
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(397);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(584);
      END_STATE();
    case 542:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 'r') ADVANCE(613);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(1216);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(427);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(441);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(468);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(648);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(422);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(1219);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(547);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(639);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(598);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(544);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(671);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(541);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(590);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(437);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(602);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(434);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(605);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(423);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(408);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(630);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(528);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(916);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(918);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(1149);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(328);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(1206);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(888);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(663);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(641);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(618);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(606);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(615);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(400);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(567);
      END_STATE();
    case 587:
      if (lookahead == 'p') ADVANCE(571);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(676);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(1174);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(1156);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(1221);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(1197);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(1151);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(673);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(391);
      if (lookahead == 'z') ADVANCE(505);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(640);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(551);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(643);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(629);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(403);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(382);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(561);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(593);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(657);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(659);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(667);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(563);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(539);
      END_STATE();
    case 615:
      if (lookahead == 'r') ADVANCE(479);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(1483);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(1498);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(1502);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(1500);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(1208);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(1501);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(502);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(501);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(451);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(573);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(410);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(654);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(466);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(647);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(560);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(651);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(631);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(420);
      END_STATE();
    case 636:
      if (lookahead == 's') ADVANCE(480);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(432);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(1479);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(909);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(1214);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(1187);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(1196);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(929);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(740);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(1475);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(556);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(428);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(497);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(506);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(582);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(620);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(622);
      END_STATE();
    case 660:
      if (lookahead == 't') ADVANCE(656);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(653);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(470);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(644);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 665:
      if (lookahead == 'u') ADVANCE(650);
      END_STATE();
    case 666:
      if (lookahead == 'v') ADVANCE(464);
      END_STATE();
    case 667:
      if (lookahead == 'v') ADVANCE(482);
      END_STATE();
    case 668:
      if (lookahead == 'w') ADVANCE(625);
      END_STATE();
    case 669:
      if (lookahead == 'x') ADVANCE(384);
      END_STATE();
    case 670:
      if (lookahead == 'x') ADVANCE(926);
      END_STATE();
    case 671:
      if (lookahead == 'x') ADVANCE(675);
      END_STATE();
    case 672:
      if (lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 673:
      if (lookahead == 'y') ADVANCE(1473);
      END_STATE();
    case 674:
      if (lookahead == 'y') ADVANCE(1225);
      END_STATE();
    case 675:
      if (lookahead == 'y') ADVANCE(1230);
      END_STATE();
    case 676:
      if (lookahead == 'y') ADVANCE(581);
      END_STATE();
    case 677:
      if (lookahead == 'y') ADVANCE(621);
      END_STATE();
    case 678:
      if (lookahead == 'z') ADVANCE(505);
      END_STATE();
    case 679:
      if (lookahead == 'z') ADVANCE(456);
      END_STATE();
    case 680:
      if (lookahead == 'z') ADVANCE(457);
      END_STATE();
    case 681:
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(681)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 682:
      if (lookahead == '}') ADVANCE(1467);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 683:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(683)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(895);
      END_STATE();
    case 684:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(932);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(684)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 685:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(685)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(895);
      END_STATE();
    case 686:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1207);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(686)
      END_STATE();
    case 687:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 688:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1469);
      END_STATE();
    case 689:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1161);
      END_STATE();
    case 690:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1211);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(690)
      END_STATE();
    case 691:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      END_STATE();
    case 692:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      END_STATE();
    case 694:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 695:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      END_STATE();
    case 696:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(884);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(696)
      END_STATE();
    case 697:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(697)
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(910);
      END_STATE();
    case 698:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1468);
      END_STATE();
    case 699:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1467);
      END_STATE();
    case 700:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(698);
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(699);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 705:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 706:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 707:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 708:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1493);
      END_STATE();
    case 710:
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
    case 711:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(759);
      END_STATE();
    case 712:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(279);
      END_STATE();
    case 713:
      if (lookahead == ' ' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 714:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 715:
      if (eof) ADVANCE(716);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(90);
      if (lookahead == '*') ADVANCE(1495);
      if (lookahead == '/') ADVANCE(1468);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '2') ADVANCE(92);
      if (lookahead == ':') ADVANCE(868);
      if (lookahead == '@') ADVANCE(886);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '{') ADVANCE(728);
      if (lookahead == '}') ADVANCE(729);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(717);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(717);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(718);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym__vertical_whitespace);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__vertical_whitespaces);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(720);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__empty_line);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(723);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1490);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\r') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(726);
      if (lookahead != 0) ADVANCE(890);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(710);
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
    case 731:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (lookahead == ':') ADVANCE(693);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_localhost);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ipv4_address);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (lookahead == '5') ADVANCE(747);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(746);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(752);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(754);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(753);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(755);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(742);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(758);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(761);
      if (lookahead == ':') ADVANCE(81);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(765);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(772);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == '1') ADVANCE(764);
      if (lookahead == '2') ADVANCE(760);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(775);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(772);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(780);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(781);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(711);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(782);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '0') ADVANCE(785);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '0') ADVANCE(821);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(791);
      if (lookahead == ':') ADVANCE(707);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(797);
      if (lookahead == ':') ADVANCE(702);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(803);
      if (lookahead == ':') ADVANCE(703);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(809);
      if (lookahead == ':') ADVANCE(705);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '5') ADVANCE(815);
      if (lookahead == ':') ADVANCE(706);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(795);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(801);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(807);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(806);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(813);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(812);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(819);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(818);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(820);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(829);
      if (lookahead == ':') ADVANCE(327);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(794);
      if (lookahead == '2') ADVANCE(786);
      if (lookahead == 'f') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(836);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(798);
      if (lookahead == '2') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(804);
      if (lookahead == '2') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(805);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(810);
      if (lookahead == '2') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(816);
      if (lookahead == '2') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(817);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(857);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(858);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(314);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(327);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (lookahead == 'f') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(834);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (lookahead == 'f') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(830);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (lookahead == 'f') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(835);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(759);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(858);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(759);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(249);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '1') ADVANCE(1472);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '5') ADVANCE(872);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(876);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(875);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(882);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(875);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1207);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(881);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(883);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1467);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(607);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\r') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(726);
      if (lookahead != 0) ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(890);
      if (lookahead == '}') ADVANCE(731);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(895);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(895);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(895);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_basicauth);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(907);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'f') ADVANCE(905);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'r') ADVANCE(1175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_bcrypt);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token1);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(910);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '0') ADVANCE(870);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(873);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(873);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(362);
      if (lookahead == '\\') ADVANCE(714);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(932);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '%') ADVANCE(700);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(934);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == '5') ADVANCE(936);
      if (lookahead == ':') ADVANCE(330);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(938);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(940);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(941);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(940);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(938);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1053);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1039);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(1013);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(996);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(952);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1010);
      if (lookahead == 'i') ADVANCE(984);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1022);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(960);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(979);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(1020);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'a') ADVANCE(985);
      if (lookahead == 'e') ADVANCE(947);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'b') ADVANCE(989);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'b') ADVANCE(993);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(946);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'c') ADVANCE(992);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(913);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(1025);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(977);
      if (lookahead == 'q') ADVANCE(1021);
      if (lookahead == 'v') ADVANCE(968);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(981);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(963);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'd') ADVANCE(969);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == 'o') ADVANCE(990);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(942);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(943);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1011);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1003);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1001);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'e') ADVANCE(1002);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'g') ADVANCE(1194);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(902);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'h') ADVANCE(1168);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(953);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'i') ADVANCE(999);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(962);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(1488);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(1009);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'l') ADVANCE(964);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(997);
      if (lookahead == 'n') ADVANCE(1018);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(955);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(958);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1024);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1004);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1014);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(998);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(959);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(956);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'o') ADVANCE(1005);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(949);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(1006);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'p') ADVANCE(994);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1158);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1223);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1172);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1023);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1153);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(986);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1015);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1016);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(988);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(1012);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'r') ADVANCE(991);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(1485);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(976);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(1019);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(965);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 's') ADVANCE(970);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(1481);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(898);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(1190);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(973);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(967);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(944);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 't') ADVANCE(974);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(966);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'u') ADVANCE(1017);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'v') ADVANCE(971);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'x') ADVANCE(1026);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(1227);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == 'y') ADVANCE(1232);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1040);
      if (lookahead == '5') ADVANCE(1029);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1032);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1032);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1040);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1041);
      if (lookahead == '5') ADVANCE(1034);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1035);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1037);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1037);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1035);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1041);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(1054);
      if (lookahead == ':') ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1053);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1036);
      if (lookahead == '2') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1035);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(757);
      if (lookahead == '2') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1031);
      if (lookahead == '2') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(1038);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'a') ADVANCE(1049);
      if (lookahead == 'i') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'e') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead == 'r') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 'o') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (lookahead == 's') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1053);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(330);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(70);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1063);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1129);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1114);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1137);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1126);
      if (lookahead == 'i') ADVANCE(1099);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1135);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1100);
      if (lookahead == 'e') ADVANCE(1059);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1107);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1103);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1058);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1110);
      if (lookahead == 'l') ADVANCE(1125);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1110);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(914);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1141);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1111);
      if (lookahead == 'n') ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1092);
      if (lookahead == 'q') ADVANCE(1136);
      if (lookahead == 'v') ADVANCE(1082);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1095);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1083);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1072);
      if (lookahead == 'o') ADVANCE(1102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1056);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1148);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1164);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1127);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1123);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1118);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1119);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'g') ADVANCE(1195);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(903);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(1169);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1094);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1139);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1116);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1125);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1077);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1079);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1113);
      if (lookahead == 'p') ADVANCE(921);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1113);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1068);
      if (lookahead == 'r') ADVANCE(1122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1069);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1074);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1086);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1130);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1120);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1115);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1073);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1070);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1121);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(921);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(919);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1061);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1124);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1159);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1224);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1173);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1138);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1154);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1131);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1132);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1128);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1486);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1091);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1482);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1191);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1087);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1133);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'v') ADVANCE(1085);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(927);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(1142);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1228);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1233);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1143:
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
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_file_server);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_browse);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_error);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_http_message);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_http_error_code);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '_') ADVANCE(1427);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(1143);
      if (lookahead == '@') ADVANCE(370);
      if (lookahead == '_') ADVANCE(995);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(1112);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(585);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(908);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1180);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ') ADVANCE(1181);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1182);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1182);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1180);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if (lookahead == ' ') ADVANCE(1185);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1186);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1186);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(228);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_log);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_stderr);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '_') ADVANCE(636);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_roll_disabled);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_roll_size);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_roll_uncompressed);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_roll_local_time);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_roll_keep);
      if (lookahead == '_') ADVANCE(491);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym__log_output_file_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1207);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_roll_keep_for_days);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1210);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1210);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_size_number);
      if (lookahead == '.') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_size_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_size_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(anon_sym_request_body);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(anon_sym_max_size);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1360);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == 't') ADVANCE(1358);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1359);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1360);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1359);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1360);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1359);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1466);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1466);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1361);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1242);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1242);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1237);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1238);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1237);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1246);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1246);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1240);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1240);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1249);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1249);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1244);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1243);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1244);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1243);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1254);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1253);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1253);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1248);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1248);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1258);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1257);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1258);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1257);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1252);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1252);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1262);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1261);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1262);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1261);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1255);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1255);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1260);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1259);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1260);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1259);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1294);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1293);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1294);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1293);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1298);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1297);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1302);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1302);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1301);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1296);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1296);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1295);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1310);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1309);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1310);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1309);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1304);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1303);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1303);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1314);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1314);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1313);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1308);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1308);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1317);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1318);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1317);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1312);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1311);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1311);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1322);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1321);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1322);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1321);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1316);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1316);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1315);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1325);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1326);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1325);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1320);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1319);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1320);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1319);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1330);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1329);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1330);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1329);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1324);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1323);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1324);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1323);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1328);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1327);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1328);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1327);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1338);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1337);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1338);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1337);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1332);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1331);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1346);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1345);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1346);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1345);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1340);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1339);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1340);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1339);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1351);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == ':') ADVANCE(1364);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1351);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1351);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1350);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1344);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1344);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1343);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1357);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == 'p') ADVANCE(1355);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1356);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1357);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1356);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1357);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1356);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == ':') ADVANCE(1363);
      if (lookahead == 's') ADVANCE(1347);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1349);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1349);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1348);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '-') ADVANCE(1354);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1353);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1362);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '.') ADVANCE(1464);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '/') ADVANCE(310);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '0') ADVANCE(1366);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '1') ADVANCE(1471);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '_') ADVANCE(1448);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '_') ADVANCE(1428);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '_') ADVANCE(1378);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1445);
      if (lookahead == 'i') ADVANCE(1414);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1457);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1386);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1455);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1435);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'a') ADVANCE(1415);
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead == 't') ADVANCE(1410);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'b') ADVANCE(1421);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'b') ADVANCE(1425);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'c') ADVANCE(1372);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'c') ADVANCE(1423);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(912);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(1461);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(1405);
      if (lookahead == 'q') ADVANCE(1456);
      if (lookahead == 'v') ADVANCE(1395);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(1389);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(1408);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'd') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1383);
      if (lookahead == 'o') ADVANCE(1419);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1367);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1162);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1438);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1442);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1434);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1436);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'e') ADVANCE(1412);
      if (lookahead == 'l') ADVANCE(1444);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'g') ADVANCE(1193);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'h') ADVANCE(901);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'h') ADVANCE(1167);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(1407);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(1379);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(1432);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'l') ADVANCE(1478);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'l') ADVANCE(1388);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'l') ADVANCE(1390);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(1429);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(1406);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'm') ADVANCE(1430);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(1380);
      if (lookahead == 'r') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(1381);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(1392);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'n') ADVANCE(1453);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1449);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1459);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1437);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1431);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1439);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1382);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'o') ADVANCE(1440);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(1441);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(1424);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'p') ADVANCE(1426);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1222);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1171);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1458);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1460);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1152);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1450);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1411);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1451);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1375);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1420);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1447);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'r') ADVANCE(1422);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 's') ADVANCE(1484);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 's') ADVANCE(1404);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 's') ADVANCE(1454);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 's') ADVANCE(1393);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 's') ADVANCE(1397);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1480);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(897);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1188);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1401);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1476);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1369);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 't') ADVANCE(1402);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(1394);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'u') ADVANCE(1452);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'v') ADVANCE(1398);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'x') ADVANCE(1462);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'y') ADVANCE(1474);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'y') ADVANCE(1226);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == 'y') ADVANCE(1231);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1467);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1236);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1463);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1362);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(700);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1468);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(anon_sym_401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_root);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1486:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1144);
      END_STATE();
    case 1487:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(1143);
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
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1027);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f') ADVANCE(725);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1490);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1491);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(724);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(727);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1493);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(372);
      if (lookahead == ']') ADVANCE(1494);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(371);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(701);
      if (lookahead == '{') ADVANCE(708);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1467);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 1498:
      ACCEPT_TOKEN(anon_sym_auto_https);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(anon_sym_disable_redirects);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(anon_sym_ignore_loaded_certs);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(anon_sym_disable_certs);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 715},
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
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 60},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 60},
  [41] = {.lex_state = 60},
  [42] = {.lex_state = 57},
  [43] = {.lex_state = 60},
  [44] = {.lex_state = 63},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 63},
  [48] = {.lex_state = 60},
  [49] = {.lex_state = 63},
  [50] = {.lex_state = 60},
  [51] = {.lex_state = 63},
  [52] = {.lex_state = 60},
  [53] = {.lex_state = 63},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 60},
  [56] = {.lex_state = 58},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 43},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 65},
  [63] = {.lex_state = 65},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 65},
  [66] = {.lex_state = 65},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 64},
  [69] = {.lex_state = 64},
  [70] = {.lex_state = 64},
  [71] = {.lex_state = 64},
  [72] = {.lex_state = 64},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 60},
  [75] = {.lex_state = 715},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 64},
  [78] = {.lex_state = 63},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 715},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 42},
  [90] = {.lex_state = 41},
  [91] = {.lex_state = 41},
  [92] = {.lex_state = 41},
  [93] = {.lex_state = 41},
  [94] = {.lex_state = 41},
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
  [105] = {.lex_state = 64},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 64},
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
  [121] = {.lex_state = 41},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 41},
  [127] = {.lex_state = 41},
  [128] = {.lex_state = 41},
  [129] = {.lex_state = 41},
  [130] = {.lex_state = 64},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 41},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 64},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 64},
  [140] = {.lex_state = 64},
  [141] = {.lex_state = 41},
  [142] = {.lex_state = 41},
  [143] = {.lex_state = 64},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 42},
  [148] = {.lex_state = 42},
  [149] = {.lex_state = 42},
  [150] = {.lex_state = 42},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 42},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 42},
  [155] = {.lex_state = 42},
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
  [197] = {.lex_state = 62},
  [198] = {.lex_state = 62},
  [199] = {.lex_state = 62},
  [200] = {.lex_state = 62},
  [201] = {.lex_state = 62},
  [202] = {.lex_state = 715},
  [203] = {.lex_state = 91},
  [204] = {.lex_state = 715},
  [205] = {.lex_state = 91},
  [206] = {.lex_state = 62},
  [207] = {.lex_state = 62},
  [208] = {.lex_state = 62},
  [209] = {.lex_state = 62},
  [210] = {.lex_state = 715},
  [211] = {.lex_state = 715},
  [212] = {.lex_state = 715},
  [213] = {.lex_state = 715},
  [214] = {.lex_state = 715},
  [215] = {.lex_state = 715},
  [216] = {.lex_state = 715},
  [217] = {.lex_state = 715},
  [218] = {.lex_state = 47},
  [219] = {.lex_state = 47},
  [220] = {.lex_state = 91},
  [221] = {.lex_state = 715},
  [222] = {.lex_state = 715},
  [223] = {.lex_state = 64},
  [224] = {.lex_state = 715},
  [225] = {.lex_state = 64},
  [226] = {.lex_state = 715},
  [227] = {.lex_state = 91},
  [228] = {.lex_state = 61},
  [229] = {.lex_state = 63},
  [230] = {.lex_state = 88},
  [231] = {.lex_state = 88},
  [232] = {.lex_state = 715},
  [233] = {.lex_state = 88},
  [234] = {.lex_state = 715},
  [235] = {.lex_state = 63},
  [236] = {.lex_state = 63},
  [237] = {.lex_state = 61},
  [238] = {.lex_state = 63},
  [239] = {.lex_state = 63},
  [240] = {.lex_state = 715},
  [241] = {.lex_state = 61},
  [242] = {.lex_state = 62},
  [243] = {.lex_state = 62},
  [244] = {.lex_state = 62},
  [245] = {.lex_state = 63},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 62},
  [248] = {.lex_state = 63},
  [249] = {.lex_state = 62},
  [250] = {.lex_state = 63},
  [251] = {.lex_state = 63},
  [252] = {.lex_state = 63},
  [253] = {.lex_state = 63},
  [254] = {.lex_state = 62},
  [255] = {.lex_state = 63},
  [256] = {.lex_state = 62},
  [257] = {.lex_state = 715},
  [258] = {.lex_state = 63},
  [259] = {.lex_state = 63},
  [260] = {.lex_state = 60},
  [261] = {.lex_state = 60},
  [262] = {.lex_state = 63},
  [263] = {.lex_state = 46},
  [264] = {.lex_state = 60},
  [265] = {.lex_state = 715},
  [266] = {.lex_state = 46},
  [267] = {.lex_state = 715},
  [268] = {.lex_state = 60},
  [269] = {.lex_state = 715},
  [270] = {.lex_state = 66},
  [271] = {.lex_state = 63},
  [272] = {.lex_state = 66},
  [273] = {.lex_state = 66},
  [274] = {.lex_state = 54},
  [275] = {.lex_state = 89},
  [276] = {.lex_state = 63},
  [277] = {.lex_state = 66},
  [278] = {.lex_state = 89},
  [279] = {.lex_state = 63},
  [280] = {.lex_state = 63},
  [281] = {.lex_state = 67},
  [282] = {.lex_state = 66},
  [283] = {.lex_state = 54},
  [284] = {.lex_state = 66},
  [285] = {.lex_state = 63},
  [286] = {.lex_state = 66},
  [287] = {.lex_state = 66},
  [288] = {.lex_state = 66},
  [289] = {.lex_state = 63},
  [290] = {.lex_state = 89},
  [291] = {.lex_state = 66},
  [292] = {.lex_state = 63},
  [293] = {.lex_state = 66},
  [294] = {.lex_state = 62},
  [295] = {.lex_state = 68},
  [296] = {.lex_state = 63},
  [297] = {.lex_state = 63},
  [298] = {.lex_state = 63},
  [299] = {.lex_state = 62},
  [300] = {.lex_state = 62},
  [301] = {.lex_state = 60},
  [302] = {.lex_state = 68},
  [303] = {.lex_state = 68},
  [304] = {.lex_state = 68},
  [305] = {.lex_state = 62},
  [306] = {.lex_state = 62},
  [307] = {.lex_state = 68},
  [308] = {.lex_state = 62},
  [309] = {.lex_state = 63},
  [310] = {.lex_state = 60},
  [311] = {.lex_state = 62},
  [312] = {.lex_state = 62},
  [313] = {.lex_state = 48},
  [314] = {.lex_state = 62},
  [315] = {.lex_state = 68},
  [316] = {.lex_state = 63},
  [317] = {.lex_state = 54},
  [318] = {.lex_state = 62},
  [319] = {.lex_state = 715},
  [320] = {.lex_state = 48},
  [321] = {.lex_state = 63},
  [322] = {.lex_state = 68},
  [323] = {.lex_state = 715},
  [324] = {.lex_state = 61},
  [325] = {.lex_state = 62},
  [326] = {.lex_state = 68},
  [327] = {.lex_state = 63},
  [328] = {.lex_state = 715},
  [329] = {.lex_state = 62},
  [330] = {.lex_state = 62},
  [331] = {.lex_state = 60},
  [332] = {.lex_state = 61},
  [333] = {.lex_state = 61},
  [334] = {.lex_state = 68},
  [335] = {.lex_state = 715},
  [336] = {.lex_state = 68},
  [337] = {.lex_state = 60},
  [338] = {.lex_state = 63},
  [339] = {.lex_state = 715},
  [340] = {.lex_state = 62},
  [341] = {.lex_state = 715},
  [342] = {.lex_state = 62},
  [343] = {.lex_state = 715},
  [344] = {.lex_state = 62},
  [345] = {.lex_state = 62},
  [346] = {.lex_state = 61},
  [347] = {.lex_state = 63},
  [348] = {.lex_state = 45},
  [349] = {.lex_state = 63},
  [350] = {.lex_state = 715},
  [351] = {.lex_state = 715},
  [352] = {.lex_state = 715},
  [353] = {.lex_state = 63},
  [354] = {.lex_state = 715},
  [355] = {.lex_state = 715},
  [356] = {.lex_state = 63},
  [357] = {.lex_state = 61},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 61},
  [361] = {.lex_state = 45},
  [362] = {.lex_state = 45},
  [363] = {.lex_state = 45},
  [364] = {.lex_state = 715},
  [365] = {.lex_state = 45},
  [366] = {.lex_state = 66},
  [367] = {.lex_state = 45},
  [368] = {.lex_state = 45},
  [369] = {.lex_state = 45},
  [370] = {.lex_state = 63},
  [371] = {.lex_state = 61},
  [372] = {.lex_state = 715},
  [373] = {.lex_state = 715},
  [374] = {.lex_state = 45},
  [375] = {.lex_state = 61},
  [376] = {.lex_state = 45},
  [377] = {.lex_state = 45},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 715},
  [380] = {.lex_state = 45},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 61},
  [383] = {.lex_state = 49},
  [384] = {.lex_state = 309},
  [385] = {.lex_state = 49},
  [386] = {.lex_state = 49},
  [387] = {.lex_state = 49},
  [388] = {.lex_state = 61},
  [389] = {.lex_state = 61},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 49},
  [393] = {.lex_state = 49},
  [394] = {.lex_state = 61},
  [395] = {.lex_state = 49},
  [396] = {.lex_state = 49},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 65},
  [399] = {.lex_state = 65},
  [400] = {.lex_state = 65},
  [401] = {.lex_state = 61},
  [402] = {.lex_state = 65},
  [403] = {.lex_state = 65},
  [404] = {.lex_state = 65},
  [405] = {.lex_state = 61},
  [406] = {.lex_state = 65},
  [407] = {.lex_state = 65},
  [408] = {.lex_state = 681},
  [409] = {.lex_state = 65},
  [410] = {.lex_state = 65},
  [411] = {.lex_state = 65},
  [412] = {.lex_state = 681},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 681},
  [415] = {.lex_state = 65},
  [416] = {.lex_state = 65},
  [417] = {.lex_state = 65},
  [418] = {.lex_state = 65},
  [419] = {.lex_state = 65},
  [420] = {.lex_state = 65},
  [421] = {.lex_state = 65},
  [422] = {.lex_state = 65},
  [423] = {.lex_state = 65},
  [424] = {.lex_state = 65},
  [425] = {.lex_state = 65},
  [426] = {.lex_state = 681},
  [427] = {.lex_state = 681},
  [428] = {.lex_state = 65},
  [429] = {.lex_state = 65},
  [430] = {.lex_state = 65},
  [431] = {.lex_state = 65},
  [432] = {.lex_state = 65},
  [433] = {.lex_state = 65},
  [434] = {.lex_state = 681},
  [435] = {.lex_state = 54},
  [436] = {.lex_state = 681},
  [437] = {.lex_state = 65},
  [438] = {.lex_state = 65},
  [439] = {.lex_state = 65},
  [440] = {.lex_state = 681},
  [441] = {.lex_state = 65},
  [442] = {.lex_state = 683},
  [443] = {.lex_state = 65},
  [444] = {.lex_state = 65},
  [445] = {.lex_state = 65},
  [446] = {.lex_state = 65},
  [447] = {.lex_state = 65},
  [448] = {.lex_state = 65},
  [449] = {.lex_state = 65},
  [450] = {.lex_state = 65},
  [451] = {.lex_state = 65},
  [452] = {.lex_state = 65},
  [453] = {.lex_state = 681},
  [454] = {.lex_state = 65},
  [455] = {.lex_state = 681},
  [456] = {.lex_state = 681},
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
  [469] = {.lex_state = 65},
  [470] = {.lex_state = 61},
  [471] = {.lex_state = 65},
  [472] = {.lex_state = 65},
  [473] = {.lex_state = 65},
  [474] = {.lex_state = 65},
  [475] = {.lex_state = 65},
  [476] = {.lex_state = 65},
  [477] = {.lex_state = 65},
  [478] = {.lex_state = 65},
  [479] = {.lex_state = 65},
  [480] = {.lex_state = 681},
  [481] = {.lex_state = 65},
  [482] = {.lex_state = 65},
  [483] = {.lex_state = 65},
  [484] = {.lex_state = 65},
  [485] = {.lex_state = 65},
  [486] = {.lex_state = 65},
  [487] = {.lex_state = 65},
  [488] = {.lex_state = 65},
  [489] = {.lex_state = 65},
  [490] = {.lex_state = 681},
  [491] = {.lex_state = 54},
  [492] = {.lex_state = 65},
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
  [503] = {.lex_state = 65},
  [504] = {.lex_state = 65},
  [505] = {.lex_state = 65},
  [506] = {.lex_state = 65},
  [507] = {.lex_state = 65},
  [508] = {.lex_state = 65},
  [509] = {.lex_state = 65},
  [510] = {.lex_state = 65},
  [511] = {.lex_state = 696},
  [512] = {.lex_state = 690},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 62},
  [516] = {.lex_state = 62},
  [517] = {.lex_state = 54},
  [518] = {.lex_state = 696},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 692},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 62},
  [530] = {.lex_state = 696},
  [531] = {.lex_state = 62},
  [532] = {.lex_state = 733},
  [533] = {.lex_state = 733},
  [534] = {.lex_state = 62},
  [535] = {.lex_state = 690},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 715},
  [538] = {.lex_state = 54},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 62},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 697},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 62},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 41},
  [558] = {.lex_state = 715},
  [559] = {.lex_state = 62},
  [560] = {.lex_state = 62},
  [561] = {.lex_state = 65},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 0},
  [564] = {.lex_state = 690},
  [565] = {.lex_state = 684},
  [566] = {.lex_state = 684},
  [567] = {.lex_state = 62},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 62},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 62},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 62},
  [575] = {.lex_state = 733},
  [576] = {.lex_state = 53},
  [577] = {.lex_state = 733},
  [578] = {.lex_state = 686},
  [579] = {.lex_state = 65},
  [580] = {.lex_state = 62},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 62},
  [583] = {.lex_state = 733},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 39},
  [586] = {.lex_state = 40},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 690},
  [589] = {.lex_state = 62},
  [590] = {.lex_state = 690},
  [591] = {.lex_state = 690},
  [592] = {.lex_state = 715},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 733},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 62},
  [597] = {.lex_state = 684},
  [598] = {.lex_state = 62},
  [599] = {.lex_state = 41},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 39},
  [602] = {.lex_state = 40},
  [603] = {.lex_state = 684},
  [604] = {.lex_state = 39},
  [605] = {.lex_state = 40},
  [606] = {.lex_state = 39},
  [607] = {.lex_state = 40},
  [608] = {.lex_state = 39},
  [609] = {.lex_state = 40},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 62},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 62},
  [615] = {.lex_state = 62},
  [616] = {.lex_state = 54},
  [617] = {.lex_state = 62},
  [618] = {.lex_state = 62},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 690},
  [622] = {.lex_state = 62},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 62},
  [625] = {.lex_state = 62},
  [626] = {.lex_state = 62},
  [627] = {.lex_state = 62},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 0},
  [630] = {.lex_state = 690},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 62},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 62},
  [635] = {.lex_state = 62},
  [636] = {.lex_state = 62},
  [637] = {.lex_state = 39},
  [638] = {.lex_state = 62},
  [639] = {.lex_state = 0},
  [640] = {.lex_state = 0},
  [641] = {.lex_state = 40},
  [642] = {.lex_state = 0},
  [643] = {.lex_state = 690},
  [644] = {.lex_state = 685},
  [645] = {.lex_state = 685},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 62},
  [648] = {.lex_state = 54},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
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
    [sym_document] = STATE(613),
    [sym_site_block] = STATE(80),
    [sym_site_address] = STATE(612),
    [sym_protocol] = STATE(267),
    [sym__ip_or_domain_address] = STATE(594),
    [sym__port_number] = STATE(593),
    [sym_directive_import] = STATE(80),
    [sym_global_options_block] = STATE(80),
    [sym_snippet] = STATE(80),
    [aux_sym_document_repeat1] = STATE(80),
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
  [0] = 22,
    ACTIONS(23), 1,
      sym__empty_line,
    ACTIONS(26), 1,
      sym_comment_line,
    ACTIONS(29), 1,
      sym_matcher_name,
    ACTIONS(32), 1,
      anon_sym_abort,
    ACTIONS(35), 1,
      anon_sym_basicauth,
    ACTIONS(38), 1,
      anon_sym_bind,
    ACTIONS(41), 1,
      anon_sym_encode,
    ACTIONS(44), 1,
      anon_sym_file_server,
    ACTIONS(47), 1,
      anon_sym_error,
    ACTIONS(50), 1,
      anon_sym_handle,
    ACTIONS(53), 1,
      anon_sym_handle_path,
    ACTIONS(56), 1,
      anon_sym_header,
    ACTIONS(59), 1,
      anon_sym_import,
    ACTIONS(62), 1,
      anon_sym_log,
    ACTIONS(65), 1,
      anon_sym_redir,
    ACTIONS(68), 1,
      anon_sym_request_body,
    ACTIONS(71), 1,
      anon_sym_reverse_proxy,
    ACTIONS(74), 1,
      anon_sym_root,
    ACTIONS(77), 1,
      anon_sym_tls,
    ACTIONS(21), 2,
      sym__vertical_whitespaces,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(107), 16,
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
  [85] = 23,
    ACTIONS(80), 1,
      sym__vertical_whitespaces,
    ACTIONS(82), 1,
      sym__empty_line,
    ACTIONS(84), 1,
      sym_comment_line,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_matcher_name,
    ACTIONS(90), 1,
      anon_sym_abort,
    ACTIONS(92), 1,
      anon_sym_basicauth,
    ACTIONS(94), 1,
      anon_sym_bind,
    ACTIONS(96), 1,
      anon_sym_encode,
    ACTIONS(98), 1,
      anon_sym_file_server,
    ACTIONS(100), 1,
      anon_sym_error,
    ACTIONS(102), 1,
      anon_sym_handle,
    ACTIONS(104), 1,
      anon_sym_handle_path,
    ACTIONS(106), 1,
      anon_sym_header,
    ACTIONS(108), 1,
      anon_sym_import,
    ACTIONS(110), 1,
      anon_sym_log,
    ACTIONS(112), 1,
      anon_sym_redir,
    ACTIONS(114), 1,
      anon_sym_request_body,
    ACTIONS(116), 1,
      anon_sym_reverse_proxy,
    ACTIONS(118), 1,
      anon_sym_root,
    ACTIONS(120), 1,
      anon_sym_tls,
    STATE(2), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(107), 16,
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
  [172] = 23,
    ACTIONS(88), 1,
      sym_matcher_name,
    ACTIONS(90), 1,
      anon_sym_abort,
    ACTIONS(92), 1,
      anon_sym_basicauth,
    ACTIONS(94), 1,
      anon_sym_bind,
    ACTIONS(96), 1,
      anon_sym_encode,
    ACTIONS(98), 1,
      anon_sym_file_server,
    ACTIONS(100), 1,
      anon_sym_error,
    ACTIONS(102), 1,
      anon_sym_handle,
    ACTIONS(104), 1,
      anon_sym_handle_path,
    ACTIONS(106), 1,
      anon_sym_header,
    ACTIONS(108), 1,
      anon_sym_import,
    ACTIONS(110), 1,
      anon_sym_log,
    ACTIONS(112), 1,
      anon_sym_redir,
    ACTIONS(114), 1,
      anon_sym_request_body,
    ACTIONS(116), 1,
      anon_sym_reverse_proxy,
    ACTIONS(118), 1,
      anon_sym_root,
    ACTIONS(120), 1,
      anon_sym_tls,
    ACTIONS(122), 1,
      sym__vertical_whitespaces,
    ACTIONS(124), 1,
      sym__empty_line,
    ACTIONS(126), 1,
      sym_comment_line,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(3), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(107), 16,
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
  [259] = 21,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    ACTIONS(134), 1,
      sym_matcher_name,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(158), 1,
      anon_sym_redir,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(130), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(7), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(156), 16,
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
  [341] = 21,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym_matcher_name,
    ACTIONS(174), 1,
      anon_sym_abort,
    ACTIONS(177), 1,
      anon_sym_basicauth,
    ACTIONS(180), 1,
      anon_sym_bind,
    ACTIONS(183), 1,
      anon_sym_encode,
    ACTIONS(186), 1,
      anon_sym_file_server,
    ACTIONS(189), 1,
      anon_sym_error,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(195), 1,
      anon_sym_handle_path,
    ACTIONS(198), 1,
      anon_sym_header,
    ACTIONS(201), 1,
      anon_sym_import,
    ACTIONS(204), 1,
      anon_sym_log,
    ACTIONS(207), 1,
      anon_sym_redir,
    ACTIONS(210), 1,
      anon_sym_request_body,
    ACTIONS(213), 1,
      anon_sym_reverse_proxy,
    ACTIONS(216), 1,
      anon_sym_root,
    ACTIONS(219), 1,
      anon_sym_tls,
    ACTIONS(168), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(156), 16,
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
  [423] = 21,
    ACTIONS(134), 1,
      sym_matcher_name,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(158), 1,
      anon_sym_redir,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(222), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(156), 16,
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
  [505] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [583] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [661] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [739] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [817] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [895] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [973] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1051] = 20,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1129] = 20,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_abort,
    ACTIONS(254), 1,
      anon_sym_basicauth,
    ACTIONS(257), 1,
      anon_sym_bind,
    ACTIONS(260), 1,
      anon_sym_encode,
    ACTIONS(263), 1,
      anon_sym_file_server,
    ACTIONS(266), 1,
      anon_sym_error,
    ACTIONS(269), 1,
      anon_sym_handle,
    ACTIONS(272), 1,
      anon_sym_handle_path,
    ACTIONS(275), 1,
      anon_sym_header,
    ACTIONS(278), 1,
      anon_sym_import,
    ACTIONS(281), 1,
      anon_sym_log,
    ACTIONS(284), 1,
      anon_sym_redir,
    ACTIONS(287), 1,
      anon_sym_request_body,
    ACTIONS(290), 1,
      anon_sym_reverse_proxy,
    ACTIONS(293), 1,
      anon_sym_root,
    ACTIONS(296), 1,
      anon_sym_tls,
    ACTIONS(246), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1207] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(299), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1282] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(301), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1357] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(303), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(11), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1432] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(305), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(15), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1507] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(307), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(9), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1582] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(309), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(13), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1657] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(311), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(14), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1732] = 19,
    ACTIONS(136), 1,
      anon_sym_abort,
    ACTIONS(138), 1,
      anon_sym_basicauth,
    ACTIONS(140), 1,
      anon_sym_bind,
    ACTIONS(142), 1,
      anon_sym_encode,
    ACTIONS(144), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_error,
    ACTIONS(148), 1,
      anon_sym_handle,
    ACTIONS(150), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(154), 1,
      anon_sym_import,
    ACTIONS(156), 1,
      anon_sym_log,
    ACTIONS(160), 1,
      anon_sym_request_body,
    ACTIONS(162), 1,
      anon_sym_reverse_proxy,
    ACTIONS(164), 1,
      anon_sym_root,
    ACTIONS(166), 1,
      anon_sym_tls,
    ACTIONS(230), 1,
      anon_sym_redir,
    ACTIONS(313), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(10), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(156), 16,
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
  [1807] = 11,
    ACTIONS(319), 1,
      sym__ipv4_address,
    ACTIONS(322), 1,
      sym__ipv6_address,
    ACTIONS(328), 1,
      anon_sym_unix,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      aux_sym_unix_path_token2,
    STATE(29), 1,
      sym_unix_path,
    STATE(568), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(325), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(315), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(317), 17,
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
  [1863] = 11,
    ACTIONS(341), 1,
      sym__ipv4_address,
    ACTIONS(343), 1,
      sym__ipv6_address,
    ACTIONS(347), 1,
      anon_sym_unix,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_unix_path_token2,
    STATE(29), 1,
      sym_unix_path,
    STATE(568), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(345), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(337), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(339), 17,
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
  [1919] = 11,
    ACTIONS(328), 1,
      anon_sym_unix,
    ACTIONS(353), 1,
      sym__ipv4_address,
    ACTIONS(356), 1,
      sym__ipv6_address,
    ACTIONS(359), 1,
      anon_sym_DQUOTE,
    ACTIONS(362), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(562), 1,
      sym__network,
    STATE(27), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(325), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(315), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(317), 16,
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
  [1974] = 11,
    ACTIONS(347), 1,
      anon_sym_unix,
    ACTIONS(365), 1,
      sym__ipv4_address,
    ACTIONS(367), 1,
      sym__ipv6_address,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(562), 1,
      sym__network,
    STATE(27), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(345), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(337), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(339), 16,
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
  [2029] = 2,
    ACTIONS(373), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(375), 23,
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
  [2063] = 2,
    ACTIONS(377), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(379), 23,
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
  [2097] = 2,
    ACTIONS(381), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(383), 23,
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
  [2131] = 2,
    ACTIONS(385), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(387), 23,
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
  [2165] = 2,
    ACTIONS(381), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(383), 22,
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
  [2198] = 2,
    ACTIONS(385), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(387), 22,
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
  [2231] = 2,
    ACTIONS(373), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(375), 22,
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
  [2264] = 2,
    ACTIONS(377), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(379), 22,
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
  [2297] = 3,
    ACTIONS(393), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(389), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(391), 23,
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
  [2331] = 4,
    STATE(98), 1,
      sym_redir_code,
    ACTIONS(397), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(399), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(395), 19,
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
  [2367] = 3,
    ACTIONS(405), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(401), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(403), 23,
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
  [2401] = 4,
    STATE(127), 1,
      sym_redir_code,
    ACTIONS(409), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(399), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(407), 19,
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
  [2437] = 2,
    ACTIONS(391), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(389), 24,
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
  [2468] = 3,
    ACTIONS(411), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(389), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(391), 22,
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
  [2501] = 2,
    ACTIONS(415), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(413), 24,
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
  [2532] = 4,
    ACTIONS(397), 1,
      anon_sym_handle,
    STATE(192), 1,
      sym_redir_code,
    ACTIONS(417), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(395), 19,
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
  [2567] = 3,
    ACTIONS(419), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(401), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(403), 22,
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
  [2600] = 6,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym_unix_path_token2,
    STATE(444), 1,
      sym_unix_path,
    ACTIONS(429), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(421), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(423), 18,
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
  [2639] = 4,
    ACTIONS(409), 1,
      anon_sym_handle,
    STATE(163), 1,
      sym_redir_code,
    ACTIONS(417), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(407), 19,
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
  [2674] = 2,
    ACTIONS(433), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(431), 24,
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
  [2705] = 2,
    ACTIONS(415), 1,
      anon_sym_handle,
    ACTIONS(413), 24,
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
  [2735] = 4,
    ACTIONS(437), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(439), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(50), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(435), 19,
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
  [2769] = 2,
    ACTIONS(391), 1,
      anon_sym_handle,
    ACTIONS(389), 24,
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
  [2799] = 4,
    ACTIONS(444), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(446), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(50), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(442), 19,
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
  [2833] = 2,
    ACTIONS(433), 1,
      anon_sym_handle,
    ACTIONS(431), 24,
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
  [2863] = 3,
    ACTIONS(411), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(389), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(391), 21,
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
  [2895] = 4,
    ACTIONS(446), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(450), 2,
      sym__empty_line,
      anon_sym_handle,
    STATE(50), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(448), 19,
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
  [2929] = 3,
    ACTIONS(419), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(401), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(403), 21,
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
  [2961] = 6,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      aux_sym_unix_path_token2,
    STATE(485), 1,
      sym_unix_path,
    ACTIONS(452), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(421), 3,
      sym__empty_line,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(423), 17,
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
  [2999] = 4,
    ACTIONS(454), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(62), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
    ACTIONS(456), 21,
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
  [3032] = 5,
    ACTIONS(427), 1,
      aux_sym_unix_path_token2,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym_unix_path,
    ACTIONS(458), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(460), 17,
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
  [3067] = 4,
    ACTIONS(437), 1,
      anon_sym_handle,
    ACTIONS(464), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(60), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(435), 19,
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
  [3100] = 4,
    ACTIONS(444), 1,
      anon_sym_handle,
    ACTIONS(467), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(60), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(442), 19,
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
  [3133] = 4,
    ACTIONS(469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(62), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
    ACTIONS(472), 21,
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
  [3166] = 4,
    ACTIONS(454), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(65), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
    ACTIONS(474), 21,
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
  [3199] = 4,
    ACTIONS(450), 1,
      anon_sym_handle,
    ACTIONS(467), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(60), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(448), 19,
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
  [3232] = 4,
    ACTIONS(454), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(62), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
    ACTIONS(476), 21,
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
  [3265] = 4,
    ACTIONS(454), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(58), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(226), 1,
      sym__horizontal_whitespaces,
    ACTIONS(478), 21,
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
  [3298] = 5,
    ACTIONS(427), 1,
      aux_sym_unix_path_token2,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    STATE(500), 1,
      sym_unix_path,
    ACTIONS(458), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(460), 16,
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
  [3332] = 4,
    ACTIONS(480), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(68), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
    ACTIONS(472), 20,
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
  [3364] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(68), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
    ACTIONS(476), 20,
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
  [3396] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(68), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
    ACTIONS(456), 20,
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
  [3428] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(69), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
    ACTIONS(474), 20,
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
  [3460] = 4,
    ACTIONS(483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(70), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
    ACTIONS(478), 20,
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
  [3492] = 3,
    ACTIONS(485), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(380), 1,
      sym__horizontal_whitespaces,
    ACTIONS(487), 21,
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
  [3522] = 2,
    ACTIONS(491), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(489), 21,
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
  [3550] = 14,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    ACTIONS(510), 1,
      anon_sym_COLON,
    ACTIONS(513), 1,
      anon_sym_import,
    ACTIONS(516), 1,
      sym_snippet_name,
    STATE(267), 1,
      sym_protocol,
    STATE(593), 1,
      sym__port_number,
    STATE(594), 1,
      sym__ip_or_domain_address,
    STATE(612), 1,
      sym_site_address,
    ACTIONS(495), 2,
      sym__empty_line,
      sym_comment_line,
    ACTIONS(501), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(504), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(507), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(75), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [3601] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(521), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(519), 19,
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
  [3630] = 3,
    ACTIONS(525), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(367), 1,
      sym__horizontal_whitespaces,
    ACTIONS(487), 20,
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
  [3659] = 2,
    ACTIONS(491), 1,
      anon_sym_handle,
    ACTIONS(489), 21,
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
  [3686] = 2,
    ACTIONS(527), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(529), 21,
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
  [3713] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_snippet_name,
    ACTIONS(531), 1,
      ts_builtin_sym_end,
    STATE(267), 1,
      sym_protocol,
    STATE(593), 1,
      sym__port_number,
    STATE(594), 1,
      sym__ip_or_domain_address,
    STATE(612), 1,
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
    ACTIONS(533), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(75), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [3764] = 2,
    ACTIONS(535), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(472), 21,
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
  [3791] = 2,
    ACTIONS(537), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(539), 21,
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
  [3818] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(543), 21,
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
  [3845] = 2,
    ACTIONS(545), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(547), 21,
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
  [3872] = 2,
    ACTIONS(549), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(551), 21,
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
  [3899] = 2,
    ACTIONS(553), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(555), 21,
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
  [3926] = 2,
    ACTIONS(559), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(557), 19,
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
  [3952] = 2,
    ACTIONS(563), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(561), 19,
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
  [3978] = 3,
    ACTIONS(521), 1,
      anon_sym_handle,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
    ACTIONS(519), 19,
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
  [4006] = 2,
    ACTIONS(569), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(567), 19,
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
  [4032] = 2,
    ACTIONS(573), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(571), 19,
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
  [4058] = 2,
    ACTIONS(577), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(575), 19,
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
  [4084] = 2,
    ACTIONS(581), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(579), 19,
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
  [4110] = 2,
    ACTIONS(585), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(583), 19,
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
  [4136] = 2,
    ACTIONS(589), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(587), 19,
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
  [4162] = 2,
    ACTIONS(593), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(591), 19,
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
  [4188] = 2,
    ACTIONS(597), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(595), 19,
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
  [4214] = 2,
    ACTIONS(601), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(599), 19,
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
  [4240] = 2,
    ACTIONS(605), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(603), 19,
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
  [4266] = 2,
    ACTIONS(609), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(607), 19,
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
  [4292] = 2,
    ACTIONS(613), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(611), 19,
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
  [4318] = 2,
    ACTIONS(617), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(615), 19,
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
  [4344] = 2,
    ACTIONS(621), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(619), 19,
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
  [4370] = 2,
    ACTIONS(625), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(623), 19,
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
  [4396] = 2,
    ACTIONS(537), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(539), 20,
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
  [4422] = 2,
    ACTIONS(629), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(627), 19,
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
  [4448] = 2,
    ACTIONS(633), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(631), 19,
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
  [4474] = 2,
    ACTIONS(535), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(472), 20,
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
  [4500] = 2,
    ACTIONS(637), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(635), 19,
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
  [4526] = 2,
    ACTIONS(641), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(639), 19,
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
  [4552] = 2,
    ACTIONS(645), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(643), 19,
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
  [4578] = 2,
    ACTIONS(649), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(647), 19,
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
  [4604] = 2,
    ACTIONS(653), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(651), 19,
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
  [4630] = 2,
    ACTIONS(657), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(655), 19,
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
  [4656] = 2,
    ACTIONS(661), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(659), 19,
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
  [4682] = 2,
    ACTIONS(665), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(663), 19,
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
  [4708] = 2,
    ACTIONS(669), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(667), 19,
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
  [4734] = 2,
    ACTIONS(673), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(671), 19,
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
  [4760] = 2,
    ACTIONS(677), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(675), 19,
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
  [4786] = 2,
    ACTIONS(681), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(679), 19,
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
  [4812] = 2,
    ACTIONS(529), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(527), 19,
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
  [4838] = 2,
    ACTIONS(539), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(537), 19,
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
  [4864] = 2,
    ACTIONS(685), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(683), 19,
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
  [4890] = 2,
    ACTIONS(689), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(687), 19,
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
  [4916] = 2,
    ACTIONS(693), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(691), 19,
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
  [4942] = 2,
    ACTIONS(697), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(695), 19,
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
  [4968] = 2,
    ACTIONS(701), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(699), 19,
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
  [4994] = 2,
    ACTIONS(705), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(703), 19,
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
  [5020] = 2,
    ACTIONS(709), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(707), 19,
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
  [5046] = 2,
    ACTIONS(527), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(529), 20,
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
  [5072] = 2,
    ACTIONS(713), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(711), 19,
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
  [5098] = 2,
    ACTIONS(717), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(715), 19,
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
  [5124] = 2,
    ACTIONS(721), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(719), 19,
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
  [5150] = 2,
    ACTIONS(725), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(723), 19,
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
  [5176] = 2,
    ACTIONS(729), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(727), 19,
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
  [5202] = 2,
    ACTIONS(733), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(731), 19,
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
  [5228] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(543), 20,
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
  [5254] = 2,
    ACTIONS(737), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(735), 19,
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
  [5280] = 2,
    ACTIONS(553), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(555), 20,
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
  [5306] = 2,
    ACTIONS(549), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(551), 20,
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
  [5332] = 2,
    ACTIONS(741), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(739), 19,
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
  [5358] = 2,
    ACTIONS(745), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(743), 19,
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
  [5384] = 2,
    ACTIONS(545), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(547), 20,
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
  [5410] = 2,
    ACTIONS(749), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(747), 19,
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
  [5436] = 2,
    ACTIONS(753), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(751), 19,
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
  [5462] = 2,
    ACTIONS(745), 1,
      anon_sym_handle,
    ACTIONS(743), 19,
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
  [5487] = 2,
    ACTIONS(569), 1,
      anon_sym_handle,
    ACTIONS(567), 19,
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
  [5512] = 2,
    ACTIONS(669), 1,
      anon_sym_handle,
    ACTIONS(667), 19,
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
  [5537] = 2,
    ACTIONS(657), 1,
      anon_sym_handle,
    ACTIONS(655), 19,
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
  [5562] = 2,
    ACTIONS(733), 1,
      anon_sym_handle,
    ACTIONS(731), 19,
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
  [5587] = 2,
    ACTIONS(641), 1,
      anon_sym_handle,
    ACTIONS(639), 19,
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
  [5612] = 2,
    ACTIONS(563), 1,
      anon_sym_handle,
    ACTIONS(561), 19,
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
  [5637] = 2,
    ACTIONS(725), 1,
      anon_sym_handle,
    ACTIONS(723), 19,
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
  [5662] = 2,
    ACTIONS(637), 1,
      anon_sym_handle,
    ACTIONS(635), 19,
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
  [5687] = 2,
    ACTIONS(693), 1,
      anon_sym_handle,
    ACTIONS(691), 19,
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
  [5712] = 2,
    ACTIONS(633), 1,
      anon_sym_handle,
    ACTIONS(631), 19,
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
  [5737] = 2,
    ACTIONS(665), 1,
      anon_sym_handle,
    ACTIONS(663), 19,
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
  [5762] = 2,
    ACTIONS(585), 1,
      anon_sym_handle,
    ACTIONS(583), 19,
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
  [5787] = 2,
    ACTIONS(629), 1,
      anon_sym_handle,
    ACTIONS(627), 19,
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
  [5812] = 2,
    ACTIONS(713), 1,
      anon_sym_handle,
    ACTIONS(711), 19,
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
  [5837] = 2,
    ACTIONS(705), 1,
      anon_sym_handle,
    ACTIONS(703), 19,
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
  [5862] = 2,
    ACTIONS(617), 1,
      anon_sym_handle,
    ACTIONS(615), 19,
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
  [5887] = 2,
    ACTIONS(701), 1,
      anon_sym_handle,
    ACTIONS(699), 19,
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
  [5912] = 2,
    ACTIONS(645), 1,
      anon_sym_handle,
    ACTIONS(643), 19,
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
  [5937] = 2,
    ACTIONS(753), 1,
      anon_sym_handle,
    ACTIONS(751), 19,
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
  [5962] = 2,
    ACTIONS(529), 1,
      anon_sym_handle,
    ACTIONS(527), 19,
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
  [5987] = 2,
    ACTIONS(653), 1,
      anon_sym_handle,
    ACTIONS(651), 19,
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
  [6012] = 2,
    ACTIONS(717), 1,
      anon_sym_handle,
    ACTIONS(715), 19,
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
  [6037] = 2,
    ACTIONS(729), 1,
      anon_sym_handle,
    ACTIONS(727), 19,
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
  [6062] = 2,
    ACTIONS(741), 1,
      anon_sym_handle,
    ACTIONS(739), 19,
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
  [6087] = 2,
    ACTIONS(625), 1,
      anon_sym_handle,
    ACTIONS(623), 19,
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
  [6112] = 2,
    ACTIONS(749), 1,
      anon_sym_handle,
    ACTIONS(747), 19,
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
  [6137] = 2,
    ACTIONS(697), 1,
      anon_sym_handle,
    ACTIONS(695), 19,
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
  [6162] = 2,
    ACTIONS(689), 1,
      anon_sym_handle,
    ACTIONS(687), 19,
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
  [6187] = 2,
    ACTIONS(677), 1,
      anon_sym_handle,
    ACTIONS(675), 19,
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
  [6212] = 2,
    ACTIONS(539), 1,
      anon_sym_handle,
    ACTIONS(537), 19,
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
  [6237] = 2,
    ACTIONS(621), 1,
      anon_sym_handle,
    ACTIONS(619), 19,
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
  [6262] = 2,
    ACTIONS(661), 1,
      anon_sym_handle,
    ACTIONS(659), 19,
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
  [6287] = 2,
    ACTIONS(649), 1,
      anon_sym_handle,
    ACTIONS(647), 19,
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
  [6312] = 2,
    ACTIONS(709), 1,
      anon_sym_handle,
    ACTIONS(707), 19,
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
  [6337] = 2,
    ACTIONS(593), 1,
      anon_sym_handle,
    ACTIONS(591), 19,
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
  [6362] = 2,
    ACTIONS(613), 1,
      anon_sym_handle,
    ACTIONS(611), 19,
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
  [6387] = 2,
    ACTIONS(737), 1,
      anon_sym_handle,
    ACTIONS(735), 19,
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
  [6412] = 2,
    ACTIONS(573), 1,
      anon_sym_handle,
    ACTIONS(571), 19,
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
  [6437] = 2,
    ACTIONS(609), 1,
      anon_sym_handle,
    ACTIONS(607), 19,
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
  [6462] = 2,
    ACTIONS(559), 1,
      anon_sym_handle,
    ACTIONS(557), 19,
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
  [6487] = 2,
    ACTIONS(721), 1,
      anon_sym_handle,
    ACTIONS(719), 19,
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
  [6512] = 2,
    ACTIONS(673), 1,
      anon_sym_handle,
    ACTIONS(671), 19,
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
  [6537] = 2,
    ACTIONS(577), 1,
      anon_sym_handle,
    ACTIONS(575), 19,
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
  [6562] = 2,
    ACTIONS(681), 1,
      anon_sym_handle,
    ACTIONS(679), 19,
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
  [6587] = 2,
    ACTIONS(605), 1,
      anon_sym_handle,
    ACTIONS(603), 19,
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
  [6612] = 2,
    ACTIONS(601), 1,
      anon_sym_handle,
    ACTIONS(599), 19,
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
  [6637] = 2,
    ACTIONS(581), 1,
      anon_sym_handle,
    ACTIONS(579), 19,
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
  [6662] = 2,
    ACTIONS(589), 1,
      anon_sym_handle,
    ACTIONS(587), 19,
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
  [6687] = 2,
    ACTIONS(685), 1,
      anon_sym_handle,
    ACTIONS(683), 19,
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
  [6712] = 2,
    ACTIONS(597), 1,
      anon_sym_handle,
    ACTIONS(595), 19,
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
  [6737] = 10,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(755), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(757), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(201), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6774] = 10,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(755), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(757), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(201), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6811] = 10,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(755), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(757), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(201), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6848] = 10,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(755), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(757), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(201), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6885] = 10,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(786), 1,
      anon_sym_PLUS,
    ACTIONS(789), 1,
      anon_sym_DASH,
    ACTIONS(792), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(775), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(778), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(201), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6922] = 11,
    ACTIONS(799), 1,
      anon_sym_COLON,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    STATE(66), 1,
      sym_site_address,
    STATE(84), 1,
      sym__port_number,
    STATE(265), 1,
      sym_protocol,
    STATE(446), 1,
      sym_matcher_token,
    STATE(577), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(795), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(797), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [6960] = 11,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    ACTIONS(807), 1,
      anon_sym_PLUS,
    ACTIONS(809), 1,
      anon_sym_DASH,
    ACTIONS(811), 1,
      anon_sym_QMARK,
    STATE(155), 1,
      sym_field_manipulator,
    STATE(464), 1,
      sym_matcher_token,
    STATE(465), 1,
      sym_header_name,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(173), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6998] = 11,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(72), 1,
      sym_site_address,
    STATE(143), 1,
      sym__port_number,
    STATE(269), 1,
      sym_protocol,
    STATE(463), 1,
      sym_matcher_token,
    STATE(532), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(813), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(815), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7036] = 11,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(819), 1,
      anon_sym_LBRACE,
    ACTIONS(821), 1,
      anon_sym_PLUS,
    ACTIONS(823), 1,
      anon_sym_DASH,
    ACTIONS(825), 1,
      anon_sym_QMARK,
    STATE(125), 1,
      sym_field_manipulator,
    STATE(450), 1,
      sym_matcher_token,
    STATE(451), 1,
      sym_header_name,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(126), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7074] = 9,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(827), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(829), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(200), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7108] = 9,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(831), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(833), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(198), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7142] = 9,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(835), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(837), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(199), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7176] = 9,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(763), 1,
      anon_sym_PLUS,
    ACTIONS(765), 1,
      anon_sym_DASH,
    ACTIONS(767), 1,
      anon_sym_QMARK,
    STATE(441), 1,
      sym_header_name,
    ACTIONS(839), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(841), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(197), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(254), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7210] = 2,
    ACTIONS(617), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(615), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7228] = 2,
    ACTIONS(845), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(843), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7246] = 2,
    ACTIONS(849), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(847), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7264] = 2,
    ACTIONS(853), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(851), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7282] = 2,
    ACTIONS(857), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(855), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7300] = 2,
    ACTIONS(861), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(859), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7318] = 2,
    ACTIONS(865), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(863), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7336] = 2,
    ACTIONS(869), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(867), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7354] = 9,
    ACTIONS(347), 1,
      anon_sym_unix,
    ACTIONS(365), 1,
      sym__ipv4_address,
    ACTIONS(367), 1,
      sym__ipv6_address,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(562), 1,
      sym__network,
    STATE(28), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(345), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [7385] = 9,
    ACTIONS(341), 1,
      sym__ipv4_address,
    ACTIONS(343), 1,
      sym__ipv6_address,
    ACTIONS(347), 1,
      anon_sym_unix,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_unix_path_token2,
    STATE(29), 1,
      sym_unix_path,
    STATE(568), 1,
      sym__network,
    STATE(26), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(345), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [7416] = 8,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(821), 1,
      anon_sym_PLUS,
    ACTIONS(823), 1,
      anon_sym_DASH,
    ACTIONS(825), 1,
      anon_sym_QMARK,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_field_manipulator,
    STATE(451), 1,
      sym_header_name,
    STATE(126), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7444] = 8,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(71), 1,
      sym_site_address,
    STATE(143), 1,
      sym__port_number,
    STATE(269), 1,
      sym_protocol,
    STATE(532), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(813), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(815), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7472] = 8,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_site_address,
    STATE(143), 1,
      sym__port_number,
    STATE(269), 1,
      sym_protocol,
    STATE(532), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(813), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(815), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7500] = 8,
    ACTIONS(873), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(881), 1,
      anon_sym_path_regexp,
    STATE(248), 1,
      sym__horizontal_whitespaces,
    ACTIONS(875), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(245), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7528] = 8,
    ACTIONS(799), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_site_address,
    STATE(84), 1,
      sym__port_number,
    STATE(265), 1,
      sym_protocol,
    STATE(577), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(795), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(797), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7556] = 8,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(881), 1,
      anon_sym_path_regexp,
    ACTIONS(883), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(887), 1,
      anon_sym_RBRACE,
    STATE(255), 1,
      sym__horizontal_whitespaces,
    ACTIONS(885), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(253), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7584] = 8,
    ACTIONS(799), 1,
      anon_sym_COLON,
    STATE(81), 1,
      sym_site_address,
    STATE(84), 1,
      sym__port_number,
    STATE(265), 1,
      sym_protocol,
    STATE(577), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(795), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(797), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7612] = 8,
    ACTIONS(761), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(807), 1,
      anon_sym_PLUS,
    ACTIONS(809), 1,
      anon_sym_DASH,
    ACTIONS(811), 1,
      anon_sym_QMARK,
    ACTIONS(889), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_field_manipulator,
    STATE(465), 1,
      sym_header_name,
    STATE(173), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7640] = 3,
    ACTIONS(891), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(361), 1,
      sym__horizontal_whitespaces,
    ACTIONS(487), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7658] = 6,
    ACTIONS(896), 1,
      anon_sym_RBRACE,
    ACTIONS(898), 1,
      anon_sym_output,
    ACTIONS(901), 1,
      anon_sym_format,
    ACTIONS(904), 1,
      anon_sym_level,
    ACTIONS(893), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(229), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7681] = 8,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(907), 1,
      sym_domain_address,
    ACTIONS(911), 1,
      sym_uri_path_with_placeholders,
    STATE(47), 1,
      sym_redir_or_rewrite_target,
    STATE(489), 1,
      sym_matcher_token,
    STATE(537), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(909), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7708] = 8,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(913), 1,
      sym_domain_address,
    ACTIONS(915), 1,
      sym_uri_path_with_placeholders,
    STATE(40), 1,
      sym_redir_or_rewrite_target,
    STATE(404), 1,
      sym_matcher_token,
    STATE(592), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(909), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7735] = 6,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
    ACTIONS(922), 1,
      anon_sym_roll_size,
    ACTIONS(925), 1,
      anon_sym_roll_keep,
    ACTIONS(928), 1,
      anon_sym_roll_keep_for_days,
    STATE(232), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(917), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7758] = 8,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(911), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(931), 1,
      sym_domain_address,
    STATE(47), 1,
      sym_redir_or_rewrite_target,
    STATE(483), 1,
      sym_matcher_token,
    STATE(558), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(909), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7785] = 6,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 1,
      anon_sym_roll_size,
    ACTIONS(939), 1,
      anon_sym_roll_keep,
    ACTIONS(941), 1,
      anon_sym_roll_keep_for_days,
    STATE(240), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(933), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7808] = 6,
    ACTIONS(945), 1,
      anon_sym_RBRACE,
    ACTIONS(947), 1,
      anon_sym_output,
    ACTIONS(949), 1,
      anon_sym_format,
    ACTIONS(951), 1,
      anon_sym_level,
    ACTIONS(943), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(229), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7831] = 6,
    ACTIONS(947), 1,
      anon_sym_output,
    ACTIONS(949), 1,
      anon_sym_format,
    ACTIONS(951), 1,
      anon_sym_level,
    ACTIONS(955), 1,
      anon_sym_RBRACE,
    ACTIONS(953), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(235), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7854] = 2,
    ACTIONS(537), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(539), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7869] = 6,
    ACTIONS(947), 1,
      anon_sym_output,
    ACTIONS(949), 1,
      anon_sym_format,
    ACTIONS(951), 1,
      anon_sym_level,
    ACTIONS(957), 1,
      anon_sym_RBRACE,
    ACTIONS(943), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(229), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7892] = 6,
    ACTIONS(947), 1,
      anon_sym_output,
    ACTIONS(949), 1,
      anon_sym_format,
    ACTIONS(951), 1,
      anon_sym_level,
    ACTIONS(961), 1,
      anon_sym_RBRACE,
    ACTIONS(959), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(238), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7915] = 6,
    ACTIONS(937), 1,
      anon_sym_roll_size,
    ACTIONS(939), 1,
      anon_sym_roll_keep,
    ACTIONS(941), 1,
      anon_sym_roll_keep_for_days,
    ACTIONS(965), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(963), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7938] = 2,
    ACTIONS(527), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(529), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7953] = 2,
    ACTIONS(605), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(603), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7967] = 2,
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
  [7981] = 2,
    ACTIONS(529), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(527), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7995] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(967), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8017] = 2,
    ACTIONS(585), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(583), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8031] = 2,
    ACTIONS(559), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(557), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8045] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(969), 1,
      anon_sym_RBRACE,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(973), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8067] = 2,
    ACTIONS(539), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(537), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8081] = 6,
    ACTIONS(978), 1,
      anon_sym_RBRACE,
    ACTIONS(980), 1,
      anon_sym_path,
    ACTIONS(983), 1,
      anon_sym_path_regexp,
    ACTIONS(975), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8103] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(986), 1,
      anon_sym_RBRACE,
    ACTIONS(967), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8125] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
    ACTIONS(967), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8147] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    ACTIONS(967), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8169] = 2,
    ACTIONS(697), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(695), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8183] = 6,
    ACTIONS(879), 1,
      anon_sym_path,
    ACTIONS(971), 1,
      anon_sym_path_regexp,
    ACTIONS(990), 1,
      anon_sym_RBRACE,
    ACTIONS(992), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(252), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(531), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8205] = 2,
    ACTIONS(733), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(731), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8219] = 2,
    ACTIONS(996), 1,
      anon_sym_roll_keep,
    ACTIONS(994), 8,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_roll_disabled,
      anon_sym_roll_size,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
      anon_sym_roll_keep_for_days,
  [8233] = 5,
    ACTIONS(1000), 1,
      anon_sym_RBRACE,
    ACTIONS(1002), 1,
      anon_sym_email,
    ACTIONS(1004), 1,
      anon_sym_auto_https,
    ACTIONS(998), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(259), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8252] = 5,
    ACTIONS(1002), 1,
      anon_sym_email,
    ACTIONS(1004), 1,
      anon_sym_auto_https,
    ACTIONS(1008), 1,
      anon_sym_RBRACE,
    ACTIONS(1006), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(262), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8271] = 5,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    STATE(477), 1,
      sym_matcher_token,
    ACTIONS(467), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(61), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8290] = 5,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    STATE(471), 1,
      sym_matcher_token,
    ACTIONS(446), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(52), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8309] = 5,
    ACTIONS(1013), 1,
      anon_sym_RBRACE,
    ACTIONS(1015), 1,
      anon_sym_email,
    ACTIONS(1018), 1,
      anon_sym_auto_https,
    ACTIONS(1010), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(262), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8328] = 6,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1021), 1,
      sym__valid_uri_path_string,
    STATE(183), 1,
      sym_unix_path,
    STATE(484), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8348] = 6,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1023), 1,
      anon_sym_LBRACE,
    ACTIONS(1025), 1,
      anon_sym_bcrypt,
    STATE(407), 1,
      sym_matcher_token,
    STATE(409), 1,
      sym_hash_algorithm,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8368] = 5,
    ACTIONS(799), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym__port_number,
    STATE(575), 1,
      sym__ip_or_domain_address,
    ACTIONS(1027), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1029), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8386] = 6,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1021), 1,
      sym__valid_uri_path_string,
    STATE(138), 1,
      sym_unix_path,
    STATE(445), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8406] = 5,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(581), 1,
      sym__port_number,
    STATE(583), 1,
      sym__ip_or_domain_address,
    ACTIONS(1031), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1033), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8424] = 6,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1025), 1,
      anon_sym_bcrypt,
    ACTIONS(1035), 1,
      anon_sym_LBRACE,
    STATE(474), 1,
      sym_matcher_token,
    STATE(475), 1,
      sym_hash_algorithm,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8444] = 5,
    ACTIONS(817), 1,
      anon_sym_COLON,
    STATE(139), 1,
      sym__port_number,
    STATE(533), 1,
      sym__ip_or_domain_address,
    ACTIONS(1037), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1039), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8462] = 4,
    ACTIONS(1043), 1,
      anon_sym_RBRACE,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8477] = 1,
    ACTIONS(1047), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8486] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1049), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8501] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1051), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8516] = 5,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1053), 1,
      sym_http_message,
    ACTIONS(1055), 1,
      sym_http_error_code,
    STATE(468), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8533] = 5,
    ACTIONS(911), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(931), 1,
      sym_domain_address,
    STATE(44), 1,
      sym_redir_or_rewrite_target,
    STATE(558), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8550] = 1,
    ACTIONS(1057), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8559] = 4,
    ACTIONS(1062), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1059), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8574] = 5,
    ACTIONS(907), 1,
      sym_domain_address,
    ACTIONS(911), 1,
      sym_uri_path_with_placeholders,
    STATE(44), 1,
      sym_redir_or_rewrite_target,
    STATE(537), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8591] = 1,
    ACTIONS(1067), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8600] = 1,
    ACTIONS(1069), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8609] = 3,
    ACTIONS(1071), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(545), 1,
      sym__horizontal_whitespaces,
    ACTIONS(1073), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [8622] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8637] = 5,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1077), 1,
      sym_http_message,
    ACTIONS(1079), 1,
      sym_http_error_code,
    STATE(460), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8654] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1081), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8669] = 1,
    ACTIONS(1083), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8678] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1085), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8693] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1087), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8708] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1089), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8723] = 1,
    ACTIONS(1091), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8732] = 5,
    ACTIONS(913), 1,
      sym_domain_address,
    ACTIONS(915), 1,
      sym_uri_path_with_placeholders,
    STATE(38), 1,
      sym_redir_or_rewrite_target,
    STATE(592), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8749] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1093), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8764] = 1,
    ACTIONS(1095), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8773] = 4,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    ACTIONS(1041), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(277), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8788] = 5,
    ACTIONS(1099), 1,
      sym__vertical_whitespace,
    ACTIONS(1101), 1,
      sym__empty_line,
    ACTIONS(1103), 1,
      sym_comment_line,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    STATE(318), 1,
      aux_sym_directive_request_body_repeat1,
  [8804] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1107), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(270), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8816] = 1,
    ACTIONS(1109), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [8824] = 1,
    ACTIONS(1111), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [8832] = 4,
    ACTIONS(1115), 1,
      anon_sym_RBRACE,
    ACTIONS(1117), 1,
      anon_sym_browse,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1113), 2,
      sym__empty_line,
      sym_comment_line,
  [8846] = 5,
    ACTIONS(1119), 1,
      sym__vertical_whitespace,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [8862] = 5,
    ACTIONS(1119), 1,
      sym__vertical_whitespace,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
    ACTIONS(1127), 1,
      sym__empty_line,
    ACTIONS(1129), 1,
      sym_comment_line,
    STATE(308), 1,
      aux_sym_directive_request_body_repeat1,
  [8878] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1131), 1,
      sym__vertical_whitespaces,
    STATE(486), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8892] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1133), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(272), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8904] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1135), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(287), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8916] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1137), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(286), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8928] = 5,
    ACTIONS(1139), 1,
      sym__vertical_whitespace,
    ACTIONS(1141), 1,
      sym__empty_line,
    ACTIONS(1143), 1,
      sym_comment_line,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      aux_sym_directive_request_body_repeat1,
  [8944] = 5,
    ACTIONS(1147), 1,
      sym__vertical_whitespace,
    ACTIONS(1149), 1,
      sym__empty_line,
    ACTIONS(1151), 1,
      sym_comment_line,
    ACTIONS(1153), 1,
      anon_sym_RBRACE,
    STATE(330), 1,
      aux_sym_directive_request_body_repeat1,
  [8960] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1155), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(273), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8972] = 5,
    ACTIONS(1099), 1,
      sym__vertical_whitespace,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [8988] = 4,
    ACTIONS(1117), 1,
      anon_sym_browse,
    ACTIONS(1157), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1113), 2,
      sym__empty_line,
      sym_comment_line,
  [9002] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1159), 1,
      anon_sym_browse,
    STATE(333), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9016] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1161), 1,
      sym__vertical_whitespace,
    ACTIONS(1163), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9032] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1165), 1,
      sym__vertical_whitespace,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9048] = 5,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1169), 1,
      sym__ipv4_address,
    ACTIONS(1171), 1,
      sym__ipv6_address,
    STATE(36), 1,
      sym_unix_path,
  [9064] = 5,
    ACTIONS(1173), 1,
      sym__vertical_whitespace,
    ACTIONS(1175), 1,
      sym__empty_line,
    ACTIONS(1177), 1,
      sym_comment_line,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      aux_sym_directive_request_body_repeat1,
  [9080] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1181), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(284), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9092] = 4,
    ACTIONS(1186), 1,
      anon_sym_RBRACE,
    ACTIONS(1188), 1,
      anon_sym_browse,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1183), 2,
      sym__empty_line,
      sym_comment_line,
  [9106] = 3,
    ACTIONS(1193), 1,
      anon_sym_file,
    STATE(280), 1,
      sym__log_output_file,
    ACTIONS(1191), 3,
      anon_sym_stderr,
      anon_sym_stdout,
      anon_sym_discard,
  [9118] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1195), 1,
      sym__vertical_whitespace,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9134] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1199), 1,
      anon_sym_LBRACE,
    STATE(459), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9148] = 5,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1201), 1,
      sym__ipv4_address,
    ACTIONS(1203), 1,
      sym__ipv6_address,
    STATE(30), 1,
      sym_unix_path,
  [9164] = 4,
    ACTIONS(1117), 1,
      anon_sym_browse,
    ACTIONS(1205), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1113), 2,
      sym__empty_line,
      sym_comment_line,
  [9178] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1207), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(291), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9190] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1209), 1,
      anon_sym_LBRACE,
    STATE(458), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9204] = 5,
    ACTIONS(1211), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1213), 1,
      sym__vertical_whitespace,
    ACTIONS(1215), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym__horizontal_whitespaces,
    STATE(371), 1,
      aux_sym_directive_file_server_repeat1,
  [9220] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1139), 1,
      sym__vertical_whitespace,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9236] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1217), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9248] = 2,
    ACTIONS(1221), 1,
      anon_sym_path,
    ACTIONS(1219), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_path_regexp,
  [9258] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1223), 1,
      anon_sym_LBRACE,
    STATE(447), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9272] = 5,
    ACTIONS(1161), 1,
      sym__vertical_whitespace,
    ACTIONS(1163), 1,
      anon_sym_RBRACE,
    ACTIONS(1225), 1,
      sym__empty_line,
    ACTIONS(1227), 1,
      sym_comment_line,
    STATE(325), 1,
      aux_sym_directive_request_body_repeat1,
  [9288] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1173), 1,
      sym__vertical_whitespace,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9304] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1159), 1,
      anon_sym_browse,
    STATE(346), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9318] = 5,
    ACTIONS(1229), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1231), 1,
      sym__vertical_whitespace,
    ACTIONS(1233), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      sym__horizontal_whitespaces,
    STATE(360), 1,
      aux_sym_directive_file_server_repeat1,
  [9334] = 5,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1237), 1,
      sym__vertical_whitespace,
    ACTIONS(1239), 1,
      anon_sym_LBRACE,
    STATE(382), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9350] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1241), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(288), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9362] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1243), 1,
      anon_sym_LBRACE,
    STATE(417), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9376] = 3,
    ACTIONS(1045), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1245), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(282), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9388] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1247), 1,
      sym__vertical_whitespaces,
    STATE(472), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9402] = 4,
    ACTIONS(1117), 1,
      anon_sym_browse,
    ACTIONS(1249), 1,
      anon_sym_RBRACE,
    STATE(316), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1113), 2,
      sym__empty_line,
      sym_comment_line,
  [9416] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1251), 1,
      anon_sym_LBRACE,
    STATE(415), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9430] = 4,
    ACTIONS(1255), 1,
      sym__empty_line,
    ACTIONS(1258), 1,
      sym_comment_line,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1253), 2,
      sym__vertical_whitespace,
      anon_sym_RBRACE,
  [9444] = 4,
    ACTIONS(803), 1,
      sym__valid_uri_path_string,
    ACTIONS(1261), 1,
      anon_sym_LBRACE,
    STATE(406), 1,
      sym_matcher_token,
    ACTIONS(801), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9458] = 5,
    ACTIONS(1263), 1,
      sym__vertical_whitespace,
    ACTIONS(1265), 1,
      sym__empty_line,
    ACTIONS(1267), 1,
      sym_comment_line,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_directive_request_body_repeat1,
  [9474] = 2,
    ACTIONS(1273), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(1271), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [9484] = 5,
    ACTIONS(1121), 1,
      sym__empty_line,
    ACTIONS(1123), 1,
      sym_comment_line,
    ACTIONS(1263), 1,
      sym__vertical_whitespace,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9500] = 5,
    ACTIONS(1275), 1,
      sym__vertical_whitespace,
    ACTIONS(1277), 1,
      sym__empty_line,
    ACTIONS(1279), 1,
      sym_comment_line,
    ACTIONS(1281), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_directive_request_body_repeat1,
  [9516] = 5,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1283), 1,
      sym__vertical_whitespace,
    ACTIONS(1285), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9532] = 3,
    ACTIONS(1117), 1,
      anon_sym_browse,
    STATE(298), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1287), 2,
      sym__empty_line,
      sym_comment_line,
  [9543] = 4,
    ACTIONS(1289), 1,
      anon_sym_DQUOTE,
    ACTIONS(1291), 1,
      aux_sym_header_value_token1,
    ACTIONS(1293), 1,
      anon_sym_SQUOTE,
    STATE(77), 1,
      sym_header_value,
  [9556] = 1,
    ACTIONS(1295), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_browse,
  [9563] = 3,
    ACTIONS(1299), 1,
      anon_sym_max_size,
    STATE(364), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1297), 2,
      sym__empty_line,
      sym_comment_line,
  [9574] = 3,
    ACTIONS(1303), 1,
      anon_sym_max_size,
    STATE(350), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1301), 2,
      sym__empty_line,
      sym_comment_line,
  [9585] = 3,
    ACTIONS(1305), 1,
      anon_sym_max_size,
    STATE(364), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1297), 2,
      sym__empty_line,
      sym_comment_line,
  [9596] = 3,
    ACTIONS(1117), 1,
      anon_sym_browse,
    STATE(321), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1307), 2,
      sym__empty_line,
      sym_comment_line,
  [9607] = 3,
    ACTIONS(1309), 1,
      anon_sym_max_size,
    STATE(364), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1297), 2,
      sym__empty_line,
      sym_comment_line,
  [9618] = 3,
    ACTIONS(1313), 1,
      anon_sym_max_size,
    STATE(352), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1311), 2,
      sym__empty_line,
      sym_comment_line,
  [9629] = 3,
    ACTIONS(1117), 1,
      anon_sym_browse,
    STATE(309), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1315), 2,
      sym__empty_line,
      sym_comment_line,
  [9640] = 4,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1317), 1,
      sym__vertical_whitespace,
    STATE(375), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9653] = 1,
    ACTIONS(1319), 4,
      anon_sym_off,
      anon_sym_disable_redirects,
      anon_sym_ignore_loaded_certs,
      anon_sym_disable_certs,
  [9660] = 1,
    ACTIONS(1321), 4,
      anon_sym_error,
      anon_sym_INFO,
      anon_sym_info,
      anon_sym_ERROR,
  [9667] = 4,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1323), 1,
      sym__vertical_whitespace,
    STATE(375), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9680] = 4,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
    ACTIONS(1327), 1,
      aux_sym_header_value_token1,
    ACTIONS(1329), 1,
      anon_sym_SQUOTE,
    STATE(243), 1,
      sym_header_value,
  [9693] = 4,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
    ACTIONS(1327), 1,
      aux_sym_header_value_token1,
    ACTIONS(1329), 1,
      anon_sym_SQUOTE,
    STATE(242), 1,
      sym_header_value,
  [9706] = 4,
    ACTIONS(1325), 1,
      anon_sym_DQUOTE,
    ACTIONS(1327), 1,
      aux_sym_header_value_token1,
    ACTIONS(1329), 1,
      anon_sym_SQUOTE,
    STATE(247), 1,
      sym_header_value,
  [9719] = 3,
    ACTIONS(1253), 1,
      anon_sym_max_size,
    STATE(364), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1331), 2,
      sym__empty_line,
      sym_comment_line,
  [9730] = 4,
    ACTIONS(1334), 1,
      anon_sym_DQUOTE,
    ACTIONS(1336), 1,
      aux_sym_header_value_token1,
    ACTIONS(1338), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_header_value,
  [9743] = 1,
    ACTIONS(1340), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [9750] = 4,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 1,
      aux_sym_header_value_token1,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_header_value,
  [9763] = 4,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 1,
      aux_sym_header_value_token1,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym_header_value,
  [9776] = 4,
    ACTIONS(1342), 1,
      anon_sym_DQUOTE,
    ACTIONS(1344), 1,
      aux_sym_header_value_token1,
    ACTIONS(1346), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_header_value,
  [9789] = 3,
    ACTIONS(1117), 1,
      anon_sym_browse,
    STATE(338), 1,
      aux_sym_directive_file_server_repeat2,
    ACTIONS(1348), 2,
      sym__empty_line,
      sym_comment_line,
  [9800] = 4,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1350), 1,
      sym__vertical_whitespace,
    STATE(375), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9813] = 3,
    ACTIONS(1354), 1,
      anon_sym_max_size,
    STATE(354), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1352), 2,
      sym__empty_line,
      sym_comment_line,
  [9824] = 3,
    ACTIONS(1358), 1,
      anon_sym_max_size,
    STATE(379), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1356), 2,
      sym__empty_line,
      sym_comment_line,
  [9835] = 4,
    ACTIONS(1360), 1,
      anon_sym_DQUOTE,
    ACTIONS(1362), 1,
      aux_sym_header_value_token1,
    ACTIONS(1364), 1,
      anon_sym_SQUOTE,
    STATE(73), 1,
      sym_header_value,
  [9848] = 4,
    ACTIONS(1366), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1369), 1,
      sym__vertical_whitespace,
    STATE(375), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9861] = 4,
    ACTIONS(1371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1373), 1,
      aux_sym_header_value_token1,
    ACTIONS(1375), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      sym_header_value,
  [9874] = 4,
    ACTIONS(1371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1373), 1,
      aux_sym_header_value_token1,
    ACTIONS(1375), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_header_value,
  [9887] = 2,
    ACTIONS(467), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(64), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9896] = 3,
    ACTIONS(1377), 1,
      anon_sym_max_size,
    STATE(364), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1297), 2,
      sym__empty_line,
      sym_comment_line,
  [9907] = 4,
    ACTIONS(1371), 1,
      anon_sym_DQUOTE,
    ACTIONS(1373), 1,
      aux_sym_header_value_token1,
    ACTIONS(1375), 1,
      anon_sym_SQUOTE,
    STATE(112), 1,
      sym_header_value,
  [9920] = 2,
    ACTIONS(446), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(55), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9929] = 4,
    ACTIONS(1235), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1379), 1,
      sym__vertical_whitespace,
    STATE(375), 1,
      aux_sym_directive_file_server_repeat1,
    STATE(573), 1,
      sym__horizontal_whitespaces,
  [9942] = 3,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1381), 1,
      aux_sym_unix_path_token2,
    STATE(194), 1,
      sym_unix_path,
  [9952] = 2,
    ACTIONS(1383), 1,
      anon_sym_SLASH,
    ACTIONS(1385), 2,
      anon_sym_4,
      anon_sym_6,
  [9960] = 3,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1381), 1,
      aux_sym_unix_path_token2,
    STATE(177), 1,
      sym_unix_path,
  [9970] = 3,
    ACTIONS(1387), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      aux_sym_unix_path_token2,
    STATE(632), 1,
      sym_unix_path,
  [9980] = 3,
    ACTIONS(369), 1,
      anon_sym_DQUOTE,
    ACTIONS(1381), 1,
      aux_sym_unix_path_token2,
    STATE(171), 1,
      sym_unix_path,
  [9990] = 2,
    ACTIONS(1391), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1393), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [9998] = 2,
    ACTIONS(1395), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1397), 2,
      sym__vertical_whitespace,
      anon_sym_LBRACE,
  [10006] = 2,
    ACTIONS(1383), 1,
      anon_sym_SLASH,
    ACTIONS(1385), 2,
      anon_sym_gram,
      anon_sym_packet,
  [10014] = 3,
    ACTIONS(1025), 1,
      anon_sym_bcrypt,
    ACTIONS(1399), 1,
      anon_sym_LBRACE,
    STATE(418), 1,
      sym_hash_algorithm,
  [10024] = 3,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      aux_sym_unix_path_token2,
    STATE(95), 1,
      sym_unix_path,
  [10034] = 3,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      aux_sym_unix_path_token2,
    STATE(104), 1,
      sym_unix_path,
  [10044] = 3,
    ACTIONS(1403), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1405), 1,
      sym__vertical_whitespace,
    STATE(536), 1,
      sym__horizontal_whitespaces,
  [10054] = 3,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(1401), 1,
      aux_sym_unix_path_token2,
    STATE(103), 1,
      sym_unix_path,
  [10064] = 3,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    ACTIONS(1407), 1,
      aux_sym_unix_path_token2,
    STATE(394), 1,
      sym_unix_path,
  [10074] = 3,
    ACTIONS(1025), 1,
      anon_sym_bcrypt,
    ACTIONS(1409), 1,
      anon_sym_LBRACE,
    STATE(402), 1,
      sym_hash_algorithm,
  [10084] = 2,
    ACTIONS(1411), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(386), 1,
      sym__horizontal_whitespaces,
  [10091] = 2,
    ACTIONS(1413), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(319), 1,
      sym__horizontal_whitespaces,
  [10098] = 2,
    ACTIONS(1415), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(642), 1,
      sym__horizontal_whitespaces,
  [10105] = 2,
    ACTIONS(381), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(383), 1,
      sym__vertical_whitespace,
  [10112] = 2,
    ACTIONS(1417), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(412), 1,
      sym__horizontal_whitespaces,
  [10119] = 2,
    ACTIONS(1419), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(640), 1,
      sym__horizontal_whitespaces,
  [10126] = 2,
    ACTIONS(1421), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(290), 1,
      sym__horizontal_whitespaces,
  [10133] = 2,
    ACTIONS(385), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(387), 1,
      sym__vertical_whitespace,
  [10140] = 2,
    ACTIONS(1423), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(639), 1,
      sym__horizontal_whitespaces,
  [10147] = 2,
    ACTIONS(1425), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(397), 1,
      sym__horizontal_whitespaces,
  [10154] = 2,
    ACTIONS(1427), 1,
      anon_sym_LBRACE,
    ACTIONS(1429), 1,
      aux_sym_directive_basicauth_token1,
  [10161] = 2,
    ACTIONS(1431), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(414), 1,
      sym__horizontal_whitespaces,
  [10168] = 2,
    ACTIONS(1433), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(341), 1,
      sym__horizontal_whitespaces,
  [10175] = 2,
    ACTIONS(1435), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(264), 1,
      sym__horizontal_whitespaces,
  [10182] = 2,
    ACTIONS(1437), 1,
      anon_sym_LBRACE,
    ACTIONS(1439), 1,
      aux_sym_directive_basicauth_token1,
  [10189] = 1,
    ACTIONS(1441), 2,
      anon_sym_console,
      anon_sym_json,
  [10194] = 2,
    ACTIONS(1409), 1,
      anon_sym_LBRACE,
    ACTIONS(1443), 1,
      aux_sym_directive_basicauth_token1,
  [10201] = 2,
    ACTIONS(1445), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(620), 1,
      sym__horizontal_whitespaces,
  [10208] = 2,
    ACTIONS(1447), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(648), 1,
      sym__horizontal_whitespaces,
  [10215] = 2,
    ACTIONS(1449), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(619), 1,
      sym__horizontal_whitespaces,
  [10222] = 2,
    ACTIONS(1451), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(408), 1,
      sym__horizontal_whitespaces,
  [10229] = 2,
    ACTIONS(1453), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(646), 1,
      sym__horizontal_whitespaces,
  [10236] = 2,
    ACTIONS(1455), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(584), 1,
      sym__horizontal_whitespaces,
  [10243] = 2,
    ACTIONS(1457), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(645), 1,
      sym__horizontal_whitespaces,
  [10250] = 2,
    ACTIONS(1459), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(339), 1,
      sym__horizontal_whitespaces,
  [10257] = 2,
    ACTIONS(1461), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(644), 1,
      sym__horizontal_whitespaces,
  [10264] = 2,
    ACTIONS(1463), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(335), 1,
      sym__horizontal_whitespaces,
  [10271] = 2,
    ACTIONS(1465), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(392), 1,
      sym__horizontal_whitespaces,
  [10278] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(438), 1,
      sym_header_name,
  [10285] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(439), 1,
      sym_header_name,
  [10292] = 2,
    ACTIONS(1469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(359), 1,
      sym__horizontal_whitespaces,
  [10299] = 2,
    ACTIONS(1471), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(413), 1,
      sym__horizontal_whitespaces,
  [10306] = 2,
    ACTIONS(1473), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(317), 1,
      sym__horizontal_whitespaces,
  [10313] = 2,
    ACTIONS(1475), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(376), 1,
      sym__horizontal_whitespaces,
  [10320] = 2,
    ACTIONS(1477), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(377), 1,
      sym__horizontal_whitespaces,
  [10327] = 2,
    ACTIONS(1479), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(595), 1,
      sym__horizontal_whitespaces,
  [10334] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(454), 1,
      sym_header_name,
  [10341] = 2,
    ACTIONS(1481), 1,
      sym_http_message,
    ACTIONS(1483), 1,
      sym_http_error_code,
  [10348] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(457), 1,
      sym_header_name,
  [10355] = 2,
    ACTIONS(1485), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(553), 1,
      sym__horizontal_whitespaces,
  [10362] = 2,
    ACTIONS(1487), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(362), 1,
      sym__horizontal_whitespaces,
  [10369] = 2,
    ACTIONS(1489), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(363), 1,
      sym__horizontal_whitespaces,
  [10376] = 2,
    ACTIONS(1399), 1,
      anon_sym_LBRACE,
    ACTIONS(1491), 1,
      aux_sym_directive_basicauth_token1,
  [10383] = 2,
    ACTIONS(1493), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(365), 1,
      sym__horizontal_whitespaces,
  [10390] = 2,
    ACTIONS(1495), 1,
      aux_sym_matcher_path_regexp_token1,
    ACTIONS(1497), 1,
      aux_sym_matcher_path_regexp_token2,
  [10397] = 2,
    ACTIONS(1499), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(230), 1,
      sym__horizontal_whitespaces,
  [10404] = 2,
    ACTIONS(1501), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(395), 1,
      sym__horizontal_whitespaces,
  [10411] = 2,
    ACTIONS(1503), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(393), 1,
      sym__horizontal_whitespaces,
  [10418] = 2,
    ACTIONS(1505), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(224), 1,
      sym__horizontal_whitespaces,
  [10425] = 2,
    ACTIONS(1507), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(631), 1,
      sym__horizontal_whitespaces,
  [10432] = 2,
    ACTIONS(1509), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(576), 1,
      sym__horizontal_whitespaces,
  [10439] = 2,
    ACTIONS(1511), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(358), 1,
      sym__horizontal_whitespaces,
  [10446] = 2,
    ACTIONS(1513), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
  [10453] = 2,
    ACTIONS(1515), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(374), 1,
      sym__horizontal_whitespaces,
  [10460] = 2,
    ACTIONS(1517), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(517), 1,
      sym__horizontal_whitespaces,
  [10467] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(431), 1,
      sym_header_name,
  [10474] = 2,
    ACTIONS(1519), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(368), 1,
      sym__horizontal_whitespaces,
  [10481] = 2,
    ACTIONS(1521), 1,
      aux_sym_directive_basicauth_token1,
    STATE(136), 1,
      sym_header_name,
  [10488] = 2,
    ACTIONS(1467), 1,
      aux_sym_directive_basicauth_token1,
    STATE(432), 1,
      sym_header_name,
  [10495] = 2,
    ACTIONS(1523), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(369), 1,
      sym__horizontal_whitespaces,
  [10502] = 2,
    ACTIONS(1525), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(629), 1,
      sym__horizontal_whitespaces,
  [10509] = 2,
    ACTIONS(1527), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(628), 1,
      sym__horizontal_whitespaces,
  [10516] = 2,
    ACTIONS(1529), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(435), 1,
      sym__horizontal_whitespaces,
  [10523] = 2,
    ACTIONS(1531), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(542), 1,
      sym__horizontal_whitespaces,
  [10530] = 2,
    ACTIONS(1533), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(616), 1,
      sym__horizontal_whitespaces,
  [10537] = 2,
    ACTIONS(1535), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(221), 1,
      sym__horizontal_whitespaces,
  [10544] = 2,
    ACTIONS(1537), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(227), 1,
      sym__horizontal_whitespaces,
  [10551] = 2,
    ACTIONS(1539), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(348), 1,
      sym__horizontal_whitespaces,
  [10558] = 2,
    ACTIONS(1541), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(89), 1,
      sym__horizontal_whitespaces,
  [10565] = 2,
    ACTIONS(1543), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(57), 1,
      sym__horizontal_whitespaces,
  [10572] = 2,
    ACTIONS(1545), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(491), 1,
      sym__horizontal_whitespaces,
  [10579] = 2,
    ACTIONS(1547), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(538), 1,
      sym__horizontal_whitespaces,
  [10586] = 2,
    ACTIONS(1549), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1551), 1,
      sym__vertical_whitespace,
  [10593] = 2,
    ACTIONS(1553), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(381), 1,
      sym__horizontal_whitespaces,
  [10600] = 2,
    ACTIONS(1555), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(557), 1,
      sym__horizontal_whitespaces,
  [10607] = 2,
    ACTIONS(1557), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(263), 1,
      sym__horizontal_whitespaces,
  [10614] = 2,
    ACTIONS(1559), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(391), 1,
      sym__horizontal_whitespaces,
  [10621] = 2,
    ACTIONS(1561), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(440), 1,
      sym__horizontal_whitespaces,
  [10628] = 2,
    ACTIONS(1563), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(204), 1,
      sym__horizontal_whitespaces,
  [10635] = 2,
    ACTIONS(1565), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(378), 1,
      sym__horizontal_whitespaces,
  [10642] = 2,
    ACTIONS(1567), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(233), 1,
      sym__horizontal_whitespaces,
  [10649] = 2,
    ACTIONS(1569), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(203), 1,
      sym__horizontal_whitespaces,
  [10656] = 2,
    ACTIONS(1571), 1,
      aux_sym_directive_basicauth_token1,
    STATE(150), 1,
      sym_header_name,
  [10663] = 2,
    ACTIONS(1573), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(274), 1,
      sym__horizontal_whitespaces,
  [10670] = 2,
    ACTIONS(1575), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(260), 1,
      sym__horizontal_whitespaces,
  [10677] = 2,
    ACTIONS(1577), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(275), 1,
      sym__horizontal_whitespaces,
  [10684] = 2,
    ACTIONS(1579), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(387), 1,
      sym__horizontal_whitespaces,
  [10691] = 2,
    ACTIONS(1581), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(385), 1,
      sym__horizontal_whitespaces,
  [10698] = 2,
    ACTIONS(1583), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(599), 1,
      sym__horizontal_whitespaces,
  [10705] = 2,
    ACTIONS(1585), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(218), 1,
      sym__horizontal_whitespaces,
  [10712] = 2,
    ACTIONS(1587), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(337), 1,
      sym__horizontal_whitespaces,
  [10719] = 2,
    ACTIONS(1589), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(278), 1,
      sym__horizontal_whitespaces,
  [10726] = 2,
    ACTIONS(1591), 1,
      aux_sym_directive_basicauth_token1,
    STATE(256), 1,
      sym_header_name,
  [10733] = 2,
    ACTIONS(1593), 1,
      sym_http_message,
    ACTIONS(1595), 1,
      sym_http_error_code,
  [10740] = 2,
    ACTIONS(1597), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(301), 1,
      sym__horizontal_whitespaces,
  [10747] = 2,
    ACTIONS(1599), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(268), 1,
      sym__horizontal_whitespaces,
  [10754] = 2,
    ACTIONS(1601), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(219), 1,
      sym__horizontal_whitespaces,
  [10761] = 2,
    ACTIONS(1603), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(525), 1,
      sym__horizontal_whitespaces,
  [10768] = 2,
    ACTIONS(1605), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(442), 1,
      sym__horizontal_whitespaces,
  [10775] = 2,
    ACTIONS(1607), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(261), 1,
      sym__horizontal_whitespaces,
  [10782] = 2,
    ACTIONS(1609), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(283), 1,
      sym__horizontal_whitespaces,
  [10789] = 2,
    ACTIONS(1611), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(578), 1,
      sym__horizontal_whitespaces,
  [10796] = 2,
    ACTIONS(1613), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(383), 1,
      sym__horizontal_whitespaces,
  [10803] = 2,
    ACTIONS(1615), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(535), 1,
      sym__horizontal_whitespaces,
  [10810] = 2,
    ACTIONS(1617), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(396), 1,
      sym__horizontal_whitespaces,
  [10817] = 2,
    ACTIONS(1619), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(46), 1,
      sym__horizontal_whitespaces,
  [10824] = 2,
    ACTIONS(1621), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(205), 1,
      sym__horizontal_whitespaces,
  [10831] = 2,
    ACTIONS(1623), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(266), 1,
      sym__horizontal_whitespaces,
  [10838] = 2,
    ACTIONS(1625), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(202), 1,
      sym__horizontal_whitespaces,
  [10845] = 2,
    ACTIONS(1627), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(328), 1,
      sym__horizontal_whitespaces,
  [10852] = 2,
    ACTIONS(1629), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(323), 1,
      sym__horizontal_whitespaces,
  [10859] = 2,
    ACTIONS(1631), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(231), 1,
      sym__horizontal_whitespaces,
  [10866] = 2,
    ACTIONS(1633), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(76), 1,
      sym__horizontal_whitespaces,
  [10873] = 1,
    ACTIONS(1635), 1,
      aux_sym__port_number_token1,
  [10877] = 1,
    ACTIONS(1637), 1,
      sym_size_number,
  [10881] = 1,
    ACTIONS(1639), 1,
      anon_sym_RBRACE,
  [10885] = 1,
    ACTIONS(1197), 1,
      anon_sym_RBRACE,
  [10889] = 1,
    ACTIONS(1641), 1,
      sym__vertical_whitespace,
  [10893] = 1,
    ACTIONS(1643), 1,
      sym__vertical_whitespace,
  [10897] = 1,
    ACTIONS(1645), 1,
      sym_http_error_code,
  [10901] = 1,
    ACTIONS(1647), 1,
      aux_sym__port_number_token1,
  [10905] = 1,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
  [10909] = 1,
    ACTIONS(1649), 1,
      anon_sym_DQUOTE,
  [10913] = 1,
    ACTIONS(1649), 1,
      anon_sym_SQUOTE,
  [10917] = 1,
    ACTIONS(1179), 1,
      anon_sym_RBRACE,
  [10921] = 1,
    ACTIONS(1163), 1,
      anon_sym_RBRACE,
  [10925] = 1,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
  [10929] = 1,
    ACTIONS(1651), 1,
      aux_sym__log_output_file_token2,
  [10933] = 1,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
  [10937] = 1,
    ACTIONS(1653), 1,
      anon_sym_RBRACE,
  [10941] = 1,
    ACTIONS(1655), 1,
      anon_sym_RBRACE,
  [10945] = 1,
    ACTIONS(1657), 1,
      sym__vertical_whitespace,
  [10949] = 1,
    ACTIONS(1659), 1,
      aux_sym__port_number_token1,
  [10953] = 1,
    ACTIONS(1661), 1,
      sym__vertical_whitespace,
  [10957] = 1,
    ACTIONS(1663), 1,
      aux_sym_site_address_token1,
  [10961] = 1,
    ACTIONS(1665), 1,
      aux_sym_site_address_token1,
  [10965] = 1,
    ACTIONS(1667), 1,
      sym__vertical_whitespace,
  [10969] = 1,
    ACTIONS(1651), 1,
      sym_size_number,
  [10973] = 1,
    ACTIONS(1669), 1,
      anon_sym_LBRACE,
  [10977] = 1,
    ACTIONS(1671), 1,
      sym_domain_address,
  [10981] = 1,
    ACTIONS(1595), 1,
      sym_http_error_code,
  [10985] = 1,
    ACTIONS(1673), 1,
      anon_sym_DQUOTE,
  [10989] = 1,
    ACTIONS(1675), 1,
      sym__vertical_whitespace,
  [10993] = 1,
    ACTIONS(1105), 1,
      anon_sym_RBRACE,
  [10997] = 1,
    ACTIONS(1677), 1,
      anon_sym_LBRACE,
  [11001] = 1,
    ACTIONS(1679), 1,
      anon_sym_DQUOTE,
  [11005] = 1,
    ACTIONS(1679), 1,
      anon_sym_SQUOTE,
  [11009] = 1,
    ACTIONS(1681), 1,
      aux_sym_basicauth_credential_token1,
  [11013] = 1,
    ACTIONS(1683), 1,
      anon_sym_DQUOTE,
  [11017] = 1,
    ACTIONS(1685), 1,
      anon_sym_DQUOTE,
  [11021] = 1,
    ACTIONS(1685), 1,
      anon_sym_SQUOTE,
  [11025] = 1,
    ACTIONS(1687), 1,
      anon_sym_DQUOTE,
  [11029] = 1,
    ACTIONS(1687), 1,
      anon_sym_SQUOTE,
  [11033] = 1,
    ACTIONS(1689), 1,
      anon_sym_DQUOTE,
  [11037] = 1,
    ACTIONS(1689), 1,
      anon_sym_SQUOTE,
  [11041] = 1,
    ACTIONS(1691), 1,
      sym_snippet_name,
  [11045] = 1,
    ACTIONS(1693), 1,
      anon_sym_LBRACE,
  [11049] = 1,
    ACTIONS(1695), 1,
      sym__vertical_whitespace,
  [11053] = 1,
    ACTIONS(1697), 1,
      anon_sym_DQUOTE,
  [11057] = 1,
    ACTIONS(1699), 1,
      sym__vertical_whitespaces,
  [11061] = 1,
    ACTIONS(1701), 1,
      sym_domain_address,
  [11065] = 1,
    ACTIONS(1703), 1,
      sym__vertical_whitespace,
  [11069] = 1,
    ACTIONS(1705), 1,
      sym__vertical_whitespace,
  [11073] = 1,
    ACTIONS(1707), 1,
      aux_sym__horizontal_whitespaces_token1,
  [11077] = 1,
    ACTIONS(1709), 1,
      anon_sym_SLASH,
  [11081] = 1,
    ACTIONS(1711), 1,
      anon_sym_LBRACE,
  [11085] = 1,
    ACTIONS(1713), 1,
      sym_size_number,
  [11089] = 1,
    ACTIONS(1715), 1,
      aux_sym_unix_path_token1,
  [11093] = 1,
    ACTIONS(1717), 1,
      aux_sym_unix_path_token1,
  [11097] = 1,
    ACTIONS(1719), 1,
      sym__vertical_whitespace,
  [11101] = 1,
    ACTIONS(1721), 1,
      anon_sym_SLASH,
  [11105] = 1,
    ACTIONS(1723), 1,
      sym__vertical_whitespace,
  [11109] = 1,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
  [11113] = 1,
    ACTIONS(1725), 1,
      sym__vertical_whitespace,
  [11117] = 1,
    ACTIONS(1125), 1,
      anon_sym_RBRACE,
  [11121] = 1,
    ACTIONS(1159), 1,
      anon_sym_browse,
  [11125] = 1,
    ACTIONS(1727), 1,
      sym__vertical_whitespace,
  [11129] = 1,
    ACTIONS(1729), 1,
      aux_sym_site_address_token1,
  [11133] = 1,
    ACTIONS(1731), 1,
      sym_email_address,
  [11137] = 1,
    ACTIONS(1733), 1,
      aux_sym_site_address_token1,
  [11141] = 1,
    ACTIONS(1651), 1,
      aux_sym__log_output_file_token1,
  [11145] = 1,
    ACTIONS(583), 1,
      aux_sym__horizontal_whitespaces_token1,
  [11149] = 1,
    ACTIONS(1735), 1,
      sym__vertical_whitespace,
  [11153] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
  [11157] = 1,
    ACTIONS(385), 1,
      sym__vertical_whitespace,
  [11161] = 1,
    ACTIONS(1737), 1,
      aux_sym_site_address_token1,
  [11165] = 1,
    ACTIONS(1739), 1,
      sym_snippet_name,
  [11169] = 1,
    ACTIONS(1741), 1,
      aux_sym_header_value_token2,
  [11173] = 1,
    ACTIONS(1743), 1,
      aux_sym_header_value_token3,
  [11177] = 1,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
  [11181] = 1,
    ACTIONS(1745), 1,
      sym_size_number,
  [11185] = 1,
    ACTIONS(381), 1,
      sym__vertical_whitespace,
  [11189] = 1,
    ACTIONS(1747), 1,
      sym_size_number,
  [11193] = 1,
    ACTIONS(1749), 1,
      sym_size_number,
  [11197] = 1,
    ACTIONS(1751), 1,
      sym_domain_address,
  [11201] = 1,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
  [11205] = 1,
    ACTIONS(1753), 1,
      aux_sym_site_address_token1,
  [11209] = 1,
    ACTIONS(1755), 1,
      sym_snippet_name,
  [11213] = 1,
    ACTIONS(1757), 1,
      sym__vertical_whitespace,
  [11217] = 1,
    ACTIONS(1759), 1,
      aux_sym_unix_path_token1,
  [11221] = 1,
    ACTIONS(1761), 1,
      sym__vertical_whitespace,
  [11225] = 1,
    ACTIONS(1763), 1,
      sym__vertical_whitespaces,
  [11229] = 1,
    ACTIONS(1765), 1,
      anon_sym_SLASH,
  [11233] = 1,
    ACTIONS(1767), 1,
      aux_sym_header_value_token2,
  [11237] = 1,
    ACTIONS(1769), 1,
      aux_sym_header_value_token3,
  [11241] = 1,
    ACTIONS(1771), 1,
      aux_sym_unix_path_token1,
  [11245] = 1,
    ACTIONS(1773), 1,
      aux_sym_header_value_token2,
  [11249] = 1,
    ACTIONS(1775), 1,
      aux_sym_header_value_token3,
  [11253] = 1,
    ACTIONS(1777), 1,
      aux_sym_header_value_token2,
  [11257] = 1,
    ACTIONS(1779), 1,
      aux_sym_header_value_token3,
  [11261] = 1,
    ACTIONS(1781), 1,
      aux_sym_header_value_token2,
  [11265] = 1,
    ACTIONS(1783), 1,
      aux_sym_header_value_token3,
  [11269] = 1,
    ACTIONS(1785), 1,
      anon_sym_DQUOTE,
  [11273] = 1,
    ACTIONS(1787), 1,
      sym__vertical_whitespace,
  [11277] = 1,
    ACTIONS(1789), 1,
      anon_sym_LBRACE,
  [11281] = 1,
    ACTIONS(1791), 1,
      ts_builtin_sym_end,
  [11285] = 1,
    ACTIONS(1793), 1,
      sym__vertical_whitespace,
  [11289] = 1,
    ACTIONS(1795), 1,
      sym__vertical_whitespace,
  [11293] = 1,
    ACTIONS(1483), 1,
      sym_http_error_code,
  [11297] = 1,
    ACTIONS(1797), 1,
      sym__vertical_whitespace,
  [11301] = 1,
    ACTIONS(1799), 1,
      sym__vertical_whitespace,
  [11305] = 1,
    ACTIONS(1801), 1,
      anon_sym_LBRACE,
  [11309] = 1,
    ACTIONS(1803), 1,
      anon_sym_LBRACE,
  [11313] = 1,
    ACTIONS(1805), 1,
      sym_size_number,
  [11317] = 1,
    ACTIONS(1807), 1,
      sym__vertical_whitespace,
  [11321] = 1,
    ACTIONS(1269), 1,
      anon_sym_RBRACE,
  [11325] = 1,
    ACTIONS(1809), 1,
      sym__vertical_whitespace,
  [11329] = 1,
    ACTIONS(1811), 1,
      sym__vertical_whitespace,
  [11333] = 1,
    ACTIONS(1813), 1,
      sym__vertical_whitespace,
  [11337] = 1,
    ACTIONS(1815), 1,
      sym__vertical_whitespace,
  [11341] = 1,
    ACTIONS(1817), 1,
      anon_sym_LBRACE,
  [11345] = 1,
    ACTIONS(1819), 1,
      anon_sym_LBRACE,
  [11349] = 1,
    ACTIONS(1821), 1,
      sym_size_number,
  [11353] = 1,
    ACTIONS(1823), 1,
      anon_sym_LBRACE,
  [11357] = 1,
    ACTIONS(1825), 1,
      sym__vertical_whitespace,
  [11361] = 1,
    ACTIONS(1827), 1,
      anon_sym_LBRACE,
  [11365] = 1,
    ACTIONS(1829), 1,
      sym__vertical_whitespace,
  [11369] = 1,
    ACTIONS(1831), 1,
      sym__vertical_whitespace,
  [11373] = 1,
    ACTIONS(1833), 1,
      sym__vertical_whitespace,
  [11377] = 1,
    ACTIONS(1835), 1,
      aux_sym_header_value_token2,
  [11381] = 1,
    ACTIONS(1837), 1,
      sym__vertical_whitespace,
  [11385] = 1,
    ACTIONS(1839), 1,
      anon_sym_LBRACE,
  [11389] = 1,
    ACTIONS(1841), 1,
      anon_sym_LBRACE,
  [11393] = 1,
    ACTIONS(1843), 1,
      aux_sym_header_value_token3,
  [11397] = 1,
    ACTIONS(1845), 1,
      anon_sym_LBRACE,
  [11401] = 1,
    ACTIONS(1847), 1,
      sym_size_number,
  [11405] = 1,
    ACTIONS(1849), 1,
      aux_sym_matcher_path_regexp_token2,
  [11409] = 1,
    ACTIONS(1851), 1,
      aux_sym_matcher_path_regexp_token2,
  [11413] = 1,
    ACTIONS(1853), 1,
      anon_sym_LBRACE,
  [11417] = 1,
    ACTIONS(1855), 1,
      sym__vertical_whitespace,
  [11421] = 1,
    ACTIONS(1857), 1,
      sym_http_error_code,
  [11425] = 1,
    ACTIONS(1859), 1,
      anon_sym_SQUOTE,
  [11429] = 1,
    ACTIONS(1859), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 259,
  [SMALL_STATE(6)] = 341,
  [SMALL_STATE(7)] = 423,
  [SMALL_STATE(8)] = 505,
  [SMALL_STATE(9)] = 583,
  [SMALL_STATE(10)] = 661,
  [SMALL_STATE(11)] = 739,
  [SMALL_STATE(12)] = 817,
  [SMALL_STATE(13)] = 895,
  [SMALL_STATE(14)] = 973,
  [SMALL_STATE(15)] = 1051,
  [SMALL_STATE(16)] = 1129,
  [SMALL_STATE(17)] = 1207,
  [SMALL_STATE(18)] = 1282,
  [SMALL_STATE(19)] = 1357,
  [SMALL_STATE(20)] = 1432,
  [SMALL_STATE(21)] = 1507,
  [SMALL_STATE(22)] = 1582,
  [SMALL_STATE(23)] = 1657,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1807,
  [SMALL_STATE(26)] = 1863,
  [SMALL_STATE(27)] = 1919,
  [SMALL_STATE(28)] = 1974,
  [SMALL_STATE(29)] = 2029,
  [SMALL_STATE(30)] = 2063,
  [SMALL_STATE(31)] = 2097,
  [SMALL_STATE(32)] = 2131,
  [SMALL_STATE(33)] = 2165,
  [SMALL_STATE(34)] = 2198,
  [SMALL_STATE(35)] = 2231,
  [SMALL_STATE(36)] = 2264,
  [SMALL_STATE(37)] = 2297,
  [SMALL_STATE(38)] = 2331,
  [SMALL_STATE(39)] = 2367,
  [SMALL_STATE(40)] = 2401,
  [SMALL_STATE(41)] = 2437,
  [SMALL_STATE(42)] = 2468,
  [SMALL_STATE(43)] = 2501,
  [SMALL_STATE(44)] = 2532,
  [SMALL_STATE(45)] = 2567,
  [SMALL_STATE(46)] = 2600,
  [SMALL_STATE(47)] = 2639,
  [SMALL_STATE(48)] = 2674,
  [SMALL_STATE(49)] = 2705,
  [SMALL_STATE(50)] = 2735,
  [SMALL_STATE(51)] = 2769,
  [SMALL_STATE(52)] = 2799,
  [SMALL_STATE(53)] = 2833,
  [SMALL_STATE(54)] = 2863,
  [SMALL_STATE(55)] = 2895,
  [SMALL_STATE(56)] = 2929,
  [SMALL_STATE(57)] = 2961,
  [SMALL_STATE(58)] = 2999,
  [SMALL_STATE(59)] = 3032,
  [SMALL_STATE(60)] = 3067,
  [SMALL_STATE(61)] = 3100,
  [SMALL_STATE(62)] = 3133,
  [SMALL_STATE(63)] = 3166,
  [SMALL_STATE(64)] = 3199,
  [SMALL_STATE(65)] = 3232,
  [SMALL_STATE(66)] = 3265,
  [SMALL_STATE(67)] = 3298,
  [SMALL_STATE(68)] = 3332,
  [SMALL_STATE(69)] = 3364,
  [SMALL_STATE(70)] = 3396,
  [SMALL_STATE(71)] = 3428,
  [SMALL_STATE(72)] = 3460,
  [SMALL_STATE(73)] = 3492,
  [SMALL_STATE(74)] = 3522,
  [SMALL_STATE(75)] = 3550,
  [SMALL_STATE(76)] = 3601,
  [SMALL_STATE(77)] = 3630,
  [SMALL_STATE(78)] = 3659,
  [SMALL_STATE(79)] = 3686,
  [SMALL_STATE(80)] = 3713,
  [SMALL_STATE(81)] = 3764,
  [SMALL_STATE(82)] = 3791,
  [SMALL_STATE(83)] = 3818,
  [SMALL_STATE(84)] = 3845,
  [SMALL_STATE(85)] = 3872,
  [SMALL_STATE(86)] = 3899,
  [SMALL_STATE(87)] = 3926,
  [SMALL_STATE(88)] = 3952,
  [SMALL_STATE(89)] = 3978,
  [SMALL_STATE(90)] = 4006,
  [SMALL_STATE(91)] = 4032,
  [SMALL_STATE(92)] = 4058,
  [SMALL_STATE(93)] = 4084,
  [SMALL_STATE(94)] = 4110,
  [SMALL_STATE(95)] = 4136,
  [SMALL_STATE(96)] = 4162,
  [SMALL_STATE(97)] = 4188,
  [SMALL_STATE(98)] = 4214,
  [SMALL_STATE(99)] = 4240,
  [SMALL_STATE(100)] = 4266,
  [SMALL_STATE(101)] = 4292,
  [SMALL_STATE(102)] = 4318,
  [SMALL_STATE(103)] = 4344,
  [SMALL_STATE(104)] = 4370,
  [SMALL_STATE(105)] = 4396,
  [SMALL_STATE(106)] = 4422,
  [SMALL_STATE(107)] = 4448,
  [SMALL_STATE(108)] = 4474,
  [SMALL_STATE(109)] = 4500,
  [SMALL_STATE(110)] = 4526,
  [SMALL_STATE(111)] = 4552,
  [SMALL_STATE(112)] = 4578,
  [SMALL_STATE(113)] = 4604,
  [SMALL_STATE(114)] = 4630,
  [SMALL_STATE(115)] = 4656,
  [SMALL_STATE(116)] = 4682,
  [SMALL_STATE(117)] = 4708,
  [SMALL_STATE(118)] = 4734,
  [SMALL_STATE(119)] = 4760,
  [SMALL_STATE(120)] = 4786,
  [SMALL_STATE(121)] = 4812,
  [SMALL_STATE(122)] = 4838,
  [SMALL_STATE(123)] = 4864,
  [SMALL_STATE(124)] = 4890,
  [SMALL_STATE(125)] = 4916,
  [SMALL_STATE(126)] = 4942,
  [SMALL_STATE(127)] = 4968,
  [SMALL_STATE(128)] = 4994,
  [SMALL_STATE(129)] = 5020,
  [SMALL_STATE(130)] = 5046,
  [SMALL_STATE(131)] = 5072,
  [SMALL_STATE(132)] = 5098,
  [SMALL_STATE(133)] = 5124,
  [SMALL_STATE(134)] = 5150,
  [SMALL_STATE(135)] = 5176,
  [SMALL_STATE(136)] = 5202,
  [SMALL_STATE(137)] = 5228,
  [SMALL_STATE(138)] = 5254,
  [SMALL_STATE(139)] = 5280,
  [SMALL_STATE(140)] = 5306,
  [SMALL_STATE(141)] = 5332,
  [SMALL_STATE(142)] = 5358,
  [SMALL_STATE(143)] = 5384,
  [SMALL_STATE(144)] = 5410,
  [SMALL_STATE(145)] = 5436,
  [SMALL_STATE(146)] = 5462,
  [SMALL_STATE(147)] = 5487,
  [SMALL_STATE(148)] = 5512,
  [SMALL_STATE(149)] = 5537,
  [SMALL_STATE(150)] = 5562,
  [SMALL_STATE(151)] = 5587,
  [SMALL_STATE(152)] = 5612,
  [SMALL_STATE(153)] = 5637,
  [SMALL_STATE(154)] = 5662,
  [SMALL_STATE(155)] = 5687,
  [SMALL_STATE(156)] = 5712,
  [SMALL_STATE(157)] = 5737,
  [SMALL_STATE(158)] = 5762,
  [SMALL_STATE(159)] = 5787,
  [SMALL_STATE(160)] = 5812,
  [SMALL_STATE(161)] = 5837,
  [SMALL_STATE(162)] = 5862,
  [SMALL_STATE(163)] = 5887,
  [SMALL_STATE(164)] = 5912,
  [SMALL_STATE(165)] = 5937,
  [SMALL_STATE(166)] = 5962,
  [SMALL_STATE(167)] = 5987,
  [SMALL_STATE(168)] = 6012,
  [SMALL_STATE(169)] = 6037,
  [SMALL_STATE(170)] = 6062,
  [SMALL_STATE(171)] = 6087,
  [SMALL_STATE(172)] = 6112,
  [SMALL_STATE(173)] = 6137,
  [SMALL_STATE(174)] = 6162,
  [SMALL_STATE(175)] = 6187,
  [SMALL_STATE(176)] = 6212,
  [SMALL_STATE(177)] = 6237,
  [SMALL_STATE(178)] = 6262,
  [SMALL_STATE(179)] = 6287,
  [SMALL_STATE(180)] = 6312,
  [SMALL_STATE(181)] = 6337,
  [SMALL_STATE(182)] = 6362,
  [SMALL_STATE(183)] = 6387,
  [SMALL_STATE(184)] = 6412,
  [SMALL_STATE(185)] = 6437,
  [SMALL_STATE(186)] = 6462,
  [SMALL_STATE(187)] = 6487,
  [SMALL_STATE(188)] = 6512,
  [SMALL_STATE(189)] = 6537,
  [SMALL_STATE(190)] = 6562,
  [SMALL_STATE(191)] = 6587,
  [SMALL_STATE(192)] = 6612,
  [SMALL_STATE(193)] = 6637,
  [SMALL_STATE(194)] = 6662,
  [SMALL_STATE(195)] = 6687,
  [SMALL_STATE(196)] = 6712,
  [SMALL_STATE(197)] = 6737,
  [SMALL_STATE(198)] = 6774,
  [SMALL_STATE(199)] = 6811,
  [SMALL_STATE(200)] = 6848,
  [SMALL_STATE(201)] = 6885,
  [SMALL_STATE(202)] = 6922,
  [SMALL_STATE(203)] = 6960,
  [SMALL_STATE(204)] = 6998,
  [SMALL_STATE(205)] = 7036,
  [SMALL_STATE(206)] = 7074,
  [SMALL_STATE(207)] = 7108,
  [SMALL_STATE(208)] = 7142,
  [SMALL_STATE(209)] = 7176,
  [SMALL_STATE(210)] = 7210,
  [SMALL_STATE(211)] = 7228,
  [SMALL_STATE(212)] = 7246,
  [SMALL_STATE(213)] = 7264,
  [SMALL_STATE(214)] = 7282,
  [SMALL_STATE(215)] = 7300,
  [SMALL_STATE(216)] = 7318,
  [SMALL_STATE(217)] = 7336,
  [SMALL_STATE(218)] = 7354,
  [SMALL_STATE(219)] = 7385,
  [SMALL_STATE(220)] = 7416,
  [SMALL_STATE(221)] = 7444,
  [SMALL_STATE(222)] = 7472,
  [SMALL_STATE(223)] = 7500,
  [SMALL_STATE(224)] = 7528,
  [SMALL_STATE(225)] = 7556,
  [SMALL_STATE(226)] = 7584,
  [SMALL_STATE(227)] = 7612,
  [SMALL_STATE(228)] = 7640,
  [SMALL_STATE(229)] = 7658,
  [SMALL_STATE(230)] = 7681,
  [SMALL_STATE(231)] = 7708,
  [SMALL_STATE(232)] = 7735,
  [SMALL_STATE(233)] = 7758,
  [SMALL_STATE(234)] = 7785,
  [SMALL_STATE(235)] = 7808,
  [SMALL_STATE(236)] = 7831,
  [SMALL_STATE(237)] = 7854,
  [SMALL_STATE(238)] = 7869,
  [SMALL_STATE(239)] = 7892,
  [SMALL_STATE(240)] = 7915,
  [SMALL_STATE(241)] = 7938,
  [SMALL_STATE(242)] = 7953,
  [SMALL_STATE(243)] = 7967,
  [SMALL_STATE(244)] = 7981,
  [SMALL_STATE(245)] = 7995,
  [SMALL_STATE(246)] = 8017,
  [SMALL_STATE(247)] = 8031,
  [SMALL_STATE(248)] = 8045,
  [SMALL_STATE(249)] = 8067,
  [SMALL_STATE(250)] = 8081,
  [SMALL_STATE(251)] = 8103,
  [SMALL_STATE(252)] = 8125,
  [SMALL_STATE(253)] = 8147,
  [SMALL_STATE(254)] = 8169,
  [SMALL_STATE(255)] = 8183,
  [SMALL_STATE(256)] = 8205,
  [SMALL_STATE(257)] = 8219,
  [SMALL_STATE(258)] = 8233,
  [SMALL_STATE(259)] = 8252,
  [SMALL_STATE(260)] = 8271,
  [SMALL_STATE(261)] = 8290,
  [SMALL_STATE(262)] = 8309,
  [SMALL_STATE(263)] = 8328,
  [SMALL_STATE(264)] = 8348,
  [SMALL_STATE(265)] = 8368,
  [SMALL_STATE(266)] = 8386,
  [SMALL_STATE(267)] = 8406,
  [SMALL_STATE(268)] = 8424,
  [SMALL_STATE(269)] = 8444,
  [SMALL_STATE(270)] = 8462,
  [SMALL_STATE(271)] = 8477,
  [SMALL_STATE(272)] = 8486,
  [SMALL_STATE(273)] = 8501,
  [SMALL_STATE(274)] = 8516,
  [SMALL_STATE(275)] = 8533,
  [SMALL_STATE(276)] = 8550,
  [SMALL_STATE(277)] = 8559,
  [SMALL_STATE(278)] = 8574,
  [SMALL_STATE(279)] = 8591,
  [SMALL_STATE(280)] = 8600,
  [SMALL_STATE(281)] = 8609,
  [SMALL_STATE(282)] = 8622,
  [SMALL_STATE(283)] = 8637,
  [SMALL_STATE(284)] = 8654,
  [SMALL_STATE(285)] = 8669,
  [SMALL_STATE(286)] = 8678,
  [SMALL_STATE(287)] = 8693,
  [SMALL_STATE(288)] = 8708,
  [SMALL_STATE(289)] = 8723,
  [SMALL_STATE(290)] = 8732,
  [SMALL_STATE(291)] = 8749,
  [SMALL_STATE(292)] = 8764,
  [SMALL_STATE(293)] = 8773,
  [SMALL_STATE(294)] = 8788,
  [SMALL_STATE(295)] = 8804,
  [SMALL_STATE(296)] = 8816,
  [SMALL_STATE(297)] = 8824,
  [SMALL_STATE(298)] = 8832,
  [SMALL_STATE(299)] = 8846,
  [SMALL_STATE(300)] = 8862,
  [SMALL_STATE(301)] = 8878,
  [SMALL_STATE(302)] = 8892,
  [SMALL_STATE(303)] = 8904,
  [SMALL_STATE(304)] = 8916,
  [SMALL_STATE(305)] = 8928,
  [SMALL_STATE(306)] = 8944,
  [SMALL_STATE(307)] = 8960,
  [SMALL_STATE(308)] = 8972,
  [SMALL_STATE(309)] = 8988,
  [SMALL_STATE(310)] = 9002,
  [SMALL_STATE(311)] = 9016,
  [SMALL_STATE(312)] = 9032,
  [SMALL_STATE(313)] = 9048,
  [SMALL_STATE(314)] = 9064,
  [SMALL_STATE(315)] = 9080,
  [SMALL_STATE(316)] = 9092,
  [SMALL_STATE(317)] = 9106,
  [SMALL_STATE(318)] = 9118,
  [SMALL_STATE(319)] = 9134,
  [SMALL_STATE(320)] = 9148,
  [SMALL_STATE(321)] = 9164,
  [SMALL_STATE(322)] = 9178,
  [SMALL_STATE(323)] = 9190,
  [SMALL_STATE(324)] = 9204,
  [SMALL_STATE(325)] = 9220,
  [SMALL_STATE(326)] = 9236,
  [SMALL_STATE(327)] = 9248,
  [SMALL_STATE(328)] = 9258,
  [SMALL_STATE(329)] = 9272,
  [SMALL_STATE(330)] = 9288,
  [SMALL_STATE(331)] = 9304,
  [SMALL_STATE(332)] = 9318,
  [SMALL_STATE(333)] = 9334,
  [SMALL_STATE(334)] = 9350,
  [SMALL_STATE(335)] = 9362,
  [SMALL_STATE(336)] = 9376,
  [SMALL_STATE(337)] = 9388,
  [SMALL_STATE(338)] = 9402,
  [SMALL_STATE(339)] = 9416,
  [SMALL_STATE(340)] = 9430,
  [SMALL_STATE(341)] = 9444,
  [SMALL_STATE(342)] = 9458,
  [SMALL_STATE(343)] = 9474,
  [SMALL_STATE(344)] = 9484,
  [SMALL_STATE(345)] = 9500,
  [SMALL_STATE(346)] = 9516,
  [SMALL_STATE(347)] = 9532,
  [SMALL_STATE(348)] = 9543,
  [SMALL_STATE(349)] = 9556,
  [SMALL_STATE(350)] = 9563,
  [SMALL_STATE(351)] = 9574,
  [SMALL_STATE(352)] = 9585,
  [SMALL_STATE(353)] = 9596,
  [SMALL_STATE(354)] = 9607,
  [SMALL_STATE(355)] = 9618,
  [SMALL_STATE(356)] = 9629,
  [SMALL_STATE(357)] = 9640,
  [SMALL_STATE(358)] = 9653,
  [SMALL_STATE(359)] = 9660,
  [SMALL_STATE(360)] = 9667,
  [SMALL_STATE(361)] = 9680,
  [SMALL_STATE(362)] = 9693,
  [SMALL_STATE(363)] = 9706,
  [SMALL_STATE(364)] = 9719,
  [SMALL_STATE(365)] = 9730,
  [SMALL_STATE(366)] = 9743,
  [SMALL_STATE(367)] = 9750,
  [SMALL_STATE(368)] = 9763,
  [SMALL_STATE(369)] = 9776,
  [SMALL_STATE(370)] = 9789,
  [SMALL_STATE(371)] = 9800,
  [SMALL_STATE(372)] = 9813,
  [SMALL_STATE(373)] = 9824,
  [SMALL_STATE(374)] = 9835,
  [SMALL_STATE(375)] = 9848,
  [SMALL_STATE(376)] = 9861,
  [SMALL_STATE(377)] = 9874,
  [SMALL_STATE(378)] = 9887,
  [SMALL_STATE(379)] = 9896,
  [SMALL_STATE(380)] = 9907,
  [SMALL_STATE(381)] = 9920,
  [SMALL_STATE(382)] = 9929,
  [SMALL_STATE(383)] = 9942,
  [SMALL_STATE(384)] = 9952,
  [SMALL_STATE(385)] = 9960,
  [SMALL_STATE(386)] = 9970,
  [SMALL_STATE(387)] = 9980,
  [SMALL_STATE(388)] = 9990,
  [SMALL_STATE(389)] = 9998,
  [SMALL_STATE(390)] = 10006,
  [SMALL_STATE(391)] = 10014,
  [SMALL_STATE(392)] = 10024,
  [SMALL_STATE(393)] = 10034,
  [SMALL_STATE(394)] = 10044,
  [SMALL_STATE(395)] = 10054,
  [SMALL_STATE(396)] = 10064,
  [SMALL_STATE(397)] = 10074,
  [SMALL_STATE(398)] = 10084,
  [SMALL_STATE(399)] = 10091,
  [SMALL_STATE(400)] = 10098,
  [SMALL_STATE(401)] = 10105,
  [SMALL_STATE(402)] = 10112,
  [SMALL_STATE(403)] = 10119,
  [SMALL_STATE(404)] = 10126,
  [SMALL_STATE(405)] = 10133,
  [SMALL_STATE(406)] = 10140,
  [SMALL_STATE(407)] = 10147,
  [SMALL_STATE(408)] = 10154,
  [SMALL_STATE(409)] = 10161,
  [SMALL_STATE(410)] = 10168,
  [SMALL_STATE(411)] = 10175,
  [SMALL_STATE(412)] = 10182,
  [SMALL_STATE(413)] = 10189,
  [SMALL_STATE(414)] = 10194,
  [SMALL_STATE(415)] = 10201,
  [SMALL_STATE(416)] = 10208,
  [SMALL_STATE(417)] = 10215,
  [SMALL_STATE(418)] = 10222,
  [SMALL_STATE(419)] = 10229,
  [SMALL_STATE(420)] = 10236,
  [SMALL_STATE(421)] = 10243,
  [SMALL_STATE(422)] = 10250,
  [SMALL_STATE(423)] = 10257,
  [SMALL_STATE(424)] = 10264,
  [SMALL_STATE(425)] = 10271,
  [SMALL_STATE(426)] = 10278,
  [SMALL_STATE(427)] = 10285,
  [SMALL_STATE(428)] = 10292,
  [SMALL_STATE(429)] = 10299,
  [SMALL_STATE(430)] = 10306,
  [SMALL_STATE(431)] = 10313,
  [SMALL_STATE(432)] = 10320,
  [SMALL_STATE(433)] = 10327,
  [SMALL_STATE(434)] = 10334,
  [SMALL_STATE(435)] = 10341,
  [SMALL_STATE(436)] = 10348,
  [SMALL_STATE(437)] = 10355,
  [SMALL_STATE(438)] = 10362,
  [SMALL_STATE(439)] = 10369,
  [SMALL_STATE(440)] = 10376,
  [SMALL_STATE(441)] = 10383,
  [SMALL_STATE(442)] = 10390,
  [SMALL_STATE(443)] = 10397,
  [SMALL_STATE(444)] = 10404,
  [SMALL_STATE(445)] = 10411,
  [SMALL_STATE(446)] = 10418,
  [SMALL_STATE(447)] = 10425,
  [SMALL_STATE(448)] = 10432,
  [SMALL_STATE(449)] = 10439,
  [SMALL_STATE(450)] = 10446,
  [SMALL_STATE(451)] = 10453,
  [SMALL_STATE(452)] = 10460,
  [SMALL_STATE(453)] = 10467,
  [SMALL_STATE(454)] = 10474,
  [SMALL_STATE(455)] = 10481,
  [SMALL_STATE(456)] = 10488,
  [SMALL_STATE(457)] = 10495,
  [SMALL_STATE(458)] = 10502,
  [SMALL_STATE(459)] = 10509,
  [SMALL_STATE(460)] = 10516,
  [SMALL_STATE(461)] = 10523,
  [SMALL_STATE(462)] = 10530,
  [SMALL_STATE(463)] = 10537,
  [SMALL_STATE(464)] = 10544,
  [SMALL_STATE(465)] = 10551,
  [SMALL_STATE(466)] = 10558,
  [SMALL_STATE(467)] = 10565,
  [SMALL_STATE(468)] = 10572,
  [SMALL_STATE(469)] = 10579,
  [SMALL_STATE(470)] = 10586,
  [SMALL_STATE(471)] = 10593,
  [SMALL_STATE(472)] = 10600,
  [SMALL_STATE(473)] = 10607,
  [SMALL_STATE(474)] = 10614,
  [SMALL_STATE(475)] = 10621,
  [SMALL_STATE(476)] = 10628,
  [SMALL_STATE(477)] = 10635,
  [SMALL_STATE(478)] = 10642,
  [SMALL_STATE(479)] = 10649,
  [SMALL_STATE(480)] = 10656,
  [SMALL_STATE(481)] = 10663,
  [SMALL_STATE(482)] = 10670,
  [SMALL_STATE(483)] = 10677,
  [SMALL_STATE(484)] = 10684,
  [SMALL_STATE(485)] = 10691,
  [SMALL_STATE(486)] = 10698,
  [SMALL_STATE(487)] = 10705,
  [SMALL_STATE(488)] = 10712,
  [SMALL_STATE(489)] = 10719,
  [SMALL_STATE(490)] = 10726,
  [SMALL_STATE(491)] = 10733,
  [SMALL_STATE(492)] = 10740,
  [SMALL_STATE(493)] = 10747,
  [SMALL_STATE(494)] = 10754,
  [SMALL_STATE(495)] = 10761,
  [SMALL_STATE(496)] = 10768,
  [SMALL_STATE(497)] = 10775,
  [SMALL_STATE(498)] = 10782,
  [SMALL_STATE(499)] = 10789,
  [SMALL_STATE(500)] = 10796,
  [SMALL_STATE(501)] = 10803,
  [SMALL_STATE(502)] = 10810,
  [SMALL_STATE(503)] = 10817,
  [SMALL_STATE(504)] = 10824,
  [SMALL_STATE(505)] = 10831,
  [SMALL_STATE(506)] = 10838,
  [SMALL_STATE(507)] = 10845,
  [SMALL_STATE(508)] = 10852,
  [SMALL_STATE(509)] = 10859,
  [SMALL_STATE(510)] = 10866,
  [SMALL_STATE(511)] = 10873,
  [SMALL_STATE(512)] = 10877,
  [SMALL_STATE(513)] = 10881,
  [SMALL_STATE(514)] = 10885,
  [SMALL_STATE(515)] = 10889,
  [SMALL_STATE(516)] = 10893,
  [SMALL_STATE(517)] = 10897,
  [SMALL_STATE(518)] = 10901,
  [SMALL_STATE(519)] = 10905,
  [SMALL_STATE(520)] = 10909,
  [SMALL_STATE(521)] = 10913,
  [SMALL_STATE(522)] = 10917,
  [SMALL_STATE(523)] = 10921,
  [SMALL_STATE(524)] = 10925,
  [SMALL_STATE(525)] = 10929,
  [SMALL_STATE(526)] = 10933,
  [SMALL_STATE(527)] = 10937,
  [SMALL_STATE(528)] = 10941,
  [SMALL_STATE(529)] = 10945,
  [SMALL_STATE(530)] = 10949,
  [SMALL_STATE(531)] = 10953,
  [SMALL_STATE(532)] = 10957,
  [SMALL_STATE(533)] = 10961,
  [SMALL_STATE(534)] = 10965,
  [SMALL_STATE(535)] = 10969,
  [SMALL_STATE(536)] = 10973,
  [SMALL_STATE(537)] = 10977,
  [SMALL_STATE(538)] = 10981,
  [SMALL_STATE(539)] = 10985,
  [SMALL_STATE(540)] = 10989,
  [SMALL_STATE(541)] = 10993,
  [SMALL_STATE(542)] = 10997,
  [SMALL_STATE(543)] = 11001,
  [SMALL_STATE(544)] = 11005,
  [SMALL_STATE(545)] = 11009,
  [SMALL_STATE(546)] = 11013,
  [SMALL_STATE(547)] = 11017,
  [SMALL_STATE(548)] = 11021,
  [SMALL_STATE(549)] = 11025,
  [SMALL_STATE(550)] = 11029,
  [SMALL_STATE(551)] = 11033,
  [SMALL_STATE(552)] = 11037,
  [SMALL_STATE(553)] = 11041,
  [SMALL_STATE(554)] = 11045,
  [SMALL_STATE(555)] = 11049,
  [SMALL_STATE(556)] = 11053,
  [SMALL_STATE(557)] = 11057,
  [SMALL_STATE(558)] = 11061,
  [SMALL_STATE(559)] = 11065,
  [SMALL_STATE(560)] = 11069,
  [SMALL_STATE(561)] = 11073,
  [SMALL_STATE(562)] = 11077,
  [SMALL_STATE(563)] = 11081,
  [SMALL_STATE(564)] = 11085,
  [SMALL_STATE(565)] = 11089,
  [SMALL_STATE(566)] = 11093,
  [SMALL_STATE(567)] = 11097,
  [SMALL_STATE(568)] = 11101,
  [SMALL_STATE(569)] = 11105,
  [SMALL_STATE(570)] = 11109,
  [SMALL_STATE(571)] = 11113,
  [SMALL_STATE(572)] = 11117,
  [SMALL_STATE(573)] = 11121,
  [SMALL_STATE(574)] = 11125,
  [SMALL_STATE(575)] = 11129,
  [SMALL_STATE(576)] = 11133,
  [SMALL_STATE(577)] = 11137,
  [SMALL_STATE(578)] = 11141,
  [SMALL_STATE(579)] = 11145,
  [SMALL_STATE(580)] = 11149,
  [SMALL_STATE(581)] = 11153,
  [SMALL_STATE(582)] = 11157,
  [SMALL_STATE(583)] = 11161,
  [SMALL_STATE(584)] = 11165,
  [SMALL_STATE(585)] = 11169,
  [SMALL_STATE(586)] = 11173,
  [SMALL_STATE(587)] = 11177,
  [SMALL_STATE(588)] = 11181,
  [SMALL_STATE(589)] = 11185,
  [SMALL_STATE(590)] = 11189,
  [SMALL_STATE(591)] = 11193,
  [SMALL_STATE(592)] = 11197,
  [SMALL_STATE(593)] = 11201,
  [SMALL_STATE(594)] = 11205,
  [SMALL_STATE(595)] = 11209,
  [SMALL_STATE(596)] = 11213,
  [SMALL_STATE(597)] = 11217,
  [SMALL_STATE(598)] = 11221,
  [SMALL_STATE(599)] = 11225,
  [SMALL_STATE(600)] = 11229,
  [SMALL_STATE(601)] = 11233,
  [SMALL_STATE(602)] = 11237,
  [SMALL_STATE(603)] = 11241,
  [SMALL_STATE(604)] = 11245,
  [SMALL_STATE(605)] = 11249,
  [SMALL_STATE(606)] = 11253,
  [SMALL_STATE(607)] = 11257,
  [SMALL_STATE(608)] = 11261,
  [SMALL_STATE(609)] = 11265,
  [SMALL_STATE(610)] = 11269,
  [SMALL_STATE(611)] = 11273,
  [SMALL_STATE(612)] = 11277,
  [SMALL_STATE(613)] = 11281,
  [SMALL_STATE(614)] = 11285,
  [SMALL_STATE(615)] = 11289,
  [SMALL_STATE(616)] = 11293,
  [SMALL_STATE(617)] = 11297,
  [SMALL_STATE(618)] = 11301,
  [SMALL_STATE(619)] = 11305,
  [SMALL_STATE(620)] = 11309,
  [SMALL_STATE(621)] = 11313,
  [SMALL_STATE(622)] = 11317,
  [SMALL_STATE(623)] = 11321,
  [SMALL_STATE(624)] = 11325,
  [SMALL_STATE(625)] = 11329,
  [SMALL_STATE(626)] = 11333,
  [SMALL_STATE(627)] = 11337,
  [SMALL_STATE(628)] = 11341,
  [SMALL_STATE(629)] = 11345,
  [SMALL_STATE(630)] = 11349,
  [SMALL_STATE(631)] = 11353,
  [SMALL_STATE(632)] = 11357,
  [SMALL_STATE(633)] = 11361,
  [SMALL_STATE(634)] = 11365,
  [SMALL_STATE(635)] = 11369,
  [SMALL_STATE(636)] = 11373,
  [SMALL_STATE(637)] = 11377,
  [SMALL_STATE(638)] = 11381,
  [SMALL_STATE(639)] = 11385,
  [SMALL_STATE(640)] = 11389,
  [SMALL_STATE(641)] = 11393,
  [SMALL_STATE(642)] = 11397,
  [SMALL_STATE(643)] = 11401,
  [SMALL_STATE(644)] = 11405,
  [SMALL_STATE(645)] = 11409,
  [SMALL_STATE(646)] = 11413,
  [SMALL_STATE(647)] = 11417,
  [SMALL_STATE(648)] = 11421,
  [SMALL_STATE(649)] = 11425,
  [SMALL_STATE(650)] = 11429,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(563),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(492),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(493),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(494),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(497),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(324),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(498),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(399),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(508),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(504),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(437),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(510),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(509),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(507),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(506),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(505),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(503),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(6),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(554),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(488),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(411),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(487),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(482),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(332),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(481),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(424),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(422),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(479),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(433),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(466),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(478),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(410),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(476),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(473),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(467),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(16),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(488),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(411),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(487),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(482),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(332),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(481),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(424),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(422),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(479),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(433),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(466),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(443),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(410),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(476),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(473),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(467),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(29),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(29),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(384),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(390),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(565),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(31),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(35),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(35),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(597),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(33),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 5, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 3, .production_id = 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(566),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(74),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 3, .production_id = 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 5, .production_id = 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 4, .production_id = 2),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 3, .production_id = 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(78),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(226),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 5, .production_id = 2),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 6, .production_id = 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 3, .production_id = 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(222),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encode_format, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(258),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(343),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(594),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(594),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(518),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(420),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(633),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 2, .production_id = 2),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 3),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__port_number, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 4),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 9),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 7, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 7, .production_id = 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 7, .production_id = 20),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_name, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_name, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 6, .production_id = 17),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 3, .production_id = 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 6, .production_id = 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 6, .production_id = 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 4),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 6, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_import, 4, .production_id = 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 5, .production_id = 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 5, .production_id = 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 5, .production_id = 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 5, .production_id = 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 12, .production_id = 23),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 11, .production_id = 2),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 5, .production_id = 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 7, .production_id = 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 3, .production_id = 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_error, 5, .production_id = 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 7, .production_id = 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 5, .production_id = 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 5),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 5),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 8, .production_id = 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 3, .production_id = 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 4, .production_id = 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_code, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 2, .production_id = 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 4, .production_id = 2),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 10, .production_id = 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 7, .production_id = 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 2),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 2),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [737] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 3, .production_id = 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 22),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 8, .production_id = 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 9, .production_id = 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 4),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(201),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(201),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(579),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(427),
  [789] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(490),
  [792] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(426),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(577),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(511),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(532),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(530),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 3),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [853] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 5),
  [861] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 5),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 6),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 2),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [875] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(496),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [885] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [887] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [893] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(229),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2),
  [898] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(430),
  [901] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(429),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(428),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [909] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [915] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [917] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(232),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(501),
  [925] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(499),
  [928] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(495),
  [931] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(250),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2),
  [980] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(398),
  [983] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(496),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1010] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(262),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2),
  [1015] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(448),
  [1018] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(449),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1031] = {.entry = {.count = 1, .reusable = false}}, SHIFT(583),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(533),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1041] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1045] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [1047] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_format, 4, .production_id = 16),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [1051] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 7),
  [1059] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(277),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2),
  [1064] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(421),
  [1067] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 6),
  [1069] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 3, .production_id = 16),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(545),
  [1073] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 3, .production_id = 19),
  [1075] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1081] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1083] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 4),
  [1085] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [1087] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [1089] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [1091] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_level, 4, .production_id = 16),
  [1093] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 4, .production_id = 16),
  [1097] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [1109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_auto_https, 3, .production_id = 1),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_email, 4, .production_id = 1),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(647),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [1137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [1183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(316),
  [1186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6),
  [1188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 2, .production_id = 6), SHIFT_REPEAT(349),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [1217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [1221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_matcher, 2),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [1233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2),
  [1255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(340),
  [1258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(340),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [1285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [1291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [1293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat2, 1, .production_id = 4),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(560),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [1331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(364),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [1340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 5, .production_id = 21),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [1346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(569),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [1362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [1364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(641),
  [1366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6), SHIFT_REPEAT(573),
  [1369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 6),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(605),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(643),
  [1379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(636),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [1397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(635),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(642),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(640),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(639),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(638),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(648),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(646),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(645),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(634),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(629),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 5),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_algorithm, 1),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [1767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(547),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1791] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 5, .production_id = 18),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path, 3, .production_id = 11),
  [1827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 3, .production_id = 11),
  [1831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(650),
  [1837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(649),
  [1845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
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
