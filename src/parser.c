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
#define STATE_COUNT 634
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 176
#define ALIAS_COUNT 0
#define TOKEN_COUNT 111
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 25

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
  anon_sym_handle = 52,
  anon_sym_handle_path = 53,
  anon_sym_header = 54,
  anon_sym_defer = 55,
  anon_sym_PLUS = 56,
  anon_sym_DASH = 57,
  anon_sym_QMARK = 58,
  aux_sym_header_value_token1 = 59,
  aux_sym_header_value_token2 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_header_value_token3 = 62,
  anon_sym_import = 63,
  anon_sym_log = 64,
  anon_sym_output = 65,
  anon_sym_stderr = 66,
  anon_sym_stdout = 67,
  anon_sym_discard = 68,
  anon_sym_file = 69,
  anon_sym_roll_disabled = 70,
  anon_sym_roll_size = 71,
  anon_sym_roll_uncompressed = 72,
  anon_sym_roll_local_time = 73,
  anon_sym_roll_keep = 74,
  aux_sym__log_output_file_token1 = 75,
  anon_sym_roll_keep_for_days = 76,
  aux_sym__log_output_file_token2 = 77,
  sym_size_number = 78,
  anon_sym_format = 79,
  anon_sym_console = 80,
  anon_sym_json = 81,
  anon_sym_level = 82,
  anon_sym_INFO = 83,
  anon_sym_info = 84,
  anon_sym_ERROR = 85,
  anon_sym_error = 86,
  anon_sym_redir = 87,
  anon_sym_request_body = 88,
  anon_sym_max_size = 89,
  anon_sym_reverse_proxy = 90,
  sym_uri_path_with_placeholders = 91,
  sym__valid_uri_path_string = 92,
  aux_sym_redir_code_token1 = 93,
  anon_sym_401 = 94,
  anon_sym_temporary = 95,
  anon_sym_permanent = 96,
  anon_sym_html = 97,
  anon_sym_root = 98,
  anon_sym_tls = 99,
  anon_sym_internal = 100,
  sym_email_address = 101,
  anon_sym_STAR = 102,
  anon_sym_email = 103,
  anon_sym_auto_https = 104,
  anon_sym_off = 105,
  anon_sym_disable_redirects = 106,
  anon_sym_ignore_loaded_certs = 107,
  anon_sym_disable_certs = 108,
  sym_snippet_name = 109,
  sym__eof = 110,
  sym_document = 111,
  sym__horizontal_whitespaces = 112,
  sym_site_block = 113,
  sym_site_address = 114,
  sym_protocol = 115,
  sym__ip_or_domain_address = 116,
  sym__port_number = 117,
  sym_matcher_definition = 118,
  sym_standard_matcher = 119,
  sym_matcher_path = 120,
  sym_matcher_path_regexp = 121,
  sym_directive_block = 122,
  sym_directive_abort = 123,
  sym_directive_basicauth = 124,
  sym_hash_algorithm = 125,
  sym_basicauth_credential = 126,
  sym_directive_bind = 127,
  sym_network_address_wo_port = 128,
  sym__network = 129,
  sym_unix_path = 130,
  sym_directive_encode = 131,
  sym_encode_format = 132,
  sym_directive_file_server = 133,
  sym_directive_handle = 134,
  sym_directive_handle_path = 135,
  sym_directive_header = 136,
  sym_field_manipulator = 137,
  sym_field_replace = 138,
  sym_field_add_or_set = 139,
  sym_field_delete = 140,
  sym_field_set_default = 141,
  sym_header_name = 142,
  sym_header_value = 143,
  sym_directive_import = 144,
  sym_directive_log = 145,
  sym_log_option_output = 146,
  sym__log_output_file = 147,
  sym_log_option_format = 148,
  sym_log_option_level = 149,
  sym_directive_redir = 150,
  sym_directive_request_body = 151,
  sym_redir_or_rewrite_target = 152,
  sym_directive_reverse_proxy = 153,
  sym_redir_code = 154,
  sym_directive_root = 155,
  sym_directive_tls = 156,
  sym_matcher_token = 157,
  sym_global_options_block = 158,
  sym_global_option_email = 159,
  sym_global_option_auto_https = 160,
  sym_snippet = 161,
  aux_sym_document_repeat1 = 162,
  aux_sym_site_block_repeat1 = 163,
  aux_sym_matcher_definition_repeat1 = 164,
  aux_sym_directive_basicauth_repeat1 = 165,
  aux_sym_directive_bind_repeat1 = 166,
  aux_sym_directive_encode_repeat1 = 167,
  aux_sym_directive_file_server_repeat1 = 168,
  aux_sym_directive_handle_repeat1 = 169,
  aux_sym_directive_header_repeat1 = 170,
  aux_sym_directive_log_repeat1 = 171,
  aux_sym__log_output_file_repeat1 = 172,
  aux_sym_directive_request_body_repeat1 = 173,
  aux_sym_directive_reverse_proxy_repeat1 = 174,
  aux_sym_global_options_block_repeat1 = 175,
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
  [anon_sym_error] = "error",
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
  [anon_sym_error] = anon_sym_error,
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
  [anon_sym_error] = {
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
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 3},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 1},
  [18] = {.index = 29, .length = 3},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 2},
  [21] = {.index = 36, .length = 3},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive_type, 0},
  [1] =
    {field_global_option_type, 0},
  [2] =
    {field_path_matcher, 0},
  [3] =
    {field_file_server_option_browse, 0},
  [4] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 2},
  [6] =
    {field_address_target, 0},
  [7] =
    {field_uri_path_target, 0},
  [8] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 2, .inherited = true},
  [10] =
    {field_file_server_option_browse, 0, .inherited = true},
    {field_file_server_option_browse, 1, .inherited = true},
  [12] =
    {field_address_target, 0},
    {field_address_target, 1},
  [14] =
    {field_matcher_type, 0},
  [15] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 4},
  [17] =
    {field_address_target, 0},
    {field_address_target, 1},
    {field_address_target, 2},
  [20] =
    {field_cert_file, 2},
    {field_directive_type, 0},
    {field_key_file, 4},
  [23] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 2},
    {field_file_server_option_browse, 4, .inherited = true},
  [26] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 4, .inherited = true},
  [28] =
    {field_log_option_type, 0},
  [29] =
    {field_cert_file, 3},
    {field_directive_type, 0},
    {field_key_file, 5},
  [32] =
    {field_matcher_type, 0},
    {field_path_regexp_matcher_name, 2},
  [34] =
    {field_basicauth_user_name, 0},
    {field_basicauth_user_pass, 2},
  [36] =
    {field_directive_type, 0},
    {field_file_server_option_browse, 4},
    {field_file_server_option_browse, 6, .inherited = true},
  [39] =
    {field_basicauth_user_name, 0},
    {field_basicauth_user_pass, 2},
    {field_basicauth_user_pass_saltb64, 4},
  [42] =
    {field_basicauth_realm_name, 4},
    {field_directive_type, 0},
  [44] =
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
  [9] = 8,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 19,
  [22] = 18,
  [23] = 17,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 25,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 30,
  [34] = 29,
  [35] = 31,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 40,
  [42] = 39,
  [43] = 43,
  [44] = 38,
  [45] = 45,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 38,
  [50] = 46,
  [51] = 45,
  [52] = 43,
  [53] = 53,
  [54] = 40,
  [55] = 55,
  [56] = 48,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 53,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 63,
  [72] = 66,
  [73] = 64,
  [74] = 74,
  [75] = 60,
  [76] = 68,
  [77] = 77,
  [78] = 61,
  [79] = 59,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 70,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 82,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 80,
  [95] = 95,
  [96] = 81,
  [97] = 97,
  [98] = 95,
  [99] = 30,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 90,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 91,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 32,
  [131] = 131,
  [132] = 84,
  [133] = 133,
  [134] = 85,
  [135] = 135,
  [136] = 86,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 92,
  [143] = 143,
  [144] = 88,
  [145] = 85,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 88,
  [151] = 89,
  [152] = 152,
  [153] = 153,
  [154] = 93,
  [155] = 149,
  [156] = 104,
  [157] = 32,
  [158] = 30,
  [159] = 138,
  [160] = 140,
  [161] = 137,
  [162] = 85,
  [163] = 135,
  [164] = 107,
  [165] = 143,
  [166] = 128,
  [167] = 133,
  [168] = 131,
  [169] = 129,
  [170] = 127,
  [171] = 126,
  [172] = 125,
  [173] = 102,
  [174] = 108,
  [175] = 116,
  [176] = 119,
  [177] = 118,
  [178] = 97,
  [179] = 105,
  [180] = 124,
  [181] = 122,
  [182] = 147,
  [183] = 114,
  [184] = 117,
  [185] = 120,
  [186] = 121,
  [187] = 123,
  [188] = 100,
  [189] = 101,
  [190] = 139,
  [191] = 152,
  [192] = 106,
  [193] = 109,
  [194] = 110,
  [195] = 141,
  [196] = 111,
  [197] = 112,
  [198] = 115,
  [199] = 146,
  [200] = 148,
  [201] = 153,
  [202] = 88,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 209,
  [213] = 208,
  [214] = 210,
  [215] = 211,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 116,
  [223] = 223,
  [224] = 224,
  [225] = 224,
  [226] = 82,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 227,
  [231] = 231,
  [232] = 229,
  [233] = 231,
  [234] = 228,
  [235] = 235,
  [236] = 85,
  [237] = 88,
  [238] = 238,
  [239] = 238,
  [240] = 238,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 242,
  [245] = 245,
  [246] = 243,
  [247] = 247,
  [248] = 125,
  [249] = 102,
  [250] = 250,
  [251] = 251,
  [252] = 88,
  [253] = 253,
  [254] = 124,
  [255] = 255,
  [256] = 255,
  [257] = 110,
  [258] = 258,
  [259] = 147,
  [260] = 85,
  [261] = 253,
  [262] = 119,
  [263] = 258,
  [264] = 264,
  [265] = 265,
  [266] = 265,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 270,
  [272] = 272,
  [273] = 270,
  [274] = 269,
  [275] = 272,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 281,
  [289] = 279,
  [290] = 290,
  [291] = 276,
  [292] = 276,
  [293] = 293,
  [294] = 294,
  [295] = 286,
  [296] = 283,
  [297] = 285,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 301,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 306,
  [310] = 308,
  [311] = 298,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 317,
  [319] = 316,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 313,
  [331] = 328,
  [332] = 332,
  [333] = 322,
  [334] = 334,
  [335] = 334,
  [336] = 312,
  [337] = 337,
  [338] = 299,
  [339] = 339,
  [340] = 329,
  [341] = 324,
  [342] = 323,
  [343] = 315,
  [344] = 314,
  [345] = 327,
  [346] = 304,
  [347] = 303,
  [348] = 300,
  [349] = 302,
  [350] = 320,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 354,
  [360] = 355,
  [361] = 361,
  [362] = 353,
  [363] = 363,
  [364] = 364,
  [365] = 355,
  [366] = 361,
  [367] = 367,
  [368] = 368,
  [369] = 353,
  [370] = 354,
  [371] = 351,
  [372] = 372,
  [373] = 356,
  [374] = 361,
  [375] = 368,
  [376] = 358,
  [377] = 321,
  [378] = 378,
  [379] = 379,
  [380] = 357,
  [381] = 381,
  [382] = 363,
  [383] = 367,
  [384] = 364,
  [385] = 379,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 390,
  [396] = 391,
  [397] = 389,
  [398] = 388,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 402,
  [406] = 403,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 30,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 32,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 429,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 432,
  [436] = 433,
  [437] = 401,
  [438] = 434,
  [439] = 425,
  [440] = 421,
  [441] = 423,
  [442] = 442,
  [443] = 443,
  [444] = 412,
  [445] = 421,
  [446] = 423,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 400,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 414,
  [456] = 448,
  [457] = 442,
  [458] = 452,
  [459] = 453,
  [460] = 404,
  [461] = 409,
  [462] = 434,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 466,
  [469] = 469,
  [470] = 470,
  [471] = 443,
  [472] = 472,
  [473] = 454,
  [474] = 442,
  [475] = 432,
  [476] = 476,
  [477] = 399,
  [478] = 433,
  [479] = 479,
  [480] = 427,
  [481] = 481,
  [482] = 482,
  [483] = 428,
  [484] = 466,
  [485] = 481,
  [486] = 413,
  [487] = 479,
  [488] = 476,
  [489] = 431,
  [490] = 399,
  [491] = 407,
  [492] = 411,
  [493] = 470,
  [494] = 494,
  [495] = 464,
  [496] = 469,
  [497] = 472,
  [498] = 449,
  [499] = 443,
  [500] = 463,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 93,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 502,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 516,
  [526] = 526,
  [527] = 503,
  [528] = 528,
  [529] = 522,
  [530] = 526,
  [531] = 503,
  [532] = 522,
  [533] = 526,
  [534] = 503,
  [535] = 522,
  [536] = 526,
  [537] = 503,
  [538] = 538,
  [539] = 528,
  [540] = 540,
  [541] = 541,
  [542] = 102,
  [543] = 543,
  [544] = 544,
  [545] = 522,
  [546] = 546,
  [547] = 520,
  [548] = 520,
  [549] = 509,
  [550] = 550,
  [551] = 517,
  [552] = 508,
  [553] = 503,
  [554] = 526,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 517,
  [559] = 512,
  [560] = 510,
  [561] = 501,
  [562] = 516,
  [563] = 563,
  [564] = 564,
  [565] = 514,
  [566] = 566,
  [567] = 567,
  [568] = 526,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 507,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 574,
  [578] = 538,
  [579] = 514,
  [580] = 509,
  [581] = 546,
  [582] = 582,
  [583] = 32,
  [584] = 567,
  [585] = 502,
  [586] = 509,
  [587] = 567,
  [588] = 502,
  [589] = 509,
  [590] = 567,
  [591] = 502,
  [592] = 509,
  [593] = 567,
  [594] = 502,
  [595] = 30,
  [596] = 506,
  [597] = 570,
  [598] = 598,
  [599] = 599,
  [600] = 522,
  [601] = 601,
  [602] = 602,
  [603] = 603,
  [604] = 604,
  [605] = 605,
  [606] = 606,
  [607] = 573,
  [608] = 604,
  [609] = 601,
  [610] = 571,
  [611] = 95,
  [612] = 501,
  [613] = 89,
  [614] = 614,
  [615] = 538,
  [616] = 598,
  [617] = 505,
  [618] = 92,
  [619] = 544,
  [620] = 602,
  [621] = 621,
  [622] = 622,
  [623] = 556,
  [624] = 603,
  [625] = 575,
  [626] = 563,
  [627] = 622,
  [628] = 628,
  [629] = 629,
  [630] = 605,
  [631] = 631,
  [632] = 632,
  [633] = 567,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(712);
      if (lookahead == '\n') ADVANCE(715);
      if (lookahead == '\f') ADVANCE(715);
      if (lookahead == '\r') ADVANCE(715);
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(719);
      if (lookahead == '\'') ADVANCE(1167);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '+') ADVANCE(1160);
      if (lookahead == '-') ADVANCE(1161);
      if (lookahead == '/') ADVANCE(911);
      if (lookahead == '1') ADVANCE(873);
      if (lookahead == '2') ADVANCE(867);
      if (lookahead == '3') ADVANCE(870);
      if (lookahead == '4') ADVANCE(919);
      if (lookahead == '6') ADVANCE(921);
      if (lookahead == ':') ADVANCE(863);
      if (lookahead == '?') ADVANCE(1163);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'E') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == 'z') ADVANCE(632);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(715);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == 8232) ADVANCE(715);
      if (lookahead == 8233) ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
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
      if (lookahead == '\n') ADVANCE(715);
      if (lookahead == '\f') ADVANCE(715);
      if (lookahead == '\r') ADVANCE(715);
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(719);
      if (lookahead == '\'') ADVANCE(1167);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '+') ADVANCE(1160);
      if (lookahead == '-') ADVANCE(1161);
      if (lookahead == '/') ADVANCE(911);
      if (lookahead == '1') ADVANCE(873);
      if (lookahead == '2') ADVANCE(867);
      if (lookahead == '3') ADVANCE(870);
      if (lookahead == '4') ADVANCE(919);
      if (lookahead == '6') ADVANCE(921);
      if (lookahead == ':') ADVANCE(863);
      if (lookahead == '?') ADVANCE(1163);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'E') ADVANCE(367);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'c') ADVANCE(554);
      if (lookahead == 'd') ADVANCE(442);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(498);
      if (lookahead == 'g') ADVANCE(596);
      if (lookahead == 'h') ADVANCE(403);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead == 'j') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(443);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(487);
      if (lookahead == 'p') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'u') ADVANCE(431);
      if (lookahead == 'z') ADVANCE(632);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(715);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == 8232) ADVANCE(715);
      if (lookahead == 8233) ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(870);
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
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1472);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1472);
      if ((1 <= lookahead && lookahead <= 11) ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1473);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1474);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1474);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1474);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1474);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1474);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
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
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '5') ADVANCE(23);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '5') ADVANCE(28);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1473);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
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
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1169);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(39)
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1170);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1165);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(40)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1166);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(935);
      if (lookahead == '2') ADVANCE(931);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 'h') ADVANCE(1055);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1059);
      if (lookahead == 'u') ADVANCE(1064);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1045);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(935);
      if (lookahead == '2') ADVANCE(931);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(1037);
      if (lookahead == 'b') ADVANCE(1036);
      if (lookahead == 'e') ADVANCE(1040);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 'h') ADVANCE(1055);
      if (lookahead == 'i') ADVANCE(1089);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1059);
      if (lookahead == 'u') ADVANCE(1064);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1045);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(1057);
      if (lookahead == 'b') ADVANCE(1053);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead == 'f') ADVANCE(1082);
      if (lookahead == 'h') ADVANCE(1055);
      if (lookahead == 'i') ADVANCE(1090);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1086);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(1057);
      if (lookahead == 'b') ADVANCE(1053);
      if (lookahead == 'e') ADVANCE(1091);
      if (lookahead == 'f') ADVANCE(1082);
      if (lookahead == 'h') ADVANCE(1055);
      if (lookahead == 'i') ADVANCE(1090);
      if (lookahead == 'l') ADVANCE(1094);
      if (lookahead == 'r') ADVANCE(1069);
      if (lookahead == 't') ADVANCE(1086);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '\'') ADVANCE(1168);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(45)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(1164);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '/') ADVANCE(930);
      if (lookahead == '@') ADVANCE(882);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '1') ADVANCE(935);
      if (lookahead == '2') ADVANCE(931);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(1039);
      if (lookahead == 'i') ADVANCE(1101);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead == 'u') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1045);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(926);
      if (lookahead == '1') ADVANCE(935);
      if (lookahead == '2') ADVANCE(931);
      if (lookahead == ':') ADVANCE(327);
      if (lookahead == 'f') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(933);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1045);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(926);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(927);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'f') ADVANCE(971);
      if (lookahead == 'h') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == 'l') ADVANCE(983);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '}') ADVANCE(726);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(50);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(927);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(947);
      if (lookahead == 'b') ADVANCE(941);
      if (lookahead == 'e') ADVANCE(979);
      if (lookahead == 'f') ADVANCE(971);
      if (lookahead == 'h') ADVANCE(943);
      if (lookahead == 'i') ADVANCE(978);
      if (lookahead == 'l') ADVANCE(983);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead == 't') ADVANCE(976);
      if (lookahead == '}') ADVANCE(726);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(710);
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
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(279);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '3') ADVANCE(1447);
      if (lookahead == '4') ADVANCE(1350);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'a') ADVANCE(1362);
      if (lookahead == 'b') ADVANCE(1355);
      if (lookahead == 'e') ADVANCE(1398);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'h') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(1394);
      if (lookahead == 'l') ADVANCE(1403);
      if (lookahead == 'p') ADVANCE(1372);
      if (lookahead == 'r') ADVANCE(1373);
      if (lookahead == 't') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(54);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '3') ADVANCE(1447);
      if (lookahead == '4') ADVANCE(1350);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'a') ADVANCE(1362);
      if (lookahead == 'b') ADVANCE(1355);
      if (lookahead == 'e') ADVANCE(1398);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'h') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(1394);
      if (lookahead == 'l') ADVANCE(1403);
      if (lookahead == 'p') ADVANCE(1372);
      if (lookahead == 'r') ADVANCE(1373);
      if (lookahead == 't') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(55);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '3') ADVANCE(1447);
      if (lookahead == '4') ADVANCE(1350);
      if (lookahead == 'a') ADVANCE(1362);
      if (lookahead == 'b') ADVANCE(1355);
      if (lookahead == 'e') ADVANCE(1398);
      if (lookahead == 'f') ADVANCE(1388);
      if (lookahead == 'h') ADVANCE(1357);
      if (lookahead == 'i') ADVANCE(1394);
      if (lookahead == 'l') ADVANCE(1403);
      if (lookahead == 'p') ADVANCE(1372);
      if (lookahead == 'r') ADVANCE(1373);
      if (lookahead == 't') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
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
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == ':') ADVANCE(864);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == '3') ADVANCE(692);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'f') ADVANCE(510);
      if (lookahead == 'g') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(482);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == 'z') ADVANCE(632);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(58);
      END_STATE();
    case 59:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1160);
      if (lookahead == '-') ADVANCE(1162);
      if (lookahead == '?') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(900);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(715);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1160);
      if (lookahead == '-') ADVANCE(1162);
      if (lookahead == '?') ADVANCE(1163);
      if (lookahead == 'd') ADVANCE(900);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(715);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(715);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '3') ADVANCE(692);
      if (lookahead == '4') ADVANCE(313);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(410);
      if (lookahead == 'b') ADVANCE(388);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'f') ADVANCE(511);
      if (lookahead == 'g') ADVANCE(677);
      if (lookahead == 'h') ADVANCE(404);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead == 'p') ADVANCE(400);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == 't') ADVANCE(447);
      if (lookahead == 'z') ADVANCE(632);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(61);
      END_STATE();
    case 62:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'f') ADVANCE(510);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead == 'p') ADVANCE(399);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(714);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead == 'b') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(542);
      if (lookahead == 'f') ADVANCE(510);
      if (lookahead == 'h') ADVANCE(402);
      if (lookahead == 'i') ADVANCE(531);
      if (lookahead == 'l') ADVANCE(556);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead == 't') ADVANCE(522);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == 133) ADVANCE(716);
      if (lookahead == 134) ADVANCE(717);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(714);
      END_STATE();
    case 64:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '}') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(717);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(718);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(887);
      if (lookahead != 0) ADVANCE(891);
      END_STATE();
    case 65:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '}') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(717);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(718);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(713);
      if (lookahead != 0) ADVANCE(891);
      END_STATE();
    case 66:
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(717);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(718);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(888);
      if (lookahead != 0) ADVANCE(891);
      END_STATE();
    case 67:
      if (lookahead == '%') ADVANCE(708);
      END_STATE();
    case 68:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 69:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(767);
      END_STATE();
    case 72:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(775);
      END_STATE();
    case 80:
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == '%') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 82:
      if (lookahead == '%') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '%') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(779);
      END_STATE();
    case 84:
      if (lookahead == '%') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 85:
      if (lookahead == '%') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '*') ADVANCE(1478);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == '@') ADVANCE(881);
      if (lookahead == 'h') ADVANCE(1219);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(86)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 87:
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(1219);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(87)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 88:
      if (lookahead == ')') ADVANCE(1485);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 89:
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '+') ADVANCE(1160);
      if (lookahead == '-') ADVANCE(1162);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == '?') ADVANCE(1163);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == '{') ADVANCE(724);
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
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '5') ADVANCE(259);
      if (lookahead == ':') ADVANCE(328);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(263);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 't') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(862);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '5') ADVANCE(270);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(324);
      if (lookahead == '5') ADVANCE(273);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(709);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(278);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1475);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '2') ADVANCE(118);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '5') ADVANCE(119);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ']') ADVANCE(1471);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ']') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(122);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ']') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ']') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == ']') ADVANCE(1471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      if (lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 130:
      if (lookahead == '-') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 132:
      if (lookahead == '-') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 133:
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      if (lookahead == '-') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == '-') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 137:
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      if (lookahead == '-') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == '-') ADVANCE(134);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == '-') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 141:
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      if (lookahead == '-') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 144:
      if (lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 145:
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 146:
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 147:
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 148:
      if (lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == '-') ADVANCE(152);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 150:
      if (lookahead == '-') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 152:
      if (lookahead == '-') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 154:
      if (lookahead == '-') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 156:
      if (lookahead == '-') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(149);
      END_STATE();
    case 157:
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 158:
      if (lookahead == '-') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 160:
      if (lookahead == '-') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(153);
      END_STATE();
    case 161:
      if (lookahead == '-') ADVANCE(164);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 162:
      if (lookahead == '-') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == '-') ADVANCE(158);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 164:
      if (lookahead == '-') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 165:
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 166:
      if (lookahead == '-') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 168:
      if (lookahead == '-') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(161);
      END_STATE();
    case 169:
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      if (lookahead == '-') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 172:
      if (lookahead == '-') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 173:
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 176:
      if (lookahead == '-') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      if (lookahead == '-') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == '-') ADVANCE(174);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 180:
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 181:
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 184:
      if (lookahead == '-') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 185:
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == '-') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(200);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(204);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(197);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(207);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(202);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(212);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(211);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(216);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(210);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(229);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 't') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(221);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'h') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(237);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '0') ADVANCE(253);
      if (lookahead == ':') ADVANCE(328);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '_') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 's') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '_') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(235);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(234);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(239);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '8') ADVANCE(240);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 263:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 265:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 266:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 267:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 268:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == 'x') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 269:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(248);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 272:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 273:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(249);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 274:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 275:
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 276:
      if (lookahead == '-') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 277:
      if (lookahead == '.') ADVANCE(686);
      END_STATE();
    case 278:
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(279);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(117);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '5') ADVANCE(282);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(283);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(318);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '5') ADVANCE(287);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(288);
      END_STATE();
    case 287:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(285);
      END_STATE();
    case 288:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 289:
      if (lookahead == '.') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == '.') ADVANCE(321);
      END_STATE();
    case 291:
      if (lookahead == '.') ADVANCE(290);
      END_STATE();
    case 292:
      if (lookahead == '.') ADVANCE(323);
      END_STATE();
    case 293:
      if (lookahead == '.') ADVANCE(323);
      if (lookahead == '5') ADVANCE(294);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(295);
      END_STATE();
    case 294:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(292);
      END_STATE();
    case 295:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 296:
      if (lookahead == '.') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 297:
      if (lookahead == '.') ADVANCE(315);
      END_STATE();
    case 298:
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '5') ADVANCE(299);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(301);
      END_STATE();
    case 299:
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(297);
      END_STATE();
    case 300:
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 301:
      if (lookahead == '.') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 302:
      if (lookahead == '.') ADVANCE(316);
      END_STATE();
    case 303:
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '5') ADVANCE(304);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(306);
      END_STATE();
    case 304:
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(302);
      END_STATE();
    case 305:
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 307:
      if (lookahead == '/') ADVANCE(911);
      if (lookahead == '4') ADVANCE(918);
      if (lookahead == '6') ADVANCE(920);
      if (lookahead == 'd') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(512);
      if (lookahead == 's') ADVANCE(636);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(307)
      END_STATE();
    case 308:
      if (lookahead == '/') ADVANCE(734);
      END_STATE();
    case 309:
      if (lookahead == '/') ADVANCE(735);
      END_STATE();
    case 310:
      if (lookahead == '/') ADVANCE(308);
      END_STATE();
    case 311:
      if (lookahead == '/') ADVANCE(309);
      END_STATE();
    case 312:
      if (lookahead == '0') ADVANCE(780);
      if (lookahead == '1') ADVANCE(812);
      if (lookahead == '2') ADVANCE(786);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 313:
      if (lookahead == '0') ADVANCE(322);
      END_STATE();
    case 314:
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == '1') ADVANCE(305);
      if (lookahead == '2') ADVANCE(303);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 315:
      if (lookahead == '0') ADVANCE(280);
      if (lookahead == '1') ADVANCE(284);
      if (lookahead == '2') ADVANCE(281);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 316:
      if (lookahead == '0') ADVANCE(297);
      if (lookahead == '1') ADVANCE(300);
      if (lookahead == '2') ADVANCE(298);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 317:
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 318:
      if (lookahead == '1') ADVANCE(752);
      if (lookahead == '2') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      END_STATE();
    case 319:
      if (lookahead == '1') ADVANCE(107);
      if (lookahead == '2') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 320:
      if (lookahead == '1') ADVANCE(741);
      if (lookahead == '2') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 321:
      if (lookahead == '1') ADVANCE(855);
      if (lookahead == '2') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 322:
      if (lookahead == '1') ADVANCE(1452);
      END_STATE();
    case 323:
      if (lookahead == '1') ADVANCE(289);
      if (lookahead == '2') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 324:
      if (lookahead == '1') ADVANCE(104);
      if (lookahead == '2') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 325:
      if (lookahead == '1') ADVANCE(806);
      if (lookahead == '2') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(310);
      if (lookahead == 's') ADVANCE(344);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(356);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(330);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(331);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(340);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(311);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(357);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(358);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(359);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(353);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(354);
      END_STATE();
    case 356:
      if (lookahead == ':') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 357:
      if (lookahead == ':') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 358:
      if (lookahead == ':') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 359:
      if (lookahead == ':') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 360:
      if (lookahead == '@') ADVANCE(368);
      END_STATE();
    case 361:
      if (lookahead == 'F') ADVANCE(363);
      END_STATE();
    case 362:
      if (lookahead == 'N') ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == 'O') ADVANCE(1202);
      END_STATE();
    case 364:
      if (lookahead == 'O') ADVANCE(366);
      END_STATE();
    case 365:
      if (lookahead == 'R') ADVANCE(364);
      END_STATE();
    case 366:
      if (lookahead == 'R') ADVANCE(1204);
      END_STATE();
    case 367:
      if (lookahead == 'R') ADVANCE(365);
      END_STATE();
    case 368:
      if (lookahead == '[') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 369:
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(1476);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(369);
      END_STATE();
    case 370:
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(1476);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(369);
      END_STATE();
    case 371:
      if (lookahead == '\\') ADVANCE(370);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(369);
      END_STATE();
    case 372:
      if (lookahead == '_') ADVANCE(434);
      END_STATE();
    case 373:
      if (lookahead == '_') ADVANCE(423);
      END_STATE();
    case 374:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 375:
      if (lookahead == '_') ADVANCE(411);
      END_STATE();
    case 376:
      if (lookahead == '_') ADVANCE(424);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(525);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 379:
      if (lookahead == '_') ADVANCE(582);
      END_STATE();
    case 380:
      if (lookahead == '_') ADVANCE(437);
      END_STATE();
    case 381:
      if (lookahead == '_') ADVANCE(654);
      END_STATE();
    case 382:
      if (lookahead == '_') ADVANCE(623);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(414);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'c') ADVANCE(587);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead == 'r') ADVANCE(552);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(532);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(502);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(521);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(641);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(517);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(651);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(637);
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 401:
      if (lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 402:
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 403:
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 't') ADVANCE(536);
      END_STATE();
    case 404:
      if (lookahead == 'a') ADVANCE(545);
      if (lookahead == 'e') ADVANCE(391);
      if (lookahead == 't') ADVANCE(535);
      END_STATE();
    case 405:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 406:
      if (lookahead == 'a') ADVANCE(438);
      END_STATE();
    case 407:
      if (lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 408:
      if (lookahead == 'a') ADVANCE(413);
      END_STATE();
    case 409:
      if (lookahead == 'b') ADVANCE(558);
      END_STATE();
    case 410:
      if (lookahead == 'b') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(648);
      END_STATE();
    case 411:
      if (lookahead == 'b') ADVANCE(565);
      END_STATE();
    case 412:
      if (lookahead == 'b') ADVANCE(527);
      END_STATE();
    case 413:
      if (lookahead == 'b') ADVANCE(528);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(513);
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(573);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(563);
      END_STATE();
    case 417:
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'g') ADVANCE(1176);
      END_STATE();
    case 418:
      if (lookahead == 'c') ADVANCE(397);
      END_STATE();
    case 419:
      if (lookahead == 'c') ADVANCE(407);
      END_STATE();
    case 420:
      if (lookahead == 'c') ADVANCE(561);
      END_STATE();
    case 421:
      if (lookahead == 'c') ADVANCE(405);
      END_STATE();
    case 422:
      if (lookahead == 'c') ADVANCE(657);
      END_STATE();
    case 423:
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 424:
      if (lookahead == 'c') ADVANCE(484);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(907);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(1140);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(1183);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(1186);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(1188);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(472);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(574);
      if (lookahead == 'n') ADVANCE(501);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(673);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(505);
      if (lookahead == 'q') ADVANCE(661);
      if (lookahead == 'v') ADVANCE(470);
      END_STATE();
    case 434:
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead == 'k') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(568);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 435:
      if (lookahead == 'd') ADVANCE(450);
      END_STATE();
    case 436:
      if (lookahead == 'd') ADVANCE(376);
      END_STATE();
    case 437:
      if (lookahead == 'd') ADVANCE(392);
      END_STATE();
    case 438:
      if (lookahead == 'd') ADVANCE(471);
      END_STATE();
    case 439:
      if (lookahead == 'd') ADVANCE(523);
      END_STATE();
    case 440:
      if (lookahead == 'd') ADVANCE(509);
      END_STATE();
    case 441:
      if (lookahead == 'd') ADVANCE(475);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead == 'i') ADVANCE(615);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(417);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(519);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'o') ADVANCE(557);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(1149);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(1199);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(1214);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(1187);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(1189);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(1184);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(671);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(588);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(516);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(598);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(548);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(440);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(607);
      if (lookahead == 'o') ADVANCE(663);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(429);
      END_STATE();
    case 477:
      if (lookahead == 'e') ADVANCE(633);
      END_STATE();
    case 478:
      if (lookahead == 'e') ADVANCE(611);
      END_STATE();
    case 479:
      if (lookahead == 'e') ADVANCE(473);
      END_STATE();
    case 480:
      if (lookahead == 'e') ADVANCE(593);
      END_STATE();
    case 481:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 482:
      if (lookahead == 'e') ADVANCE(613);
      END_STATE();
    case 483:
      if (lookahead == 'e') ADVANCE(608);
      END_STATE();
    case 484:
      if (lookahead == 'e') ADVANCE(609);
      END_STATE();
    case 485:
      if (lookahead == 'f') ADVANCE(461);
      END_STATE();
    case 486:
      if (lookahead == 'f') ADVANCE(1481);
      END_STATE();
    case 487:
      if (lookahead == 'f') ADVANCE(486);
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 488:
      if (lookahead == 'f') ADVANCE(553);
      if (lookahead == 't') ADVANCE(465);
      END_STATE();
    case 489:
      if (lookahead == 'f') ADVANCE(567);
      END_STATE();
    case 490:
      if (lookahead == 'g') ADVANCE(1176);
      END_STATE();
    case 491:
      if (lookahead == 'g') ADVANCE(551);
      if (lookahead == 'm') ADVANCE(586);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead == 'p') ADVANCE(916);
      END_STATE();
    case 492:
      if (lookahead == 'g') ADVANCE(459);
      END_STATE();
    case 493:
      if (lookahead == 'h') ADVANCE(883);
      END_STATE();
    case 494:
      if (lookahead == 'h') ADVANCE(896);
      END_STATE();
    case 495:
      if (lookahead == 'h') ADVANCE(1150);
      END_STATE();
    case 496:
      if (lookahead == 'h') ADVANCE(571);
      END_STATE();
    case 497:
      if (lookahead == 'h') ADVANCE(659);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(518);
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(678);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(419);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(669);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(515);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 505:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 506:
      if (lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 507:
      if (lookahead == 'i') ADVANCE(634);
      END_STATE();
    case 508:
      if (lookahead == 'i') ADVANCE(679);
      END_STATE();
    case 509:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 510:
      if (lookahead == 'i') ADVANCE(529);
      END_STATE();
    case 511:
      if (lookahead == 'i') ADVANCE(529);
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 512:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 513:
      if (lookahead == 'k') ADVANCE(469);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(1459);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(1479);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(1201);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(1469);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(520);
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(496);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(616);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 524:
      if (lookahead == 'l') ADVANCE(381);
      END_STATE();
    case 525:
      if (lookahead == 'l') ADVANCE(569);
      END_STATE();
    case 526:
      if (lookahead == 'l') ADVANCE(452);
      END_STATE();
    case 527:
      if (lookahead == 'l') ADVANCE(463);
      END_STATE();
    case 528:
      if (lookahead == 'l') ADVANCE(474);
      END_STATE();
    case 529:
      if (lookahead == 'l') ADVANCE(481);
      END_STATE();
    case 530:
      if (lookahead == 'l') ADVANCE(457);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(924);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 'r') ADVANCE(612);
      END_STATE();
    case 535:
      if (lookahead == 'm') ADVANCE(514);
      END_STATE();
    case 536:
      if (lookahead == 'm') ADVANCE(514);
      if (lookahead == 't') ADVANCE(576);
      END_STATE();
    case 537:
      if (lookahead == 'm') ADVANCE(395);
      END_STATE();
    case 538:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 539:
      if (lookahead == 'm') ADVANCE(456);
      END_STATE();
    case 540:
      if (lookahead == 'm') ADVANCE(583);
      END_STATE();
    case 541:
      if (lookahead == 'm') ADVANCE(585);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(416);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(425);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(439);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(466);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(647);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(420);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(396);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(564);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(667);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(1203);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(546);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(374);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(638);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(597);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(543);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(540);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(435);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(601);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(432);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(604);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(421);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(406);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(912);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(914);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(1139);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(326);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(1190);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(884);
      END_STATE();
    case 579:
      if (lookahead == 'p') ADVANCE(662);
      END_STATE();
    case 580:
      if (lookahead == 'p') ADVANCE(640);
      END_STATE();
    case 581:
      if (lookahead == 'p') ADVANCE(617);
      END_STATE();
    case 582:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 583:
      if (lookahead == 'p') ADVANCE(614);
      END_STATE();
    case 584:
      if (lookahead == 'p') ADVANCE(398);
      END_STATE();
    case 585:
      if (lookahead == 'p') ADVANCE(566);
      END_STATE();
    case 586:
      if (lookahead == 'p') ADVANCE(570);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(675);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(1158);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(1205);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(1206);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(1154);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(1181);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(1141);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(537);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(672);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(389);
      if (lookahead == 'z') ADVANCE(503);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(639);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(550);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(427);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(642);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(628);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(401);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(380);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(560);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 607:
      if (lookahead == 'r') ADVANCE(592);
      END_STATE();
    case 608:
      if (lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 609:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 610:
      if (lookahead == 'r') ADVANCE(458);
      END_STATE();
    case 611:
      if (lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 612:
      if (lookahead == 'r') ADVANCE(562);
      END_STATE();
    case 613:
      if (lookahead == 'r') ADVANCE(538);
      END_STATE();
    case 614:
      if (lookahead == 'r') ADVANCE(477);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(385);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(1465);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(1480);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(1482);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(1192);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(1483);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(500);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(499);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(449);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(572);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(408);
      END_STATE();
    case 627:
      if (lookahead == 's') ADVANCE(653);
      END_STATE();
    case 628:
      if (lookahead == 's') ADVANCE(464);
      END_STATE();
    case 629:
      if (lookahead == 's') ADVANCE(646);
      END_STATE();
    case 630:
      if (lookahead == 's') ADVANCE(476);
      END_STATE();
    case 631:
      if (lookahead == 's') ADVANCE(559);
      END_STATE();
    case 632:
      if (lookahead == 's') ADVANCE(650);
      END_STATE();
    case 633:
      if (lookahead == 's') ADVANCE(630);
      END_STATE();
    case 634:
      if (lookahead == 's') ADVANCE(418);
      END_STATE();
    case 635:
      if (lookahead == 's') ADVANCE(478);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(493);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(1461);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(892);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(905);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(1198);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(925);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(736);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(555);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 650:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 651:
      if (lookahead == 't') ADVANCE(495);
      END_STATE();
    case 652:
      if (lookahead == 't') ADVANCE(579);
      END_STATE();
    case 653:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 654:
      if (lookahead == 't') ADVANCE(504);
      END_STATE();
    case 655:
      if (lookahead == 't') ADVANCE(581);
      END_STATE();
    case 656:
      if (lookahead == 't') ADVANCE(618);
      END_STATE();
    case 657:
      if (lookahead == 't') ADVANCE(619);
      END_STATE();
    case 658:
      if (lookahead == 't') ADVANCE(621);
      END_STATE();
    case 659:
      if (lookahead == 't') ADVANCE(655);
      END_STATE();
    case 660:
      if (lookahead == 'u') ADVANCE(652);
      END_STATE();
    case 661:
      if (lookahead == 'u') ADVANCE(468);
      END_STATE();
    case 662:
      if (lookahead == 'u') ADVANCE(643);
      END_STATE();
    case 663:
      if (lookahead == 'u') ADVANCE(645);
      END_STATE();
    case 664:
      if (lookahead == 'u') ADVANCE(649);
      END_STATE();
    case 665:
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 666:
      if (lookahead == 'v') ADVANCE(480);
      END_STATE();
    case 667:
      if (lookahead == 'w') ADVANCE(624);
      END_STATE();
    case 668:
      if (lookahead == 'x') ADVANCE(382);
      END_STATE();
    case 669:
      if (lookahead == 'x') ADVANCE(922);
      END_STATE();
    case 670:
      if (lookahead == 'x') ADVANCE(674);
      END_STATE();
    case 671:
      if (lookahead == 'x') ADVANCE(578);
      END_STATE();
    case 672:
      if (lookahead == 'y') ADVANCE(1455);
      END_STATE();
    case 673:
      if (lookahead == 'y') ADVANCE(1210);
      END_STATE();
    case 674:
      if (lookahead == 'y') ADVANCE(1215);
      END_STATE();
    case 675:
      if (lookahead == 'y') ADVANCE(580);
      END_STATE();
    case 676:
      if (lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 677:
      if (lookahead == 'z') ADVANCE(503);
      END_STATE();
    case 678:
      if (lookahead == 'z') ADVANCE(454);
      END_STATE();
    case 679:
      if (lookahead == 'z') ADVANCE(455);
      END_STATE();
    case 680:
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(680)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 681:
      if (lookahead == '}') ADVANCE(1449);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      END_STATE();
    case 682:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(682)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(891);
      END_STATE();
    case 683:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(683)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 684:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(684)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(891);
      END_STATE();
    case 685:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1191);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(685)
      END_STATE();
    case 686:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 687:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1451);
      END_STATE();
    case 688:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(733);
      END_STATE();
    case 689:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(689)
      END_STATE();
    case 690:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      END_STATE();
    case 692:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      END_STATE();
    case 693:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(880);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(693)
      END_STATE();
    case 694:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(694)
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(906);
      END_STATE();
    case 695:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1450);
      END_STATE();
    case 696:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1449);
      END_STATE();
    case 697:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(695);
      END_STATE();
    case 698:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      END_STATE();
    case 699:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 700:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 701:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 702:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 703:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 704:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 705:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(681);
      END_STATE();
    case 706:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1475);
      END_STATE();
    case 707:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(279);
      END_STATE();
    case 708:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(755);
      END_STATE();
    case 709:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      END_STATE();
    case 710:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 711:
      if (eof) ADVANCE(712);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '*') ADVANCE(1477);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == '1') ADVANCE(92);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == ':') ADVANCE(864);
      if (lookahead == '@') ADVANCE(882);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead == 'h') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '{') ADVANCE(724);
      if (lookahead == '}') ADVANCE(725);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(713);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(713);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(714);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym__vertical_whitespace);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym__vertical_whitespaces);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(716);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym__empty_line);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__empty_line);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(719);
      if (lookahead != 0) ADVANCE(719);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1472);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\r') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(707);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(279);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (lookahead == ':') ADVANCE(688);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(728);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_localhost);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(223);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__ipv4_address);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '5') ADVANCE(743);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(269);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(742);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(748);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(750);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(749);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(751);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(738);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(754);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(754);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(757);
      if (lookahead == ':') ADVANCE(79);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(761);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == '1') ADVANCE(760);
      if (lookahead == '2') ADVANCE(756);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(758);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(771);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(764);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(765);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(766);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(768);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(769);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(770);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(772);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(773);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(774);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(699);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(776);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(777);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(708);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(778);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(781);
      if (lookahead == ':') ADVANCE(325);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '0') ADVANCE(817);
      if (lookahead == ':') ADVANCE(325);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(787);
      if (lookahead == ':') ADVANCE(704);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(793);
      if (lookahead == ':') ADVANCE(699);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(799);
      if (lookahead == ':') ADVANCE(700);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(805);
      if (lookahead == ':') ADVANCE(702);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '5') ADVANCE(811);
      if (lookahead == ':') ADVANCE(703);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(791);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(797);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(839);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(839);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(839);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(803);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(804);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(803);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(809);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(808);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(810);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(809);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(815);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(814);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(815);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(825);
      if (lookahead == ':') ADVANCE(325);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == '2') ADVANCE(782);
      if (lookahead == 'f') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(832);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(794);
      if (lookahead == '2') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(838);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(800);
      if (lookahead == '2') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(806);
      if (lookahead == '2') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(807);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(812);
      if (lookahead == '2') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(813);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(853);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(854);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(312);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(325);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(830);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(826);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(831);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(701);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(699);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(837);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(839);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(700);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(755);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(755);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(755);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(858);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '1') ADVANCE(1454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '5') ADVANCE(868);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(872);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(871);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(878);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(871);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(872);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1191);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(865);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(874);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(875);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(877);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(879);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1449);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(881);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(606);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\r') ADVANCE(723);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead == '\f' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(722);
      if (lookahead != 0) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '}') ADVANCE(727);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(718);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(891);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == '#') ADVANCE(886);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\f' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(718);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(891);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(891);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_basicauth);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_basicauth);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(902);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'e') ADVANCE(903);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'f') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == 'r') ADVANCE(1159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_directive_basicauth_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_bcrypt);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_basicauth_credential_token1);
      if (lookahead == '+' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead == '0') ADVANCE(866);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(869);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '\\') ADVANCE(710);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(928);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '%') ADVANCE(697);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(930);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == '5') ADVANCE(932);
      if (lookahead == ':') ADVANCE(328);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(934);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(936);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(937);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(934);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1032);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '_') ADVANCE(1006);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '_') ADVANCE(991);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '_') ADVANCE(948);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1003);
      if (lookahead == 'i') ADVANCE(980);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1015);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead == 'e') ADVANCE(944);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(956);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(975);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1013);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(984);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(987);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(942);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(989);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(909);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1018);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(973);
      if (lookahead == 'q') ADVANCE(1014);
      if (lookahead == 'v') ADVANCE(964);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(977);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(959);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(965);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead == 'o') ADVANCE(986);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(938);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1137);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(998);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(939);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1000);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(995);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(996);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'g') ADVANCE(1178);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(898);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(1152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(949);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(993);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(958);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1470);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1002);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(960);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(992);
      if (lookahead == 'n') ADVANCE(1011);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(950);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(951);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(945);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(968);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(997);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1017);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1007);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(952);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(999);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(955);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(946);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(1001);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(988);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1016);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1143);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1008);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(982);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1009);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1005);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(985);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1467);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 's') ADVANCE(972);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1012);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 's') ADVANCE(962);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 's') ADVANCE(966);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1463);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(894);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1174);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(969);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(961);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(940);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 't') ADVANCE(970);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(963);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'u') ADVANCE(1010);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'v') ADVANCE(967);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(1019);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(1212);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(1217);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1033);
      if (lookahead == '5') ADVANCE(1022);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1023);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1025);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1025);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1033);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1034);
      if (lookahead == '5') ADVANCE(1027);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1028);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1028);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1034);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(1047);
      if (lookahead == ':') ADVANCE(328);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1029);
      if (lookahead == '2') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1028);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(753);
      if (lookahead == '2') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(1024);
      if (lookahead == '2') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1023);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(1031);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(1042);
      if (lookahead == 'i') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'b') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(1035);
      if (lookahead == 'i') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'e') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'n') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 'o') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (lookahead == 's') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1044);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(328);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(68);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1056);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1119);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1106);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1127);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1068);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1116);
      if (lookahead == 'i') ADVANCE(1092);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1125);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1093);
      if (lookahead == 'e') ADVANCE(1052);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1099);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1095);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'l') ADVANCE(1115);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1098);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(910);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1131);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1103);
      if (lookahead == 'n') ADVANCE(1083);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1085);
      if (lookahead == 'q') ADVANCE(1126);
      if (lookahead == 'v') ADVANCE(1074);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1071);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1065);
      if (lookahead == 'o') ADVANCE(1096);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1049);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1138);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1148);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1117);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1113);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1050);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1108);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1110);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'g') ADVANCE(1179);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(899);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(1153);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1087);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1129);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1058);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1107);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1115);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1070);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1072);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1105);
      if (lookahead == 'p') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1105);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1061);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1062);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1079);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1111);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1120);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1130);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1066);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1063);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1112);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(917);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(913);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(915);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1054);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1114);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1209);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1157);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1128);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1144);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1121);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1118);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1097);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1468);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1124);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1077);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1464);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(895);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1175);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1048);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1073);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1123);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'v') ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(923);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(1132);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1213);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1218);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_file_server);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_browse);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '_') ADVANCE(1411);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '_') ADVANCE(990);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(1104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(584);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(904);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1164);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ') ADVANCE(1165);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1166);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1166);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1164);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if (lookahead == ' ') ADVANCE(1169);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1170);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1170);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(227);
      if (lookahead == '.') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_log);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(anon_sym_stderr);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '_') ADVANCE(635);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(anon_sym_roll_disabled);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(anon_sym_roll_size);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(anon_sym_roll_uncompressed);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_roll_local_time);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_roll_keep);
      if (lookahead == '_') ADVANCE(489);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym__log_output_file_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1191);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_roll_keep_for_days);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1194);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1194);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_size_number);
      if (lookahead == '.') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_size_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_size_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_request_body);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(anon_sym_max_size);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == 't') ADVANCE(1343);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1344);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1344);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1344);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1448);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1448);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1346);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1227);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1226);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1227);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1226);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1223);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1222);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1223);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1222);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1231);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1231);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1230);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1225);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1225);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1224);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1235);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1234);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1235);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1234);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1229);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1228);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1229);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1228);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1239);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1238);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1239);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1238);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1233);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1232);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1233);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1232);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1243);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1242);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1243);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1242);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1237);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1236);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1237);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1236);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1247);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1246);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1247);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1246);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1241);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1240);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1241);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1240);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1251);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1250);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1251);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1250);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1245);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1244);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1245);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1244);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1255);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1254);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1255);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1254);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1249);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1248);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1249);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1248);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1259);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1259);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1258);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1253);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1253);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1252);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1263);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1262);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1263);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1262);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1257);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1257);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1256);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1267);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1267);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1266);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1261);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1261);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1260);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1271);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1270);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1265);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1265);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1264);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1275);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1274);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1275);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1274);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1269);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1269);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1279);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1278);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1279);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1278);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1273);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1272);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1273);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1272);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1283);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1282);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1283);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1282);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1277);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1277);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1276);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1287);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1286);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1281);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1280);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1281);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1280);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1291);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1290);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1291);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1290);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1285);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1284);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1285);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1284);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1289);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1288);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1289);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1288);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1299);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1298);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1299);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1298);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1293);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1293);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1292);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1307);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1306);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1307);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1306);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1301);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1300);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1300);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1310);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1311);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1310);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1305);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1304);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1305);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1304);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1315);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1314);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1315);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1314);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1309);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1309);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1319);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1318);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1319);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1318);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1313);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1312);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1313);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1312);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1323);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1322);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1317);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1316);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1317);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1316);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1326);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1327);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1326);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1321);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1320);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1321);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1320);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1331);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1331);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1330);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1325);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1325);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1324);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == ':') ADVANCE(1349);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1336);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1335);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1329);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1328);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1328);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == 'p') ADVANCE(1340);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1341);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == ':') ADVANCE(1348);
      if (lookahead == 's') ADVANCE(1332);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1334);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1333);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == 't') ADVANCE(1337);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '-') ADVANCE(1339);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1338);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '.') ADVANCE(1446);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '/') ADVANCE(308);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '/') ADVANCE(309);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '0') ADVANCE(1351);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '1') ADVANCE(1453);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '_') ADVANCE(1430);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '_') ADVANCE(1412);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '_') ADVANCE(1363);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1427);
      if (lookahead == 'i') ADVANCE(1399);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1439);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1400);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead == 't') ADVANCE(1395);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1401);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1437);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'a') ADVANCE(1418);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'b') ADVANCE(1406);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'b') ADVANCE(1408);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'c') ADVANCE(1356);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'c') ADVANCE(1407);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(908);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(1443);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(1390);
      if (lookahead == 'q') ADVANCE(1438);
      if (lookahead == 'v') ADVANCE(1379);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(1375);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(1393);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'd') ADVANCE(1381);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1421);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1368);
      if (lookahead == 'o') ADVANCE(1404);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1352);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1136);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1146);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1353);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1428);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1425);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1402);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1417);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1419);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(1397);
      if (lookahead == 'l') ADVANCE(1426);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'g') ADVANCE(1177);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(897);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'h') ADVANCE(1151);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(1392);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(1364);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(1415);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(1460);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'l') ADVANCE(1376);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(1414);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(1391);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(1359);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'm') ADVANCE(1413);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(1365);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(1366);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(1370);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(1380);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'n') ADVANCE(1435);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1431);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1441);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1420);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1369);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1367);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1423);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'o') ADVANCE(1422);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(1360);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(1424);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(1409);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'p') ADVANCE(1410);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1207);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1155);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1440);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1442);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1142);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1432);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1433);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1361);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1405);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'r') ADVANCE(1429);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 's') ADVANCE(1466);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 's') ADVANCE(1389);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 's') ADVANCE(1436);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 's') ADVANCE(1377);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 's') ADVANCE(1382);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1462);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(893);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1172);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1386);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1458);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1354);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 't') ADVANCE(1387);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(1378);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(1434);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'v') ADVANCE(1383);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'x') ADVANCE(1444);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'y') ADVANCE(1456);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'y') ADVANCE(1211);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == 'y') ADVANCE(1216);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1449);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1221);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1220);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1445);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1347);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(697);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1450);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(876);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_root);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1466:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1134);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1470:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(1133);
      if (lookahead == '@') ADVANCE(368);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1472:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f') ADVANCE(721);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1472);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1473:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1473);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1474:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(720);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(723);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1475);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(370);
      if (lookahead == ']') ADVANCE(1476);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(369);
      END_STATE();
    case 1477:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '%') ADVANCE(698);
      if (lookahead == '{') ADVANCE(705);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1449);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(anon_sym_auto_https);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(anon_sym_disable_redirects);
      END_STATE();
    case 1483:
      ACCEPT_TOKEN(anon_sym_ignore_loaded_certs);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(anon_sym_disable_certs);
      END_STATE();
    case 1485:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 711},
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 61},
  [6] = {.lex_state = 61},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 61},
  [9] = {.lex_state = 61},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 61},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 61},
  [16] = {.lex_state = 61},
  [17] = {.lex_state = 61},
  [18] = {.lex_state = 61},
  [19] = {.lex_state = 61},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 61},
  [22] = {.lex_state = 61},
  [23] = {.lex_state = 61},
  [24] = {.lex_state = 61},
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
  [37] = {.lex_state = 58},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 58},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 55},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 58},
  [44] = {.lex_state = 55},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 51},
  [51] = {.lex_state = 61},
  [52] = {.lex_state = 61},
  [53] = {.lex_state = 58},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 58},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 58},
  [58] = {.lex_state = 61},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 63},
  [61] = {.lex_state = 63},
  [62] = {.lex_state = 61},
  [63] = {.lex_state = 63},
  [64] = {.lex_state = 63},
  [65] = {.lex_state = 63},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 61},
  [68] = {.lex_state = 63},
  [69] = {.lex_state = 62},
  [70] = {.lex_state = 58},
  [71] = {.lex_state = 62},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 711},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 711},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 63},
  [81] = {.lex_state = 63},
  [82] = {.lex_state = 63},
  [83] = {.lex_state = 61},
  [84] = {.lex_state = 58},
  [85] = {.lex_state = 63},
  [86] = {.lex_state = 63},
  [87] = {.lex_state = 62},
  [88] = {.lex_state = 63},
  [89] = {.lex_state = 63},
  [90] = {.lex_state = 58},
  [91] = {.lex_state = 58},
  [92] = {.lex_state = 63},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 58},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 58},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 58},
  [102] = {.lex_state = 58},
  [103] = {.lex_state = 61},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 58},
  [107] = {.lex_state = 58},
  [108] = {.lex_state = 58},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 58},
  [111] = {.lex_state = 58},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 61},
  [114] = {.lex_state = 58},
  [115] = {.lex_state = 58},
  [116] = {.lex_state = 58},
  [117] = {.lex_state = 58},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 58},
  [120] = {.lex_state = 58},
  [121] = {.lex_state = 58},
  [122] = {.lex_state = 58},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 58},
  [126] = {.lex_state = 58},
  [127] = {.lex_state = 58},
  [128] = {.lex_state = 58},
  [129] = {.lex_state = 58},
  [130] = {.lex_state = 58},
  [131] = {.lex_state = 58},
  [132] = {.lex_state = 61},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 62},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 58},
  [138] = {.lex_state = 58},
  [139] = {.lex_state = 58},
  [140] = {.lex_state = 58},
  [141] = {.lex_state = 58},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 58},
  [145] = {.lex_state = 58},
  [146] = {.lex_state = 58},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 58},
  [149] = {.lex_state = 58},
  [150] = {.lex_state = 62},
  [151] = {.lex_state = 62},
  [152] = {.lex_state = 58},
  [153] = {.lex_state = 58},
  [154] = {.lex_state = 62},
  [155] = {.lex_state = 61},
  [156] = {.lex_state = 61},
  [157] = {.lex_state = 61},
  [158] = {.lex_state = 61},
  [159] = {.lex_state = 61},
  [160] = {.lex_state = 61},
  [161] = {.lex_state = 61},
  [162] = {.lex_state = 61},
  [163] = {.lex_state = 61},
  [164] = {.lex_state = 61},
  [165] = {.lex_state = 61},
  [166] = {.lex_state = 61},
  [167] = {.lex_state = 61},
  [168] = {.lex_state = 61},
  [169] = {.lex_state = 61},
  [170] = {.lex_state = 61},
  [171] = {.lex_state = 61},
  [172] = {.lex_state = 61},
  [173] = {.lex_state = 61},
  [174] = {.lex_state = 61},
  [175] = {.lex_state = 61},
  [176] = {.lex_state = 61},
  [177] = {.lex_state = 61},
  [178] = {.lex_state = 61},
  [179] = {.lex_state = 61},
  [180] = {.lex_state = 61},
  [181] = {.lex_state = 61},
  [182] = {.lex_state = 61},
  [183] = {.lex_state = 61},
  [184] = {.lex_state = 61},
  [185] = {.lex_state = 61},
  [186] = {.lex_state = 61},
  [187] = {.lex_state = 61},
  [188] = {.lex_state = 61},
  [189] = {.lex_state = 61},
  [190] = {.lex_state = 61},
  [191] = {.lex_state = 61},
  [192] = {.lex_state = 61},
  [193] = {.lex_state = 61},
  [194] = {.lex_state = 61},
  [195] = {.lex_state = 61},
  [196] = {.lex_state = 61},
  [197] = {.lex_state = 61},
  [198] = {.lex_state = 61},
  [199] = {.lex_state = 61},
  [200] = {.lex_state = 61},
  [201] = {.lex_state = 61},
  [202] = {.lex_state = 61},
  [203] = {.lex_state = 60},
  [204] = {.lex_state = 60},
  [205] = {.lex_state = 60},
  [206] = {.lex_state = 60},
  [207] = {.lex_state = 60},
  [208] = {.lex_state = 89},
  [209] = {.lex_state = 711},
  [210] = {.lex_state = 60},
  [211] = {.lex_state = 60},
  [212] = {.lex_state = 711},
  [213] = {.lex_state = 89},
  [214] = {.lex_state = 60},
  [215] = {.lex_state = 60},
  [216] = {.lex_state = 711},
  [217] = {.lex_state = 711},
  [218] = {.lex_state = 711},
  [219] = {.lex_state = 711},
  [220] = {.lex_state = 711},
  [221] = {.lex_state = 711},
  [222] = {.lex_state = 711},
  [223] = {.lex_state = 711},
  [224] = {.lex_state = 47},
  [225] = {.lex_state = 47},
  [226] = {.lex_state = 59},
  [227] = {.lex_state = 62},
  [228] = {.lex_state = 89},
  [229] = {.lex_state = 711},
  [230] = {.lex_state = 62},
  [231] = {.lex_state = 711},
  [232] = {.lex_state = 711},
  [233] = {.lex_state = 711},
  [234] = {.lex_state = 89},
  [235] = {.lex_state = 711},
  [236] = {.lex_state = 59},
  [237] = {.lex_state = 59},
  [238] = {.lex_state = 86},
  [239] = {.lex_state = 86},
  [240] = {.lex_state = 86},
  [241] = {.lex_state = 711},
  [242] = {.lex_state = 61},
  [243] = {.lex_state = 61},
  [244] = {.lex_state = 61},
  [245] = {.lex_state = 711},
  [246] = {.lex_state = 61},
  [247] = {.lex_state = 61},
  [248] = {.lex_state = 60},
  [249] = {.lex_state = 60},
  [250] = {.lex_state = 61},
  [251] = {.lex_state = 711},
  [252] = {.lex_state = 60},
  [253] = {.lex_state = 61},
  [254] = {.lex_state = 60},
  [255] = {.lex_state = 61},
  [256] = {.lex_state = 61},
  [257] = {.lex_state = 60},
  [258] = {.lex_state = 61},
  [259] = {.lex_state = 60},
  [260] = {.lex_state = 60},
  [261] = {.lex_state = 61},
  [262] = {.lex_state = 60},
  [263] = {.lex_state = 61},
  [264] = {.lex_state = 61},
  [265] = {.lex_state = 58},
  [266] = {.lex_state = 58},
  [267] = {.lex_state = 61},
  [268] = {.lex_state = 61},
  [269] = {.lex_state = 46},
  [270] = {.lex_state = 711},
  [271] = {.lex_state = 711},
  [272] = {.lex_state = 58},
  [273] = {.lex_state = 711},
  [274] = {.lex_state = 46},
  [275] = {.lex_state = 58},
  [276] = {.lex_state = 87},
  [277] = {.lex_state = 61},
  [278] = {.lex_state = 61},
  [279] = {.lex_state = 64},
  [280] = {.lex_state = 61},
  [281] = {.lex_state = 64},
  [282] = {.lex_state = 65},
  [283] = {.lex_state = 64},
  [284] = {.lex_state = 61},
  [285] = {.lex_state = 64},
  [286] = {.lex_state = 64},
  [287] = {.lex_state = 61},
  [288] = {.lex_state = 64},
  [289] = {.lex_state = 64},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 87},
  [292] = {.lex_state = 87},
  [293] = {.lex_state = 64},
  [294] = {.lex_state = 61},
  [295] = {.lex_state = 64},
  [296] = {.lex_state = 64},
  [297] = {.lex_state = 64},
  [298] = {.lex_state = 61},
  [299] = {.lex_state = 61},
  [300] = {.lex_state = 61},
  [301] = {.lex_state = 711},
  [302] = {.lex_state = 61},
  [303] = {.lex_state = 60},
  [304] = {.lex_state = 60},
  [305] = {.lex_state = 711},
  [306] = {.lex_state = 711},
  [307] = {.lex_state = 307},
  [308] = {.lex_state = 711},
  [309] = {.lex_state = 711},
  [310] = {.lex_state = 711},
  [311] = {.lex_state = 61},
  [312] = {.lex_state = 58},
  [313] = {.lex_state = 66},
  [314] = {.lex_state = 60},
  [315] = {.lex_state = 60},
  [316] = {.lex_state = 66},
  [317] = {.lex_state = 66},
  [318] = {.lex_state = 66},
  [319] = {.lex_state = 66},
  [320] = {.lex_state = 60},
  [321] = {.lex_state = 60},
  [322] = {.lex_state = 66},
  [323] = {.lex_state = 60},
  [324] = {.lex_state = 60},
  [325] = {.lex_state = 61},
  [326] = {.lex_state = 711},
  [327] = {.lex_state = 48},
  [328] = {.lex_state = 66},
  [329] = {.lex_state = 60},
  [330] = {.lex_state = 66},
  [331] = {.lex_state = 66},
  [332] = {.lex_state = 61},
  [333] = {.lex_state = 66},
  [334] = {.lex_state = 58},
  [335] = {.lex_state = 58},
  [336] = {.lex_state = 58},
  [337] = {.lex_state = 61},
  [338] = {.lex_state = 61},
  [339] = {.lex_state = 61},
  [340] = {.lex_state = 60},
  [341] = {.lex_state = 60},
  [342] = {.lex_state = 60},
  [343] = {.lex_state = 60},
  [344] = {.lex_state = 60},
  [345] = {.lex_state = 48},
  [346] = {.lex_state = 60},
  [347] = {.lex_state = 60},
  [348] = {.lex_state = 61},
  [349] = {.lex_state = 61},
  [350] = {.lex_state = 60},
  [351] = {.lex_state = 61},
  [352] = {.lex_state = 61},
  [353] = {.lex_state = 45},
  [354] = {.lex_state = 45},
  [355] = {.lex_state = 45},
  [356] = {.lex_state = 711},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 711},
  [359] = {.lex_state = 45},
  [360] = {.lex_state = 45},
  [361] = {.lex_state = 45},
  [362] = {.lex_state = 45},
  [363] = {.lex_state = 711},
  [364] = {.lex_state = 61},
  [365] = {.lex_state = 45},
  [366] = {.lex_state = 45},
  [367] = {.lex_state = 61},
  [368] = {.lex_state = 711},
  [369] = {.lex_state = 45},
  [370] = {.lex_state = 45},
  [371] = {.lex_state = 61},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 711},
  [374] = {.lex_state = 45},
  [375] = {.lex_state = 711},
  [376] = {.lex_state = 711},
  [377] = {.lex_state = 711},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 61},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 64},
  [382] = {.lex_state = 711},
  [383] = {.lex_state = 61},
  [384] = {.lex_state = 61},
  [385] = {.lex_state = 61},
  [386] = {.lex_state = 49},
  [387] = {.lex_state = 59},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 49},
  [390] = {.lex_state = 49},
  [391] = {.lex_state = 49},
  [392] = {.lex_state = 49},
  [393] = {.lex_state = 307},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 49},
  [396] = {.lex_state = 49},
  [397] = {.lex_state = 49},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 680},
  [400] = {.lex_state = 63},
  [401] = {.lex_state = 63},
  [402] = {.lex_state = 63},
  [403] = {.lex_state = 63},
  [404] = {.lex_state = 63},
  [405] = {.lex_state = 63},
  [406] = {.lex_state = 63},
  [407] = {.lex_state = 63},
  [408] = {.lex_state = 63},
  [409] = {.lex_state = 63},
  [410] = {.lex_state = 63},
  [411] = {.lex_state = 63},
  [412] = {.lex_state = 63},
  [413] = {.lex_state = 63},
  [414] = {.lex_state = 680},
  [415] = {.lex_state = 63},
  [416] = {.lex_state = 63},
  [417] = {.lex_state = 63},
  [418] = {.lex_state = 59},
  [419] = {.lex_state = 63},
  [420] = {.lex_state = 63},
  [421] = {.lex_state = 63},
  [422] = {.lex_state = 63},
  [423] = {.lex_state = 63},
  [424] = {.lex_state = 59},
  [425] = {.lex_state = 680},
  [426] = {.lex_state = 63},
  [427] = {.lex_state = 63},
  [428] = {.lex_state = 63},
  [429] = {.lex_state = 63},
  [430] = {.lex_state = 63},
  [431] = {.lex_state = 63},
  [432] = {.lex_state = 680},
  [433] = {.lex_state = 680},
  [434] = {.lex_state = 63},
  [435] = {.lex_state = 680},
  [436] = {.lex_state = 680},
  [437] = {.lex_state = 63},
  [438] = {.lex_state = 63},
  [439] = {.lex_state = 680},
  [440] = {.lex_state = 63},
  [441] = {.lex_state = 63},
  [442] = {.lex_state = 63},
  [443] = {.lex_state = 63},
  [444] = {.lex_state = 63},
  [445] = {.lex_state = 63},
  [446] = {.lex_state = 63},
  [447] = {.lex_state = 63},
  [448] = {.lex_state = 63},
  [449] = {.lex_state = 63},
  [450] = {.lex_state = 63},
  [451] = {.lex_state = 682},
  [452] = {.lex_state = 63},
  [453] = {.lex_state = 63},
  [454] = {.lex_state = 63},
  [455] = {.lex_state = 680},
  [456] = {.lex_state = 63},
  [457] = {.lex_state = 63},
  [458] = {.lex_state = 63},
  [459] = {.lex_state = 63},
  [460] = {.lex_state = 63},
  [461] = {.lex_state = 63},
  [462] = {.lex_state = 63},
  [463] = {.lex_state = 63},
  [464] = {.lex_state = 63},
  [465] = {.lex_state = 63},
  [466] = {.lex_state = 63},
  [467] = {.lex_state = 63},
  [468] = {.lex_state = 63},
  [469] = {.lex_state = 63},
  [470] = {.lex_state = 63},
  [471] = {.lex_state = 63},
  [472] = {.lex_state = 63},
  [473] = {.lex_state = 63},
  [474] = {.lex_state = 63},
  [475] = {.lex_state = 680},
  [476] = {.lex_state = 63},
  [477] = {.lex_state = 680},
  [478] = {.lex_state = 680},
  [479] = {.lex_state = 63},
  [480] = {.lex_state = 63},
  [481] = {.lex_state = 63},
  [482] = {.lex_state = 63},
  [483] = {.lex_state = 63},
  [484] = {.lex_state = 63},
  [485] = {.lex_state = 63},
  [486] = {.lex_state = 63},
  [487] = {.lex_state = 63},
  [488] = {.lex_state = 63},
  [489] = {.lex_state = 63},
  [490] = {.lex_state = 680},
  [491] = {.lex_state = 63},
  [492] = {.lex_state = 63},
  [493] = {.lex_state = 63},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 63},
  [496] = {.lex_state = 63},
  [497] = {.lex_state = 63},
  [498] = {.lex_state = 63},
  [499] = {.lex_state = 63},
  [500] = {.lex_state = 63},
  [501] = {.lex_state = 729},
  [502] = {.lex_state = 39},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 60},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 683},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 60},
  [514] = {.lex_state = 693},
  [515] = {.lex_state = 689},
  [516] = {.lex_state = 729},
  [517] = {.lex_state = 60},
  [518] = {.lex_state = 39},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 711},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 0},
  [523] = {.lex_state = 685},
  [524] = {.lex_state = 690},
  [525] = {.lex_state = 729},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 0},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 0},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 60},
  [541] = {.lex_state = 60},
  [542] = {.lex_state = 63},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 58},
  [547] = {.lex_state = 711},
  [548] = {.lex_state = 711},
  [549] = {.lex_state = 683},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 60},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 0},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 60},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 684},
  [558] = {.lex_state = 60},
  [559] = {.lex_state = 0},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 729},
  [562] = {.lex_state = 729},
  [563] = {.lex_state = 690},
  [564] = {.lex_state = 684},
  [565] = {.lex_state = 693},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 40},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 63},
  [570] = {.lex_state = 690},
  [571] = {.lex_state = 60},
  [572] = {.lex_state = 0},
  [573] = {.lex_state = 690},
  [574] = {.lex_state = 690},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 694},
  [577] = {.lex_state = 690},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 693},
  [580] = {.lex_state = 683},
  [581] = {.lex_state = 58},
  [582] = {.lex_state = 53},
  [583] = {.lex_state = 60},
  [584] = {.lex_state = 40},
  [585] = {.lex_state = 39},
  [586] = {.lex_state = 683},
  [587] = {.lex_state = 40},
  [588] = {.lex_state = 39},
  [589] = {.lex_state = 683},
  [590] = {.lex_state = 40},
  [591] = {.lex_state = 39},
  [592] = {.lex_state = 683},
  [593] = {.lex_state = 40},
  [594] = {.lex_state = 39},
  [595] = {.lex_state = 60},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 690},
  [598] = {.lex_state = 60},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 60},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 60},
  [605] = {.lex_state = 60},
  [606] = {.lex_state = 60},
  [607] = {.lex_state = 690},
  [608] = {.lex_state = 60},
  [609] = {.lex_state = 60},
  [610] = {.lex_state = 60},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 729},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 60},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 60},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 0},
  [619] = {.lex_state = 0},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 60},
  [622] = {.lex_state = 0},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 690},
  [627] = {.lex_state = 0},
  [628] = {.lex_state = 60},
  [629] = {.lex_state = 60},
  [630] = {.lex_state = 60},
  [631] = {.lex_state = 60},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 40},
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
    [anon_sym_error] = ACTIONS(1),
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
    [sym_document] = STATE(519),
    [sym_site_block] = STATE(74),
    [sym_site_address] = STATE(521),
    [sym_protocol] = STATE(271),
    [sym__ip_or_domain_address] = STATE(525),
    [sym__port_number] = STATE(613),
    [sym_directive_import] = STATE(74),
    [sym_global_options_block] = STATE(74),
    [sym_snippet] = STATE(74),
    [aux_sym_document_repeat1] = STATE(74),
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
      anon_sym_handle,
    ACTIONS(43), 1,
      anon_sym_handle_path,
    ACTIONS(45), 1,
      anon_sym_header,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(49), 1,
      anon_sym_log,
    ACTIONS(51), 1,
      anon_sym_redir,
    ACTIONS(53), 1,
      anon_sym_request_body,
    ACTIONS(55), 1,
      anon_sym_reverse_proxy,
    ACTIONS(57), 1,
      anon_sym_root,
    ACTIONS(59), 1,
      anon_sym_tls,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(108), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [83] = 22,
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
      anon_sym_handle,
    ACTIONS(43), 1,
      anon_sym_handle_path,
    ACTIONS(45), 1,
      anon_sym_header,
    ACTIONS(47), 1,
      anon_sym_import,
    ACTIONS(49), 1,
      anon_sym_log,
    ACTIONS(51), 1,
      anon_sym_redir,
    ACTIONS(53), 1,
      anon_sym_request_body,
    ACTIONS(55), 1,
      anon_sym_reverse_proxy,
    ACTIONS(57), 1,
      anon_sym_root,
    ACTIONS(59), 1,
      anon_sym_tls,
    ACTIONS(61), 1,
      sym__vertical_whitespaces,
    ACTIONS(63), 1,
      sym__empty_line,
    ACTIONS(65), 1,
      sym_comment_line,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(2), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(108), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [166] = 21,
    ACTIONS(71), 1,
      sym__empty_line,
    ACTIONS(74), 1,
      sym_comment_line,
    ACTIONS(77), 1,
      sym_matcher_name,
    ACTIONS(80), 1,
      anon_sym_abort,
    ACTIONS(83), 1,
      anon_sym_basicauth,
    ACTIONS(86), 1,
      anon_sym_bind,
    ACTIONS(89), 1,
      anon_sym_encode,
    ACTIONS(92), 1,
      anon_sym_file_server,
    ACTIONS(95), 1,
      anon_sym_handle,
    ACTIONS(98), 1,
      anon_sym_handle_path,
    ACTIONS(101), 1,
      anon_sym_header,
    ACTIONS(104), 1,
      anon_sym_import,
    ACTIONS(107), 1,
      anon_sym_log,
    ACTIONS(110), 1,
      anon_sym_redir,
    ACTIONS(113), 1,
      anon_sym_request_body,
    ACTIONS(116), 1,
      anon_sym_reverse_proxy,
    ACTIONS(119), 1,
      anon_sym_root,
    ACTIONS(122), 1,
      anon_sym_tls,
    ACTIONS(69), 2,
      sym__vertical_whitespaces,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(108), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [247] = 20,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      sym_matcher_name,
    ACTIONS(131), 1,
      anon_sym_abort,
    ACTIONS(134), 1,
      anon_sym_basicauth,
    ACTIONS(137), 1,
      anon_sym_bind,
    ACTIONS(140), 1,
      anon_sym_encode,
    ACTIONS(143), 1,
      anon_sym_file_server,
    ACTIONS(146), 1,
      anon_sym_handle,
    ACTIONS(149), 1,
      anon_sym_handle_path,
    ACTIONS(152), 1,
      anon_sym_header,
    ACTIONS(155), 1,
      anon_sym_import,
    ACTIONS(158), 1,
      anon_sym_log,
    ACTIONS(161), 1,
      anon_sym_redir,
    ACTIONS(164), 1,
      anon_sym_request_body,
    ACTIONS(167), 1,
      anon_sym_reverse_proxy,
    ACTIONS(170), 1,
      anon_sym_root,
    ACTIONS(173), 1,
      anon_sym_tls,
    ACTIONS(125), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(5), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [325] = 20,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(180), 1,
      sym_matcher_name,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(202), 1,
      anon_sym_redir,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(176), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(5), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [403] = 20,
    ACTIONS(180), 1,
      sym_matcher_name,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(202), 1,
      anon_sym_redir,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [481] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [555] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [629] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [703] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [777] = 19,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 1,
      anon_sym_abort,
    ACTIONS(236), 1,
      anon_sym_basicauth,
    ACTIONS(239), 1,
      anon_sym_bind,
    ACTIONS(242), 1,
      anon_sym_encode,
    ACTIONS(245), 1,
      anon_sym_file_server,
    ACTIONS(248), 1,
      anon_sym_handle,
    ACTIONS(251), 1,
      anon_sym_handle_path,
    ACTIONS(254), 1,
      anon_sym_header,
    ACTIONS(257), 1,
      anon_sym_import,
    ACTIONS(260), 1,
      anon_sym_log,
    ACTIONS(263), 1,
      anon_sym_redir,
    ACTIONS(266), 1,
      anon_sym_request_body,
    ACTIONS(269), 1,
      anon_sym_reverse_proxy,
    ACTIONS(272), 1,
      anon_sym_root,
    ACTIONS(275), 1,
      anon_sym_tls,
    ACTIONS(228), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [851] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [925] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [999] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1073] = 19,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(216), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1147] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(286), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1218] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(288), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(11), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1289] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(290), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(14), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1360] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(292), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(15), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1431] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(294), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1502] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(296), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(10), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1573] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(298), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(9), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1644] = 18,
    ACTIONS(182), 1,
      anon_sym_abort,
    ACTIONS(184), 1,
      anon_sym_basicauth,
    ACTIONS(186), 1,
      anon_sym_bind,
    ACTIONS(188), 1,
      anon_sym_encode,
    ACTIONS(190), 1,
      anon_sym_file_server,
    ACTIONS(192), 1,
      anon_sym_handle,
    ACTIONS(194), 1,
      anon_sym_handle_path,
    ACTIONS(196), 1,
      anon_sym_header,
    ACTIONS(198), 1,
      anon_sym_import,
    ACTIONS(200), 1,
      anon_sym_log,
    ACTIONS(204), 1,
      anon_sym_request_body,
    ACTIONS(206), 1,
      anon_sym_reverse_proxy,
    ACTIONS(208), 1,
      anon_sym_root,
    ACTIONS(210), 1,
      anon_sym_tls,
    ACTIONS(220), 1,
      anon_sym_redir,
    ACTIONS(300), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(13), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(174), 15,
      sym_directive_abort,
      sym_directive_basicauth,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_file_server,
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
  [1715] = 11,
    ACTIONS(306), 1,
      sym__ipv4_address,
    ACTIONS(309), 1,
      sym__ipv6_address,
    ACTIONS(315), 1,
      anon_sym_unix,
    ACTIONS(318), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      aux_sym_unix_path_token2,
    STATE(31), 1,
      sym_unix_path,
    STATE(508), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(312), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(302), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(304), 16,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [1770] = 11,
    ACTIONS(328), 1,
      sym__ipv4_address,
    ACTIONS(330), 1,
      sym__ipv6_address,
    ACTIONS(334), 1,
      anon_sym_unix,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_unix_path_token2,
    STATE(31), 1,
      sym_unix_path,
    STATE(508), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(332), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(324), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(326), 16,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [1825] = 11,
    ACTIONS(315), 1,
      anon_sym_unix,
    ACTIONS(340), 1,
      sym__ipv4_address,
    ACTIONS(343), 1,
      sym__ipv6_address,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
    ACTIONS(349), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(552), 1,
      sym__network,
    STATE(27), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(312), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(302), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(304), 15,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [1879] = 11,
    ACTIONS(334), 1,
      anon_sym_unix,
    ACTIONS(352), 1,
      sym__ipv4_address,
    ACTIONS(354), 1,
      sym__ipv6_address,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(552), 1,
      sym__network,
    STATE(27), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(332), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(324), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(326), 15,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [1933] = 2,
    ACTIONS(360), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(362), 22,
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
  [1966] = 2,
    ACTIONS(364), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(366), 22,
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
  [1999] = 2,
    ACTIONS(368), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(370), 22,
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
  [2032] = 2,
    ACTIONS(372), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(374), 22,
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
  [2065] = 2,
    ACTIONS(364), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(366), 21,
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
    ACTIONS(360), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(362), 21,
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
  [2129] = 2,
    ACTIONS(368), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(370), 21,
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
  [2161] = 2,
    ACTIONS(372), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(374), 21,
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
  [2193] = 4,
    STATE(122), 1,
      sym_redir_code,
    ACTIONS(378), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(380), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(376), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2228] = 3,
    ACTIONS(386), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(382), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(384), 22,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2261] = 4,
    STATE(148), 1,
      sym_redir_code,
    ACTIONS(390), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(380), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(388), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2296] = 3,
    ACTIONS(396), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(392), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(394), 22,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2329] = 3,
    ACTIONS(398), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(392), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(394), 21,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2361] = 4,
    ACTIONS(390), 1,
      anon_sym_handle,
    STATE(200), 1,
      sym_redir_code,
    ACTIONS(400), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(388), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2395] = 2,
    ACTIONS(404), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(402), 23,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2425] = 3,
    ACTIONS(406), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(382), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(384), 21,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2457] = 2,
    ACTIONS(394), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(392), 23,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2487] = 6,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_unix_path_token2,
    STATE(456), 1,
      sym_unix_path,
    ACTIONS(416), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(408), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(410), 17,
      sym__empty_line,
      anon_sym_RBRACE,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2525] = 4,
    ACTIONS(378), 1,
      anon_sym_handle,
    STATE(181), 1,
      sym_redir_code,
    ACTIONS(400), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(376), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2559] = 2,
    ACTIONS(420), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(418), 23,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2589] = 3,
    ACTIONS(406), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(382), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(384), 20,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2620] = 6,
    ACTIONS(412), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      aux_sym_unix_path_token2,
    STATE(448), 1,
      sym_unix_path,
    ACTIONS(422), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(408), 3,
      sym__empty_line,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(410), 16,
      anon_sym_RBRACE,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2657] = 2,
    ACTIONS(394), 1,
      anon_sym_handle,
    ACTIONS(392), 23,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2686] = 2,
    ACTIONS(404), 1,
      anon_sym_handle,
    ACTIONS(402), 23,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2715] = 4,
    ACTIONS(426), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(428), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(55), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(424), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2748] = 3,
    ACTIONS(398), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(392), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(394), 20,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2779] = 4,
    ACTIONS(432), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(434), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(55), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(430), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2812] = 2,
    ACTIONS(420), 1,
      anon_sym_handle,
    ACTIONS(418), 23,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [2841] = 4,
    ACTIONS(428), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(439), 2,
      sym__empty_line,
      anon_sym_handle,
    STATE(55), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(437), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2874] = 4,
    ACTIONS(432), 1,
      anon_sym_handle,
    ACTIONS(441), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(430), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [2906] = 4,
    ACTIONS(444), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(619), 1,
      sym__horizontal_whitespaces,
    ACTIONS(446), 20,
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
  [2938] = 4,
    ACTIONS(450), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(68), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
    ACTIONS(452), 20,
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
  [2970] = 4,
    ACTIONS(450), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(65), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
    ACTIONS(454), 20,
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
  [3002] = 4,
    ACTIONS(439), 1,
      anon_sym_handle,
    ACTIONS(456), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(437), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3034] = 4,
    ACTIONS(458), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
    STATE(312), 1,
      sym__horizontal_whitespaces,
    ACTIONS(460), 20,
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
  [3066] = 4,
    ACTIONS(450), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(61), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
    ACTIONS(464), 20,
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
  [3098] = 4,
    ACTIONS(466), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(65), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
    ACTIONS(469), 20,
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
  [3130] = 5,
    ACTIONS(414), 1,
      aux_sym_unix_path_token2,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(412), 1,
      sym_unix_path,
    ACTIONS(471), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(473), 16,
      sym__empty_line,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3164] = 4,
    ACTIONS(426), 1,
      anon_sym_handle,
    ACTIONS(456), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(58), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(424), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3196] = 4,
    ACTIONS(450), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(65), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
    ACTIONS(477), 20,
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
  [3228] = 4,
    ACTIONS(479), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(69), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
    ACTIONS(469), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3259] = 2,
    ACTIONS(484), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(482), 20,
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
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3286] = 4,
    ACTIONS(486), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(488), 1,
      anon_sym_LBRACE,
    STATE(336), 1,
      sym__horizontal_whitespaces,
    ACTIONS(460), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3317] = 5,
    ACTIONS(414), 1,
      aux_sym_unix_path_token2,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(444), 1,
      sym_unix_path,
    ACTIONS(471), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(473), 15,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3350] = 4,
    ACTIONS(490), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(78), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
    ACTIONS(464), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3381] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_snippet_name,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
    STATE(271), 1,
      sym_protocol,
    STATE(521), 1,
      sym_site_address,
    STATE(525), 1,
      sym__ip_or_domain_address,
    STATE(613), 1,
      sym__port_number,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(11), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(13), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(494), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(77), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [3432] = 4,
    ACTIONS(490), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(76), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
    ACTIONS(452), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3463] = 4,
    ACTIONS(490), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(69), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
    ACTIONS(477), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3494] = 14,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(513), 1,
      anon_sym_COLON,
    ACTIONS(516), 1,
      anon_sym_import,
    ACTIONS(519), 1,
      sym_snippet_name,
    STATE(271), 1,
      sym_protocol,
    STATE(521), 1,
      sym_site_address,
    STATE(525), 1,
      sym__ip_or_domain_address,
    STATE(613), 1,
      sym__port_number,
    ACTIONS(498), 2,
      sym__empty_line,
      sym_comment_line,
    ACTIONS(504), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(507), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(510), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(77), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [3545] = 4,
    ACTIONS(490), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(69), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(229), 1,
      sym__horizontal_whitespaces,
    ACTIONS(454), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3576] = 4,
    ACTIONS(522), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(544), 1,
      sym__horizontal_whitespaces,
    ACTIONS(446), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3607] = 2,
    ACTIONS(526), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(528), 21,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3634] = 2,
    ACTIONS(530), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(532), 21,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3661] = 3,
    ACTIONS(534), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(359), 1,
      sym__horizontal_whitespaces,
    ACTIONS(536), 20,
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
  [3690] = 2,
    ACTIONS(484), 1,
      anon_sym_handle,
    ACTIONS(482), 20,
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
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3716] = 3,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    ACTIONS(540), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(538), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3744] = 2,
    ACTIONS(544), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(546), 20,
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
  [3770] = 2,
    ACTIONS(548), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(469), 20,
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
  [3796] = 3,
    ACTIONS(550), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(354), 1,
      sym__horizontal_whitespaces,
    ACTIONS(536), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [3824] = 2,
    ACTIONS(552), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(554), 20,
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
  [3850] = 2,
    ACTIONS(556), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(558), 20,
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
  [3876] = 3,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(562), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(560), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3904] = 3,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    ACTIONS(568), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(566), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [3932] = 2,
    ACTIONS(572), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(574), 20,
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
  [3958] = 2,
    ACTIONS(576), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(578), 20,
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
  [3984] = 2,
    ACTIONS(526), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(528), 20,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [4010] = 2,
    ACTIONS(580), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(582), 20,
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
  [4036] = 2,
    ACTIONS(530), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(532), 20,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [4062] = 2,
    ACTIONS(586), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(584), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4087] = 2,
    ACTIONS(580), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(582), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [4112] = 2,
    ACTIONS(366), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(364), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4137] = 2,
    ACTIONS(590), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(588), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
    ACTIONS(594), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(592), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4187] = 2,
    ACTIONS(598), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(596), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4212] = 3,
    ACTIONS(562), 1,
      anon_sym_handle,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
    ACTIONS(560), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4239] = 2,
    ACTIONS(604), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(602), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4264] = 2,
    ACTIONS(608), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(606), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4289] = 2,
    ACTIONS(612), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(610), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4314] = 2,
    ACTIONS(616), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(614), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4339] = 2,
    ACTIONS(620), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(618), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4364] = 2,
    ACTIONS(624), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(622), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4389] = 2,
    ACTIONS(628), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(626), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4414] = 2,
    ACTIONS(632), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(630), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4439] = 2,
    ACTIONS(636), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(634), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4464] = 3,
    ACTIONS(568), 1,
      anon_sym_handle,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4491] = 2,
    ACTIONS(642), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(640), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4516] = 2,
    ACTIONS(646), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(644), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4541] = 2,
    ACTIONS(650), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(648), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4566] = 2,
    ACTIONS(654), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(652), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4591] = 2,
    ACTIONS(658), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(656), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4616] = 2,
    ACTIONS(662), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(660), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4641] = 2,
    ACTIONS(666), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(664), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4666] = 2,
    ACTIONS(670), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(668), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4691] = 2,
    ACTIONS(674), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(672), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4716] = 2,
    ACTIONS(678), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(676), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4741] = 2,
    ACTIONS(682), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(680), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4766] = 2,
    ACTIONS(686), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(684), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4791] = 2,
    ACTIONS(690), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(688), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4816] = 2,
    ACTIONS(694), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(692), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4841] = 2,
    ACTIONS(698), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(696), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4866] = 2,
    ACTIONS(702), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(700), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4891] = 2,
    ACTIONS(374), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(372), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
    ACTIONS(706), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(704), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4941] = 3,
    ACTIONS(540), 1,
      anon_sym_handle,
    ACTIONS(708), 1,
      anon_sym_LBRACE,
    ACTIONS(538), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
    ACTIONS(712), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(710), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [4993] = 2,
    ACTIONS(544), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(546), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5018] = 2,
    ACTIONS(716), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(714), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5043] = 2,
    ACTIONS(548), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(469), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5068] = 2,
    ACTIONS(720), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(718), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5093] = 2,
    ACTIONS(724), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(722), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5118] = 2,
    ACTIONS(728), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(726), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5143] = 2,
    ACTIONS(732), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(730), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5168] = 2,
    ACTIONS(736), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(734), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5193] = 2,
    ACTIONS(572), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(574), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5218] = 2,
    ACTIONS(740), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(738), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5243] = 2,
    ACTIONS(554), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(552), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5268] = 2,
    ACTIONS(546), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(544), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5293] = 2,
    ACTIONS(744), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(742), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5318] = 2,
    ACTIONS(748), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(746), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5343] = 2,
    ACTIONS(752), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(750), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5368] = 2,
    ACTIONS(756), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(754), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5393] = 2,
    ACTIONS(552), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(554), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5418] = 2,
    ACTIONS(556), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(558), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5443] = 2,
    ACTIONS(760), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(758), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5468] = 2,
    ACTIONS(764), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(762), 18,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5493] = 2,
    ACTIONS(576), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(578), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
  [5518] = 2,
    ACTIONS(756), 1,
      anon_sym_handle,
    ACTIONS(754), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5542] = 2,
    ACTIONS(604), 1,
      anon_sym_handle,
    ACTIONS(602), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5566] = 2,
    ACTIONS(374), 1,
      anon_sym_handle,
    ACTIONS(372), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5590] = 2,
    ACTIONS(366), 1,
      anon_sym_handle,
    ACTIONS(364), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5614] = 2,
    ACTIONS(724), 1,
      anon_sym_handle,
    ACTIONS(722), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5638] = 2,
    ACTIONS(732), 1,
      anon_sym_handle,
    ACTIONS(730), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
    ACTIONS(720), 1,
      anon_sym_handle,
    ACTIONS(718), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5686] = 2,
    ACTIONS(546), 1,
      anon_sym_handle,
    ACTIONS(544), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5710] = 2,
    ACTIONS(716), 1,
      anon_sym_handle,
    ACTIONS(714), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5734] = 2,
    ACTIONS(616), 1,
      anon_sym_handle,
    ACTIONS(614), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5758] = 2,
    ACTIONS(740), 1,
      anon_sym_handle,
    ACTIONS(738), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5782] = 2,
    ACTIONS(698), 1,
      anon_sym_handle,
    ACTIONS(696), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5806] = 2,
    ACTIONS(712), 1,
      anon_sym_handle,
    ACTIONS(710), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5830] = 2,
    ACTIONS(706), 1,
      anon_sym_handle,
    ACTIONS(704), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5854] = 2,
    ACTIONS(702), 1,
      anon_sym_handle,
    ACTIONS(700), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5878] = 2,
    ACTIONS(694), 1,
      anon_sym_handle,
    ACTIONS(692), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5902] = 2,
    ACTIONS(690), 1,
      anon_sym_handle,
    ACTIONS(688), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5926] = 2,
    ACTIONS(686), 1,
      anon_sym_handle,
    ACTIONS(684), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5950] = 2,
    ACTIONS(598), 1,
      anon_sym_handle,
    ACTIONS(596), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5974] = 2,
    ACTIONS(620), 1,
      anon_sym_handle,
    ACTIONS(618), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [5998] = 2,
    ACTIONS(650), 1,
      anon_sym_handle,
    ACTIONS(648), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6022] = 2,
    ACTIONS(662), 1,
      anon_sym_handle,
    ACTIONS(660), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6046] = 2,
    ACTIONS(658), 1,
      anon_sym_handle,
    ACTIONS(656), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6070] = 2,
    ACTIONS(586), 1,
      anon_sym_handle,
    ACTIONS(584), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6094] = 2,
    ACTIONS(608), 1,
      anon_sym_handle,
    ACTIONS(606), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6118] = 2,
    ACTIONS(682), 1,
      anon_sym_handle,
    ACTIONS(680), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6142] = 2,
    ACTIONS(674), 1,
      anon_sym_handle,
    ACTIONS(672), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6166] = 2,
    ACTIONS(748), 1,
      anon_sym_handle,
    ACTIONS(746), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6190] = 2,
    ACTIONS(642), 1,
      anon_sym_handle,
    ACTIONS(640), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6214] = 2,
    ACTIONS(654), 1,
      anon_sym_handle,
    ACTIONS(652), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6238] = 2,
    ACTIONS(666), 1,
      anon_sym_handle,
    ACTIONS(664), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
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
    ACTIONS(670), 1,
      anon_sym_handle,
    ACTIONS(668), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6286] = 2,
    ACTIONS(678), 1,
      anon_sym_handle,
    ACTIONS(676), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6310] = 2,
    ACTIONS(590), 1,
      anon_sym_handle,
    ACTIONS(588), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6334] = 2,
    ACTIONS(594), 1,
      anon_sym_handle,
    ACTIONS(592), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6358] = 2,
    ACTIONS(728), 1,
      anon_sym_handle,
    ACTIONS(726), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6382] = 2,
    ACTIONS(760), 1,
      anon_sym_handle,
    ACTIONS(758), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6406] = 2,
    ACTIONS(612), 1,
      anon_sym_handle,
    ACTIONS(610), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6430] = 2,
    ACTIONS(624), 1,
      anon_sym_handle,
    ACTIONS(622), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6454] = 2,
    ACTIONS(628), 1,
      anon_sym_handle,
    ACTIONS(626), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6478] = 2,
    ACTIONS(736), 1,
      anon_sym_handle,
    ACTIONS(734), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6502] = 2,
    ACTIONS(632), 1,
      anon_sym_handle,
    ACTIONS(630), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6526] = 2,
    ACTIONS(636), 1,
      anon_sym_handle,
    ACTIONS(634), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6550] = 2,
    ACTIONS(646), 1,
      anon_sym_handle,
    ACTIONS(644), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6574] = 2,
    ACTIONS(744), 1,
      anon_sym_handle,
    ACTIONS(742), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6598] = 2,
    ACTIONS(752), 1,
      anon_sym_handle,
    ACTIONS(750), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6622] = 2,
    ACTIONS(764), 1,
      anon_sym_handle,
    ACTIONS(762), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6646] = 2,
    ACTIONS(554), 1,
      anon_sym_handle,
    ACTIONS(552), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
      anon_sym_basicauth,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_file_server,
      anon_sym_handle_path,
      anon_sym_header,
      anon_sym_import,
      anon_sym_log,
      anon_sym_redir,
      anon_sym_request_body,
      anon_sym_reverse_proxy,
      anon_sym_root,
      anon_sym_tls,
  [6670] = 10,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(777), 1,
      anon_sym_PLUS,
    ACTIONS(780), 1,
      anon_sym_DASH,
    ACTIONS(783), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(766), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(769), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(203), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6707] = 10,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(786), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(788), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(203), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6744] = 10,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(800), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(786), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(788), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(203), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6781] = 10,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(786), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(788), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(203), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6818] = 10,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(786), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(788), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(203), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6855] = 11,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      anon_sym_PLUS,
    ACTIONS(812), 1,
      anon_sym_DASH,
    ACTIONS(814), 1,
      anon_sym_QMARK,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    STATE(177), 1,
      sym_field_manipulator,
    STATE(454), 1,
      sym_matcher_token,
    STATE(457), 1,
      sym_header_name,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(176), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6893] = 11,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(822), 1,
      anon_sym_COLON,
    STATE(60), 1,
      sym_site_address,
    STATE(89), 1,
      sym__port_number,
    STATE(270), 1,
      sym_protocol,
    STATE(459), 1,
      sym_matcher_token,
    STATE(562), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(818), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(820), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6931] = 9,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(824), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(826), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(205), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6965] = 9,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(828), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(830), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(206), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6999] = 11,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(836), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_site_address,
    STATE(151), 1,
      sym__port_number,
    STATE(273), 1,
      sym_protocol,
    STATE(453), 1,
      sym_matcher_token,
    STATE(516), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(832), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(834), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7037] = 11,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(838), 1,
      anon_sym_LBRACE,
    ACTIONS(840), 1,
      anon_sym_PLUS,
    ACTIONS(842), 1,
      anon_sym_DASH,
    ACTIONS(844), 1,
      anon_sym_QMARK,
    STATE(118), 1,
      sym_field_manipulator,
    STATE(473), 1,
      sym_matcher_token,
    STATE(474), 1,
      sym_header_name,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(119), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7075] = 9,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(846), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(848), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(204), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7109] = 9,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(794), 1,
      anon_sym_PLUS,
    ACTIONS(796), 1,
      anon_sym_DASH,
    ACTIONS(798), 1,
      anon_sym_QMARK,
    STATE(442), 1,
      sym_header_name,
    ACTIONS(850), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(852), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(207), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(262), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7143] = 2,
    ACTIONS(856), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(854), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7161] = 2,
    ACTIONS(860), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(858), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7179] = 2,
    ACTIONS(864), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(862), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7197] = 2,
    ACTIONS(868), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(866), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7215] = 2,
    ACTIONS(872), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(870), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7233] = 2,
    ACTIONS(876), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(874), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7251] = 2,
    ACTIONS(650), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(648), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7269] = 2,
    ACTIONS(880), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(878), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [7287] = 9,
    ACTIONS(328), 1,
      sym__ipv4_address,
    ACTIONS(330), 1,
      sym__ipv6_address,
    ACTIONS(334), 1,
      anon_sym_unix,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_unix_path_token2,
    STATE(31), 1,
      sym_unix_path,
    STATE(508), 1,
      sym__network,
    STATE(26), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(332), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [7318] = 9,
    ACTIONS(334), 1,
      anon_sym_unix,
    ACTIONS(352), 1,
      sym__ipv4_address,
    ACTIONS(354), 1,
      sym__ipv6_address,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    STATE(35), 1,
      sym_unix_path,
    STATE(552), 1,
      sym__network,
    STATE(28), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(332), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [7349] = 3,
    ACTIONS(882), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(370), 1,
      sym__horizontal_whitespaces,
    ACTIONS(536), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7367] = 8,
    ACTIONS(884), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(892), 1,
      anon_sym_path_regexp,
    STATE(255), 1,
      sym__horizontal_whitespaces,
    ACTIONS(886), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(261), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7395] = 8,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(840), 1,
      anon_sym_PLUS,
    ACTIONS(842), 1,
      anon_sym_DASH,
    ACTIONS(844), 1,
      anon_sym_QMARK,
    ACTIONS(894), 1,
      anon_sym_LBRACE,
    STATE(138), 1,
      sym_field_manipulator,
    STATE(474), 1,
      sym_header_name,
    STATE(119), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7423] = 8,
    ACTIONS(836), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_site_address,
    STATE(151), 1,
      sym__port_number,
    STATE(273), 1,
      sym_protocol,
    STATE(516), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(832), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(834), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7451] = 8,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(892), 1,
      anon_sym_path_regexp,
    ACTIONS(896), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      sym__horizontal_whitespaces,
    ACTIONS(898), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(253), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7479] = 8,
    ACTIONS(836), 1,
      anon_sym_COLON,
    STATE(73), 1,
      sym_site_address,
    STATE(151), 1,
      sym__port_number,
    STATE(273), 1,
      sym_protocol,
    STATE(516), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(832), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(834), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7507] = 8,
    ACTIONS(822), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_site_address,
    STATE(89), 1,
      sym__port_number,
    STATE(270), 1,
      sym_protocol,
    STATE(562), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(818), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(820), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7535] = 8,
    ACTIONS(822), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_site_address,
    STATE(89), 1,
      sym__port_number,
    STATE(270), 1,
      sym_protocol,
    STATE(562), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(818), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(820), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7563] = 8,
    ACTIONS(792), 1,
      aux_sym_directive_basicauth_token1,
    ACTIONS(810), 1,
      anon_sym_PLUS,
    ACTIONS(812), 1,
      anon_sym_DASH,
    ACTIONS(814), 1,
      anon_sym_QMARK,
    ACTIONS(902), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_field_manipulator,
    STATE(457), 1,
      sym_header_name,
    STATE(176), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7591] = 6,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_roll_size,
    ACTIONS(912), 1,
      anon_sym_roll_keep,
    ACTIONS(915), 1,
      anon_sym_roll_keep_for_days,
    STATE(235), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(904), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7614] = 2,
    ACTIONS(544), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(546), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7629] = 2,
    ACTIONS(552), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(554), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
  [7644] = 8,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(918), 1,
      sym_domain_address,
    ACTIONS(922), 1,
      sym_uri_path_with_placeholders,
    STATE(42), 1,
      sym_redir_or_rewrite_target,
    STATE(468), 1,
      sym_matcher_token,
    STATE(548), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(920), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7671] = 8,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(924), 1,
      sym_domain_address,
    ACTIONS(926), 1,
      sym_uri_path_with_placeholders,
    STATE(39), 1,
      sym_redir_or_rewrite_target,
    STATE(466), 1,
      sym_matcher_token,
    STATE(547), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(920), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7698] = 8,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(922), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(928), 1,
      sym_domain_address,
    STATE(42), 1,
      sym_redir_or_rewrite_target,
    STATE(484), 1,
      sym_matcher_token,
    STATE(520), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(920), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7725] = 6,
    ACTIONS(932), 1,
      anon_sym_RBRACE,
    ACTIONS(934), 1,
      anon_sym_roll_size,
    ACTIONS(936), 1,
      anon_sym_roll_keep,
    ACTIONS(938), 1,
      anon_sym_roll_keep_for_days,
    STATE(245), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(930), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7748] = 6,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
    ACTIONS(944), 1,
      anon_sym_output,
    ACTIONS(946), 1,
      anon_sym_format,
    ACTIONS(948), 1,
      anon_sym_level,
    ACTIONS(940), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(247), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7771] = 6,
    ACTIONS(944), 1,
      anon_sym_output,
    ACTIONS(946), 1,
      anon_sym_format,
    ACTIONS(948), 1,
      anon_sym_level,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
    ACTIONS(950), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7794] = 6,
    ACTIONS(944), 1,
      anon_sym_output,
    ACTIONS(946), 1,
      anon_sym_format,
    ACTIONS(948), 1,
      anon_sym_level,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(940), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(247), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7817] = 6,
    ACTIONS(934), 1,
      anon_sym_roll_size,
    ACTIONS(936), 1,
      anon_sym_roll_keep,
    ACTIONS(938), 1,
      anon_sym_roll_keep_for_days,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(956), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7840] = 6,
    ACTIONS(944), 1,
      anon_sym_output,
    ACTIONS(946), 1,
      anon_sym_format,
    ACTIONS(948), 1,
      anon_sym_level,
    ACTIONS(962), 1,
      anon_sym_RBRACE,
    ACTIONS(960), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(242), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7863] = 6,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
    ACTIONS(969), 1,
      anon_sym_output,
    ACTIONS(972), 1,
      anon_sym_format,
    ACTIONS(975), 1,
      anon_sym_level,
    ACTIONS(964), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(247), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7886] = 2,
    ACTIONS(686), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(684), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7900] = 2,
    ACTIONS(598), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(596), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7914] = 6,
    ACTIONS(981), 1,
      anon_sym_RBRACE,
    ACTIONS(983), 1,
      anon_sym_path,
    ACTIONS(986), 1,
      anon_sym_path_regexp,
    ACTIONS(978), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7936] = 2,
    ACTIONS(991), 1,
      anon_sym_roll_keep,
    ACTIONS(989), 8,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_roll_disabled,
      anon_sym_roll_size,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
      anon_sym_roll_keep_for_days,
  [7950] = 2,
    ACTIONS(554), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(552), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7964] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(993), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7986] = 2,
    ACTIONS(682), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(680), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8000] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    ACTIONS(999), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(263), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8022] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(1003), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(258), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8044] = 2,
    ACTIONS(628), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(626), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8058] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(1005), 1,
      anon_sym_RBRACE,
    ACTIONS(993), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8080] = 2,
    ACTIONS(748), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(746), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8094] = 2,
    ACTIONS(546), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(544), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8108] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(1001), 1,
      anon_sym_RBRACE,
    ACTIONS(993), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8130] = 2,
    ACTIONS(662), 4,
      sym__empty_line,
      aux_sym_directive_basicauth_token1,
      anon_sym_defer,
      anon_sym_DASH,
    ACTIONS(660), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [8144] = 6,
    ACTIONS(890), 1,
      anon_sym_path,
    ACTIONS(997), 1,
      anon_sym_path_regexp,
    ACTIONS(1007), 1,
      anon_sym_RBRACE,
    ACTIONS(993), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(614), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [8166] = 5,
    ACTIONS(1011), 1,
      anon_sym_RBRACE,
    ACTIONS(1013), 1,
      anon_sym_email,
    ACTIONS(1015), 1,
      anon_sym_auto_https,
    ACTIONS(1009), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(267), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8185] = 5,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    STATE(500), 1,
      sym_matcher_token,
    ACTIONS(428), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(53), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8204] = 5,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    STATE(463), 1,
      sym_matcher_token,
    ACTIONS(456), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(67), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8223] = 5,
    ACTIONS(1020), 1,
      anon_sym_RBRACE,
    ACTIONS(1022), 1,
      anon_sym_email,
    ACTIONS(1025), 1,
      anon_sym_auto_https,
    ACTIONS(1017), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(267), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8242] = 5,
    ACTIONS(1013), 1,
      anon_sym_email,
    ACTIONS(1015), 1,
      anon_sym_auto_https,
    ACTIONS(1030), 1,
      anon_sym_RBRACE,
    ACTIONS(1028), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(264), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [8261] = 6,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    ACTIONS(1034), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1036), 1,
      sym__valid_uri_path_string,
    STATE(128), 1,
      sym_unix_path,
    STATE(458), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8281] = 5,
    ACTIONS(822), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym__port_number,
    STATE(561), 1,
      sym__ip_or_domain_address,
    ACTIONS(1038), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1040), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8299] = 5,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(611), 1,
      sym__port_number,
    STATE(612), 1,
      sym__ip_or_domain_address,
    ACTIONS(1042), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1044), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8317] = 6,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1046), 1,
      anon_sym_LBRACE,
    ACTIONS(1048), 1,
      anon_sym_bcrypt,
    STATE(461), 1,
      sym_hash_algorithm,
    STATE(491), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8337] = 5,
    ACTIONS(836), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym__port_number,
    STATE(501), 1,
      sym__ip_or_domain_address,
    ACTIONS(1050), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(1052), 2,
      sym__ipv6_address,
      sym_domain_address,
  [8355] = 6,
    ACTIONS(1036), 1,
      sym__valid_uri_path_string,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1056), 1,
      aux_sym_unix_path_token2,
    STATE(166), 1,
      sym_unix_path,
    STATE(452), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8375] = 6,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1048), 1,
      anon_sym_bcrypt,
    ACTIONS(1058), 1,
      anon_sym_LBRACE,
    STATE(407), 1,
      sym_matcher_token,
    STATE(409), 1,
      sym_hash_algorithm,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8395] = 5,
    ACTIONS(924), 1,
      sym_domain_address,
    ACTIONS(926), 1,
      sym_uri_path_with_placeholders,
    STATE(37), 1,
      sym_redir_or_rewrite_target,
    STATE(547), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8412] = 1,
    ACTIONS(1060), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8421] = 1,
    ACTIONS(1062), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8430] = 4,
    ACTIONS(1066), 1,
      anon_sym_RBRACE,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8445] = 1,
    ACTIONS(1070), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8454] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1072), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8469] = 3,
    ACTIONS(1074), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(576), 1,
      sym__horizontal_whitespaces,
    ACTIONS(1076), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [8482] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1078), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8497] = 1,
    ACTIONS(1080), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8506] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1082), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8521] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1084), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8536] = 1,
    ACTIONS(1086), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8545] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1088), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8560] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1090), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8575] = 1,
    ACTIONS(1092), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8584] = 5,
    ACTIONS(918), 1,
      sym_domain_address,
    ACTIONS(922), 1,
      sym_uri_path_with_placeholders,
    STATE(47), 1,
      sym_redir_or_rewrite_target,
    STATE(548), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8601] = 5,
    ACTIONS(922), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(928), 1,
      sym_domain_address,
    STATE(47), 1,
      sym_redir_or_rewrite_target,
    STATE(520), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [8618] = 4,
    ACTIONS(1097), 1,
      anon_sym_RBRACE,
    ACTIONS(1099), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1094), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8633] = 1,
    ACTIONS(1102), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [8642] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1104), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8657] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1106), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8672] = 4,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1108), 1,
      anon_sym_RBRACE,
    ACTIONS(1064), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(293), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8687] = 4,
    ACTIONS(1112), 1,
      anon_sym_RBRACE,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [8701] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1116), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [8715] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1118), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [8729] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1120), 1,
      anon_sym_LBRACE,
    STATE(404), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8743] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1122), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [8757] = 5,
    ACTIONS(1124), 1,
      sym__vertical_whitespace,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1130), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [8773] = 5,
    ACTIONS(1124), 1,
      sym__vertical_whitespace,
    ACTIONS(1130), 1,
      anon_sym_RBRACE,
    ACTIONS(1132), 1,
      sym__empty_line,
    ACTIONS(1134), 1,
      sym_comment_line,
    STATE(314), 1,
      aux_sym_directive_request_body_repeat1,
  [8789] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1136), 1,
      anon_sym_LBRACE,
    STATE(460), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8803] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1138), 1,
      anon_sym_LBRACE,
    STATE(480), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8817] = 3,
    ACTIONS(1142), 1,
      anon_sym_file,
    STATE(284), 1,
      sym__log_output_file,
    ACTIONS(1140), 3,
      anon_sym_stderr,
      anon_sym_stdout,
      anon_sym_discard,
  [8829] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1144), 1,
      anon_sym_LBRACE,
    STATE(483), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8843] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1146), 1,
      anon_sym_LBRACE,
    STATE(427), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8857] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1148), 1,
      anon_sym_LBRACE,
    STATE(428), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8871] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1150), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [8885] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1152), 1,
      anon_sym_browse,
    STATE(59), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8899] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1154), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(286), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8911] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1156), 1,
      sym__vertical_whitespace,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [8927] = 5,
    ACTIONS(1156), 1,
      sym__vertical_whitespace,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
    ACTIONS(1160), 1,
      sym__empty_line,
    ACTIONS(1162), 1,
      sym_comment_line,
    STATE(323), 1,
      aux_sym_directive_request_body_repeat1,
  [8943] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1164), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(285), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8955] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1166), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(283), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8967] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1168), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(296), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8979] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1170), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(297), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [8991] = 5,
    ACTIONS(1172), 1,
      sym__vertical_whitespace,
    ACTIONS(1174), 1,
      sym__empty_line,
    ACTIONS(1176), 1,
      sym_comment_line,
    ACTIONS(1178), 1,
      anon_sym_RBRACE,
    STATE(303), 1,
      aux_sym_directive_request_body_repeat1,
  [9007] = 4,
    ACTIONS(1182), 1,
      sym__empty_line,
    ACTIONS(1185), 1,
      sym_comment_line,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1180), 2,
      sym__vertical_whitespace,
      anon_sym_RBRACE,
  [9021] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1188), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(279), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9033] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1190), 1,
      sym__vertical_whitespace,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9049] = 5,
    ACTIONS(1190), 1,
      sym__vertical_whitespace,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
    ACTIONS(1194), 1,
      sym__empty_line,
    ACTIONS(1196), 1,
      sym_comment_line,
    STATE(329), 1,
      aux_sym_directive_request_body_repeat1,
  [9065] = 4,
    ACTIONS(1201), 1,
      anon_sym_RBRACE,
    ACTIONS(1203), 1,
      anon_sym_browse,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1198), 2,
      sym__empty_line,
      sym_comment_line,
  [9079] = 2,
    ACTIONS(1208), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(1206), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [9089] = 5,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1210), 1,
      sym__ipv4_address,
    ACTIONS(1212), 1,
      sym__ipv6_address,
    STATE(29), 1,
      sym_unix_path,
  [9105] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1214), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(281), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9117] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1216), 1,
      sym__vertical_whitespace,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9133] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1220), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(295), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9145] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1222), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(288), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9157] = 2,
    ACTIONS(1226), 1,
      anon_sym_path,
    ACTIONS(1224), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_path_regexp,
  [9167] = 3,
    ACTIONS(1068), 1,
      aux_sym_matcher_path_regexp_token2,
    ACTIONS(1228), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(289), 2,
      sym_basicauth_credential,
      aux_sym_directive_basicauth_repeat1,
  [9179] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1230), 1,
      sym__vertical_whitespaces,
    STATE(464), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9193] = 4,
    ACTIONS(816), 1,
      sym__valid_uri_path_string,
    ACTIONS(1232), 1,
      sym__vertical_whitespaces,
    STATE(495), 1,
      sym_matcher_token,
    ACTIONS(808), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9207] = 4,
    ACTIONS(1236), 1,
      anon_sym_browse,
    ACTIONS(1238), 1,
      sym__valid_uri_path_string,
    STATE(79), 1,
      sym_matcher_token,
    ACTIONS(1234), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [9221] = 1,
    ACTIONS(1240), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [9229] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1242), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [9243] = 1,
    ACTIONS(1244), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [9251] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1246), 1,
      sym__vertical_whitespace,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9267] = 5,
    ACTIONS(1250), 1,
      sym__vertical_whitespace,
    ACTIONS(1252), 1,
      sym__empty_line,
    ACTIONS(1254), 1,
      sym_comment_line,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      aux_sym_directive_request_body_repeat1,
  [9283] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1250), 1,
      sym__vertical_whitespace,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9299] = 5,
    ACTIONS(1258), 1,
      sym__vertical_whitespace,
    ACTIONS(1260), 1,
      sym__empty_line,
    ACTIONS(1262), 1,
      sym_comment_line,
    ACTIONS(1264), 1,
      anon_sym_RBRACE,
    STATE(342), 1,
      aux_sym_directive_request_body_repeat1,
  [9315] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1258), 1,
      sym__vertical_whitespace,
    ACTIONS(1264), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9331] = 5,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1266), 1,
      sym__ipv4_address,
    ACTIONS(1268), 1,
      sym__ipv6_address,
    STATE(34), 1,
      sym_unix_path,
  [9347] = 5,
    ACTIONS(1270), 1,
      sym__vertical_whitespace,
    ACTIONS(1272), 1,
      sym__empty_line,
    ACTIONS(1274), 1,
      sym_comment_line,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    STATE(344), 1,
      aux_sym_directive_request_body_repeat1,
  [9363] = 5,
    ACTIONS(1126), 1,
      sym__empty_line,
    ACTIONS(1128), 1,
      sym_comment_line,
    ACTIONS(1270), 1,
      sym__vertical_whitespace,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
  [9379] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1278), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [9393] = 4,
    ACTIONS(1114), 1,
      anon_sym_browse,
    ACTIONS(1280), 1,
      anon_sym_RBRACE,
    STATE(325), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1110), 2,
      sym__empty_line,
      sym_comment_line,
  [9407] = 5,
    ACTIONS(1282), 1,
      sym__vertical_whitespace,
    ACTIONS(1284), 1,
      sym__empty_line,
    ACTIONS(1286), 1,
      sym_comment_line,
    ACTIONS(1288), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      aux_sym_directive_request_body_repeat1,
  [9423] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(299), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1290), 2,
      sym__empty_line,
      sym_comment_line,
  [9434] = 1,
    ACTIONS(1292), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_browse,
  [9441] = 4,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1296), 1,
      aux_sym_header_value_token1,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(180), 1,
      sym_header_value,
  [9454] = 4,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1296), 1,
      aux_sym_header_value_token1,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(194), 1,
      sym_header_value,
  [9467] = 4,
    ACTIONS(1300), 1,
      anon_sym_DQUOTE,
    ACTIONS(1302), 1,
      aux_sym_header_value_token1,
    ACTIONS(1304), 1,
      anon_sym_SQUOTE,
    STATE(82), 1,
      sym_header_value,
  [9480] = 3,
    ACTIONS(1308), 1,
      anon_sym_max_size,
    STATE(377), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1306), 2,
      sym__empty_line,
      sym_comment_line,
  [9491] = 2,
    ACTIONS(456), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(62), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9500] = 3,
    ACTIONS(1312), 1,
      anon_sym_max_size,
    STATE(356), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1310), 2,
      sym__empty_line,
      sym_comment_line,
  [9511] = 4,
    ACTIONS(1314), 1,
      anon_sym_DQUOTE,
    ACTIONS(1316), 1,
      aux_sym_header_value_token1,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      sym_header_value,
  [9524] = 4,
    ACTIONS(1320), 1,
      anon_sym_DQUOTE,
    ACTIONS(1322), 1,
      aux_sym_header_value_token1,
    ACTIONS(1324), 1,
      anon_sym_SQUOTE,
    STATE(87), 1,
      sym_header_value,
  [9537] = 4,
    ACTIONS(1314), 1,
      anon_sym_DQUOTE,
    ACTIONS(1316), 1,
      aux_sym_header_value_token1,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    STATE(125), 1,
      sym_header_value,
  [9550] = 4,
    ACTIONS(1314), 1,
      anon_sym_DQUOTE,
    ACTIONS(1316), 1,
      aux_sym_header_value_token1,
    ACTIONS(1318), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_header_value,
  [9563] = 3,
    ACTIONS(1328), 1,
      anon_sym_max_size,
    STATE(368), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1326), 2,
      sym__empty_line,
      sym_comment_line,
  [9574] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(348), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1330), 2,
      sym__empty_line,
      sym_comment_line,
  [9585] = 4,
    ACTIONS(1332), 1,
      anon_sym_DQUOTE,
    ACTIONS(1334), 1,
      aux_sym_header_value_token1,
    ACTIONS(1336), 1,
      anon_sym_SQUOTE,
    STATE(226), 1,
      sym_header_value,
  [9598] = 4,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 1,
      aux_sym_header_value_token1,
    ACTIONS(1342), 1,
      anon_sym_SQUOTE,
    STATE(248), 1,
      sym_header_value,
  [9611] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(311), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1344), 2,
      sym__empty_line,
      sym_comment_line,
  [9622] = 3,
    ACTIONS(1346), 1,
      anon_sym_max_size,
    STATE(377), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1306), 2,
      sym__empty_line,
      sym_comment_line,
  [9633] = 4,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 1,
      aux_sym_header_value_token1,
    ACTIONS(1342), 1,
      anon_sym_SQUOTE,
    STATE(254), 1,
      sym_header_value,
  [9646] = 4,
    ACTIONS(1338), 1,
      anon_sym_DQUOTE,
    ACTIONS(1340), 1,
      aux_sym_header_value_token1,
    ACTIONS(1342), 1,
      anon_sym_SQUOTE,
    STATE(257), 1,
      sym_header_value,
  [9659] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(338), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1348), 2,
      sym__empty_line,
      sym_comment_line,
  [9670] = 1,
    ACTIONS(1350), 4,
      anon_sym_off,
      anon_sym_disable_redirects,
      anon_sym_ignore_loaded_certs,
      anon_sym_disable_certs,
  [9677] = 3,
    ACTIONS(1352), 1,
      anon_sym_max_size,
    STATE(377), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1306), 2,
      sym__empty_line,
      sym_comment_line,
  [9688] = 4,
    ACTIONS(1294), 1,
      anon_sym_DQUOTE,
    ACTIONS(1296), 1,
      aux_sym_header_value_token1,
    ACTIONS(1298), 1,
      anon_sym_SQUOTE,
    STATE(172), 1,
      sym_header_value,
  [9701] = 3,
    ACTIONS(1354), 1,
      anon_sym_max_size,
    STATE(377), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1306), 2,
      sym__empty_line,
      sym_comment_line,
  [9712] = 3,
    ACTIONS(1358), 1,
      anon_sym_max_size,
    STATE(373), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1356), 2,
      sym__empty_line,
      sym_comment_line,
  [9723] = 3,
    ACTIONS(1180), 1,
      anon_sym_max_size,
    STATE(377), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1360), 2,
      sym__empty_line,
      sym_comment_line,
  [9734] = 1,
    ACTIONS(1363), 4,
      anon_sym_INFO,
      anon_sym_info,
      anon_sym_ERROR,
      anon_sym_error,
  [9741] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(349), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1365), 2,
      sym__empty_line,
      sym_comment_line,
  [9752] = 2,
    ACTIONS(428), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(57), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [9761] = 1,
    ACTIONS(1367), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      aux_sym_matcher_path_regexp_token2,
  [9768] = 3,
    ACTIONS(1371), 1,
      anon_sym_max_size,
    STATE(375), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1369), 2,
      sym__empty_line,
      sym_comment_line,
  [9779] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(298), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1373), 2,
      sym__empty_line,
      sym_comment_line,
  [9790] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(300), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1375), 2,
      sym__empty_line,
      sym_comment_line,
  [9801] = 3,
    ACTIONS(1114), 1,
      anon_sym_browse,
    STATE(302), 1,
      aux_sym_directive_file_server_repeat1,
    ACTIONS(1377), 2,
      sym__empty_line,
      sym_comment_line,
  [9812] = 3,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    ACTIONS(1379), 1,
      aux_sym_unix_path_token2,
    STATE(387), 1,
      sym_unix_path,
  [9822] = 3,
    ACTIONS(1381), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1383), 1,
      sym__vertical_whitespace,
    STATE(566), 1,
      sym__horizontal_whitespaces,
  [9832] = 3,
    ACTIONS(1048), 1,
      anon_sym_bcrypt,
    ACTIONS(1385), 1,
      anon_sym_LBRACE,
    STATE(405), 1,
      sym_hash_algorithm,
  [9842] = 3,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    ACTIONS(1387), 1,
      aux_sym_unix_path_token2,
    STATE(131), 1,
      sym_unix_path,
  [9852] = 3,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      aux_sym_unix_path_token2,
    STATE(198), 1,
      sym_unix_path,
  [9862] = 3,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    ACTIONS(1387), 1,
      aux_sym_unix_path_token2,
    STATE(133), 1,
      sym_unix_path,
  [9872] = 3,
    ACTIONS(1391), 1,
      anon_sym_DQUOTE,
    ACTIONS(1393), 1,
      aux_sym_unix_path_token2,
    STATE(628), 1,
      sym_unix_path,
  [9882] = 2,
    ACTIONS(1395), 1,
      anon_sym_SLASH,
    ACTIONS(1397), 2,
      anon_sym_4,
      anon_sym_6,
  [9890] = 2,
    ACTIONS(1395), 1,
      anon_sym_SLASH,
    ACTIONS(1397), 2,
      anon_sym_gram,
      anon_sym_packet,
  [9898] = 3,
    ACTIONS(1032), 1,
      anon_sym_DQUOTE,
    ACTIONS(1387), 1,
      aux_sym_unix_path_token2,
    STATE(115), 1,
      sym_unix_path,
  [9908] = 3,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      aux_sym_unix_path_token2,
    STATE(167), 1,
      sym_unix_path,
  [9918] = 3,
    ACTIONS(1054), 1,
      anon_sym_DQUOTE,
    ACTIONS(1389), 1,
      aux_sym_unix_path_token2,
    STATE(168), 1,
      sym_unix_path,
  [9928] = 3,
    ACTIONS(1048), 1,
      anon_sym_bcrypt,
    ACTIONS(1399), 1,
      anon_sym_LBRACE,
    STATE(402), 1,
      sym_hash_algorithm,
  [9938] = 2,
    ACTIONS(1401), 1,
      aux_sym_directive_basicauth_token1,
    STATE(182), 1,
      sym_header_name,
  [9945] = 2,
    ACTIONS(1403), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(46), 1,
      sym__horizontal_whitespaces,
  [9952] = 2,
    ACTIONS(1405), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(625), 1,
      sym__horizontal_whitespaces,
  [9959] = 2,
    ACTIONS(1407), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(414), 1,
      sym__horizontal_whitespaces,
  [9966] = 2,
    ACTIONS(1409), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(623), 1,
      sym__horizontal_whitespaces,
  [9973] = 2,
    ACTIONS(1411), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(622), 1,
      sym__horizontal_whitespaces,
  [9980] = 2,
    ACTIONS(1413), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(455), 1,
      sym__horizontal_whitespaces,
  [9987] = 2,
    ACTIONS(1415), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(556), 1,
      sym__horizontal_whitespaces,
  [9994] = 2,
    ACTIONS(1417), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(398), 1,
      sym__horizontal_whitespaces,
  [10001] = 2,
    ACTIONS(1419), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(557), 1,
      sym__horizontal_whitespaces,
  [10008] = 2,
    ACTIONS(1421), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(425), 1,
      sym__horizontal_whitespaces,
  [10015] = 2,
    ACTIONS(1423), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(564), 1,
      sym__horizontal_whitespaces,
  [10022] = 2,
    ACTIONS(1425), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(301), 1,
      sym__horizontal_whitespaces,
  [10029] = 2,
    ACTIONS(1427), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(395), 1,
      sym__horizontal_whitespaces,
  [10036] = 2,
    ACTIONS(1429), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(275), 1,
      sym__horizontal_whitespaces,
  [10043] = 2,
    ACTIONS(1431), 1,
      anon_sym_LBRACE,
    ACTIONS(1433), 1,
      aux_sym_directive_basicauth_token1,
  [10050] = 2,
    ACTIONS(1435), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(392), 1,
      sym__horizontal_whitespaces,
  [10057] = 2,
    ACTIONS(1437), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(378), 1,
      sym__horizontal_whitespaces,
  [10064] = 2,
    ACTIONS(1439), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(494), 1,
      sym__horizontal_whitespaces,
  [10071] = 2,
    ACTIONS(364), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(366), 1,
      sym__vertical_whitespace,
  [10078] = 2,
    ACTIONS(1441), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(307), 1,
      sym__horizontal_whitespaces,
  [10085] = 2,
    ACTIONS(1443), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(372), 1,
      sym__horizontal_whitespaces,
  [10092] = 2,
    ACTIONS(1445), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(362), 1,
      sym__horizontal_whitespaces,
  [10099] = 2,
    ACTIONS(1447), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(582), 1,
      sym__horizontal_whitespaces,
  [10106] = 2,
    ACTIONS(1449), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(361), 1,
      sym__horizontal_whitespaces,
  [10113] = 2,
    ACTIONS(372), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(374), 1,
      sym__vertical_whitespace,
  [10120] = 2,
    ACTIONS(1399), 1,
      anon_sym_LBRACE,
    ACTIONS(1451), 1,
      aux_sym_directive_basicauth_token1,
  [10127] = 2,
    ACTIONS(1453), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(451), 1,
      sym__horizontal_whitespaces,
  [10134] = 2,
    ACTIONS(1455), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(603), 1,
      sym__horizontal_whitespaces,
  [10141] = 2,
    ACTIONS(1457), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(602), 1,
      sym__horizontal_whitespaces,
  [10148] = 2,
    ACTIONS(1459), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(306), 1,
      sym__horizontal_whitespaces,
  [10155] = 2,
    ACTIONS(1461), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(309), 1,
      sym__horizontal_whitespaces,
  [10162] = 2,
    ACTIONS(1463), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(310), 1,
      sym__horizontal_whitespaces,
  [10169] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(440), 1,
      sym_header_name,
  [10176] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(441), 1,
      sym_header_name,
  [10183] = 2,
    ACTIONS(1467), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(578), 1,
      sym__horizontal_whitespaces,
  [10190] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(445), 1,
      sym_header_name,
  [10197] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(446), 1,
      sym_header_name,
  [10204] = 2,
    ACTIONS(1469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(575), 1,
      sym__horizontal_whitespaces,
  [10211] = 2,
    ACTIONS(1471), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(538), 1,
      sym__horizontal_whitespaces,
  [10218] = 2,
    ACTIONS(1385), 1,
      anon_sym_LBRACE,
    ACTIONS(1473), 1,
      aux_sym_directive_basicauth_token1,
  [10225] = 2,
    ACTIONS(1475), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(369), 1,
      sym__horizontal_whitespaces,
  [10232] = 2,
    ACTIONS(1477), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(366), 1,
      sym__horizontal_whitespaces,
  [10239] = 2,
    ACTIONS(1479), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(365), 1,
      sym__horizontal_whitespaces,
  [10246] = 2,
    ACTIONS(1481), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(240), 1,
      sym__horizontal_whitespaces,
  [10253] = 2,
    ACTIONS(1483), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(390), 1,
      sym__horizontal_whitespaces,
  [10260] = 2,
    ACTIONS(1485), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(353), 1,
      sym__horizontal_whitespaces,
  [10267] = 2,
    ACTIONS(1487), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(374), 1,
      sym__horizontal_whitespaces,
  [10274] = 2,
    ACTIONS(1489), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(524), 1,
      sym__horizontal_whitespaces,
  [10281] = 2,
    ACTIONS(1491), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(397), 1,
      sym__horizontal_whitespaces,
  [10288] = 2,
    ACTIONS(1493), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(113), 1,
      sym__horizontal_whitespaces,
  [10295] = 2,
    ACTIONS(1495), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(50), 1,
      sym__horizontal_whitespaces,
  [10302] = 2,
    ACTIONS(1497), 1,
      aux_sym_matcher_path_regexp_token1,
    ACTIONS(1499), 1,
      aux_sym_matcher_path_regexp_token2,
  [10309] = 2,
    ACTIONS(1501), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(396), 1,
      sym__horizontal_whitespaces,
  [10316] = 2,
    ACTIONS(1503), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(231), 1,
      sym__horizontal_whitespaces,
  [10323] = 2,
    ACTIONS(1505), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(234), 1,
      sym__horizontal_whitespaces,
  [10330] = 2,
    ACTIONS(1507), 1,
      anon_sym_LBRACE,
    ACTIONS(1509), 1,
      aux_sym_directive_basicauth_token1,
  [10337] = 2,
    ACTIONS(1511), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(389), 1,
      sym__horizontal_whitespaces,
  [10344] = 2,
    ACTIONS(1513), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(360), 1,
      sym__horizontal_whitespaces,
  [10351] = 2,
    ACTIONS(1515), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(391), 1,
      sym__horizontal_whitespaces,
  [10358] = 2,
    ACTIONS(1517), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(233), 1,
      sym__horizontal_whitespaces,
  [10365] = 2,
    ACTIONS(1519), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(627), 1,
      sym__horizontal_whitespaces,
  [10372] = 2,
    ACTIONS(1521), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(439), 1,
      sym__horizontal_whitespaces,
  [10379] = 2,
    ACTIONS(1523), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(615), 1,
      sym__horizontal_whitespaces,
  [10386] = 2,
    ACTIONS(1525), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(357), 1,
      sym__horizontal_whitespaces,
  [10393] = 2,
    ACTIONS(1527), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(546), 1,
      sym__horizontal_whitespaces,
  [10400] = 2,
    ACTIONS(1529), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(386), 1,
      sym__horizontal_whitespaces,
  [10407] = 2,
    ACTIONS(1531), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(276), 1,
      sym__horizontal_whitespaces,
  [10414] = 2,
    ACTIONS(1533), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(523), 1,
      sym__horizontal_whitespaces,
  [10421] = 2,
    ACTIONS(1535), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(291), 1,
      sym__horizontal_whitespaces,
  [10428] = 2,
    ACTIONS(1537), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(274), 1,
      sym__horizontal_whitespaces,
  [10435] = 2,
    ACTIONS(1539), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(212), 1,
      sym__horizontal_whitespaces,
  [10442] = 2,
    ACTIONS(1541), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(238), 1,
      sym__horizontal_whitespaces,
  [10449] = 2,
    ACTIONS(1543), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(208), 1,
      sym__horizontal_whitespaces,
  [10456] = 2,
    ACTIONS(1545), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(228), 1,
      sym__horizontal_whitespaces,
  [10463] = 2,
    ACTIONS(1547), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(355), 1,
      sym__horizontal_whitespaces,
  [10470] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(421), 1,
      sym_header_name,
  [10477] = 2,
    ACTIONS(1549), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(266), 1,
      sym__horizontal_whitespaces,
  [10484] = 2,
    ACTIONS(1551), 1,
      aux_sym_directive_basicauth_token1,
    STATE(147), 1,
      sym_header_name,
  [10491] = 2,
    ACTIONS(1465), 1,
      aux_sym_directive_basicauth_token1,
    STATE(423), 1,
      sym_header_name,
  [10498] = 2,
    ACTIONS(1553), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(225), 1,
      sym__horizontal_whitespaces,
  [10505] = 2,
    ACTIONS(1555), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(624), 1,
      sym__horizontal_whitespaces,
  [10512] = 2,
    ACTIONS(1557), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(334), 1,
      sym__horizontal_whitespaces,
  [10519] = 2,
    ACTIONS(1559), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(515), 1,
      sym__horizontal_whitespaces,
  [10526] = 2,
    ACTIONS(1561), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(620), 1,
      sym__horizontal_whitespaces,
  [10533] = 2,
    ACTIONS(1563), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(292), 1,
      sym__horizontal_whitespaces,
  [10540] = 2,
    ACTIONS(1565), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(335), 1,
      sym__horizontal_whitespaces,
  [10547] = 2,
    ACTIONS(1567), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(272), 1,
      sym__horizontal_whitespaces,
  [10554] = 2,
    ACTIONS(1569), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(224), 1,
      sym__horizontal_whitespaces,
  [10561] = 2,
    ACTIONS(1571), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(265), 1,
      sym__horizontal_whitespaces,
  [10568] = 2,
    ACTIONS(1573), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(308), 1,
      sym__horizontal_whitespaces,
  [10575] = 2,
    ACTIONS(1575), 1,
      aux_sym_directive_basicauth_token1,
    STATE(259), 1,
      sym_header_name,
  [10582] = 2,
    ACTIONS(1577), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(388), 1,
      sym__horizontal_whitespaces,
  [10589] = 2,
    ACTIONS(1579), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(305), 1,
      sym__horizontal_whitespaces,
  [10596] = 2,
    ACTIONS(1581), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(209), 1,
      sym__horizontal_whitespaces,
  [10603] = 1,
    ACTIONS(1583), 2,
      anon_sym_console,
      anon_sym_json,
  [10608] = 2,
    ACTIONS(1585), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(581), 1,
      sym__horizontal_whitespaces,
  [10615] = 2,
    ACTIONS(1587), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(269), 1,
      sym__horizontal_whitespaces,
  [10622] = 2,
    ACTIONS(1589), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(213), 1,
      sym__horizontal_whitespaces,
  [10629] = 2,
    ACTIONS(1591), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(91), 1,
      sym__horizontal_whitespaces,
  [10636] = 2,
    ACTIONS(1593), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(239), 1,
      sym__horizontal_whitespaces,
  [10643] = 2,
    ACTIONS(1595), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(380), 1,
      sym__horizontal_whitespaces,
  [10650] = 1,
    ACTIONS(1597), 1,
      aux_sym_site_address_token1,
  [10654] = 1,
    ACTIONS(1599), 1,
      aux_sym_header_value_token3,
  [10658] = 1,
    ACTIONS(1601), 1,
      anon_sym_SQUOTE,
  [10662] = 1,
    ACTIONS(1603), 1,
      sym__vertical_whitespace,
  [10666] = 1,
    ACTIONS(1276), 1,
      anon_sym_RBRACE,
  [10670] = 1,
    ACTIONS(1264), 1,
      anon_sym_RBRACE,
  [10674] = 1,
    ACTIONS(1256), 1,
      anon_sym_RBRACE,
  [10678] = 1,
    ACTIONS(1605), 1,
      anon_sym_SLASH,
  [10682] = 1,
    ACTIONS(1607), 1,
      aux_sym_unix_path_token1,
  [10686] = 1,
    ACTIONS(1248), 1,
      anon_sym_RBRACE,
  [10690] = 1,
    ACTIONS(576), 1,
      anon_sym_LBRACE,
  [10694] = 1,
    ACTIONS(1609), 1,
      anon_sym_RBRACE,
  [10698] = 1,
    ACTIONS(1611), 1,
      sym__vertical_whitespace,
  [10702] = 1,
    ACTIONS(1613), 1,
      aux_sym__port_number_token1,
  [10706] = 1,
    ACTIONS(1615), 1,
      aux_sym__log_output_file_token2,
  [10710] = 1,
    ACTIONS(1617), 1,
      aux_sym_site_address_token1,
  [10714] = 1,
    ACTIONS(1619), 1,
      sym__vertical_whitespace,
  [10718] = 1,
    ACTIONS(1621), 1,
      aux_sym_header_value_token3,
  [10722] = 1,
    ACTIONS(1623), 1,
      ts_builtin_sym_end,
  [10726] = 1,
    ACTIONS(1625), 1,
      sym_domain_address,
  [10730] = 1,
    ACTIONS(1627), 1,
      anon_sym_LBRACE,
  [10734] = 1,
    ACTIONS(1629), 1,
      anon_sym_DQUOTE,
  [10738] = 1,
    ACTIONS(1615), 1,
      aux_sym__log_output_file_token1,
  [10742] = 1,
    ACTIONS(1615), 1,
      sym_size_number,
  [10746] = 1,
    ACTIONS(1631), 1,
      aux_sym_site_address_token1,
  [10750] = 1,
    ACTIONS(1633), 1,
      anon_sym_DQUOTE,
  [10754] = 1,
    ACTIONS(1633), 1,
      anon_sym_SQUOTE,
  [10758] = 1,
    ACTIONS(1635), 1,
      anon_sym_LBRACE,
  [10762] = 1,
    ACTIONS(1637), 1,
      anon_sym_DQUOTE,
  [10766] = 1,
    ACTIONS(1639), 1,
      anon_sym_DQUOTE,
  [10770] = 1,
    ACTIONS(1639), 1,
      anon_sym_SQUOTE,
  [10774] = 1,
    ACTIONS(1641), 1,
      anon_sym_DQUOTE,
  [10778] = 1,
    ACTIONS(1643), 1,
      anon_sym_DQUOTE,
  [10782] = 1,
    ACTIONS(1643), 1,
      anon_sym_SQUOTE,
  [10786] = 1,
    ACTIONS(1645), 1,
      anon_sym_DQUOTE,
  [10790] = 1,
    ACTIONS(1647), 1,
      anon_sym_DQUOTE,
  [10794] = 1,
    ACTIONS(1647), 1,
      anon_sym_SQUOTE,
  [10798] = 1,
    ACTIONS(1649), 1,
      sym_snippet_name,
  [10802] = 1,
    ACTIONS(1651), 1,
      anon_sym_LBRACE,
  [10806] = 1,
    ACTIONS(1653), 1,
      sym__vertical_whitespace,
  [10810] = 1,
    ACTIONS(1655), 1,
      sym__vertical_whitespace,
  [10814] = 1,
    ACTIONS(596), 1,
      aux_sym__horizontal_whitespaces_token1,
  [10818] = 1,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
  [10822] = 1,
    ACTIONS(1657), 1,
      anon_sym_browse,
  [10826] = 1,
    ACTIONS(1659), 1,
      anon_sym_DQUOTE,
  [10830] = 1,
    ACTIONS(1661), 1,
      sym__vertical_whitespaces,
  [10834] = 1,
    ACTIONS(1663), 1,
      sym_domain_address,
  [10838] = 1,
    ACTIONS(1665), 1,
      sym_domain_address,
  [10842] = 1,
    ACTIONS(1667), 1,
      aux_sym_unix_path_token1,
  [10846] = 1,
    ACTIONS(1669), 1,
      anon_sym_LBRACE,
  [10850] = 1,
    ACTIONS(1671), 1,
      sym__vertical_whitespace,
  [10854] = 1,
    ACTIONS(1673), 1,
      anon_sym_SLASH,
  [10858] = 1,
    ACTIONS(1675), 1,
      anon_sym_SQUOTE,
  [10862] = 1,
    ACTIONS(1675), 1,
      anon_sym_DQUOTE,
  [10866] = 1,
    ACTIONS(1677), 1,
      sym__vertical_whitespace,
  [10870] = 1,
    ACTIONS(1679), 1,
      anon_sym_LBRACE,
  [10874] = 1,
    ACTIONS(1681), 1,
      aux_sym_matcher_path_regexp_token2,
  [10878] = 1,
    ACTIONS(1683), 1,
      sym__vertical_whitespace,
  [10882] = 1,
    ACTIONS(1685), 1,
      anon_sym_RBRACE,
  [10886] = 1,
    ACTIONS(1218), 1,
      anon_sym_RBRACE,
  [10890] = 1,
    ACTIONS(1687), 1,
      aux_sym_site_address_token1,
  [10894] = 1,
    ACTIONS(1689), 1,
      aux_sym_site_address_token1,
  [10898] = 1,
    ACTIONS(1691), 1,
      sym_size_number,
  [10902] = 1,
    ACTIONS(1693), 1,
      aux_sym_matcher_path_regexp_token2,
  [10906] = 1,
    ACTIONS(1695), 1,
      aux_sym__port_number_token1,
  [10910] = 1,
    ACTIONS(1697), 1,
      anon_sym_LBRACE,
  [10914] = 1,
    ACTIONS(1699), 1,
      aux_sym_header_value_token2,
  [10918] = 1,
    ACTIONS(1601), 1,
      anon_sym_DQUOTE,
  [10922] = 1,
    ACTIONS(1701), 1,
      aux_sym__horizontal_whitespaces_token1,
  [10926] = 1,
    ACTIONS(1703), 1,
      sym_size_number,
  [10930] = 1,
    ACTIONS(1705), 1,
      sym__vertical_whitespace,
  [10934] = 1,
    ACTIONS(1192), 1,
      anon_sym_RBRACE,
  [10938] = 1,
    ACTIONS(1707), 1,
      sym_size_number,
  [10942] = 1,
    ACTIONS(1709), 1,
      sym_size_number,
  [10946] = 1,
    ACTIONS(1711), 1,
      anon_sym_LBRACE,
  [10950] = 1,
    ACTIONS(1713), 1,
      aux_sym_basicauth_credential_token1,
  [10954] = 1,
    ACTIONS(1715), 1,
      sym_size_number,
  [10958] = 1,
    ACTIONS(1717), 1,
      sym_snippet_name,
  [10962] = 1,
    ACTIONS(1719), 1,
      aux_sym__port_number_token1,
  [10966] = 1,
    ACTIONS(1721), 1,
      aux_sym_unix_path_token1,
  [10970] = 1,
    ACTIONS(1723), 1,
      sym__vertical_whitespaces,
  [10974] = 1,
    ACTIONS(1725), 1,
      sym_email_address,
  [10978] = 1,
    ACTIONS(372), 1,
      sym__vertical_whitespace,
  [10982] = 1,
    ACTIONS(1727), 1,
      aux_sym_header_value_token2,
  [10986] = 1,
    ACTIONS(1729), 1,
      aux_sym_header_value_token3,
  [10990] = 1,
    ACTIONS(1731), 1,
      aux_sym_unix_path_token1,
  [10994] = 1,
    ACTIONS(1733), 1,
      aux_sym_header_value_token2,
  [10998] = 1,
    ACTIONS(1735), 1,
      aux_sym_header_value_token3,
  [11002] = 1,
    ACTIONS(1737), 1,
      aux_sym_unix_path_token1,
  [11006] = 1,
    ACTIONS(1739), 1,
      aux_sym_header_value_token2,
  [11010] = 1,
    ACTIONS(1741), 1,
      aux_sym_header_value_token3,
  [11014] = 1,
    ACTIONS(1743), 1,
      aux_sym_unix_path_token1,
  [11018] = 1,
    ACTIONS(1745), 1,
      aux_sym_header_value_token2,
  [11022] = 1,
    ACTIONS(1747), 1,
      aux_sym_header_value_token3,
  [11026] = 1,
    ACTIONS(364), 1,
      sym__vertical_whitespace,
  [11030] = 1,
    ACTIONS(1158), 1,
      anon_sym_RBRACE,
  [11034] = 1,
    ACTIONS(1749), 1,
      sym_size_number,
  [11038] = 1,
    ACTIONS(1751), 1,
      sym__vertical_whitespace,
  [11042] = 1,
    ACTIONS(1753), 1,
      anon_sym_SLASH,
  [11046] = 1,
    ACTIONS(1755), 1,
      anon_sym_DQUOTE,
  [11050] = 1,
    ACTIONS(1757), 1,
      sym__vertical_whitespace,
  [11054] = 1,
    ACTIONS(1759), 1,
      anon_sym_LBRACE,
  [11058] = 1,
    ACTIONS(1761), 1,
      anon_sym_LBRACE,
  [11062] = 1,
    ACTIONS(1763), 1,
      sym__vertical_whitespace,
  [11066] = 1,
    ACTIONS(1765), 1,
      sym__vertical_whitespace,
  [11070] = 1,
    ACTIONS(1767), 1,
      sym__vertical_whitespace,
  [11074] = 1,
    ACTIONS(1769), 1,
      sym_size_number,
  [11078] = 1,
    ACTIONS(1771), 1,
      sym__vertical_whitespace,
  [11082] = 1,
    ACTIONS(1773), 1,
      sym__vertical_whitespace,
  [11086] = 1,
    ACTIONS(1775), 1,
      sym__vertical_whitespace,
  [11090] = 1,
    ACTIONS(580), 1,
      anon_sym_LBRACE,
  [11094] = 1,
    ACTIONS(1777), 1,
      aux_sym_site_address_token1,
  [11098] = 1,
    ACTIONS(556), 1,
      anon_sym_LBRACE,
  [11102] = 1,
    ACTIONS(1779), 1,
      sym__vertical_whitespace,
  [11106] = 1,
    ACTIONS(1781), 1,
      sym_snippet_name,
  [11110] = 1,
    ACTIONS(1783), 1,
      sym__vertical_whitespace,
  [11114] = 1,
    ACTIONS(1130), 1,
      anon_sym_RBRACE,
  [11118] = 1,
    ACTIONS(572), 1,
      anon_sym_LBRACE,
  [11122] = 1,
    ACTIONS(1785), 1,
      anon_sym_browse,
  [11126] = 1,
    ACTIONS(1787), 1,
      anon_sym_LBRACE,
  [11130] = 1,
    ACTIONS(1789), 1,
      sym__vertical_whitespace,
  [11134] = 1,
    ACTIONS(1791), 1,
      anon_sym_LBRACE,
  [11138] = 1,
    ACTIONS(1793), 1,
      anon_sym_LBRACE,
  [11142] = 1,
    ACTIONS(1795), 1,
      anon_sym_LBRACE,
  [11146] = 1,
    ACTIONS(1797), 1,
      anon_sym_LBRACE,
  [11150] = 1,
    ACTIONS(1799), 1,
      sym_size_number,
  [11154] = 1,
    ACTIONS(1801), 1,
      anon_sym_LBRACE,
  [11158] = 1,
    ACTIONS(1803), 1,
      sym__vertical_whitespace,
  [11162] = 1,
    ACTIONS(1805), 1,
      sym__vertical_whitespace,
  [11166] = 1,
    ACTIONS(1807), 1,
      sym__vertical_whitespace,
  [11170] = 1,
    ACTIONS(1809), 1,
      sym__vertical_whitespace,
  [11174] = 1,
    ACTIONS(1811), 1,
      anon_sym_RBRACE,
  [11178] = 1,
    ACTIONS(1813), 1,
      aux_sym_header_value_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 247,
  [SMALL_STATE(6)] = 325,
  [SMALL_STATE(7)] = 403,
  [SMALL_STATE(8)] = 481,
  [SMALL_STATE(9)] = 555,
  [SMALL_STATE(10)] = 629,
  [SMALL_STATE(11)] = 703,
  [SMALL_STATE(12)] = 777,
  [SMALL_STATE(13)] = 851,
  [SMALL_STATE(14)] = 925,
  [SMALL_STATE(15)] = 999,
  [SMALL_STATE(16)] = 1073,
  [SMALL_STATE(17)] = 1147,
  [SMALL_STATE(18)] = 1218,
  [SMALL_STATE(19)] = 1289,
  [SMALL_STATE(20)] = 1360,
  [SMALL_STATE(21)] = 1431,
  [SMALL_STATE(22)] = 1502,
  [SMALL_STATE(23)] = 1573,
  [SMALL_STATE(24)] = 1644,
  [SMALL_STATE(25)] = 1715,
  [SMALL_STATE(26)] = 1770,
  [SMALL_STATE(27)] = 1825,
  [SMALL_STATE(28)] = 1879,
  [SMALL_STATE(29)] = 1933,
  [SMALL_STATE(30)] = 1966,
  [SMALL_STATE(31)] = 1999,
  [SMALL_STATE(32)] = 2032,
  [SMALL_STATE(33)] = 2065,
  [SMALL_STATE(34)] = 2097,
  [SMALL_STATE(35)] = 2129,
  [SMALL_STATE(36)] = 2161,
  [SMALL_STATE(37)] = 2193,
  [SMALL_STATE(38)] = 2228,
  [SMALL_STATE(39)] = 2261,
  [SMALL_STATE(40)] = 2296,
  [SMALL_STATE(41)] = 2329,
  [SMALL_STATE(42)] = 2361,
  [SMALL_STATE(43)] = 2395,
  [SMALL_STATE(44)] = 2425,
  [SMALL_STATE(45)] = 2457,
  [SMALL_STATE(46)] = 2487,
  [SMALL_STATE(47)] = 2525,
  [SMALL_STATE(48)] = 2559,
  [SMALL_STATE(49)] = 2589,
  [SMALL_STATE(50)] = 2620,
  [SMALL_STATE(51)] = 2657,
  [SMALL_STATE(52)] = 2686,
  [SMALL_STATE(53)] = 2715,
  [SMALL_STATE(54)] = 2748,
  [SMALL_STATE(55)] = 2779,
  [SMALL_STATE(56)] = 2812,
  [SMALL_STATE(57)] = 2841,
  [SMALL_STATE(58)] = 2874,
  [SMALL_STATE(59)] = 2906,
  [SMALL_STATE(60)] = 2938,
  [SMALL_STATE(61)] = 2970,
  [SMALL_STATE(62)] = 3002,
  [SMALL_STATE(63)] = 3034,
  [SMALL_STATE(64)] = 3066,
  [SMALL_STATE(65)] = 3098,
  [SMALL_STATE(66)] = 3130,
  [SMALL_STATE(67)] = 3164,
  [SMALL_STATE(68)] = 3196,
  [SMALL_STATE(69)] = 3228,
  [SMALL_STATE(70)] = 3259,
  [SMALL_STATE(71)] = 3286,
  [SMALL_STATE(72)] = 3317,
  [SMALL_STATE(73)] = 3350,
  [SMALL_STATE(74)] = 3381,
  [SMALL_STATE(75)] = 3432,
  [SMALL_STATE(76)] = 3463,
  [SMALL_STATE(77)] = 3494,
  [SMALL_STATE(78)] = 3545,
  [SMALL_STATE(79)] = 3576,
  [SMALL_STATE(80)] = 3607,
  [SMALL_STATE(81)] = 3634,
  [SMALL_STATE(82)] = 3661,
  [SMALL_STATE(83)] = 3690,
  [SMALL_STATE(84)] = 3716,
  [SMALL_STATE(85)] = 3744,
  [SMALL_STATE(86)] = 3770,
  [SMALL_STATE(87)] = 3796,
  [SMALL_STATE(88)] = 3824,
  [SMALL_STATE(89)] = 3850,
  [SMALL_STATE(90)] = 3876,
  [SMALL_STATE(91)] = 3904,
  [SMALL_STATE(92)] = 3932,
  [SMALL_STATE(93)] = 3958,
  [SMALL_STATE(94)] = 3984,
  [SMALL_STATE(95)] = 4010,
  [SMALL_STATE(96)] = 4036,
  [SMALL_STATE(97)] = 4062,
  [SMALL_STATE(98)] = 4087,
  [SMALL_STATE(99)] = 4112,
  [SMALL_STATE(100)] = 4137,
  [SMALL_STATE(101)] = 4162,
  [SMALL_STATE(102)] = 4187,
  [SMALL_STATE(103)] = 4212,
  [SMALL_STATE(104)] = 4239,
  [SMALL_STATE(105)] = 4264,
  [SMALL_STATE(106)] = 4289,
  [SMALL_STATE(107)] = 4314,
  [SMALL_STATE(108)] = 4339,
  [SMALL_STATE(109)] = 4364,
  [SMALL_STATE(110)] = 4389,
  [SMALL_STATE(111)] = 4414,
  [SMALL_STATE(112)] = 4439,
  [SMALL_STATE(113)] = 4464,
  [SMALL_STATE(114)] = 4491,
  [SMALL_STATE(115)] = 4516,
  [SMALL_STATE(116)] = 4541,
  [SMALL_STATE(117)] = 4566,
  [SMALL_STATE(118)] = 4591,
  [SMALL_STATE(119)] = 4616,
  [SMALL_STATE(120)] = 4641,
  [SMALL_STATE(121)] = 4666,
  [SMALL_STATE(122)] = 4691,
  [SMALL_STATE(123)] = 4716,
  [SMALL_STATE(124)] = 4741,
  [SMALL_STATE(125)] = 4766,
  [SMALL_STATE(126)] = 4791,
  [SMALL_STATE(127)] = 4816,
  [SMALL_STATE(128)] = 4841,
  [SMALL_STATE(129)] = 4866,
  [SMALL_STATE(130)] = 4891,
  [SMALL_STATE(131)] = 4916,
  [SMALL_STATE(132)] = 4941,
  [SMALL_STATE(133)] = 4968,
  [SMALL_STATE(134)] = 4993,
  [SMALL_STATE(135)] = 5018,
  [SMALL_STATE(136)] = 5043,
  [SMALL_STATE(137)] = 5068,
  [SMALL_STATE(138)] = 5093,
  [SMALL_STATE(139)] = 5118,
  [SMALL_STATE(140)] = 5143,
  [SMALL_STATE(141)] = 5168,
  [SMALL_STATE(142)] = 5193,
  [SMALL_STATE(143)] = 5218,
  [SMALL_STATE(144)] = 5243,
  [SMALL_STATE(145)] = 5268,
  [SMALL_STATE(146)] = 5293,
  [SMALL_STATE(147)] = 5318,
  [SMALL_STATE(148)] = 5343,
  [SMALL_STATE(149)] = 5368,
  [SMALL_STATE(150)] = 5393,
  [SMALL_STATE(151)] = 5418,
  [SMALL_STATE(152)] = 5443,
  [SMALL_STATE(153)] = 5468,
  [SMALL_STATE(154)] = 5493,
  [SMALL_STATE(155)] = 5518,
  [SMALL_STATE(156)] = 5542,
  [SMALL_STATE(157)] = 5566,
  [SMALL_STATE(158)] = 5590,
  [SMALL_STATE(159)] = 5614,
  [SMALL_STATE(160)] = 5638,
  [SMALL_STATE(161)] = 5662,
  [SMALL_STATE(162)] = 5686,
  [SMALL_STATE(163)] = 5710,
  [SMALL_STATE(164)] = 5734,
  [SMALL_STATE(165)] = 5758,
  [SMALL_STATE(166)] = 5782,
  [SMALL_STATE(167)] = 5806,
  [SMALL_STATE(168)] = 5830,
  [SMALL_STATE(169)] = 5854,
  [SMALL_STATE(170)] = 5878,
  [SMALL_STATE(171)] = 5902,
  [SMALL_STATE(172)] = 5926,
  [SMALL_STATE(173)] = 5950,
  [SMALL_STATE(174)] = 5974,
  [SMALL_STATE(175)] = 5998,
  [SMALL_STATE(176)] = 6022,
  [SMALL_STATE(177)] = 6046,
  [SMALL_STATE(178)] = 6070,
  [SMALL_STATE(179)] = 6094,
  [SMALL_STATE(180)] = 6118,
  [SMALL_STATE(181)] = 6142,
  [SMALL_STATE(182)] = 6166,
  [SMALL_STATE(183)] = 6190,
  [SMALL_STATE(184)] = 6214,
  [SMALL_STATE(185)] = 6238,
  [SMALL_STATE(186)] = 6262,
  [SMALL_STATE(187)] = 6286,
  [SMALL_STATE(188)] = 6310,
  [SMALL_STATE(189)] = 6334,
  [SMALL_STATE(190)] = 6358,
  [SMALL_STATE(191)] = 6382,
  [SMALL_STATE(192)] = 6406,
  [SMALL_STATE(193)] = 6430,
  [SMALL_STATE(194)] = 6454,
  [SMALL_STATE(195)] = 6478,
  [SMALL_STATE(196)] = 6502,
  [SMALL_STATE(197)] = 6526,
  [SMALL_STATE(198)] = 6550,
  [SMALL_STATE(199)] = 6574,
  [SMALL_STATE(200)] = 6598,
  [SMALL_STATE(201)] = 6622,
  [SMALL_STATE(202)] = 6646,
  [SMALL_STATE(203)] = 6670,
  [SMALL_STATE(204)] = 6707,
  [SMALL_STATE(205)] = 6744,
  [SMALL_STATE(206)] = 6781,
  [SMALL_STATE(207)] = 6818,
  [SMALL_STATE(208)] = 6855,
  [SMALL_STATE(209)] = 6893,
  [SMALL_STATE(210)] = 6931,
  [SMALL_STATE(211)] = 6965,
  [SMALL_STATE(212)] = 6999,
  [SMALL_STATE(213)] = 7037,
  [SMALL_STATE(214)] = 7075,
  [SMALL_STATE(215)] = 7109,
  [SMALL_STATE(216)] = 7143,
  [SMALL_STATE(217)] = 7161,
  [SMALL_STATE(218)] = 7179,
  [SMALL_STATE(219)] = 7197,
  [SMALL_STATE(220)] = 7215,
  [SMALL_STATE(221)] = 7233,
  [SMALL_STATE(222)] = 7251,
  [SMALL_STATE(223)] = 7269,
  [SMALL_STATE(224)] = 7287,
  [SMALL_STATE(225)] = 7318,
  [SMALL_STATE(226)] = 7349,
  [SMALL_STATE(227)] = 7367,
  [SMALL_STATE(228)] = 7395,
  [SMALL_STATE(229)] = 7423,
  [SMALL_STATE(230)] = 7451,
  [SMALL_STATE(231)] = 7479,
  [SMALL_STATE(232)] = 7507,
  [SMALL_STATE(233)] = 7535,
  [SMALL_STATE(234)] = 7563,
  [SMALL_STATE(235)] = 7591,
  [SMALL_STATE(236)] = 7614,
  [SMALL_STATE(237)] = 7629,
  [SMALL_STATE(238)] = 7644,
  [SMALL_STATE(239)] = 7671,
  [SMALL_STATE(240)] = 7698,
  [SMALL_STATE(241)] = 7725,
  [SMALL_STATE(242)] = 7748,
  [SMALL_STATE(243)] = 7771,
  [SMALL_STATE(244)] = 7794,
  [SMALL_STATE(245)] = 7817,
  [SMALL_STATE(246)] = 7840,
  [SMALL_STATE(247)] = 7863,
  [SMALL_STATE(248)] = 7886,
  [SMALL_STATE(249)] = 7900,
  [SMALL_STATE(250)] = 7914,
  [SMALL_STATE(251)] = 7936,
  [SMALL_STATE(252)] = 7950,
  [SMALL_STATE(253)] = 7964,
  [SMALL_STATE(254)] = 7986,
  [SMALL_STATE(255)] = 8000,
  [SMALL_STATE(256)] = 8022,
  [SMALL_STATE(257)] = 8044,
  [SMALL_STATE(258)] = 8058,
  [SMALL_STATE(259)] = 8080,
  [SMALL_STATE(260)] = 8094,
  [SMALL_STATE(261)] = 8108,
  [SMALL_STATE(262)] = 8130,
  [SMALL_STATE(263)] = 8144,
  [SMALL_STATE(264)] = 8166,
  [SMALL_STATE(265)] = 8185,
  [SMALL_STATE(266)] = 8204,
  [SMALL_STATE(267)] = 8223,
  [SMALL_STATE(268)] = 8242,
  [SMALL_STATE(269)] = 8261,
  [SMALL_STATE(270)] = 8281,
  [SMALL_STATE(271)] = 8299,
  [SMALL_STATE(272)] = 8317,
  [SMALL_STATE(273)] = 8337,
  [SMALL_STATE(274)] = 8355,
  [SMALL_STATE(275)] = 8375,
  [SMALL_STATE(276)] = 8395,
  [SMALL_STATE(277)] = 8412,
  [SMALL_STATE(278)] = 8421,
  [SMALL_STATE(279)] = 8430,
  [SMALL_STATE(280)] = 8445,
  [SMALL_STATE(281)] = 8454,
  [SMALL_STATE(282)] = 8469,
  [SMALL_STATE(283)] = 8482,
  [SMALL_STATE(284)] = 8497,
  [SMALL_STATE(285)] = 8506,
  [SMALL_STATE(286)] = 8521,
  [SMALL_STATE(287)] = 8536,
  [SMALL_STATE(288)] = 8545,
  [SMALL_STATE(289)] = 8560,
  [SMALL_STATE(290)] = 8575,
  [SMALL_STATE(291)] = 8584,
  [SMALL_STATE(292)] = 8601,
  [SMALL_STATE(293)] = 8618,
  [SMALL_STATE(294)] = 8633,
  [SMALL_STATE(295)] = 8642,
  [SMALL_STATE(296)] = 8657,
  [SMALL_STATE(297)] = 8672,
  [SMALL_STATE(298)] = 8687,
  [SMALL_STATE(299)] = 8701,
  [SMALL_STATE(300)] = 8715,
  [SMALL_STATE(301)] = 8729,
  [SMALL_STATE(302)] = 8743,
  [SMALL_STATE(303)] = 8757,
  [SMALL_STATE(304)] = 8773,
  [SMALL_STATE(305)] = 8789,
  [SMALL_STATE(306)] = 8803,
  [SMALL_STATE(307)] = 8817,
  [SMALL_STATE(308)] = 8829,
  [SMALL_STATE(309)] = 8843,
  [SMALL_STATE(310)] = 8857,
  [SMALL_STATE(311)] = 8871,
  [SMALL_STATE(312)] = 8885,
  [SMALL_STATE(313)] = 8899,
  [SMALL_STATE(314)] = 8911,
  [SMALL_STATE(315)] = 8927,
  [SMALL_STATE(316)] = 8943,
  [SMALL_STATE(317)] = 8955,
  [SMALL_STATE(318)] = 8967,
  [SMALL_STATE(319)] = 8979,
  [SMALL_STATE(320)] = 8991,
  [SMALL_STATE(321)] = 9007,
  [SMALL_STATE(322)] = 9021,
  [SMALL_STATE(323)] = 9033,
  [SMALL_STATE(324)] = 9049,
  [SMALL_STATE(325)] = 9065,
  [SMALL_STATE(326)] = 9079,
  [SMALL_STATE(327)] = 9089,
  [SMALL_STATE(328)] = 9105,
  [SMALL_STATE(329)] = 9117,
  [SMALL_STATE(330)] = 9133,
  [SMALL_STATE(331)] = 9145,
  [SMALL_STATE(332)] = 9157,
  [SMALL_STATE(333)] = 9167,
  [SMALL_STATE(334)] = 9179,
  [SMALL_STATE(335)] = 9193,
  [SMALL_STATE(336)] = 9207,
  [SMALL_STATE(337)] = 9221,
  [SMALL_STATE(338)] = 9229,
  [SMALL_STATE(339)] = 9243,
  [SMALL_STATE(340)] = 9251,
  [SMALL_STATE(341)] = 9267,
  [SMALL_STATE(342)] = 9283,
  [SMALL_STATE(343)] = 9299,
  [SMALL_STATE(344)] = 9315,
  [SMALL_STATE(345)] = 9331,
  [SMALL_STATE(346)] = 9347,
  [SMALL_STATE(347)] = 9363,
  [SMALL_STATE(348)] = 9379,
  [SMALL_STATE(349)] = 9393,
  [SMALL_STATE(350)] = 9407,
  [SMALL_STATE(351)] = 9423,
  [SMALL_STATE(352)] = 9434,
  [SMALL_STATE(353)] = 9441,
  [SMALL_STATE(354)] = 9454,
  [SMALL_STATE(355)] = 9467,
  [SMALL_STATE(356)] = 9480,
  [SMALL_STATE(357)] = 9491,
  [SMALL_STATE(358)] = 9500,
  [SMALL_STATE(359)] = 9511,
  [SMALL_STATE(360)] = 9524,
  [SMALL_STATE(361)] = 9537,
  [SMALL_STATE(362)] = 9550,
  [SMALL_STATE(363)] = 9563,
  [SMALL_STATE(364)] = 9574,
  [SMALL_STATE(365)] = 9585,
  [SMALL_STATE(366)] = 9598,
  [SMALL_STATE(367)] = 9611,
  [SMALL_STATE(368)] = 9622,
  [SMALL_STATE(369)] = 9633,
  [SMALL_STATE(370)] = 9646,
  [SMALL_STATE(371)] = 9659,
  [SMALL_STATE(372)] = 9670,
  [SMALL_STATE(373)] = 9677,
  [SMALL_STATE(374)] = 9688,
  [SMALL_STATE(375)] = 9701,
  [SMALL_STATE(376)] = 9712,
  [SMALL_STATE(377)] = 9723,
  [SMALL_STATE(378)] = 9734,
  [SMALL_STATE(379)] = 9741,
  [SMALL_STATE(380)] = 9752,
  [SMALL_STATE(381)] = 9761,
  [SMALL_STATE(382)] = 9768,
  [SMALL_STATE(383)] = 9779,
  [SMALL_STATE(384)] = 9790,
  [SMALL_STATE(385)] = 9801,
  [SMALL_STATE(386)] = 9812,
  [SMALL_STATE(387)] = 9822,
  [SMALL_STATE(388)] = 9832,
  [SMALL_STATE(389)] = 9842,
  [SMALL_STATE(390)] = 9852,
  [SMALL_STATE(391)] = 9862,
  [SMALL_STATE(392)] = 9872,
  [SMALL_STATE(393)] = 9882,
  [SMALL_STATE(394)] = 9890,
  [SMALL_STATE(395)] = 9898,
  [SMALL_STATE(396)] = 9908,
  [SMALL_STATE(397)] = 9918,
  [SMALL_STATE(398)] = 9928,
  [SMALL_STATE(399)] = 9938,
  [SMALL_STATE(400)] = 9945,
  [SMALL_STATE(401)] = 9952,
  [SMALL_STATE(402)] = 9959,
  [SMALL_STATE(403)] = 9966,
  [SMALL_STATE(404)] = 9973,
  [SMALL_STATE(405)] = 9980,
  [SMALL_STATE(406)] = 9987,
  [SMALL_STATE(407)] = 9994,
  [SMALL_STATE(408)] = 10001,
  [SMALL_STATE(409)] = 10008,
  [SMALL_STATE(410)] = 10015,
  [SMALL_STATE(411)] = 10022,
  [SMALL_STATE(412)] = 10029,
  [SMALL_STATE(413)] = 10036,
  [SMALL_STATE(414)] = 10043,
  [SMALL_STATE(415)] = 10050,
  [SMALL_STATE(416)] = 10057,
  [SMALL_STATE(417)] = 10064,
  [SMALL_STATE(418)] = 10071,
  [SMALL_STATE(419)] = 10078,
  [SMALL_STATE(420)] = 10085,
  [SMALL_STATE(421)] = 10092,
  [SMALL_STATE(422)] = 10099,
  [SMALL_STATE(423)] = 10106,
  [SMALL_STATE(424)] = 10113,
  [SMALL_STATE(425)] = 10120,
  [SMALL_STATE(426)] = 10127,
  [SMALL_STATE(427)] = 10134,
  [SMALL_STATE(428)] = 10141,
  [SMALL_STATE(429)] = 10148,
  [SMALL_STATE(430)] = 10155,
  [SMALL_STATE(431)] = 10162,
  [SMALL_STATE(432)] = 10169,
  [SMALL_STATE(433)] = 10176,
  [SMALL_STATE(434)] = 10183,
  [SMALL_STATE(435)] = 10190,
  [SMALL_STATE(436)] = 10197,
  [SMALL_STATE(437)] = 10204,
  [SMALL_STATE(438)] = 10211,
  [SMALL_STATE(439)] = 10218,
  [SMALL_STATE(440)] = 10225,
  [SMALL_STATE(441)] = 10232,
  [SMALL_STATE(442)] = 10239,
  [SMALL_STATE(443)] = 10246,
  [SMALL_STATE(444)] = 10253,
  [SMALL_STATE(445)] = 10260,
  [SMALL_STATE(446)] = 10267,
  [SMALL_STATE(447)] = 10274,
  [SMALL_STATE(448)] = 10281,
  [SMALL_STATE(449)] = 10288,
  [SMALL_STATE(450)] = 10295,
  [SMALL_STATE(451)] = 10302,
  [SMALL_STATE(452)] = 10309,
  [SMALL_STATE(453)] = 10316,
  [SMALL_STATE(454)] = 10323,
  [SMALL_STATE(455)] = 10330,
  [SMALL_STATE(456)] = 10337,
  [SMALL_STATE(457)] = 10344,
  [SMALL_STATE(458)] = 10351,
  [SMALL_STATE(459)] = 10358,
  [SMALL_STATE(460)] = 10365,
  [SMALL_STATE(461)] = 10372,
  [SMALL_STATE(462)] = 10379,
  [SMALL_STATE(463)] = 10386,
  [SMALL_STATE(464)] = 10393,
  [SMALL_STATE(465)] = 10400,
  [SMALL_STATE(466)] = 10407,
  [SMALL_STATE(467)] = 10414,
  [SMALL_STATE(468)] = 10421,
  [SMALL_STATE(469)] = 10428,
  [SMALL_STATE(470)] = 10435,
  [SMALL_STATE(471)] = 10442,
  [SMALL_STATE(472)] = 10449,
  [SMALL_STATE(473)] = 10456,
  [SMALL_STATE(474)] = 10463,
  [SMALL_STATE(475)] = 10470,
  [SMALL_STATE(476)] = 10477,
  [SMALL_STATE(477)] = 10484,
  [SMALL_STATE(478)] = 10491,
  [SMALL_STATE(479)] = 10498,
  [SMALL_STATE(480)] = 10505,
  [SMALL_STATE(481)] = 10512,
  [SMALL_STATE(482)] = 10519,
  [SMALL_STATE(483)] = 10526,
  [SMALL_STATE(484)] = 10533,
  [SMALL_STATE(485)] = 10540,
  [SMALL_STATE(486)] = 10547,
  [SMALL_STATE(487)] = 10554,
  [SMALL_STATE(488)] = 10561,
  [SMALL_STATE(489)] = 10568,
  [SMALL_STATE(490)] = 10575,
  [SMALL_STATE(491)] = 10582,
  [SMALL_STATE(492)] = 10589,
  [SMALL_STATE(493)] = 10596,
  [SMALL_STATE(494)] = 10603,
  [SMALL_STATE(495)] = 10608,
  [SMALL_STATE(496)] = 10615,
  [SMALL_STATE(497)] = 10622,
  [SMALL_STATE(498)] = 10629,
  [SMALL_STATE(499)] = 10636,
  [SMALL_STATE(500)] = 10643,
  [SMALL_STATE(501)] = 10650,
  [SMALL_STATE(502)] = 10654,
  [SMALL_STATE(503)] = 10658,
  [SMALL_STATE(504)] = 10662,
  [SMALL_STATE(505)] = 10666,
  [SMALL_STATE(506)] = 10670,
  [SMALL_STATE(507)] = 10674,
  [SMALL_STATE(508)] = 10678,
  [SMALL_STATE(509)] = 10682,
  [SMALL_STATE(510)] = 10686,
  [SMALL_STATE(511)] = 10690,
  [SMALL_STATE(512)] = 10694,
  [SMALL_STATE(513)] = 10698,
  [SMALL_STATE(514)] = 10702,
  [SMALL_STATE(515)] = 10706,
  [SMALL_STATE(516)] = 10710,
  [SMALL_STATE(517)] = 10714,
  [SMALL_STATE(518)] = 10718,
  [SMALL_STATE(519)] = 10722,
  [SMALL_STATE(520)] = 10726,
  [SMALL_STATE(521)] = 10730,
  [SMALL_STATE(522)] = 10734,
  [SMALL_STATE(523)] = 10738,
  [SMALL_STATE(524)] = 10742,
  [SMALL_STATE(525)] = 10746,
  [SMALL_STATE(526)] = 10750,
  [SMALL_STATE(527)] = 10754,
  [SMALL_STATE(528)] = 10758,
  [SMALL_STATE(529)] = 10762,
  [SMALL_STATE(530)] = 10766,
  [SMALL_STATE(531)] = 10770,
  [SMALL_STATE(532)] = 10774,
  [SMALL_STATE(533)] = 10778,
  [SMALL_STATE(534)] = 10782,
  [SMALL_STATE(535)] = 10786,
  [SMALL_STATE(536)] = 10790,
  [SMALL_STATE(537)] = 10794,
  [SMALL_STATE(538)] = 10798,
  [SMALL_STATE(539)] = 10802,
  [SMALL_STATE(540)] = 10806,
  [SMALL_STATE(541)] = 10810,
  [SMALL_STATE(542)] = 10814,
  [SMALL_STATE(543)] = 10818,
  [SMALL_STATE(544)] = 10822,
  [SMALL_STATE(545)] = 10826,
  [SMALL_STATE(546)] = 10830,
  [SMALL_STATE(547)] = 10834,
  [SMALL_STATE(548)] = 10838,
  [SMALL_STATE(549)] = 10842,
  [SMALL_STATE(550)] = 10846,
  [SMALL_STATE(551)] = 10850,
  [SMALL_STATE(552)] = 10854,
  [SMALL_STATE(553)] = 10858,
  [SMALL_STATE(554)] = 10862,
  [SMALL_STATE(555)] = 10866,
  [SMALL_STATE(556)] = 10870,
  [SMALL_STATE(557)] = 10874,
  [SMALL_STATE(558)] = 10878,
  [SMALL_STATE(559)] = 10882,
  [SMALL_STATE(560)] = 10886,
  [SMALL_STATE(561)] = 10890,
  [SMALL_STATE(562)] = 10894,
  [SMALL_STATE(563)] = 10898,
  [SMALL_STATE(564)] = 10902,
  [SMALL_STATE(565)] = 10906,
  [SMALL_STATE(566)] = 10910,
  [SMALL_STATE(567)] = 10914,
  [SMALL_STATE(568)] = 10918,
  [SMALL_STATE(569)] = 10922,
  [SMALL_STATE(570)] = 10926,
  [SMALL_STATE(571)] = 10930,
  [SMALL_STATE(572)] = 10934,
  [SMALL_STATE(573)] = 10938,
  [SMALL_STATE(574)] = 10942,
  [SMALL_STATE(575)] = 10946,
  [SMALL_STATE(576)] = 10950,
  [SMALL_STATE(577)] = 10954,
  [SMALL_STATE(578)] = 10958,
  [SMALL_STATE(579)] = 10962,
  [SMALL_STATE(580)] = 10966,
  [SMALL_STATE(581)] = 10970,
  [SMALL_STATE(582)] = 10974,
  [SMALL_STATE(583)] = 10978,
  [SMALL_STATE(584)] = 10982,
  [SMALL_STATE(585)] = 10986,
  [SMALL_STATE(586)] = 10990,
  [SMALL_STATE(587)] = 10994,
  [SMALL_STATE(588)] = 10998,
  [SMALL_STATE(589)] = 11002,
  [SMALL_STATE(590)] = 11006,
  [SMALL_STATE(591)] = 11010,
  [SMALL_STATE(592)] = 11014,
  [SMALL_STATE(593)] = 11018,
  [SMALL_STATE(594)] = 11022,
  [SMALL_STATE(595)] = 11026,
  [SMALL_STATE(596)] = 11030,
  [SMALL_STATE(597)] = 11034,
  [SMALL_STATE(598)] = 11038,
  [SMALL_STATE(599)] = 11042,
  [SMALL_STATE(600)] = 11046,
  [SMALL_STATE(601)] = 11050,
  [SMALL_STATE(602)] = 11054,
  [SMALL_STATE(603)] = 11058,
  [SMALL_STATE(604)] = 11062,
  [SMALL_STATE(605)] = 11066,
  [SMALL_STATE(606)] = 11070,
  [SMALL_STATE(607)] = 11074,
  [SMALL_STATE(608)] = 11078,
  [SMALL_STATE(609)] = 11082,
  [SMALL_STATE(610)] = 11086,
  [SMALL_STATE(611)] = 11090,
  [SMALL_STATE(612)] = 11094,
  [SMALL_STATE(613)] = 11098,
  [SMALL_STATE(614)] = 11102,
  [SMALL_STATE(615)] = 11106,
  [SMALL_STATE(616)] = 11110,
  [SMALL_STATE(617)] = 11114,
  [SMALL_STATE(618)] = 11118,
  [SMALL_STATE(619)] = 11122,
  [SMALL_STATE(620)] = 11126,
  [SMALL_STATE(621)] = 11130,
  [SMALL_STATE(622)] = 11134,
  [SMALL_STATE(623)] = 11138,
  [SMALL_STATE(624)] = 11142,
  [SMALL_STATE(625)] = 11146,
  [SMALL_STATE(626)] = 11150,
  [SMALL_STATE(627)] = 11154,
  [SMALL_STATE(628)] = 11158,
  [SMALL_STATE(629)] = 11162,
  [SMALL_STATE(630)] = 11166,
  [SMALL_STATE(631)] = 11170,
  [SMALL_STATE(632)] = 11174,
  [SMALL_STATE(633)] = 11178,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(565),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(462),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(631),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(489),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(528),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(485),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(486),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(487),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(488),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(63),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(489),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(429),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(497),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(438),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(498),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(499),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(492),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(493),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(496),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(400),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(5),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(539),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(481),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(413),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(479),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(476),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(71),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(431),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(430),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(472),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(434),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(449),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(471),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(411),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(470),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(469),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(450),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(12),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(481),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(413),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(479),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(476),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(71),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(431),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(430),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(472),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(434),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(449),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(443),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(411),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(470),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(469),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(450),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(31),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(31),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(393),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(394),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(509),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(30),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 3, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 3, .production_id = 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(35),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(35),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(586),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(33),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 1),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 5, .production_id = 1),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 5, .production_id = 1),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 6),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 6),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 3, .production_id = 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 10),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 7),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 13),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 3, .production_id = 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(70),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 5, .production_id = 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 5, .production_id = 1),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(83),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 3, .production_id = 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 3, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 6, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 1, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 5, .production_id = 1),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(232),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 3, .production_id = 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 4, .production_id = 1),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(229),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encode_format, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(268),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(326),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(525),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(525),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(565),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(462),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(550),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 5, .production_id = 12),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 3, .production_id = 5),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 3, .production_id = 5),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 2, .production_id = 1),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 2, .production_id = 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__port_number, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 12, .production_id = 24),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 12, .production_id = 24),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 8, .production_id = 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 8, .production_id = 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 8, .production_id = 21),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 8, .production_id = 21),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_name, 1),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_name, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 8, .production_id = 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 8, .production_id = 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 11, .production_id = 1),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 11, .production_id = 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 7, .production_id = 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 7, .production_id = 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 3, .production_id = 1),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 3, .production_id = 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 1),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 7, .production_id = 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 5),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 7, .production_id = 1),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 7, .production_id = 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 7, .production_id = 1),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 7, .production_id = 1),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 10, .production_id = 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 10, .production_id = 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 6, .production_id = 18),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 6, .production_id = 18),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 4, .production_id = 1),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_import, 4, .production_id = 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 1),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 3, .production_id = 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 10, .production_id = 23),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 10, .production_id = 23),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 6, .production_id = 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 6, .production_id = 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 6, .production_id = 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 6, .production_id = 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 9, .production_id = 1),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 9, .production_id = 1),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 4),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 4),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 4),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 4),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 16),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 16),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 15),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 3, .production_id = 1),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 3, .production_id = 1),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_basicauth, 6, .production_id = 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_basicauth, 6, .production_id = 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 5, .production_id = 14),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 5, .production_id = 1),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 5, .production_id = 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 5, .production_id = 1),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 5, .production_id = 1),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 1),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 5, .production_id = 1),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 5, .production_id = 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 5, .production_id = 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 1),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 5, .production_id = 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 5, .production_id = 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 5, .production_id = 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 3),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 3),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [744] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_code, 1),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 4, .production_id = 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 4, .production_id = 1),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 8),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 8),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 4, .production_id = 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 4, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 5),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 5),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(203),
  [769] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(203),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [774] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(542),
  [777] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(433),
  [780] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(490),
  [783] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(432),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [788] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [792] = {.entry = {.count = 1, .reusable = false}}, SHIFT(542),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(490),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [812] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [822] = {.entry = {.count = 1, .reusable = false}}, SHIFT(579),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [830] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [832] = {.entry = {.count = 1, .reusable = false}}, SHIFT(516),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [836] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [842] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [852] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 5),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 5),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 3),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [868] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 2),
  [876] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 6),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [886] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [888] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [890] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [892] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [900] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [904] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(235),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2),
  [909] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(447),
  [912] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(467),
  [915] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(482),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [920] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(467),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [964] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(247),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2),
  [969] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(419),
  [972] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(417),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(416),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(250),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2),
  [983] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(415),
  [986] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(426),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1017] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(267),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2),
  [1022] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(422),
  [1025] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(420),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [1038] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [1042] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(616),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [1050] = {.entry = {.count = 1, .reusable = false}}, SHIFT(501),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(589),
  [1056] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 4, .production_id = 17),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_level, 4, .production_id = 17),
  [1064] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [1066] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 4),
  [1072] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [1074] = {.entry = {.count = 1, .reusable = false}}, SHIFT(576),
  [1076] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 3, .production_id = 20),
  [1078] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 3, .production_id = 17),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [1084] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_format, 4, .production_id = 17),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [1090] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 7),
  [1094] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(293),
  [1097] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2),
  [1099] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_basicauth_repeat1, 2), SHIFT_REPEAT(408),
  [1102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 6),
  [1104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [1106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [1168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [1170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(617),
  [1174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2),
  [1182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(321),
  [1185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(321),
  [1188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 9), SHIFT_REPEAT(325),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 9),
  [1203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 2, .production_id = 9), SHIFT_REPEAT(352),
  [1206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [1208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [1210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [1226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_matcher, 2),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_email, 4, .production_id = 2),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_auto_https, 3, .production_id = 2),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_file_server_repeat1, 1, .production_id = 4),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(590),
  [1296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(633),
  [1302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(518),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [1316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [1322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [1324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(626),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(584),
  [1334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [1340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [1342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(607),
  [1360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(377),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basicauth_credential, 5, .production_id = 22),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(566),
  [1383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(630),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(599),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(625),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(564),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [1499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(629),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(627),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(624),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [1623] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [1647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(604),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(606),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(618),
  [1697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [1701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hash_algorithm, 1),
  [1703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [1713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [1723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [1737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [1741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [1743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [1755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 5, .production_id = 19),
  [1769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(551),
  [1783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [1795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [1799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path, 3, .production_id = 11),
  [1805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 3, .production_id = 11),
  [1807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [1813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
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
