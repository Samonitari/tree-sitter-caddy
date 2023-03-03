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
#define STATE_COUNT 551
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 109
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_bcrypt = 30,
  anon_sym_bind = 31,
  anon_sym_SLASH = 32,
  anon_sym_tcp = 33,
  anon_sym_udp = 34,
  anon_sym_ip = 35,
  anon_sym_4 = 36,
  anon_sym_6 = 37,
  anon_sym_unix = 38,
  anon_sym_gram = 39,
  anon_sym_packet = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_unix_path_token1 = 42,
  aux_sym_unix_path_token2 = 43,
  anon_sym_encode = 44,
  anon_sym_gzip = 45,
  anon_sym_zstd = 46,
  anon_sym_file_server = 47,
  anon_sym_browse = 48,
  anon_sym_handle = 49,
  anon_sym_handle_path = 50,
  anon_sym_header = 51,
  anon_sym_defer = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_QMARK = 55,
  sym_header_name = 56,
  aux_sym_header_value_token1 = 57,
  aux_sym_header_value_token2 = 58,
  anon_sym_SQUOTE = 59,
  aux_sym_header_value_token3 = 60,
  anon_sym_import = 61,
  anon_sym_log = 62,
  anon_sym_output = 63,
  anon_sym_stderr = 64,
  anon_sym_stdout = 65,
  anon_sym_discard = 66,
  anon_sym_file = 67,
  anon_sym_roll_disabled = 68,
  anon_sym_roll_size = 69,
  anon_sym_roll_uncompressed = 70,
  anon_sym_roll_local_time = 71,
  anon_sym_roll_keep = 72,
  aux_sym__log_output_file_token1 = 73,
  anon_sym_roll_keep_for_days = 74,
  aux_sym__log_output_file_token2 = 75,
  sym_size_number = 76,
  anon_sym_format = 77,
  anon_sym_console = 78,
  anon_sym_json = 79,
  anon_sym_level = 80,
  anon_sym_INFO = 81,
  anon_sym_info = 82,
  anon_sym_ERROR = 83,
  anon_sym_error = 84,
  anon_sym_redir = 85,
  anon_sym_request_body = 86,
  anon_sym_max_size = 87,
  anon_sym_reverse_proxy = 88,
  sym_uri_path_with_placeholders = 89,
  sym__valid_uri_path_string = 90,
  aux_sym_redir_code_token1 = 91,
  anon_sym_401 = 92,
  anon_sym_temporary = 93,
  anon_sym_permanent = 94,
  anon_sym_html = 95,
  anon_sym_root = 96,
  anon_sym_tls = 97,
  anon_sym_internal = 98,
  sym_email_address = 99,
  anon_sym_STAR = 100,
  anon_sym_email = 101,
  anon_sym_auto_https = 102,
  anon_sym_off = 103,
  anon_sym_disable_redirects = 104,
  anon_sym_ignore_loaded_certs = 105,
  anon_sym_disable_certs = 106,
  sym_snippet_name = 107,
  sym__eof = 108,
  sym_document = 109,
  sym__horizontal_whitespaces = 110,
  sym_site_block = 111,
  sym_site_address = 112,
  sym_protocol = 113,
  sym__ip_or_domain_address = 114,
  sym__port_number = 115,
  sym_matcher_definition = 116,
  sym_standard_matcher = 117,
  sym_matcher_path = 118,
  sym_matcher_path_regexp = 119,
  sym_directive_block = 120,
  sym_directive_abort = 121,
  sym_directive_bind = 122,
  sym_network_address_wo_port = 123,
  sym__network = 124,
  sym_unix_path = 125,
  sym_directive_encode = 126,
  sym_encode_format = 127,
  sym_directive_file_server = 128,
  sym_directive_handle = 129,
  sym_directive_handle_path = 130,
  sym_directive_header = 131,
  sym_field_manipulator = 132,
  sym_field_replace = 133,
  sym_field_add_or_set = 134,
  sym_field_delete = 135,
  sym_field_set_default = 136,
  sym_header_value = 137,
  sym_directive_import = 138,
  sym_directive_log = 139,
  sym_log_option_output = 140,
  sym__log_output_file = 141,
  sym_log_option_format = 142,
  sym_log_option_level = 143,
  sym_directive_redir = 144,
  sym_directive_request_body = 145,
  sym_redir_or_rewrite_target = 146,
  sym_directive_reverse_proxy = 147,
  sym_redir_code = 148,
  sym_directive_root = 149,
  sym_directive_tls = 150,
  sym_matcher_token = 151,
  sym_global_options_block = 152,
  sym_global_option_email = 153,
  sym_global_option_auto_https = 154,
  sym_snippet = 155,
  aux_sym_document_repeat1 = 156,
  aux_sym_site_block_repeat1 = 157,
  aux_sym_matcher_definition_repeat1 = 158,
  aux_sym_directive_bind_repeat1 = 159,
  aux_sym_directive_encode_repeat1 = 160,
  aux_sym_directive_handle_repeat1 = 161,
  aux_sym_directive_header_repeat1 = 162,
  aux_sym_directive_log_repeat1 = 163,
  aux_sym__log_output_file_repeat1 = 164,
  aux_sym_directive_request_body_repeat1 = 165,
  aux_sym_directive_reverse_proxy_repeat1 = 166,
  aux_sym_global_options_block_repeat1 = 167,
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
  [anon_sym_bcrypt] = "bcrypt",
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
  [sym_header_name] = "header_name",
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
  [aux_sym_directive_bind_repeat1] = "directive_bind_repeat1",
  [aux_sym_directive_encode_repeat1] = "directive_encode_repeat1",
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
  [anon_sym_bcrypt] = anon_sym_bcrypt,
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
  [sym_header_name] = sym_header_name,
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
  [aux_sym_directive_bind_repeat1] = aux_sym_directive_bind_repeat1,
  [aux_sym_directive_encode_repeat1] = aux_sym_directive_encode_repeat1,
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
  [anon_sym_bcrypt] = {
    .visible = true,
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
  [sym_header_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_directive_bind_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_encode_repeat1] = {
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
  field_cert_file = 2,
  field_directive_type = 3,
  field_global_option_type = 4,
  field_key_file = 5,
  field_log_option_type = 6,
  field_matcher_type = 7,
  field_path_matcher = 8,
  field_path_regexp_matcher_name = 9,
  field_uri_path_target = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address_target] = "address_target",
  [field_cert_file] = "cert_file",
  [field_directive_type] = "directive_type",
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
  [8] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 3},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive_type, 0},
  [1] =
    {field_global_option_type, 0},
  [2] =
    {field_path_matcher, 0},
  [3] =
    {field_address_target, 0},
  [4] =
    {field_uri_path_target, 0},
  [5] =
    {field_address_target, 0},
    {field_address_target, 1},
  [7] =
    {field_matcher_type, 0},
  [8] =
    {field_address_target, 0},
    {field_address_target, 1},
    {field_address_target, 2},
  [11] =
    {field_cert_file, 2},
    {field_directive_type, 0},
    {field_key_file, 4},
  [14] =
    {field_log_option_type, 0},
  [15] =
    {field_cert_file, 3},
    {field_directive_type, 0},
    {field_key_file, 5},
  [18] =
    {field_matcher_type, 0},
    {field_path_regexp_matcher_name, 2},
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 8,
  [14] = 9,
  [15] = 10,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 21,
  [23] = 18,
  [24] = 17,
  [25] = 25,
  [26] = 26,
  [27] = 26,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
  [34] = 29,
  [35] = 30,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 38,
  [43] = 39,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 44,
  [48] = 48,
  [49] = 37,
  [50] = 46,
  [51] = 39,
  [52] = 52,
  [53] = 41,
  [54] = 54,
  [55] = 45,
  [56] = 48,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 52,
  [62] = 62,
  [63] = 63,
  [64] = 54,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 68,
  [72] = 72,
  [73] = 65,
  [74] = 66,
  [75] = 67,
  [76] = 70,
  [77] = 77,
  [78] = 57,
  [79] = 62,
  [80] = 69,
  [81] = 58,
  [82] = 82,
  [83] = 83,
  [84] = 59,
  [85] = 85,
  [86] = 72,
  [87] = 77,
  [88] = 88,
  [89] = 89,
  [90] = 83,
  [91] = 82,
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
  [102] = 89,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 31,
  [112] = 112,
  [113] = 113,
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
  [125] = 29,
  [126] = 126,
  [127] = 127,
  [128] = 95,
  [129] = 129,
  [130] = 85,
  [131] = 131,
  [132] = 88,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 95,
  [140] = 94,
  [141] = 141,
  [142] = 92,
  [143] = 143,
  [144] = 93,
  [145] = 96,
  [146] = 85,
  [147] = 147,
  [148] = 120,
  [149] = 124,
  [150] = 112,
  [151] = 135,
  [152] = 121,
  [153] = 99,
  [154] = 108,
  [155] = 97,
  [156] = 127,
  [157] = 138,
  [158] = 98,
  [159] = 147,
  [160] = 143,
  [161] = 141,
  [162] = 136,
  [163] = 134,
  [164] = 129,
  [165] = 126,
  [166] = 123,
  [167] = 119,
  [168] = 114,
  [169] = 105,
  [170] = 104,
  [171] = 103,
  [172] = 95,
  [173] = 85,
  [174] = 29,
  [175] = 31,
  [176] = 100,
  [177] = 122,
  [178] = 110,
  [179] = 116,
  [180] = 118,
  [181] = 131,
  [182] = 133,
  [183] = 137,
  [184] = 106,
  [185] = 109,
  [186] = 117,
  [187] = 101,
  [188] = 115,
  [189] = 113,
  [190] = 107,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 191,
  [195] = 195,
  [196] = 193,
  [197] = 195,
  [198] = 198,
  [199] = 199,
  [200] = 198,
  [201] = 199,
  [202] = 202,
  [203] = 202,
  [204] = 204,
  [205] = 205,
  [206] = 101,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 212,
  [214] = 72,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 215,
  [219] = 217,
  [220] = 216,
  [221] = 95,
  [222] = 222,
  [223] = 223,
  [224] = 85,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 228,
  [231] = 229,
  [232] = 222,
  [233] = 233,
  [234] = 234,
  [235] = 85,
  [236] = 133,
  [237] = 97,
  [238] = 122,
  [239] = 100,
  [240] = 233,
  [241] = 234,
  [242] = 95,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 245,
  [247] = 98,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 248,
  [253] = 253,
  [254] = 254,
  [255] = 253,
  [256] = 253,
  [257] = 254,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 258,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 264,
  [267] = 267,
  [268] = 258,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 275,
  [282] = 282,
  [283] = 271,
  [284] = 276,
  [285] = 282,
  [286] = 286,
  [287] = 286,
  [288] = 274,
  [289] = 277,
  [290] = 279,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 270,
  [297] = 272,
  [298] = 293,
  [299] = 292,
  [300] = 300,
  [301] = 295,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 307,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 310,
  [314] = 314,
  [315] = 307,
  [316] = 302,
  [317] = 308,
  [318] = 303,
  [319] = 311,
  [320] = 306,
  [321] = 304,
  [322] = 278,
  [323] = 308,
  [324] = 306,
  [325] = 305,
  [326] = 311,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 329,
  [335] = 328,
  [336] = 336,
  [337] = 330,
  [338] = 338,
  [339] = 339,
  [340] = 339,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 341,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 347,
  [359] = 352,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 360,
  [365] = 365,
  [366] = 31,
  [367] = 344,
  [368] = 368,
  [369] = 342,
  [370] = 370,
  [371] = 29,
  [372] = 346,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 353,
  [377] = 345,
  [378] = 348,
  [379] = 338,
  [380] = 373,
  [381] = 341,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 354,
  [386] = 386,
  [387] = 356,
  [388] = 349,
  [389] = 389,
  [390] = 339,
  [391] = 389,
  [392] = 392,
  [393] = 345,
  [394] = 392,
  [395] = 368,
  [396] = 383,
  [397] = 365,
  [398] = 384,
  [399] = 399,
  [400] = 370,
  [401] = 382,
  [402] = 349,
  [403] = 375,
  [404] = 370,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 357,
  [410] = 363,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 29,
  [428] = 31,
  [429] = 429,
  [430] = 430,
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
  [445] = 441,
  [446] = 440,
  [447] = 442,
  [448] = 448,
  [449] = 436,
  [450] = 450,
  [451] = 451,
  [452] = 433,
  [453] = 439,
  [454] = 432,
  [455] = 423,
  [456] = 438,
  [457] = 425,
  [458] = 424,
  [459] = 414,
  [460] = 460,
  [461] = 418,
  [462] = 419,
  [463] = 421,
  [464] = 435,
  [465] = 465,
  [466] = 466,
  [467] = 438,
  [468] = 439,
  [469] = 469,
  [470] = 421,
  [471] = 438,
  [472] = 439,
  [473] = 421,
  [474] = 438,
  [475] = 439,
  [476] = 421,
  [477] = 438,
  [478] = 439,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 430,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 422,
  [492] = 421,
  [493] = 423,
  [494] = 420,
  [495] = 495,
  [496] = 419,
  [497] = 497,
  [498] = 490,
  [499] = 418,
  [500] = 500,
  [501] = 486,
  [502] = 417,
  [503] = 416,
  [504] = 489,
  [505] = 481,
  [506] = 469,
  [507] = 507,
  [508] = 466,
  [509] = 460,
  [510] = 444,
  [511] = 437,
  [512] = 479,
  [513] = 513,
  [514] = 489,
  [515] = 415,
  [516] = 516,
  [517] = 517,
  [518] = 481,
  [519] = 469,
  [520] = 489,
  [521] = 481,
  [522] = 469,
  [523] = 489,
  [524] = 481,
  [525] = 469,
  [526] = 489,
  [527] = 481,
  [528] = 469,
  [529] = 96,
  [530] = 480,
  [531] = 531,
  [532] = 500,
  [533] = 497,
  [534] = 534,
  [535] = 488,
  [536] = 487,
  [537] = 414,
  [538] = 538,
  [539] = 93,
  [540] = 424,
  [541] = 500,
  [542] = 497,
  [543] = 479,
  [544] = 92,
  [545] = 94,
  [546] = 425,
  [547] = 547,
  [548] = 485,
  [549] = 549,
  [550] = 550,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(700);
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '\f') ADVANCE(702);
      if (lookahead == '\r') ADVANCE(702);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(1128);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '+') ADVANCE(1116);
      if (lookahead == '-') ADVANCE(1117);
      if (lookahead == '/') ADVANCE(882);
      if (lookahead == '1') ADVANCE(857);
      if (lookahead == '2') ADVANCE(851);
      if (lookahead == '3') ADVANCE(854);
      if (lookahead == '4') ADVANCE(890);
      if (lookahead == '6') ADVANCE(892);
      if (lookahead == ':') ADVANCE(847);
      if (lookahead == '?') ADVANCE(1119);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == 'j') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == 'z') ADVANCE(623);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(702);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == 8232) ADVANCE(702);
      if (lookahead == 8233) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
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
      if (lookahead == '\n') ADVANCE(702);
      if (lookahead == '\f') ADVANCE(702);
      if (lookahead == '\r') ADVANCE(702);
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(705);
      if (lookahead == '\'') ADVANCE(1128);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '+') ADVANCE(1116);
      if (lookahead == '-') ADVANCE(1117);
      if (lookahead == '/') ADVANCE(882);
      if (lookahead == '1') ADVANCE(857);
      if (lookahead == '2') ADVANCE(851);
      if (lookahead == '3') ADVANCE(854);
      if (lookahead == '4') ADVANCE(890);
      if (lookahead == '6') ADVANCE(892);
      if (lookahead == ':') ADVANCE(847);
      if (lookahead == '?') ADVANCE(1119);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(406);
      if (lookahead == 'c') ADVANCE(546);
      if (lookahead == 'd') ADVANCE(434);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead == 'f') ADVANCE(491);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == 'h') ADVANCE(396);
      if (lookahead == 'i') ADVANCE(483);
      if (lookahead == 'j') ADVANCE(622);
      if (lookahead == 'l') ADVANCE(435);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead == 'o') ADVANCE(479);
      if (lookahead == 'p') ADVANCE(380);
      if (lookahead == 'r') ADVANCE(437);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead == 't') ADVANCE(408);
      if (lookahead == 'u') ADVANCE(423);
      if (lookahead == 'z') ADVANCE(623);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(702);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == 8232) ADVANCE(702);
      if (lookahead == 8233) ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(854);
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
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1426);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1426);
      if ((1 <= lookahead && lookahead <= 11) ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1427);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(13);
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '2') ADVANCE(9);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '5') ADVANCE(10);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1428);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1428);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(13);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1428);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1428);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ']') ADVANCE(1428);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '@') ADVANCE(35);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
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
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '5') ADVANCE(18);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '5') ADVANCE(23);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '5') ADVANCE(28);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '0') ADVANCE(31);
      if (lookahead == '1') ADVANCE(30);
      if (lookahead == '2') ADVANCE(27);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '0') ADVANCE(21);
      if (lookahead == '1') ADVANCE(20);
      if (lookahead == '2') ADVANCE(17);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '[') ADVANCE(32);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1427);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
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
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(1130);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(39)
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1131);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(1126);
      if (lookahead == '\t' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(40)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1127);
      END_STATE();
    case 41:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '2') ADVANCE(902);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == 'b') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == 'l') ADVANCE(1053);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead == 'u') ADVANCE(1025);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1008);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 42:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '2') ADVANCE(902);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(1000);
      if (lookahead == 'b') ADVANCE(1003);
      if (lookahead == 'e') ADVANCE(1004);
      if (lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1048);
      if (lookahead == 'l') ADVANCE(1053);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead == 'u') ADVANCE(1025);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(1008);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 43:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(1018);
      if (lookahead == 'b') ADVANCE(1041);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == 'l') ADVANCE(1053);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1045);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 44:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(1018);
      if (lookahead == 'b') ADVANCE(1041);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead == 'f') ADVANCE(1042);
      if (lookahead == 'h') ADVANCE(1016);
      if (lookahead == 'i') ADVANCE(1049);
      if (lookahead == 'l') ADVANCE(1053);
      if (lookahead == 'r') ADVANCE(1029);
      if (lookahead == 't') ADVANCE(1045);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
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
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 45:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '\'') ADVANCE(1129);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(45)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(1125);
      END_STATE();
    case 46:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(901);
      if (lookahead == '@') ADVANCE(866);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 47:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '2') ADVANCE(902);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(1002);
      if (lookahead == 'i') ADVANCE(1060);
      if (lookahead == 't') ADVANCE(1020);
      if (lookahead == 'u') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1008);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 48:
      if (lookahead == '"') ADVANCE(897);
      if (lookahead == '1') ADVANCE(906);
      if (lookahead == '2') ADVANCE(902);
      if (lookahead == ':') ADVANCE(323);
      if (lookahead == 'f') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(904);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(1008);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 49:
      if (lookahead == '"') ADVANCE(897);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 50:
      if (lookahead == '"') ADVANCE(898);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(916);
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == 'f') ADVANCE(939);
      if (lookahead == 'h') ADVANCE(912);
      if (lookahead == 'i') ADVANCE(945);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '}') ADVANCE(711);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(50);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 51:
      if (lookahead == '"') ADVANCE(898);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(916);
      if (lookahead == 'b') ADVANCE(938);
      if (lookahead == 'e') ADVANCE(946);
      if (lookahead == 'f') ADVANCE(939);
      if (lookahead == 'h') ADVANCE(912);
      if (lookahead == 'i') ADVANCE(945);
      if (lookahead == 'l') ADVANCE(950);
      if (lookahead == 'r') ADVANCE(925);
      if (lookahead == 't') ADVANCE(941);
      if (lookahead == '}') ADVANCE(711);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(51);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 52:
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(698);
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
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(275);
      END_STATE();
    case 54:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '3') ADVANCE(1401);
      if (lookahead == '4') ADVANCE(1311);
      if (lookahead == '@') ADVANCE(865);
      if (lookahead == 'a') ADVANCE(1321);
      if (lookahead == 'b') ADVANCE(1346);
      if (lookahead == 'e') ADVANCE(1355);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1316);
      if (lookahead == 'i') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1360);
      if (lookahead == 'p') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(1331);
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
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
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 55:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '3') ADVANCE(1401);
      if (lookahead == '4') ADVANCE(1311);
      if (lookahead == '@') ADVANCE(865);
      if (lookahead == 'a') ADVANCE(1321);
      if (lookahead == 'b') ADVANCE(1346);
      if (lookahead == 'e') ADVANCE(1355);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1316);
      if (lookahead == 'i') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1360);
      if (lookahead == 'p') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(1331);
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
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
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 56:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '3') ADVANCE(1401);
      if (lookahead == '4') ADVANCE(1311);
      if (lookahead == 'a') ADVANCE(1321);
      if (lookahead == 'b') ADVANCE(1346);
      if (lookahead == 'e') ADVANCE(1355);
      if (lookahead == 'f') ADVANCE(1345);
      if (lookahead == 'h') ADVANCE(1316);
      if (lookahead == 'i') ADVANCE(1351);
      if (lookahead == 'l') ADVANCE(1360);
      if (lookahead == 'p') ADVANCE(1330);
      if (lookahead == 'r') ADVANCE(1331);
      if (lookahead == 't') ADVANCE(1342);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
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
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 57:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(1404);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(1404);
      if (lookahead == '3') ADVANCE(680);
      if (lookahead == '4') ADVANCE(309);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(490);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(474);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == 'z') ADVANCE(623);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
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
      if (lookahead == '+') ADVANCE(1116);
      if (lookahead == '-') ADVANCE(1118);
      if (lookahead == '?') ADVANCE(1119);
      if (lookahead == 'd') ADVANCE(1120);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(702);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(702);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 60:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '+') ADVANCE(1116);
      if (lookahead == '-') ADVANCE(1118);
      if (lookahead == '?') ADVANCE(1119);
      if (lookahead == 'd') ADVANCE(1120);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(702);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(702);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 61:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '3') ADVANCE(680);
      if (lookahead == '4') ADVANCE(309);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(402);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(525);
      if (lookahead == 'f') ADVANCE(503);
      if (lookahead == 'g') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(397);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(436);
      if (lookahead == 'o') ADVANCE(650);
      if (lookahead == 'p') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 't') ADVANCE(439);
      if (lookahead == 'z') ADVANCE(623);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
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
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == 'p') ADVANCE(392);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(701);
      END_STATE();
    case 63:
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'a') ADVANCE(401);
      if (lookahead == 'b') ADVANCE(489);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead == 'f') ADVANCE(502);
      if (lookahead == 'h') ADVANCE(395);
      if (lookahead == 'i') ADVANCE(523);
      if (lookahead == 'l') ADVANCE(549);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead == 't') ADVANCE(514);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == 133) ADVANCE(703);
      if (lookahead == 134) ADVANCE(704);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(701);
      END_STATE();
    case 64:
      if (lookahead == '%') ADVANCE(696);
      END_STATE();
    case 65:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 66:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      END_STATE();
    case 69:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 73:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(759);
      END_STATE();
    case 77:
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (lookahead == '%') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == '%') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == '%') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(763);
      END_STATE();
    case 81:
      if (lookahead == '%') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (lookahead == '%') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'h') ADVANCE(1180);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1182);
      END_STATE();
    case 84:
      if (lookahead == ')') ADVANCE(1438);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 85:
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '+') ADVANCE(1116);
      if (lookahead == '-') ADVANCE(1118);
      if (lookahead == '/') ADVANCE(1404);
      if (lookahead == '?') ADVANCE(1119);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(85)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == '5') ADVANCE(255);
      if (lookahead == ':') ADVANCE(324);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'm') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(846);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead == '5') ADVANCE(266);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '5') ADVANCE(269);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(105);
      if (lookahead == '.') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 108:
      if (lookahead == '-') ADVANCE(697);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 109:
      if (lookahead == '-') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(274);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1429);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == '-') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 113:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '2') ADVANCE(114);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '5') ADVANCE(115);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ']') ADVANCE(1425);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ']') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(118);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 116:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ']') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 117:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ']') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 118:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(367);
      if (lookahead == ']') ADVANCE(1425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == ':') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '-') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 121:
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      if (lookahead == '-') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '-') ADVANCE(107);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 124:
      if (lookahead == '-') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 128:
      if (lookahead == '-') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 129:
      if (lookahead == '-') ADVANCE(132);
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '.') ADVANCE(674);
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
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 's') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(226);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(225);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 't') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'h') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 't') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 230:
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 231:
      if (lookahead == '-') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(233);
      END_STATE();
    case 232:
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 233:
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 234:
      if (lookahead == '-') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 235:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 236:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == '0') ADVANCE(249);
      if (lookahead == ':') ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 237:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 238:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == '_') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 239:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'a') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 241:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'p') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 243:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 244:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 245:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 246:
      if (lookahead == '-') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 247:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == 's') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 248:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 249:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 250:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == '_') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 251:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 252:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 253:
      if (lookahead == '-') ADVANCE(231);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 254:
      if (lookahead == '-') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 255:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(235);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 256:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 257:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 258:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == '8') ADVANCE(236);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 259:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 260:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 261:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 262:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'p') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 263:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 264:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == 'x') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 265:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 266:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(244);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 267:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 268:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 269:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(245);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 271:
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 272:
      if (lookahead == '-') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 273:
      if (lookahead == '.') ADVANCE(674);
      END_STATE();
    case 274:
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == '.') ADVANCE(695);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(275);
      END_STATE();
    case 276:
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 277:
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '5') ADVANCE(278);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(276);
      END_STATE();
    case 279:
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 280:
      if (lookahead == '.') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      if (lookahead == '.') ADVANCE(314);
      END_STATE();
    case 282:
      if (lookahead == '.') ADVANCE(314);
      if (lookahead == '5') ADVANCE(283);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(284);
      END_STATE();
    case 283:
      if (lookahead == '.') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(281);
      END_STATE();
    case 284:
      if (lookahead == '.') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 285:
      if (lookahead == '.') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == '.') ADVANCE(317);
      END_STATE();
    case 287:
      if (lookahead == '.') ADVANCE(286);
      END_STATE();
    case 288:
      if (lookahead == '.') ADVANCE(319);
      END_STATE();
    case 289:
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '5') ADVANCE(290);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(291);
      END_STATE();
    case 290:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(288);
      END_STATE();
    case 291:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 292:
      if (lookahead == '.') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == '.') ADVANCE(311);
      END_STATE();
    case 294:
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '5') ADVANCE(295);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(297);
      END_STATE();
    case 295:
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(293);
      END_STATE();
    case 296:
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == '.') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 298:
      if (lookahead == '.') ADVANCE(312);
      END_STATE();
    case 299:
      if (lookahead == '.') ADVANCE(312);
      if (lookahead == '5') ADVANCE(300);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(302);
      END_STATE();
    case 300:
      if (lookahead == '.') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(298);
      END_STATE();
    case 301:
      if (lookahead == '.') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == '.') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 303:
      if (lookahead == '/') ADVANCE(882);
      if (lookahead == '4') ADVANCE(889);
      if (lookahead == '6') ADVANCE(891);
      if (lookahead == 'd') ADVANCE(499);
      if (lookahead == 'f') ADVANCE(504);
      if (lookahead == 's') ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(303)
      END_STATE();
    case 304:
      if (lookahead == '/') ADVANCE(718);
      END_STATE();
    case 305:
      if (lookahead == '/') ADVANCE(719);
      END_STATE();
    case 306:
      if (lookahead == '/') ADVANCE(304);
      END_STATE();
    case 307:
      if (lookahead == '/') ADVANCE(305);
      END_STATE();
    case 308:
      if (lookahead == '0') ADVANCE(764);
      if (lookahead == '1') ADVANCE(796);
      if (lookahead == '2') ADVANCE(770);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 309:
      if (lookahead == '0') ADVANCE(318);
      END_STATE();
    case 310:
      if (lookahead == '0') ADVANCE(298);
      if (lookahead == '1') ADVANCE(301);
      if (lookahead == '2') ADVANCE(299);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 311:
      if (lookahead == '0') ADVANCE(276);
      if (lookahead == '1') ADVANCE(280);
      if (lookahead == '2') ADVANCE(277);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 312:
      if (lookahead == '0') ADVANCE(293);
      if (lookahead == '1') ADVANCE(296);
      if (lookahead == '2') ADVANCE(294);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 313:
      if (lookahead == '1') ADVANCE(292);
      if (lookahead == '2') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 314:
      if (lookahead == '1') ADVANCE(736);
      if (lookahead == '2') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 315:
      if (lookahead == '1') ADVANCE(103);
      if (lookahead == '2') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 316:
      if (lookahead == '1') ADVANCE(725);
      if (lookahead == '2') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 317:
      if (lookahead == '1') ADVANCE(839);
      if (lookahead == '2') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      END_STATE();
    case 318:
      if (lookahead == '1') ADVANCE(1406);
      END_STATE();
    case 319:
      if (lookahead == '1') ADVANCE(285);
      if (lookahead == '2') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 320:
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '2') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 321:
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == '2') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 322:
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 323:
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 324:
      if (lookahead == ':') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(352);
      END_STATE();
    case 325:
      if (lookahead == ':') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 326:
      if (lookahead == ':') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(335);
      END_STATE();
    case 327:
      if (lookahead == ':') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(339);
      END_STATE();
    case 328:
      if (lookahead == ':') ADVANCE(326);
      END_STATE();
    case 329:
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(328);
      END_STATE();
    case 330:
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(329);
      END_STATE();
    case 331:
      if (lookahead == ':') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(330);
      END_STATE();
    case 332:
      if (lookahead == ':') ADVANCE(327);
      END_STATE();
    case 333:
      if (lookahead == ':') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == ':') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(332);
      END_STATE();
    case 335:
      if (lookahead == ':') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(333);
      END_STATE();
    case 336:
      if (lookahead == ':') ADVANCE(325);
      END_STATE();
    case 337:
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(336);
      END_STATE();
    case 339:
      if (lookahead == ':') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(337);
      END_STATE();
    case 340:
      if (lookahead == ':') ADVANCE(307);
      END_STATE();
    case 341:
      if (lookahead == ':') ADVANCE(353);
      END_STATE();
    case 342:
      if (lookahead == ':') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(341);
      END_STATE();
    case 343:
      if (lookahead == ':') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(342);
      END_STATE();
    case 344:
      if (lookahead == ':') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(343);
      END_STATE();
    case 345:
      if (lookahead == ':') ADVANCE(354);
      END_STATE();
    case 346:
      if (lookahead == ':') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(345);
      END_STATE();
    case 347:
      if (lookahead == ':') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(346);
      END_STATE();
    case 348:
      if (lookahead == ':') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(347);
      END_STATE();
    case 349:
      if (lookahead == ':') ADVANCE(355);
      END_STATE();
    case 350:
      if (lookahead == ':') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(349);
      END_STATE();
    case 351:
      if (lookahead == ':') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(350);
      END_STATE();
    case 352:
      if (lookahead == ':') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(351);
      END_STATE();
    case 353:
      if (lookahead == ':') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(331);
      END_STATE();
    case 354:
      if (lookahead == ':') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(344);
      END_STATE();
    case 355:
      if (lookahead == ':') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(348);
      END_STATE();
    case 356:
      if (lookahead == '@') ADVANCE(364);
      END_STATE();
    case 357:
      if (lookahead == 'F') ADVANCE(359);
      END_STATE();
    case 358:
      if (lookahead == 'N') ADVANCE(357);
      END_STATE();
    case 359:
      if (lookahead == 'O') ADVANCE(1163);
      END_STATE();
    case 360:
      if (lookahead == 'O') ADVANCE(362);
      END_STATE();
    case 361:
      if (lookahead == 'R') ADVANCE(360);
      END_STATE();
    case 362:
      if (lookahead == 'R') ADVANCE(1165);
      END_STATE();
    case 363:
      if (lookahead == 'R') ADVANCE(361);
      END_STATE();
    case 364:
      if (lookahead == '[') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 365:
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == ']') ADVANCE(1430);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(365);
      END_STATE();
    case 366:
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == ']') ADVANCE(1430);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(365);
      END_STATE();
    case 367:
      if (lookahead == '\\') ADVANCE(366);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(365);
      END_STATE();
    case 368:
      if (lookahead == '_') ADVANCE(426);
      END_STATE();
    case 369:
      if (lookahead == '_') ADVANCE(415);
      END_STATE();
    case 370:
      if (lookahead == '_') ADVANCE(488);
      END_STATE();
    case 371:
      if (lookahead == '_') ADVANCE(403);
      END_STATE();
    case 372:
      if (lookahead == '_') ADVANCE(416);
      END_STATE();
    case 373:
      if (lookahead == '_') ADVANCE(614);
      END_STATE();
    case 374:
      if (lookahead == '_') ADVANCE(517);
      END_STATE();
    case 375:
      if (lookahead == '_') ADVANCE(626);
      END_STATE();
    case 376:
      if (lookahead == '_') ADVANCE(574);
      END_STATE();
    case 377:
      if (lookahead == '_') ADVANCE(429);
      END_STATE();
    case 378:
      if (lookahead == '_') ADVANCE(644);
      END_STATE();
    case 379:
      if (lookahead == 'a') ADVANCE(657);
      END_STATE();
    case 380:
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 381:
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 382:
      if (lookahead == 'a') ADVANCE(494);
      END_STATE();
    case 383:
      if (lookahead == 'a') ADVANCE(524);
      END_STATE();
    case 384:
      if (lookahead == 'a') ADVANCE(433);
      END_STATE();
    case 385:
      if (lookahead == 'a') ADVANCE(665);
      END_STATE();
    case 386:
      if (lookahead == 'a') ADVANCE(539);
      END_STATE();
    case 387:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 388:
      if (lookahead == 'a') ADVANCE(632);
      END_STATE();
    case 389:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 390:
      if (lookahead == 'a') ADVANCE(591);
      END_STATE();
    case 391:
      if (lookahead == 'a') ADVANCE(640);
      END_STATE();
    case 392:
      if (lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 393:
      if (lookahead == 'a') ADVANCE(628);
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 394:
      if (lookahead == 'a') ADVANCE(587);
      END_STATE();
    case 395:
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(384);
      END_STATE();
    case 396:
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 't') ADVANCE(528);
      END_STATE();
    case 397:
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(384);
      if (lookahead == 't') ADVANCE(527);
      END_STATE();
    case 398:
      if (lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 399:
      if (lookahead == 'a') ADVANCE(430);
      END_STATE();
    case 400:
      if (lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 401:
      if (lookahead == 'b') ADVANCE(551);
      END_STATE();
    case 402:
      if (lookahead == 'b') ADVANCE(551);
      if (lookahead == 'u') ADVANCE(639);
      END_STATE();
    case 403:
      if (lookahead == 'b') ADVANCE(558);
      END_STATE();
    case 404:
      if (lookahead == 'b') ADVANCE(519);
      END_STATE();
    case 405:
      if (lookahead == 'b') ADVANCE(520);
      END_STATE();
    case 406:
      if (lookahead == 'c') ADVANCE(579);
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 407:
      if (lookahead == 'c') ADVANCE(505);
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 408:
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 409:
      if (lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 410:
      if (lookahead == 'c') ADVANCE(387);
      if (lookahead == 'g') ADVANCE(1137);
      END_STATE();
    case 411:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 412:
      if (lookahead == 'c') ADVANCE(554);
      END_STATE();
    case 413:
      if (lookahead == 'c') ADVANCE(398);
      END_STATE();
    case 414:
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 415:
      if (lookahead == 'c') ADVANCE(475);
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 416:
      if (lookahead == 'c') ADVANCE(476);
      END_STATE();
    case 417:
      if (lookahead == 'd') ADVANCE(878);
      END_STATE();
    case 418:
      if (lookahead == 'd') ADVANCE(1096);
      END_STATE();
    case 419:
      if (lookahead == 'd') ADVANCE(1144);
      END_STATE();
    case 420:
      if (lookahead == 'd') ADVANCE(1147);
      END_STATE();
    case 421:
      if (lookahead == 'd') ADVANCE(1149);
      END_STATE();
    case 422:
      if (lookahead == 'd') ADVANCE(464);
      END_STATE();
    case 423:
      if (lookahead == 'd') ADVANCE(566);
      if (lookahead == 'n') ADVANCE(493);
      END_STATE();
    case 424:
      if (lookahead == 'd') ADVANCE(662);
      END_STATE();
    case 425:
      if (lookahead == 'd') ADVANCE(497);
      if (lookahead == 'q') ADVANCE(651);
      if (lookahead == 'v') ADVANCE(462);
      END_STATE();
    case 426:
      if (lookahead == 'd') ADVANCE(498);
      if (lookahead == 'k') ADVANCE(471);
      if (lookahead == 'l') ADVANCE(547);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == 'u') ADVANCE(541);
      END_STATE();
    case 427:
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 428:
      if (lookahead == 'd') ADVANCE(372);
      END_STATE();
    case 429:
      if (lookahead == 'd') ADVANCE(385);
      END_STATE();
    case 430:
      if (lookahead == 'd') ADVANCE(463);
      END_STATE();
    case 431:
      if (lookahead == 'd') ADVANCE(515);
      END_STATE();
    case 432:
      if (lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 433:
      if (lookahead == 'd') ADVANCE(468);
      END_STATE();
    case 434:
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead == 'i') ADVANCE(607);
      END_STATE();
    case 435:
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(410);
      END_STATE();
    case 436:
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 437:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 438:
      if (lookahead == 'e') ADVANCE(425);
      if (lookahead == 'o') ADVANCE(550);
      END_STATE();
    case 439:
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 440:
      if (lookahead == 'e') ADVANCE(1146);
      END_STATE();
    case 441:
      if (lookahead == 'e') ADVANCE(1101);
      END_STATE();
    case 442:
      if (lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 443:
      if (lookahead == 'e') ADVANCE(1105);
      END_STATE();
    case 444:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 446:
      if (lookahead == 'e') ADVANCE(1175);
      END_STATE();
    case 447:
      if (lookahead == 'e') ADVANCE(1148);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(1150);
      END_STATE();
    case 449:
      if (lookahead == 'e') ADVANCE(1145);
      END_STATE();
    case 450:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 452:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 453:
      if (lookahead == 'e') ADVANCE(580);
      END_STATE();
    case 454:
      if (lookahead == 'e') ADVANCE(508);
      END_STATE();
    case 455:
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 456:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 457:
      if (lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 458:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 459:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 460:
      if (lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 461:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 462:
      if (lookahead == 'e') ADVANCE(606);
      END_STATE();
    case 463:
      if (lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 464:
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 465:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 466:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 467:
      if (lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 468:
      if (lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 469:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 470:
      if (lookahead == 'e') ADVANCE(602);
      END_STATE();
    case 471:
      if (lookahead == 'e') ADVANCE(465);
      END_STATE();
    case 472:
      if (lookahead == 'e') ADVANCE(585);
      END_STATE();
    case 473:
      if (lookahead == 'e') ADVANCE(375);
      END_STATE();
    case 474:
      if (lookahead == 'e') ADVANCE(604);
      END_STATE();
    case 475:
      if (lookahead == 'e') ADVANCE(599);
      END_STATE();
    case 476:
      if (lookahead == 'e') ADVANCE(600);
      END_STATE();
    case 477:
      if (lookahead == 'f') ADVANCE(453);
      END_STATE();
    case 478:
      if (lookahead == 'f') ADVANCE(1434);
      END_STATE();
    case 479:
      if (lookahead == 'f') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 480:
      if (lookahead == 'f') ADVANCE(545);
      if (lookahead == 't') ADVANCE(457);
      END_STATE();
    case 481:
      if (lookahead == 'f') ADVANCE(560);
      END_STATE();
    case 482:
      if (lookahead == 'g') ADVANCE(1137);
      END_STATE();
    case 483:
      if (lookahead == 'g') ADVANCE(543);
      if (lookahead == 'm') ADVANCE(578);
      if (lookahead == 'n') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(887);
      END_STATE();
    case 484:
      if (lookahead == 'g') ADVANCE(451);
      END_STATE();
    case 485:
      if (lookahead == 'h') ADVANCE(867);
      END_STATE();
    case 486:
      if (lookahead == 'h') ADVANCE(1106);
      END_STATE();
    case 487:
      if (lookahead == 'h') ADVANCE(563);
      END_STATE();
    case 488:
      if (lookahead == 'h') ADVANCE(649);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 491:
      if (lookahead == 'i') ADVANCE(510);
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 492:
      if (lookahead == 'i') ADVANCE(667);
      END_STATE();
    case 493:
      if (lookahead == 'i') ADVANCE(658);
      END_STATE();
    case 494:
      if (lookahead == 'i') ADVANCE(507);
      END_STATE();
    case 495:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 496:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 497:
      if (lookahead == 'i') ADVANCE(582);
      END_STATE();
    case 498:
      if (lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 499:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 500:
      if (lookahead == 'i') ADVANCE(668);
      END_STATE();
    case 501:
      if (lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 502:
      if (lookahead == 'i') ADVANCE(521);
      END_STATE();
    case 503:
      if (lookahead == 'i') ADVANCE(521);
      if (lookahead == 'o') ADVANCE(586);
      END_STATE();
    case 504:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 505:
      if (lookahead == 'k') ADVANCE(461);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(1413);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(1432);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(1162);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(1423);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(512);
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(368);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(487);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(443);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(378);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(561);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(444);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(455);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(466);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(473);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(449);
      END_STATE();
    case 523:
      if (lookahead == 'm') ADVANCE(578);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(895);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == 'n') ADVANCE(409);
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(506);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(506);
      if (lookahead == 't') ADVANCE(568);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(388);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(386);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(448);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(575);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(577);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(409);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(1161);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(417);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(616);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(638);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(557);
      END_STATE();
    case 544:
      if (lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 545:
      if (lookahead == 'o') ADVANCE(1164);
      END_STATE();
    case 546:
      if (lookahead == 'o') ADVANCE(538);
      END_STATE();
    case 547:
      if (lookahead == 'o') ADVANCE(413);
      END_STATE();
    case 548:
      if (lookahead == 'o') ADVANCE(370);
      END_STATE();
    case 549:
      if (lookahead == 'o') ADVANCE(482);
      END_STATE();
    case 550:
      if (lookahead == 'o') ADVANCE(629);
      END_STATE();
    case 551:
      if (lookahead == 'o') ADVANCE(589);
      END_STATE();
    case 552:
      if (lookahead == 'o') ADVANCE(535);
      END_STATE();
    case 553:
      if (lookahead == 'o') ADVANCE(659);
      END_STATE();
    case 554:
      if (lookahead == 'o') ADVANCE(532);
      END_STATE();
    case 555:
      if (lookahead == 'o') ADVANCE(581);
      END_STATE();
    case 556:
      if (lookahead == 'o') ADVANCE(427);
      END_STATE();
    case 557:
      if (lookahead == 'o') ADVANCE(594);
      END_STATE();
    case 558:
      if (lookahead == 'o') ADVANCE(424);
      END_STATE();
    case 559:
      if (lookahead == 'o') ADVANCE(593);
      END_STATE();
    case 560:
      if (lookahead == 'o') ADVANCE(595);
      END_STATE();
    case 561:
      if (lookahead == 'o') ADVANCE(399);
      END_STATE();
    case 562:
      if (lookahead == 'o') ADVANCE(592);
      END_STATE();
    case 563:
      if (lookahead == 'o') ADVANCE(619);
      END_STATE();
    case 564:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 565:
      if (lookahead == 'p') ADVANCE(883);
      END_STATE();
    case 566:
      if (lookahead == 'p') ADVANCE(885);
      END_STATE();
    case 567:
      if (lookahead == 'p') ADVANCE(1095);
      END_STATE();
    case 568:
      if (lookahead == 'p') ADVANCE(322);
      END_STATE();
    case 569:
      if (lookahead == 'p') ADVANCE(1151);
      END_STATE();
    case 570:
      if (lookahead == 'p') ADVANCE(868);
      END_STATE();
    case 571:
      if (lookahead == 'p') ADVANCE(652);
      END_STATE();
    case 572:
      if (lookahead == 'p') ADVANCE(631);
      END_STATE();
    case 573:
      if (lookahead == 'p') ADVANCE(609);
      END_STATE();
    case 574:
      if (lookahead == 'p') ADVANCE(596);
      END_STATE();
    case 575:
      if (lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 576:
      if (lookahead == 'p') ADVANCE(391);
      END_STATE();
    case 577:
      if (lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 578:
      if (lookahead == 'p') ADVANCE(562);
      END_STATE();
    case 579:
      if (lookahead == 'r') ADVANCE(664);
      END_STATE();
    case 580:
      if (lookahead == 'r') ADVANCE(1114);
      END_STATE();
    case 581:
      if (lookahead == 'r') ADVANCE(1166);
      END_STATE();
    case 582:
      if (lookahead == 'r') ADVANCE(1167);
      END_STATE();
    case 583:
      if (lookahead == 'r') ADVANCE(1110);
      END_STATE();
    case 584:
      if (lookahead == 'r') ADVANCE(1142);
      END_STATE();
    case 585:
      if (lookahead == 'r') ADVANCE(1097);
      END_STATE();
    case 586:
      if (lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 587:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 588:
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead == 'z') ADVANCE(495);
      END_STATE();
    case 589:
      if (lookahead == 'r') ADVANCE(630);
      END_STATE();
    case 590:
      if (lookahead == 'r') ADVANCE(542);
      END_STATE();
    case 591:
      if (lookahead == 'r') ADVANCE(419);
      END_STATE();
    case 592:
      if (lookahead == 'r') ADVANCE(633);
      END_STATE();
    case 593:
      if (lookahead == 'r') ADVANCE(394);
      END_STATE();
    case 594:
      if (lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 595:
      if (lookahead == 'r') ADVANCE(377);
      END_STATE();
    case 596:
      if (lookahead == 'r') ADVANCE(553);
      END_STATE();
    case 597:
      if (lookahead == 'r') ADVANCE(445);
      END_STATE();
    case 598:
      if (lookahead == 'r') ADVANCE(584);
      END_STATE();
    case 599:
      if (lookahead == 'r') ADVANCE(646);
      END_STATE();
    case 600:
      if (lookahead == 'r') ADVANCE(648);
      END_STATE();
    case 601:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 602:
      if (lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 603:
      if (lookahead == 'r') ADVANCE(555);
      END_STATE();
    case 604:
      if (lookahead == 'r') ADVANCE(530);
      END_STATE();
    case 605:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 606:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 607:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 608:
      if (lookahead == 's') ADVANCE(1419);
      END_STATE();
    case 609:
      if (lookahead == 's') ADVANCE(1433);
      END_STATE();
    case 610:
      if (lookahead == 's') ADVANCE(1437);
      END_STATE();
    case 611:
      if (lookahead == 's') ADVANCE(1435);
      END_STATE();
    case 612:
      if (lookahead == 's') ADVANCE(1153);
      END_STATE();
    case 613:
      if (lookahead == 's') ADVANCE(1436);
      END_STATE();
    case 614:
      if (lookahead == 's') ADVANCE(492);
      END_STATE();
    case 615:
      if (lookahead == 's') ADVANCE(441);
      END_STATE();
    case 616:
      if (lookahead == 's') ADVANCE(564);
      END_STATE();
    case 617:
      if (lookahead == 's') ADVANCE(400);
      END_STATE();
    case 618:
      if (lookahead == 's') ADVANCE(643);
      END_STATE();
    case 619:
      if (lookahead == 's') ADVANCE(637);
      END_STATE();
    case 620:
      if (lookahead == 's') ADVANCE(456);
      END_STATE();
    case 621:
      if (lookahead == 's') ADVANCE(469);
      END_STATE();
    case 622:
      if (lookahead == 's') ADVANCE(552);
      END_STATE();
    case 623:
      if (lookahead == 's') ADVANCE(641);
      END_STATE();
    case 624:
      if (lookahead == 's') ADVANCE(411);
      END_STATE();
    case 625:
      if (lookahead == 's') ADVANCE(621);
      END_STATE();
    case 626:
      if (lookahead == 's') ADVANCE(470);
      END_STATE();
    case 627:
      if (lookahead == 't') ADVANCE(422);
      END_STATE();
    case 628:
      if (lookahead == 't') ADVANCE(485);
      END_STATE();
    case 629:
      if (lookahead == 't') ADVANCE(1415);
      END_STATE();
    case 630:
      if (lookahead == 't') ADVANCE(873);
      END_STATE();
    case 631:
      if (lookahead == 't') ADVANCE(877);
      END_STATE();
    case 632:
      if (lookahead == 't') ADVANCE(1159);
      END_STATE();
    case 633:
      if (lookahead == 't') ADVANCE(1132);
      END_STATE();
    case 634:
      if (lookahead == 't') ADVANCE(1141);
      END_STATE();
    case 635:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 636:
      if (lookahead == 't') ADVANCE(1143);
      END_STATE();
    case 637:
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 638:
      if (lookahead == 't') ADVANCE(1411);
      END_STATE();
    case 639:
      if (lookahead == 't') ADVANCE(548);
      END_STATE();
    case 640:
      if (lookahead == 't') ADVANCE(486);
      END_STATE();
    case 641:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 642:
      if (lookahead == 't') ADVANCE(571);
      END_STATE();
    case 643:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 644:
      if (lookahead == 't') ADVANCE(496);
      END_STATE();
    case 645:
      if (lookahead == 't') ADVANCE(573);
      END_STATE();
    case 646:
      if (lookahead == 't') ADVANCE(610);
      END_STATE();
    case 647:
      if (lookahead == 't') ADVANCE(611);
      END_STATE();
    case 648:
      if (lookahead == 't') ADVANCE(613);
      END_STATE();
    case 649:
      if (lookahead == 't') ADVANCE(645);
      END_STATE();
    case 650:
      if (lookahead == 'u') ADVANCE(642);
      END_STATE();
    case 651:
      if (lookahead == 'u') ADVANCE(460);
      END_STATE();
    case 652:
      if (lookahead == 'u') ADVANCE(634);
      END_STATE();
    case 653:
      if (lookahead == 'u') ADVANCE(636);
      END_STATE();
    case 654:
      if (lookahead == 'v') ADVANCE(454);
      END_STATE();
    case 655:
      if (lookahead == 'v') ADVANCE(472);
      END_STATE();
    case 656:
      if (lookahead == 'w') ADVANCE(615);
      END_STATE();
    case 657:
      if (lookahead == 'x') ADVANCE(373);
      END_STATE();
    case 658:
      if (lookahead == 'x') ADVANCE(893);
      END_STATE();
    case 659:
      if (lookahead == 'x') ADVANCE(663);
      END_STATE();
    case 660:
      if (lookahead == 'x') ADVANCE(570);
      END_STATE();
    case 661:
      if (lookahead == 'y') ADVANCE(1409);
      END_STATE();
    case 662:
      if (lookahead == 'y') ADVANCE(1171);
      END_STATE();
    case 663:
      if (lookahead == 'y') ADVANCE(1176);
      END_STATE();
    case 664:
      if (lookahead == 'y') ADVANCE(572);
      END_STATE();
    case 665:
      if (lookahead == 'y') ADVANCE(612);
      END_STATE();
    case 666:
      if (lookahead == 'z') ADVANCE(495);
      END_STATE();
    case 667:
      if (lookahead == 'z') ADVANCE(446);
      END_STATE();
    case 668:
      if (lookahead == 'z') ADVANCE(447);
      END_STATE();
    case 669:
      if (lookahead == '}') ADVANCE(1403);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 670:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(670)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 671:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(671)
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(872);
      END_STATE();
    case 672:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(672)
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      END_STATE();
    case 673:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1152);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(673)
      END_STATE();
    case 674:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 675:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1405);
      END_STATE();
    case 676:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1156);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(676)
      END_STATE();
    case 677:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1157);
      END_STATE();
    case 678:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      END_STATE();
    case 679:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1154);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(679)
      END_STATE();
    case 680:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      END_STATE();
    case 681:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(864);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(681)
      END_STATE();
    case 682:
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) SKIP(682)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 683:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1404);
      END_STATE();
    case 684:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1403);
      END_STATE();
    case 685:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(683);
      END_STATE();
    case 686:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(684);
      END_STATE();
    case 687:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(820);
      END_STATE();
    case 688:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(822);
      END_STATE();
    case 689:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 690:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      END_STATE();
    case 691:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 692:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 693:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(669);
      END_STATE();
    case 694:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1429);
      END_STATE();
    case 695:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(275);
      END_STATE();
    case 696:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(739);
      END_STATE();
    case 697:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(273);
      END_STATE();
    case 698:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 699:
      if (eof) ADVANCE(700);
      if (lookahead == '#') ADVANCE(38);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '*') ADVANCE(1431);
      if (lookahead == '/') ADVANCE(1404);
      if (lookahead == '1') ADVANCE(88);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == ':') ADVANCE(848);
      if (lookahead == '@') ADVANCE(866);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(709);
      if (lookahead == '}') ADVANCE(710);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 134 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(57);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym__horizontal_whitespaces_token1);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(701);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__vertical_whitespace);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym__vertical_whitespaces);
      if (lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(703);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__empty_line);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(705);
      if (lookahead != 0) ADVANCE(705);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_comment_line);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1426);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_comment_line);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(695);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(275);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (lookahead == ':') ADVANCE(678);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(712);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_site_address_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_localhost);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__ipv4_address);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (lookahead == '5') ADVANCE(727);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(728);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(729);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(726);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(732);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(734);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(733);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(722);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(738);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(741);
      if (lookahead == ':') ADVANCE(76);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(745);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == '1') ADVANCE(744);
      if (lookahead == '2') ADVANCE(740);
      if (lookahead == ':') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(755);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(748);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(749);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(750);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(76);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(753);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(754);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(756);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(757);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(758);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(687);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(760);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(761);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(696);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(762);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '0') ADVANCE(765);
      if (lookahead == ':') ADVANCE(321);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '0') ADVANCE(801);
      if (lookahead == ':') ADVANCE(321);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(771);
      if (lookahead == ':') ADVANCE(692);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(777);
      if (lookahead == ':') ADVANCE(687);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(783);
      if (lookahead == ':') ADVANCE(688);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(789);
      if (lookahead == ':') ADVANCE(690);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(832);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '5') ADVANCE(795);
      if (lookahead == ':') ADVANCE(691);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(775);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(814);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(814);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(814);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(781);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(821);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(787);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(827);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(827);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(827);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(793);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(832);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(832);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(829);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(799);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(809);
      if (lookahead == ':') ADVANCE(321);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(774);
      if (lookahead == '2') ADVANCE(766);
      if (lookahead == 'f') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(816);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(778);
      if (lookahead == '2') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(822);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(784);
      if (lookahead == '2') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(826);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(790);
      if (lookahead == '2') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(830);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(796);
      if (lookahead == '2') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(834);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(837);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(838);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(308);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(321);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (lookahead == 'f') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(814);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (lookahead == 'f') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(810);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (lookahead == 'f') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(815);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(814);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(815);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(689);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(817);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(818);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(819);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(687);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(824);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(821);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(823);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(688);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(828);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(825);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(827);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(690);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(832);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(829);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(831);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(691);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(836);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(833);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(835);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(739);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(838);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(739);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(840);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(820);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(243);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '1') ADVANCE(1408);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '5') ADVANCE(852);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(856);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(855);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(862);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(853);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(855);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(856);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1152);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(849);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(858);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(859);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(861);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(863);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1403);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(865);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(866);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(872);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(872);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(872);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_matcher_path_regexp_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(872);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_bcrypt);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(anon_sym_tcp);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_udp);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_ip);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead == '0') ADVANCE(850);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(853);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '.') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(853);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_unix);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\\') ADVANCE(698);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(52);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(899);
      if (lookahead == '\n' ||
          lookahead == '\r' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(900);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '%') ADVANCE(685);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1404);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(901);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == '5') ADVANCE(903);
      if (lookahead == ':') ADVANCE(324);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(905);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(907);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(908);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(907);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(905);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1009);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(996);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '_') ADVANCE(972);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '_') ADVANCE(958);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '_') ADVANCE(917);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == 'e') ADVANCE(913);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(924);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(943);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(976);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(951);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'b') ADVANCE(954);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'c') ADVANCE(956);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(880);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(982);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(979);
      if (lookahead == 'v') ADVANCE(932);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(944);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(927);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'd') ADVANCE(933);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(921);
      if (lookahead == 'o') ADVANCE(953);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(909);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(1103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(965);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(910);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(967);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(961);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(962);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'e') ADVANCE(963);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'g') ADVANCE(1139);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'h') ADVANCE(1108);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(947);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(942);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(960);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(969);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(926);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(1424);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(928);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'm') ADVANCE(959);
      if (lookahead == 'n') ADVANCE(977);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(918);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(919);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(914);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(922);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(936);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(964);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(981);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(973);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(920);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(966);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'o') ADVANCE(923);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(915);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(968);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'p') ADVANCE(955);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(1169);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(1112);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(980);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(1099);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(974);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(948);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(971);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 's') ADVANCE(1421);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 's') ADVANCE(931);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 's') ADVANCE(934);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(1417);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(1135);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(937);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(929);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 't') ADVANCE(911);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'u') ADVANCE(930);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'v') ADVANCE(935);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'x') ADVANCE(983);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'y') ADVANCE(1173);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == 'y') ADVANCE(1178);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(997);
      if (lookahead == '5') ADVANCE(986);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(987);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(989);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(989);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(987);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(997);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(998);
      if (lookahead == '5') ADVANCE(991);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(992);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(994);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(994);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(992);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(998);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(1010);
      if (lookahead == ':') ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1009);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(993);
      if (lookahead == '2') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(992);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(737);
      if (lookahead == '2') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(988);
      if (lookahead == '2') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(987);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(995);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'b') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(999);
      if (lookahead == 'i') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'e') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (lookahead == 'o') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1009);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1006);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1007);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(324);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(65);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1017);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1077);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '_') ADVANCE(1065);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1028);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1081);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(1052);
      if (lookahead == 'e') ADVANCE(1014);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1058);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(1054);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1061);
      if (lookahead == 'l') ADVANCE(1074);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1061);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(1057);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(881);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1087);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1044);
      if (lookahead == 'q') ADVANCE(1083);
      if (lookahead == 'v') ADVANCE(1034);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1062);
      if (lookahead == 'n') ADVANCE(1043);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1031);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1047);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(1036);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'o') ADVANCE(1055);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1012);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1094);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1104);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1075);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1072);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1013);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1067);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1068);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(1069);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'g') ADVANCE(1140);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'h') ADVANCE(1109);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1051);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1046);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1085);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(1066);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1074);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1030);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(1032);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1064);
      if (lookahead == 'p') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(1064);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1021);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1022);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(1027);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1039);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1070);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1078);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1086);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1026);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1023);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(1071);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(884);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(886);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1015);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1059);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(1073);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1170);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1113);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1084);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1100);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1079);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1080);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1076);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(1056);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1422);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1082);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1035);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1037);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1418);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(876);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1136);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1040);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1011);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'u') ADVANCE(1033);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'v') ADVANCE(1038);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(894);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(1088);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1174);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'y') ADVANCE(1179);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(anon_sym_file_server);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(anon_sym_file_server);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(anon_sym_browse);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '_') ADVANCE(1368);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '_') ADVANCE(957);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '`') ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(1063);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '_') ADVANCE(576);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(anon_sym_handle_path);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(anon_sym_defer);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(1122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(1123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'f') ADVANCE(1121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(1115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1125);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ') ADVANCE(1126);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1127);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_header_value_token2);
      if (lookahead == ' ' ||
          lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1127);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '~')) ADVANCE(1125);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if (lookahead == ' ') ADVANCE(1130);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1131);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_header_value_token3);
      if ((' ' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '~')) ADVANCE(1131);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_log);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(anon_sym_log);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(anon_sym_stderr);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_stdout);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '_') ADVANCE(626);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(anon_sym_roll_disabled);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_roll_size);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(anon_sym_roll_uncompressed);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(anon_sym_roll_local_time);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(anon_sym_roll_keep);
      if (lookahead == '_') ADVANCE(481);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym__log_output_file_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1152);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(anon_sym_roll_keep_for_days);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1155);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym__log_output_file_token2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1155);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_size_number);
      if (lookahead == '.') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1158);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_size_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1158);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_size_number);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1158);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(anon_sym_console);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(anon_sym_level);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(anon_sym_INFO);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(anon_sym_request_body);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(anon_sym_request_body);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(anon_sym_max_size);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(anon_sym_reverse_proxy);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == 't') ADVANCE(1304);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1305);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(845);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1306);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1305);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1402);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1402);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1307);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1188);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1187);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1188);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1187);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1184);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1183);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1184);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1183);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1192);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1191);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1192);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1191);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1186);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1186);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1185);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1196);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1195);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1196);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1195);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1190);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1189);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1190);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1189);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1200);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1200);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1199);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1194);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1193);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1194);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1193);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1204);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1204);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1203);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1198);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1198);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1197);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1208);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1207);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1202);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1201);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1202);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1201);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1211);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1212);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1211);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1206);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1205);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1216);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1216);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1215);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1210);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1210);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1209);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1220);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1219);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1220);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1219);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1214);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1214);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1213);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1224);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1223);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1224);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1223);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1218);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1217);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1217);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1228);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1227);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1228);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1227);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1222);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1222);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1221);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1232);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1231);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1232);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1231);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1226);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1225);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1226);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1225);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1236);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1236);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1235);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1230);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1229);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1230);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1229);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1240);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1240);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1239);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1234);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1234);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1233);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1244);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1243);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1244);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1243);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1238);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1237);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1238);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1237);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1248);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1248);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1247);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1242);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1242);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1241);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1252);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1252);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1251);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1246);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1246);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1245);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1255);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1256);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1255);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1249);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1250);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1249);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1260);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1259);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1260);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1259);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1254);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1253);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1254);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1253);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1264);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1263);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1258);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1257);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1258);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1257);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1268);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1267);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1262);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1261);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1262);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1261);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1272);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1271);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1266);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1265);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1276);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1275);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1270);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1269);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1280);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1279);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1274);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1273);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1284);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1283);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1278);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1277);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1288);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1287);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1282);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1281);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1292);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1291);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1286);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1285);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == ':') ADVANCE(1310);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1297);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1296);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1290);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1289);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == 'p') ADVANCE(1301);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1303);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1302);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == ':') ADVANCE(1309);
      if (lookahead == 's') ADVANCE(1293);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1295);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1294);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == 't') ADVANCE(1298);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '-') ADVANCE(1300);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1299);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '.') ADVANCE(1400);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '/') ADVANCE(305);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '0') ADVANCE(1312);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '1') ADVANCE(1407);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '_') ADVANCE(1386);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '_') ADVANCE(1369);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '_') ADVANCE(1322);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(1357);
      if (lookahead == 'e') ADVANCE(1317);
      if (lookahead == 't') ADVANCE(1352);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(1329);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(1359);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(1391);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'a') ADVANCE(1375);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'b') ADVANCE(1363);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'b') ADVANCE(1365);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'c') ADVANCE(1364);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(879);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(1397);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(1347);
      if (lookahead == 'q') ADVANCE(1393);
      if (lookahead == 'v') ADVANCE(1337);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(1333);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(1350);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'd') ADVANCE(1339);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1378);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1326);
      if (lookahead == 'o') ADVANCE(1361);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1313);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1102);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1384);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1314);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1381);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1358);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1373);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1374);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1376);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'e') ADVANCE(1354);
      if (lookahead == 'l') ADVANCE(1383);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'g') ADVANCE(1138);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'h') ADVANCE(1107);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(1349);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(1356);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'i') ADVANCE(1372);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(1414);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(1332);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'l') ADVANCE(1334);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(1371);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(1348);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(1318);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'm') ADVANCE(1370);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(1323);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(1324);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(1328);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(1390);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'n') ADVANCE(1338);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1343);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1387);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1395);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1377);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1327);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1325);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1379);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'o') ADVANCE(1380);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(1319);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(1382);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(1366);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'p') ADVANCE(1367);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1168);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1394);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1396);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1098);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1388);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1353);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1320);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1389);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1385);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'r') ADVANCE(1362);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 's') ADVANCE(1420);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 's') ADVANCE(1392);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 's') ADVANCE(1336);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 's') ADVANCE(1340);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1416);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(874);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1133);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1412);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1344);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 't') ADVANCE(1315);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(1335);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'v') ADVANCE(1341);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'x') ADVANCE(1398);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'y') ADVANCE(1410);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'y') ADVANCE(1172);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == 'y') ADVANCE(1177);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1403);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1182);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1181);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1399);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1308);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(685);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1404);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(860);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_root);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(anon_sym_root);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(anon_sym_root);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(686);
      if (lookahead == '{') ADVANCE(693);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1403);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1090);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '@') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(1090);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(984);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f') ADVANCE(707);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == ']') ADVANCE(1426);
      if (lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if ((1 <= lookahead && lookahead <= 8) ||
          (11 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(2);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1427);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\n') ADVANCE(706);
      if (lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 133 ||
          lookahead == 8232 ||
          lookahead == 8233) ADVANCE(708);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1429);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(366);
      if (lookahead == ']') ADVANCE(1430);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(365);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_email);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_auto_https);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_disable_redirects);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_ignore_loaded_certs);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_disable_certs);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 699},
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
  [37] = {.lex_state = 54},
  [38] = {.lex_state = 58},
  [39] = {.lex_state = 54},
  [40] = {.lex_state = 55},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 61},
  [43] = {.lex_state = 55},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 58},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 61},
  [48] = {.lex_state = 58},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 61},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 51},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 61},
  [56] = {.lex_state = 61},
  [57] = {.lex_state = 63},
  [58] = {.lex_state = 63},
  [59] = {.lex_state = 63},
  [60] = {.lex_state = 699},
  [61] = {.lex_state = 61},
  [62] = {.lex_state = 63},
  [63] = {.lex_state = 699},
  [64] = {.lex_state = 61},
  [65] = {.lex_state = 63},
  [66] = {.lex_state = 63},
  [67] = {.lex_state = 63},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 63},
  [70] = {.lex_state = 63},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 63},
  [73] = {.lex_state = 62},
  [74] = {.lex_state = 62},
  [75] = {.lex_state = 62},
  [76] = {.lex_state = 62},
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 62},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 62},
  [81] = {.lex_state = 62},
  [82] = {.lex_state = 63},
  [83] = {.lex_state = 63},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 63},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 61},
  [88] = {.lex_state = 63},
  [89] = {.lex_state = 58},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 63},
  [93] = {.lex_state = 63},
  [94] = {.lex_state = 63},
  [95] = {.lex_state = 63},
  [96] = {.lex_state = 63},
  [97] = {.lex_state = 58},
  [98] = {.lex_state = 58},
  [99] = {.lex_state = 58},
  [100] = {.lex_state = 58},
  [101] = {.lex_state = 58},
  [102] = {.lex_state = 61},
  [103] = {.lex_state = 58},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 58},
  [107] = {.lex_state = 58},
  [108] = {.lex_state = 58},
  [109] = {.lex_state = 58},
  [110] = {.lex_state = 58},
  [111] = {.lex_state = 58},
  [112] = {.lex_state = 58},
  [113] = {.lex_state = 58},
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
  [130] = {.lex_state = 62},
  [131] = {.lex_state = 58},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 58},
  [134] = {.lex_state = 58},
  [135] = {.lex_state = 58},
  [136] = {.lex_state = 58},
  [137] = {.lex_state = 58},
  [138] = {.lex_state = 58},
  [139] = {.lex_state = 62},
  [140] = {.lex_state = 62},
  [141] = {.lex_state = 58},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 58},
  [144] = {.lex_state = 62},
  [145] = {.lex_state = 62},
  [146] = {.lex_state = 58},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 61},
  [149] = {.lex_state = 61},
  [150] = {.lex_state = 61},
  [151] = {.lex_state = 61},
  [152] = {.lex_state = 61},
  [153] = {.lex_state = 61},
  [154] = {.lex_state = 61},
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
  [191] = {.lex_state = 60},
  [192] = {.lex_state = 60},
  [193] = {.lex_state = 699},
  [194] = {.lex_state = 60},
  [195] = {.lex_state = 60},
  [196] = {.lex_state = 699},
  [197] = {.lex_state = 60},
  [198] = {.lex_state = 60},
  [199] = {.lex_state = 60},
  [200] = {.lex_state = 60},
  [201] = {.lex_state = 60},
  [202] = {.lex_state = 85},
  [203] = {.lex_state = 85},
  [204] = {.lex_state = 699},
  [205] = {.lex_state = 699},
  [206] = {.lex_state = 699},
  [207] = {.lex_state = 699},
  [208] = {.lex_state = 699},
  [209] = {.lex_state = 699},
  [210] = {.lex_state = 699},
  [211] = {.lex_state = 699},
  [212] = {.lex_state = 47},
  [213] = {.lex_state = 47},
  [214] = {.lex_state = 59},
  [215] = {.lex_state = 699},
  [216] = {.lex_state = 699},
  [217] = {.lex_state = 62},
  [218] = {.lex_state = 699},
  [219] = {.lex_state = 62},
  [220] = {.lex_state = 699},
  [221] = {.lex_state = 59},
  [222] = {.lex_state = 85},
  [223] = {.lex_state = 699},
  [224] = {.lex_state = 59},
  [225] = {.lex_state = 699},
  [226] = {.lex_state = 699},
  [227] = {.lex_state = 61},
  [228] = {.lex_state = 61},
  [229] = {.lex_state = 61},
  [230] = {.lex_state = 61},
  [231] = {.lex_state = 61},
  [232] = {.lex_state = 85},
  [233] = {.lex_state = 61},
  [234] = {.lex_state = 61},
  [235] = {.lex_state = 60},
  [236] = {.lex_state = 60},
  [237] = {.lex_state = 60},
  [238] = {.lex_state = 60},
  [239] = {.lex_state = 60},
  [240] = {.lex_state = 61},
  [241] = {.lex_state = 61},
  [242] = {.lex_state = 60},
  [243] = {.lex_state = 699},
  [244] = {.lex_state = 61},
  [245] = {.lex_state = 61},
  [246] = {.lex_state = 61},
  [247] = {.lex_state = 60},
  [248] = {.lex_state = 58},
  [249] = {.lex_state = 61},
  [250] = {.lex_state = 61},
  [251] = {.lex_state = 61},
  [252] = {.lex_state = 58},
  [253] = {.lex_state = 699},
  [254] = {.lex_state = 46},
  [255] = {.lex_state = 699},
  [256] = {.lex_state = 699},
  [257] = {.lex_state = 46},
  [258] = {.lex_state = 83},
  [259] = {.lex_state = 61},
  [260] = {.lex_state = 61},
  [261] = {.lex_state = 61},
  [262] = {.lex_state = 83},
  [263] = {.lex_state = 61},
  [264] = {.lex_state = 58},
  [265] = {.lex_state = 61},
  [266] = {.lex_state = 58},
  [267] = {.lex_state = 61},
  [268] = {.lex_state = 83},
  [269] = {.lex_state = 61},
  [270] = {.lex_state = 699},
  [271] = {.lex_state = 60},
  [272] = {.lex_state = 699},
  [273] = {.lex_state = 699},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 699},
  [276] = {.lex_state = 60},
  [277] = {.lex_state = 60},
  [278] = {.lex_state = 60},
  [279] = {.lex_state = 60},
  [280] = {.lex_state = 61},
  [281] = {.lex_state = 699},
  [282] = {.lex_state = 60},
  [283] = {.lex_state = 60},
  [284] = {.lex_state = 60},
  [285] = {.lex_state = 60},
  [286] = {.lex_state = 58},
  [287] = {.lex_state = 58},
  [288] = {.lex_state = 60},
  [289] = {.lex_state = 60},
  [290] = {.lex_state = 60},
  [291] = {.lex_state = 303},
  [292] = {.lex_state = 60},
  [293] = {.lex_state = 48},
  [294] = {.lex_state = 61},
  [295] = {.lex_state = 60},
  [296] = {.lex_state = 699},
  [297] = {.lex_state = 699},
  [298] = {.lex_state = 48},
  [299] = {.lex_state = 60},
  [300] = {.lex_state = 61},
  [301] = {.lex_state = 60},
  [302] = {.lex_state = 699},
  [303] = {.lex_state = 699},
  [304] = {.lex_state = 699},
  [305] = {.lex_state = 699},
  [306] = {.lex_state = 45},
  [307] = {.lex_state = 45},
  [308] = {.lex_state = 45},
  [309] = {.lex_state = 45},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 45},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 45},
  [316] = {.lex_state = 699},
  [317] = {.lex_state = 45},
  [318] = {.lex_state = 699},
  [319] = {.lex_state = 45},
  [320] = {.lex_state = 45},
  [321] = {.lex_state = 699},
  [322] = {.lex_state = 699},
  [323] = {.lex_state = 45},
  [324] = {.lex_state = 45},
  [325] = {.lex_state = 699},
  [326] = {.lex_state = 45},
  [327] = {.lex_state = 49},
  [328] = {.lex_state = 49},
  [329] = {.lex_state = 49},
  [330] = {.lex_state = 49},
  [331] = {.lex_state = 49},
  [332] = {.lex_state = 303},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 49},
  [335] = {.lex_state = 49},
  [336] = {.lex_state = 59},
  [337] = {.lex_state = 49},
  [338] = {.lex_state = 63},
  [339] = {.lex_state = 63},
  [340] = {.lex_state = 63},
  [341] = {.lex_state = 63},
  [342] = {.lex_state = 63},
  [343] = {.lex_state = 63},
  [344] = {.lex_state = 63},
  [345] = {.lex_state = 63},
  [346] = {.lex_state = 63},
  [347] = {.lex_state = 63},
  [348] = {.lex_state = 63},
  [349] = {.lex_state = 63},
  [350] = {.lex_state = 63},
  [351] = {.lex_state = 63},
  [352] = {.lex_state = 63},
  [353] = {.lex_state = 63},
  [354] = {.lex_state = 63},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 63},
  [357] = {.lex_state = 63},
  [358] = {.lex_state = 63},
  [359] = {.lex_state = 63},
  [360] = {.lex_state = 63},
  [361] = {.lex_state = 63},
  [362] = {.lex_state = 63},
  [363] = {.lex_state = 63},
  [364] = {.lex_state = 63},
  [365] = {.lex_state = 63},
  [366] = {.lex_state = 59},
  [367] = {.lex_state = 63},
  [368] = {.lex_state = 63},
  [369] = {.lex_state = 63},
  [370] = {.lex_state = 63},
  [371] = {.lex_state = 59},
  [372] = {.lex_state = 63},
  [373] = {.lex_state = 63},
  [374] = {.lex_state = 670},
  [375] = {.lex_state = 63},
  [376] = {.lex_state = 63},
  [377] = {.lex_state = 63},
  [378] = {.lex_state = 63},
  [379] = {.lex_state = 63},
  [380] = {.lex_state = 63},
  [381] = {.lex_state = 63},
  [382] = {.lex_state = 63},
  [383] = {.lex_state = 63},
  [384] = {.lex_state = 63},
  [385] = {.lex_state = 63},
  [386] = {.lex_state = 63},
  [387] = {.lex_state = 63},
  [388] = {.lex_state = 63},
  [389] = {.lex_state = 63},
  [390] = {.lex_state = 63},
  [391] = {.lex_state = 63},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 63},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 63},
  [396] = {.lex_state = 63},
  [397] = {.lex_state = 63},
  [398] = {.lex_state = 63},
  [399] = {.lex_state = 63},
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
  [413] = {.lex_state = 676},
  [414] = {.lex_state = 60},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 682},
  [419] = {.lex_state = 699},
  [420] = {.lex_state = 58},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 681},
  [424] = {.lex_state = 713},
  [425] = {.lex_state = 713},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 60},
  [428] = {.lex_state = 60},
  [429] = {.lex_state = 679},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 673},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 676},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 60},
  [444] = {.lex_state = 676},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 60},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 60},
  [451] = {.lex_state = 60},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 681},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 713},
  [458] = {.lex_state = 713},
  [459] = {.lex_state = 60},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 682},
  [462] = {.lex_state = 699},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 671},
  [466] = {.lex_state = 676},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 39},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 40},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 60},
  [484] = {.lex_state = 60},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 676},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 672},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 681},
  [494] = {.lex_state = 58},
  [495] = {.lex_state = 60},
  [496] = {.lex_state = 699},
  [497] = {.lex_state = 682},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 682},
  [500] = {.lex_state = 682},
  [501] = {.lex_state = 676},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 672},
  [505] = {.lex_state = 40},
  [506] = {.lex_state = 39},
  [507] = {.lex_state = 60},
  [508] = {.lex_state = 676},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 676},
  [511] = {.lex_state = 676},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 672},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 60},
  [517] = {.lex_state = 60},
  [518] = {.lex_state = 40},
  [519] = {.lex_state = 39},
  [520] = {.lex_state = 672},
  [521] = {.lex_state = 40},
  [522] = {.lex_state = 39},
  [523] = {.lex_state = 672},
  [524] = {.lex_state = 40},
  [525] = {.lex_state = 39},
  [526] = {.lex_state = 672},
  [527] = {.lex_state = 40},
  [528] = {.lex_state = 39},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 60},
  [532] = {.lex_state = 682},
  [533] = {.lex_state = 682},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 0},
  [536] = {.lex_state = 0},
  [537] = {.lex_state = 60},
  [538] = {.lex_state = 53},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 713},
  [541] = {.lex_state = 682},
  [542] = {.lex_state = 682},
  [543] = {.lex_state = 0},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 713},
  [547] = {.lex_state = 0},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
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
    [sym_document] = STATE(549),
    [sym_site_block] = STATE(63),
    [sym_site_address] = STATE(547),
    [sym_protocol] = STATE(255),
    [sym__ip_or_domain_address] = STATE(546),
    [sym__port_number] = STATE(545),
    [sym_directive_import] = STATE(63),
    [sym_global_options_block] = STATE(63),
    [sym_snippet] = STATE(63),
    [aux_sym_document_repeat1] = STATE(63),
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
  [0] = 21,
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
      anon_sym_bind,
    ACTIONS(35), 1,
      anon_sym_encode,
    ACTIONS(37), 1,
      anon_sym_file_server,
    ACTIONS(39), 1,
      anon_sym_handle,
    ACTIONS(41), 1,
      anon_sym_handle_path,
    ACTIONS(43), 1,
      anon_sym_header,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      anon_sym_log,
    ACTIONS(49), 1,
      anon_sym_redir,
    ACTIONS(51), 1,
      anon_sym_request_body,
    ACTIONS(53), 1,
      anon_sym_reverse_proxy,
    ACTIONS(55), 1,
      anon_sym_root,
    ACTIONS(57), 1,
      anon_sym_tls,
    STATE(3), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(112), 14,
      sym_directive_abort,
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
  [79] = 21,
    ACTIONS(29), 1,
      sym_matcher_name,
    ACTIONS(31), 1,
      anon_sym_abort,
    ACTIONS(33), 1,
      anon_sym_bind,
    ACTIONS(35), 1,
      anon_sym_encode,
    ACTIONS(37), 1,
      anon_sym_file_server,
    ACTIONS(39), 1,
      anon_sym_handle,
    ACTIONS(41), 1,
      anon_sym_handle_path,
    ACTIONS(43), 1,
      anon_sym_header,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      anon_sym_log,
    ACTIONS(49), 1,
      anon_sym_redir,
    ACTIONS(51), 1,
      anon_sym_request_body,
    ACTIONS(53), 1,
      anon_sym_reverse_proxy,
    ACTIONS(55), 1,
      anon_sym_root,
    ACTIONS(57), 1,
      anon_sym_tls,
    ACTIONS(59), 1,
      sym__vertical_whitespaces,
    ACTIONS(61), 1,
      sym__empty_line,
    ACTIONS(63), 1,
      sym_comment_line,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(112), 14,
      sym_directive_abort,
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
  [158] = 20,
    ACTIONS(69), 1,
      sym__empty_line,
    ACTIONS(72), 1,
      sym_comment_line,
    ACTIONS(75), 1,
      sym_matcher_name,
    ACTIONS(78), 1,
      anon_sym_abort,
    ACTIONS(81), 1,
      anon_sym_bind,
    ACTIONS(84), 1,
      anon_sym_encode,
    ACTIONS(87), 1,
      anon_sym_file_server,
    ACTIONS(90), 1,
      anon_sym_handle,
    ACTIONS(93), 1,
      anon_sym_handle_path,
    ACTIONS(96), 1,
      anon_sym_header,
    ACTIONS(99), 1,
      anon_sym_import,
    ACTIONS(102), 1,
      anon_sym_log,
    ACTIONS(105), 1,
      anon_sym_redir,
    ACTIONS(108), 1,
      anon_sym_request_body,
    ACTIONS(111), 1,
      anon_sym_reverse_proxy,
    ACTIONS(114), 1,
      anon_sym_root,
    ACTIONS(117), 1,
      anon_sym_tls,
    ACTIONS(67), 2,
      sym__vertical_whitespaces,
      anon_sym_RBRACE,
    STATE(4), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(112), 14,
      sym_directive_abort,
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
  [235] = 19,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      sym_matcher_name,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(144), 1,
      anon_sym_redir,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(120), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [309] = 19,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 1,
      sym_matcher_name,
    ACTIONS(160), 1,
      anon_sym_abort,
    ACTIONS(163), 1,
      anon_sym_bind,
    ACTIONS(166), 1,
      anon_sym_encode,
    ACTIONS(169), 1,
      anon_sym_file_server,
    ACTIONS(172), 1,
      anon_sym_handle,
    ACTIONS(175), 1,
      anon_sym_handle_path,
    ACTIONS(178), 1,
      anon_sym_header,
    ACTIONS(181), 1,
      anon_sym_import,
    ACTIONS(184), 1,
      anon_sym_log,
    ACTIONS(187), 1,
      anon_sym_redir,
    ACTIONS(190), 1,
      anon_sym_request_body,
    ACTIONS(193), 1,
      anon_sym_reverse_proxy,
    ACTIONS(196), 1,
      anon_sym_root,
    ACTIONS(199), 1,
      anon_sym_tls,
    ACTIONS(154), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(6), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [383] = 19,
    ACTIONS(124), 1,
      sym_matcher_name,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(144), 1,
      anon_sym_redir,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(5), 3,
      sym_matcher_definition,
      sym_directive_block,
      aux_sym_site_block_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [457] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [527] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [597] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [667] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [737] = 18,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_abort,
    ACTIONS(226), 1,
      anon_sym_bind,
    ACTIONS(229), 1,
      anon_sym_encode,
    ACTIONS(232), 1,
      anon_sym_file_server,
    ACTIONS(235), 1,
      anon_sym_handle,
    ACTIONS(238), 1,
      anon_sym_handle_path,
    ACTIONS(241), 1,
      anon_sym_header,
    ACTIONS(244), 1,
      anon_sym_import,
    ACTIONS(247), 1,
      anon_sym_log,
    ACTIONS(250), 1,
      anon_sym_redir,
    ACTIONS(253), 1,
      anon_sym_request_body,
    ACTIONS(256), 1,
      anon_sym_reverse_proxy,
    ACTIONS(259), 1,
      anon_sym_root,
    ACTIONS(262), 1,
      anon_sym_tls,
    ACTIONS(218), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [807] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [877] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [947] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1017] = 18,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(12), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1087] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(273), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(10), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1154] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(275), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(11), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1221] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(277), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(8), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1288] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(279), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(13), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1355] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(281), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(14), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1422] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(283), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(9), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1489] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(285), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(16), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1556] = 17,
    ACTIONS(126), 1,
      anon_sym_abort,
    ACTIONS(128), 1,
      anon_sym_bind,
    ACTIONS(130), 1,
      anon_sym_encode,
    ACTIONS(132), 1,
      anon_sym_file_server,
    ACTIONS(134), 1,
      anon_sym_handle,
    ACTIONS(136), 1,
      anon_sym_handle_path,
    ACTIONS(138), 1,
      anon_sym_header,
    ACTIONS(140), 1,
      anon_sym_import,
    ACTIONS(142), 1,
      anon_sym_log,
    ACTIONS(146), 1,
      anon_sym_request_body,
    ACTIONS(148), 1,
      anon_sym_reverse_proxy,
    ACTIONS(150), 1,
      anon_sym_root,
    ACTIONS(152), 1,
      anon_sym_tls,
    ACTIONS(210), 1,
      anon_sym_redir,
    ACTIONS(287), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(15), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(150), 14,
      sym_directive_abort,
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
  [1623] = 11,
    ACTIONS(293), 1,
      sym__ipv4_address,
    ACTIONS(296), 1,
      sym__ipv6_address,
    ACTIONS(302), 1,
      anon_sym_unix,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
    ACTIONS(308), 1,
      aux_sym_unix_path_token2,
    STATE(32), 1,
      sym_unix_path,
    STATE(503), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(299), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(289), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(291), 15,
      sym__empty_line,
      anon_sym_abort,
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
  [1677] = 11,
    ACTIONS(315), 1,
      sym__ipv4_address,
    ACTIONS(317), 1,
      sym__ipv6_address,
    ACTIONS(321), 1,
      anon_sym_unix,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_unix_path_token2,
    STATE(32), 1,
      sym_unix_path,
    STATE(503), 1,
      sym__network,
    STATE(25), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(319), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(311), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(313), 15,
      sym__empty_line,
      anon_sym_abort,
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
  [1731] = 11,
    ACTIONS(321), 1,
      anon_sym_unix,
    ACTIONS(327), 1,
      sym__ipv4_address,
    ACTIONS(329), 1,
      sym__ipv6_address,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_unix_path_token2,
    STATE(33), 1,
      sym_unix_path,
    STATE(416), 1,
      sym__network,
    STATE(28), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(319), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(311), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(313), 14,
      anon_sym_abort,
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
  [1784] = 11,
    ACTIONS(302), 1,
      anon_sym_unix,
    ACTIONS(335), 1,
      sym__ipv4_address,
    ACTIONS(338), 1,
      sym__ipv6_address,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(344), 1,
      aux_sym_unix_path_token2,
    STATE(33), 1,
      sym_unix_path,
    STATE(416), 1,
      sym__network,
    STATE(28), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(299), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(289), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(291), 14,
      anon_sym_abort,
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
  [1837] = 2,
    ACTIONS(347), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(349), 21,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
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
  [1869] = 2,
    ACTIONS(351), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(353), 21,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
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
  [1901] = 2,
    ACTIONS(355), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(357), 21,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
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
  [1933] = 2,
    ACTIONS(359), 6,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(361), 21,
      sym__empty_line,
      sym__ipv4_address,
      anon_sym_abort,
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
  [1965] = 2,
    ACTIONS(359), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(361), 20,
      sym__ipv4_address,
      anon_sym_abort,
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
  [1996] = 2,
    ACTIONS(347), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(349), 20,
      sym__ipv4_address,
      anon_sym_abort,
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
  [2027] = 2,
    ACTIONS(351), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(353), 20,
      sym__ipv4_address,
      anon_sym_abort,
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
  [2058] = 2,
    ACTIONS(355), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(357), 20,
      sym__ipv4_address,
      anon_sym_abort,
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
  [2089] = 3,
    ACTIONS(367), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(363), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(365), 21,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
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
  [2121] = 4,
    STATE(141), 1,
      sym_redir_code,
    ACTIONS(371), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(373), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(369), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2155] = 3,
    ACTIONS(379), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(375), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(377), 21,
      sym__empty_line,
      sym_matcher_name,
      anon_sym_abort,
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
  [2187] = 3,
    ACTIONS(381), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(363), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(365), 20,
      sym_matcher_name,
      anon_sym_abort,
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
  [2218] = 6,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_unix_path_token2,
    STATE(369), 1,
      sym_unix_path,
    ACTIONS(391), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(383), 3,
      sym__vertical_whitespaces,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(385), 16,
      sym__empty_line,
      anon_sym_RBRACE,
      anon_sym_abort,
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
  [2255] = 4,
    ACTIONS(371), 1,
      anon_sym_handle,
    STATE(161), 1,
      sym_redir_code,
    ACTIONS(393), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(369), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2288] = 3,
    ACTIONS(395), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(375), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(377), 20,
      sym_matcher_name,
      anon_sym_abort,
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
  [2319] = 2,
    ACTIONS(399), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(397), 22,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2348] = 2,
    ACTIONS(403), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(401), 22,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2377] = 2,
    ACTIONS(365), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(363), 22,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2406] = 2,
    ACTIONS(399), 1,
      anon_sym_handle,
    ACTIONS(397), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2434] = 4,
    ACTIONS(407), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(409), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(52), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(405), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2466] = 3,
    ACTIONS(381), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(363), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(365), 19,
      anon_sym_abort,
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
  [2496] = 2,
    ACTIONS(365), 1,
      anon_sym_handle,
    ACTIONS(363), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2524] = 3,
    ACTIONS(395), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(375), 3,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
    ACTIONS(377), 19,
      anon_sym_abort,
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
  [2554] = 4,
    ACTIONS(413), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(415), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(52), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(411), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2586] = 6,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      aux_sym_unix_path_token2,
    STATE(342), 1,
      sym_unix_path,
    ACTIONS(418), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(383), 3,
      sym__empty_line,
      sym_comment_line,
      sym_matcher_name,
    ACTIONS(385), 15,
      anon_sym_RBRACE,
      anon_sym_abort,
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
  [2622] = 4,
    ACTIONS(409), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(422), 2,
      sym__empty_line,
      anon_sym_handle,
    STATE(52), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(420), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2654] = 2,
    ACTIONS(403), 1,
      anon_sym_handle,
    ACTIONS(401), 22,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2682] = 4,
    ACTIONS(407), 1,
      anon_sym_handle,
    ACTIONS(424), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(61), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(405), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2713] = 4,
    ACTIONS(426), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(430), 1,
      anon_sym_LBRACE,
    STATE(460), 1,
      sym__horizontal_whitespaces,
    ACTIONS(428), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2744] = 4,
    ACTIONS(432), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(392), 1,
      sym__horizontal_whitespaces,
    ACTIONS(434), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2775] = 4,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(490), 1,
      sym__horizontal_whitespaces,
    ACTIONS(434), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2806] = 14,
    ACTIONS(440), 1,
      ts_builtin_sym_end,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_COLON,
    ACTIONS(460), 1,
      anon_sym_import,
    ACTIONS(463), 1,
      sym_snippet_name,
    STATE(255), 1,
      sym_protocol,
    STATE(545), 1,
      sym__port_number,
    STATE(546), 1,
      sym__ip_or_domain_address,
    STATE(547), 1,
      sym_site_address,
    ACTIONS(442), 2,
      sym__empty_line,
      sym_comment_line,
    ACTIONS(448), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(451), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(454), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(60), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [2857] = 4,
    ACTIONS(413), 1,
      anon_sym_handle,
    ACTIONS(466), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(61), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(411), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2888] = 4,
    ACTIONS(469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(67), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
    ACTIONS(471), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [2919] = 14,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_import,
    ACTIONS(19), 1,
      sym_snippet_name,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
    STATE(255), 1,
      sym_protocol,
    STATE(545), 1,
      sym__port_number,
    STATE(546), 1,
      sym__ip_or_domain_address,
    STATE(547), 1,
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
    ACTIONS(475), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(60), 5,
      sym_site_block,
      sym_directive_import,
      sym_global_options_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [2970] = 4,
    ACTIONS(422), 1,
      anon_sym_handle,
    ACTIONS(424), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(61), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(420), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3001] = 4,
    ACTIONS(469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(67), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
    ACTIONS(477), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3032] = 4,
    ACTIONS(469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(65), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
    ACTIONS(479), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3063] = 4,
    ACTIONS(481), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(67), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
    ACTIONS(484), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3094] = 5,
    ACTIONS(389), 1,
      aux_sym_unix_path_token2,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(389), 1,
      sym_unix_path,
    ACTIONS(486), 4,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(488), 15,
      sym__empty_line,
      anon_sym_abort,
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
  [3127] = 4,
    ACTIONS(469), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(62), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(220), 1,
      sym__horizontal_whitespaces,
    ACTIONS(492), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3158] = 4,
    ACTIONS(494), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
    STATE(266), 1,
      sym__horizontal_whitespaces,
    ACTIONS(496), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3189] = 5,
    ACTIONS(389), 1,
      aux_sym_unix_path_token2,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    STATE(391), 1,
      sym_unix_path,
    ACTIONS(486), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(488), 14,
      anon_sym_abort,
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
  [3221] = 3,
    ACTIONS(500), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(323), 1,
      sym__horizontal_whitespaces,
    ACTIONS(502), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3249] = 4,
    ACTIONS(504), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(75), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(216), 1,
      sym__horizontal_whitespaces,
    ACTIONS(477), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3279] = 4,
    ACTIONS(504), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(73), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(216), 1,
      sym__horizontal_whitespaces,
    ACTIONS(479), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3309] = 4,
    ACTIONS(506), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(75), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(216), 1,
      sym__horizontal_whitespaces,
    ACTIONS(484), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3339] = 4,
    ACTIONS(509), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(264), 1,
      sym__horizontal_whitespaces,
    ACTIONS(496), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3369] = 2,
    ACTIONS(515), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(513), 19,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3395] = 4,
    ACTIONS(517), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(519), 1,
      anon_sym_LBRACE,
    STATE(509), 1,
      sym__horizontal_whitespaces,
    ACTIONS(428), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3425] = 4,
    ACTIONS(504), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(75), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(216), 1,
      sym__horizontal_whitespaces,
    ACTIONS(471), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3455] = 4,
    ACTIONS(504), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(79), 1,
      aux_sym_directive_reverse_proxy_repeat1,
    STATE(216), 1,
      sym__horizontal_whitespaces,
    ACTIONS(492), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3485] = 4,
    ACTIONS(521), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(394), 1,
      sym__horizontal_whitespaces,
    ACTIONS(434), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3515] = 2,
    ACTIONS(525), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(527), 20,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3541] = 2,
    ACTIONS(529), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(531), 20,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3567] = 4,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(533), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(498), 1,
      sym__horizontal_whitespaces,
    ACTIONS(434), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3597] = 2,
    ACTIONS(535), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(537), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3622] = 3,
    ACTIONS(539), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(317), 1,
      sym__horizontal_whitespaces,
    ACTIONS(502), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3649] = 2,
    ACTIONS(515), 1,
      anon_sym_handle,
    ACTIONS(513), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3674] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(484), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3699] = 3,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(545), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(543), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3726] = 2,
    ACTIONS(529), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(531), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3751] = 2,
    ACTIONS(525), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(527), 19,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3776] = 2,
    ACTIONS(549), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(551), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3801] = 2,
    ACTIONS(553), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(555), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3826] = 2,
    ACTIONS(557), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(559), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3851] = 2,
    ACTIONS(561), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(563), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3876] = 2,
    ACTIONS(565), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(567), 19,
      sym__vertical_whitespaces,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3901] = 2,
    ACTIONS(571), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(569), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3925] = 2,
    ACTIONS(575), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(573), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3949] = 2,
    ACTIONS(434), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(577), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3973] = 2,
    ACTIONS(581), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(579), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [3997] = 2,
    ACTIONS(585), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(583), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4021] = 3,
    ACTIONS(545), 1,
      anon_sym_handle,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(543), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4047] = 2,
    ACTIONS(591), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(589), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4071] = 2,
    ACTIONS(595), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(593), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4095] = 2,
    ACTIONS(599), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(597), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4119] = 2,
    ACTIONS(603), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(601), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4143] = 2,
    ACTIONS(607), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(605), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4167] = 2,
    ACTIONS(611), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(609), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4191] = 2,
    ACTIONS(615), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(613), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4215] = 2,
    ACTIONS(619), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(617), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
    ACTIONS(357), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(355), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4263] = 2,
    ACTIONS(623), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(621), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4287] = 2,
    ACTIONS(627), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(625), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4311] = 2,
    ACTIONS(631), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(629), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4335] = 2,
    ACTIONS(635), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(633), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4359] = 2,
    ACTIONS(639), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(637), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4383] = 2,
    ACTIONS(643), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(641), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4407] = 2,
    ACTIONS(647), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(645), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4431] = 2,
    ACTIONS(651), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(649), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4455] = 2,
    ACTIONS(655), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(653), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4479] = 2,
    ACTIONS(659), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(657), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4503] = 2,
    ACTIONS(663), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(661), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4527] = 2,
    ACTIONS(667), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(665), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4551] = 2,
    ACTIONS(671), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(669), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4575] = 2,
    ACTIONS(349), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(347), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4599] = 2,
    ACTIONS(675), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(673), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4623] = 2,
    ACTIONS(679), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(677), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4647] = 2,
    ACTIONS(563), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(561), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4671] = 2,
    ACTIONS(428), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(681), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4695] = 2,
    ACTIONS(535), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(537), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4719] = 2,
    ACTIONS(685), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(683), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4743] = 2,
    ACTIONS(541), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(484), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4767] = 2,
    ACTIONS(689), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(687), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
    ACTIONS(693), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(691), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4815] = 2,
    ACTIONS(697), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(695), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4839] = 2,
    ACTIONS(701), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(699), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4863] = 2,
    ACTIONS(705), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(703), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4887] = 2,
    ACTIONS(709), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(707), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4911] = 2,
    ACTIONS(561), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(563), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4935] = 2,
    ACTIONS(557), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(559), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4959] = 2,
    ACTIONS(713), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(711), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [4983] = 2,
    ACTIONS(549), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(551), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5007] = 2,
    ACTIONS(717), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(715), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5031] = 2,
    ACTIONS(553), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(555), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5055] = 2,
    ACTIONS(565), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(567), 18,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5079] = 2,
    ACTIONS(537), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(535), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5103] = 2,
    ACTIONS(721), 2,
      sym__empty_line,
      anon_sym_handle,
    ACTIONS(719), 17,
      sym__vertical_whitespaces,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5127] = 2,
    ACTIONS(655), 1,
      anon_sym_handle,
    ACTIONS(653), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5150] = 2,
    ACTIONS(671), 1,
      anon_sym_handle,
    ACTIONS(669), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5173] = 2,
    ACTIONS(623), 1,
      anon_sym_handle,
    ACTIONS(621), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5196] = 2,
    ACTIONS(697), 1,
      anon_sym_handle,
    ACTIONS(695), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5219] = 2,
    ACTIONS(659), 1,
      anon_sym_handle,
    ACTIONS(657), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5242] = 2,
    ACTIONS(434), 1,
      anon_sym_handle,
    ACTIONS(577), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5265] = 2,
    ACTIONS(611), 1,
      anon_sym_handle,
    ACTIONS(609), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5288] = 2,
    ACTIONS(571), 1,
      anon_sym_handle,
    ACTIONS(569), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5311] = 2,
    ACTIONS(679), 1,
      anon_sym_handle,
    ACTIONS(677), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5334] = 2,
    ACTIONS(709), 1,
      anon_sym_handle,
    ACTIONS(707), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5357] = 2,
    ACTIONS(575), 1,
      anon_sym_handle,
    ACTIONS(573), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5380] = 2,
    ACTIONS(721), 1,
      anon_sym_handle,
    ACTIONS(719), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5403] = 2,
    ACTIONS(717), 1,
      anon_sym_handle,
    ACTIONS(715), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5426] = 2,
    ACTIONS(713), 1,
      anon_sym_handle,
    ACTIONS(711), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5449] = 2,
    ACTIONS(701), 1,
      anon_sym_handle,
    ACTIONS(699), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5472] = 2,
    ACTIONS(693), 1,
      anon_sym_handle,
    ACTIONS(691), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5495] = 2,
    ACTIONS(428), 1,
      anon_sym_handle,
    ACTIONS(681), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5518] = 2,
    ACTIONS(675), 1,
      anon_sym_handle,
    ACTIONS(673), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5541] = 2,
    ACTIONS(667), 1,
      anon_sym_handle,
    ACTIONS(665), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5564] = 2,
    ACTIONS(651), 1,
      anon_sym_handle,
    ACTIONS(649), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5587] = 2,
    ACTIONS(631), 1,
      anon_sym_handle,
    ACTIONS(629), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5610] = 2,
    ACTIONS(599), 1,
      anon_sym_handle,
    ACTIONS(597), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5633] = 2,
    ACTIONS(595), 1,
      anon_sym_handle,
    ACTIONS(593), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5656] = 2,
    ACTIONS(591), 1,
      anon_sym_handle,
    ACTIONS(589), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5679] = 2,
    ACTIONS(563), 1,
      anon_sym_handle,
    ACTIONS(561), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5702] = 2,
    ACTIONS(537), 1,
      anon_sym_handle,
    ACTIONS(535), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5725] = 2,
    ACTIONS(349), 1,
      anon_sym_handle,
    ACTIONS(347), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5748] = 2,
    ACTIONS(357), 1,
      anon_sym_handle,
    ACTIONS(355), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5771] = 2,
    ACTIONS(581), 1,
      anon_sym_handle,
    ACTIONS(579), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5794] = 2,
    ACTIONS(663), 1,
      anon_sym_handle,
    ACTIONS(661), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5817] = 2,
    ACTIONS(619), 1,
      anon_sym_handle,
    ACTIONS(617), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5840] = 2,
    ACTIONS(639), 1,
      anon_sym_handle,
    ACTIONS(637), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5863] = 2,
    ACTIONS(647), 1,
      anon_sym_handle,
    ACTIONS(645), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5886] = 2,
    ACTIONS(685), 1,
      anon_sym_handle,
    ACTIONS(683), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5909] = 2,
    ACTIONS(689), 1,
      anon_sym_handle,
    ACTIONS(687), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5932] = 2,
    ACTIONS(705), 1,
      anon_sym_handle,
    ACTIONS(703), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5955] = 2,
    ACTIONS(603), 1,
      anon_sym_handle,
    ACTIONS(601), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [5978] = 2,
    ACTIONS(615), 1,
      anon_sym_handle,
    ACTIONS(613), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [6001] = 2,
    ACTIONS(643), 1,
      anon_sym_handle,
    ACTIONS(641), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [6024] = 2,
    ACTIONS(585), 1,
      anon_sym_handle,
    ACTIONS(583), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [6047] = 2,
    ACTIONS(635), 1,
      anon_sym_handle,
    ACTIONS(633), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
    ACTIONS(627), 1,
      anon_sym_handle,
    ACTIONS(625), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [6093] = 2,
    ACTIONS(607), 1,
      anon_sym_handle,
    ACTIONS(605), 17,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_abort,
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
  [6116] = 9,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(723), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(725), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(192), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6150] = 9,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      anon_sym_PLUS,
    ACTIONS(748), 1,
      anon_sym_DASH,
    ACTIONS(751), 1,
      anon_sym_QMARK,
    ACTIONS(754), 1,
      sym_header_name,
    ACTIONS(737), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(740), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(192), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6184] = 11,
    ACTIONS(761), 1,
      anon_sym_COLON,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    STATE(69), 1,
      sym_site_address,
    STATE(94), 1,
      sym__port_number,
    STATE(256), 1,
      sym_protocol,
    STATE(359), 1,
      sym_matcher_token,
    STATE(425), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(757), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(759), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [6222] = 9,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(725), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(192), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6256] = 9,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(769), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(725), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(192), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6290] = 11,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(775), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_site_address,
    STATE(140), 1,
      sym__port_number,
    STATE(253), 1,
      sym_protocol,
    STATE(352), 1,
      sym_matcher_token,
    STATE(457), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
    ACTIONS(771), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(773), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6328] = 9,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(777), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(725), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(192), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6362] = 8,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(779), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(781), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(191), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6393] = 8,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(783), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(785), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(197), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6424] = 8,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(787), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(789), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(194), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6455] = 8,
    ACTIONS(729), 1,
      anon_sym_PLUS,
    ACTIONS(731), 1,
      anon_sym_DASH,
    ACTIONS(733), 1,
      anon_sym_QMARK,
    ACTIONS(735), 1,
      sym_header_name,
    ACTIONS(791), 2,
      sym__vertical_whitespace,
      sym_comment_line,
    ACTIONS(793), 2,
      sym__empty_line,
      anon_sym_defer,
    STATE(195), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(237), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6486] = 10,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(795), 1,
      anon_sym_LBRACE,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_DASH,
    ACTIONS(801), 1,
      anon_sym_QMARK,
    ACTIONS(803), 1,
      sym_header_name,
    STATE(154), 1,
      sym_field_manipulator,
    STATE(372), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(155), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6521] = 10,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
    ACTIONS(807), 1,
      anon_sym_PLUS,
    ACTIONS(809), 1,
      anon_sym_DASH,
    ACTIONS(811), 1,
      anon_sym_QMARK,
    ACTIONS(813), 1,
      sym_header_name,
    STATE(108), 1,
      sym_field_manipulator,
    STATE(346), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(97), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6556] = 2,
    ACTIONS(817), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(815), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6574] = 2,
    ACTIONS(821), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(819), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6592] = 2,
    ACTIONS(585), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(583), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6610] = 2,
    ACTIONS(825), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(823), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6628] = 2,
    ACTIONS(829), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(827), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6646] = 2,
    ACTIONS(833), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(831), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6664] = 2,
    ACTIONS(837), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(835), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6682] = 2,
    ACTIONS(841), 4,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
      anon_sym_import,
    ACTIONS(839), 9,
      ts_builtin_sym_end,
      sym__empty_line,
      sym_comment_line,
      anon_sym_LBRACE,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [6700] = 9,
    ACTIONS(315), 1,
      sym__ipv4_address,
    ACTIONS(317), 1,
      sym__ipv6_address,
    ACTIONS(321), 1,
      anon_sym_unix,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_unix_path_token2,
    STATE(32), 1,
      sym_unix_path,
    STATE(503), 1,
      sym__network,
    STATE(26), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(319), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [6731] = 9,
    ACTIONS(321), 1,
      anon_sym_unix,
    ACTIONS(327), 1,
      sym__ipv4_address,
    ACTIONS(329), 1,
      sym__ipv6_address,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_unix_path_token2,
    STATE(33), 1,
      sym_unix_path,
    STATE(416), 1,
      sym__network,
    STATE(27), 2,
      sym_network_address_wo_port,
      aux_sym_directive_bind_repeat1,
    ACTIONS(319), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [6762] = 3,
    ACTIONS(843), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(308), 1,
      sym__horizontal_whitespaces,
    ACTIONS(502), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
  [6780] = 8,
    ACTIONS(775), 1,
      anon_sym_COLON,
    STATE(74), 1,
      sym_site_address,
    STATE(140), 1,
      sym__port_number,
    STATE(253), 1,
      sym_protocol,
    STATE(457), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(771), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(773), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6808] = 8,
    ACTIONS(775), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym_site_address,
    STATE(140), 1,
      sym__port_number,
    STATE(253), 1,
      sym_protocol,
    STATE(457), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(771), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(773), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6836] = 8,
    ACTIONS(845), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(853), 1,
      anon_sym_path_regexp,
    STATE(234), 1,
      sym__horizontal_whitespaces,
    ACTIONS(847), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(233), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [6864] = 8,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(66), 1,
      sym_site_address,
    STATE(94), 1,
      sym__port_number,
    STATE(256), 1,
      sym_protocol,
    STATE(425), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(757), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(759), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6892] = 8,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(853), 1,
      anon_sym_path_regexp,
    ACTIONS(855), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
    STATE(241), 1,
      sym__horizontal_whitespaces,
    ACTIONS(857), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(240), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [6920] = 8,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(88), 1,
      sym_site_address,
    STATE(94), 1,
      sym__port_number,
    STATE(256), 1,
      sym_protocol,
    STATE(425), 1,
      sym__ip_or_domain_address,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(757), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(759), 2,
      sym__ipv6_address,
      sym_domain_address,
  [6948] = 2,
    ACTIONS(561), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(563), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
  [6963] = 7,
    ACTIONS(807), 1,
      anon_sym_PLUS,
    ACTIONS(809), 1,
      anon_sym_DASH,
    ACTIONS(811), 1,
      anon_sym_QMARK,
    ACTIONS(813), 1,
      sym_header_name,
    ACTIONS(861), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_field_manipulator,
    STATE(97), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [6988] = 6,
    ACTIONS(865), 1,
      anon_sym_RBRACE,
    ACTIONS(867), 1,
      anon_sym_roll_size,
    ACTIONS(869), 1,
      anon_sym_roll_keep,
    ACTIONS(871), 1,
      anon_sym_roll_keep_for_days,
    STATE(225), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(863), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7011] = 2,
    ACTIONS(535), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(537), 9,
      sym__vertical_whitespace,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
  [7026] = 6,
    ACTIONS(867), 1,
      anon_sym_roll_size,
    ACTIONS(869), 1,
      anon_sym_roll_keep,
    ACTIONS(871), 1,
      anon_sym_roll_keep_for_days,
    ACTIONS(875), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(873), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7049] = 6,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    ACTIONS(882), 1,
      anon_sym_roll_size,
    ACTIONS(885), 1,
      anon_sym_roll_keep,
    ACTIONS(888), 1,
      anon_sym_roll_keep_for_days,
    STATE(226), 1,
      aux_sym__log_output_file_repeat1,
    ACTIONS(877), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_roll_disabled,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
  [7072] = 6,
    ACTIONS(894), 1,
      anon_sym_RBRACE,
    ACTIONS(896), 1,
      anon_sym_output,
    ACTIONS(899), 1,
      anon_sym_format,
    ACTIONS(902), 1,
      anon_sym_level,
    ACTIONS(891), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(227), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7095] = 6,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
    ACTIONS(909), 1,
      anon_sym_output,
    ACTIONS(911), 1,
      anon_sym_format,
    ACTIONS(913), 1,
      anon_sym_level,
    ACTIONS(905), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(227), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7118] = 6,
    ACTIONS(909), 1,
      anon_sym_output,
    ACTIONS(911), 1,
      anon_sym_format,
    ACTIONS(913), 1,
      anon_sym_level,
    ACTIONS(917), 1,
      anon_sym_RBRACE,
    ACTIONS(915), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(230), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7141] = 6,
    ACTIONS(909), 1,
      anon_sym_output,
    ACTIONS(911), 1,
      anon_sym_format,
    ACTIONS(913), 1,
      anon_sym_level,
    ACTIONS(919), 1,
      anon_sym_RBRACE,
    ACTIONS(905), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(227), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7164] = 6,
    ACTIONS(909), 1,
      anon_sym_output,
    ACTIONS(911), 1,
      anon_sym_format,
    ACTIONS(913), 1,
      anon_sym_level,
    ACTIONS(923), 1,
      anon_sym_RBRACE,
    ACTIONS(921), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(228), 4,
      sym_log_option_output,
      sym_log_option_format,
      sym_log_option_level,
      aux_sym_directive_log_repeat1,
  [7187] = 7,
    ACTIONS(797), 1,
      anon_sym_PLUS,
    ACTIONS(799), 1,
      anon_sym_DASH,
    ACTIONS(801), 1,
      anon_sym_QMARK,
    ACTIONS(803), 1,
      sym_header_name,
    ACTIONS(925), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_field_manipulator,
    STATE(155), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [7212] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(927), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7234] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(929), 1,
      anon_sym_RBRACE,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(933), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(246), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7256] = 2,
    ACTIONS(537), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(535), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7270] = 2,
    ACTIONS(689), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(687), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7284] = 2,
    ACTIONS(571), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(569), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7298] = 2,
    ACTIONS(663), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(661), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7312] = 2,
    ACTIONS(581), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(579), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7326] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(927), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7348] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    ACTIONS(937), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(245), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7370] = 2,
    ACTIONS(563), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(561), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7384] = 2,
    ACTIONS(941), 1,
      anon_sym_roll_keep,
    ACTIONS(939), 8,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_roll_disabled,
      anon_sym_roll_size,
      anon_sym_roll_uncompressed,
      anon_sym_roll_local_time,
      anon_sym_roll_keep_for_days,
  [7398] = 6,
    ACTIONS(946), 1,
      anon_sym_RBRACE,
    ACTIONS(948), 1,
      anon_sym_path,
    ACTIONS(951), 1,
      anon_sym_path_regexp,
    ACTIONS(943), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7420] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(954), 1,
      anon_sym_RBRACE,
    ACTIONS(927), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7442] = 6,
    ACTIONS(851), 1,
      anon_sym_path,
    ACTIONS(931), 1,
      anon_sym_path_regexp,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
    ACTIONS(927), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(244), 2,
      sym_standard_matcher,
      aux_sym_matcher_definition_repeat1,
    STATE(507), 2,
      sym_matcher_path,
      sym_matcher_path_regexp,
  [7464] = 2,
    ACTIONS(575), 4,
      sym__empty_line,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(573), 5,
      sym__vertical_whitespace,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [7478] = 5,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    STATE(363), 1,
      sym_matcher_token,
    ACTIONS(409), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(48), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [7497] = 5,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
    ACTIONS(962), 1,
      anon_sym_email,
    ACTIONS(964), 1,
      anon_sym_auto_https,
    ACTIONS(958), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(250), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [7516] = 5,
    ACTIONS(962), 1,
      anon_sym_email,
    ACTIONS(964), 1,
      anon_sym_auto_https,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
    ACTIONS(966), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [7535] = 5,
    ACTIONS(973), 1,
      anon_sym_RBRACE,
    ACTIONS(975), 1,
      anon_sym_email,
    ACTIONS(978), 1,
      anon_sym_auto_https,
    ACTIONS(970), 2,
      sym__empty_line,
      sym_comment_line,
    STATE(251), 3,
      sym_global_option_email,
      sym_global_option_auto_https,
      aux_sym_global_options_block_repeat1,
  [7554] = 5,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    STATE(410), 1,
      sym_matcher_token,
    ACTIONS(424), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
    STATE(56), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [7573] = 5,
    ACTIONS(775), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym__port_number,
    STATE(458), 1,
      sym__ip_or_domain_address,
    ACTIONS(981), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(983), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7591] = 6,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(987), 1,
      aux_sym_unix_path_token2,
    ACTIONS(989), 1,
      sym__valid_uri_path_string,
    STATE(120), 1,
      sym_unix_path,
    STATE(367), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7611] = 5,
    ACTIONS(15), 1,
      anon_sym_COLON,
    STATE(539), 1,
      sym__port_number,
    STATE(540), 1,
      sym__ip_or_domain_address,
    ACTIONS(991), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(993), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7629] = 5,
    ACTIONS(761), 1,
      anon_sym_COLON,
    STATE(93), 1,
      sym__port_number,
    STATE(424), 1,
      sym__ip_or_domain_address,
    ACTIONS(995), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(997), 2,
      sym__ipv6_address,
      sym_domain_address,
  [7647] = 6,
    ACTIONS(989), 1,
      sym__valid_uri_path_string,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1001), 1,
      aux_sym_unix_path_token2,
    STATE(148), 1,
      sym_unix_path,
    STATE(344), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7667] = 5,
    ACTIONS(1003), 1,
      sym_domain_address,
    ACTIONS(1005), 1,
      sym_uri_path_with_placeholders,
    STATE(42), 1,
      sym_redir_or_rewrite_target,
    STATE(419), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [7684] = 1,
    ACTIONS(1007), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7693] = 1,
    ACTIONS(1009), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7702] = 1,
    ACTIONS(1011), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7711] = 5,
    ACTIONS(1005), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(1013), 1,
      sym_domain_address,
    STATE(42), 1,
      sym_redir_or_rewrite_target,
    STATE(462), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [7728] = 1,
    ACTIONS(1015), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7737] = 5,
    ACTIONS(1017), 1,
      anon_sym_LBRACE,
    ACTIONS(1021), 1,
      anon_sym_browse,
    ACTIONS(1023), 1,
      sym__valid_uri_path_string,
    STATE(81), 1,
      sym_matcher_token,
    ACTIONS(1019), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7754] = 1,
    ACTIONS(1025), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7763] = 5,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1027), 1,
      anon_sym_LBRACE,
    ACTIONS(1029), 1,
      anon_sym_browse,
    STATE(58), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7780] = 1,
    ACTIONS(1031), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7789] = 5,
    ACTIONS(1033), 1,
      sym_domain_address,
    ACTIONS(1035), 1,
      sym_uri_path_with_placeholders,
    STATE(38), 1,
      sym_redir_or_rewrite_target,
    STATE(496), 1,
      sym_protocol,
    ACTIONS(9), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [7806] = 1,
    ACTIONS(1037), 6,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_output,
      anon_sym_format,
      anon_sym_level,
  [7815] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1039), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7829] = 5,
    ACTIONS(1041), 1,
      sym__vertical_whitespace,
    ACTIONS(1043), 1,
      sym__empty_line,
    ACTIONS(1045), 1,
      sym_comment_line,
    ACTIONS(1047), 1,
      anon_sym_RBRACE,
    STATE(292), 1,
      aux_sym_directive_request_body_repeat1,
  [7845] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1049), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7859] = 2,
    ACTIONS(1053), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(1051), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [7869] = 5,
    ACTIONS(1055), 1,
      sym__vertical_whitespace,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [7885] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1063), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7899] = 5,
    ACTIONS(1055), 1,
      sym__vertical_whitespace,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
    ACTIONS(1065), 1,
      sym__empty_line,
    ACTIONS(1067), 1,
      sym_comment_line,
    STATE(285), 1,
      aux_sym_directive_request_body_repeat1,
  [7915] = 5,
    ACTIONS(1069), 1,
      sym__vertical_whitespace,
    ACTIONS(1071), 1,
      sym__empty_line,
    ACTIONS(1073), 1,
      sym_comment_line,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
    STATE(288), 1,
      aux_sym_directive_request_body_repeat1,
  [7931] = 4,
    ACTIONS(1079), 1,
      sym__empty_line,
    ACTIONS(1082), 1,
      sym_comment_line,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1077), 2,
      sym__vertical_whitespace,
      anon_sym_RBRACE,
  [7945] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1069), 1,
      sym__vertical_whitespace,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [7961] = 1,
    ACTIONS(1085), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [7969] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1087), 1,
      anon_sym_LBRACE,
    STATE(348), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [7983] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1089), 1,
      sym__vertical_whitespace,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [7999] = 5,
    ACTIONS(1093), 1,
      sym__vertical_whitespace,
    ACTIONS(1095), 1,
      sym__empty_line,
    ACTIONS(1097), 1,
      sym_comment_line,
    ACTIONS(1099), 1,
      anon_sym_RBRACE,
    STATE(299), 1,
      aux_sym_directive_request_body_repeat1,
  [8015] = 5,
    ACTIONS(1101), 1,
      sym__vertical_whitespace,
    ACTIONS(1103), 1,
      sym__empty_line,
    ACTIONS(1105), 1,
      sym_comment_line,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      aux_sym_directive_request_body_repeat1,
  [8031] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1109), 1,
      sym__vertical_whitespace,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [8047] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1113), 1,
      sym__vertical_whitespaces,
    STATE(384), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8061] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1115), 1,
      sym__vertical_whitespaces,
    STATE(398), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8075] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1101), 1,
      sym__vertical_whitespace,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [8091] = 5,
    ACTIONS(1117), 1,
      sym__vertical_whitespace,
    ACTIONS(1119), 1,
      sym__empty_line,
    ACTIONS(1121), 1,
      sym_comment_line,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_directive_request_body_repeat1,
  [8107] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1117), 1,
      sym__vertical_whitespace,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [8123] = 3,
    ACTIONS(1127), 1,
      anon_sym_file,
    STATE(261), 1,
      sym__log_output_file,
    ACTIONS(1125), 3,
      anon_sym_stderr,
      anon_sym_stdout,
      anon_sym_discard,
  [8135] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1129), 1,
      sym__vertical_whitespace,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [8151] = 5,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
    ACTIONS(333), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1133), 1,
      sym__ipv4_address,
    ACTIONS(1135), 1,
      sym__ipv6_address,
    STATE(35), 1,
      sym_unix_path,
  [8167] = 1,
    ACTIONS(1137), 5,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_email,
      anon_sym_auto_https,
  [8175] = 5,
    ACTIONS(1139), 1,
      sym__vertical_whitespace,
    ACTIONS(1141), 1,
      sym__empty_line,
    ACTIONS(1143), 1,
      sym_comment_line,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(290), 1,
      aux_sym_directive_request_body_repeat1,
  [8191] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1147), 1,
      anon_sym_LBRACE,
    STATE(409), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8205] = 4,
    ACTIONS(765), 1,
      sym__valid_uri_path_string,
    ACTIONS(1149), 1,
      anon_sym_LBRACE,
    STATE(338), 1,
      sym_matcher_token,
    ACTIONS(763), 2,
      sym_matcher_name,
      anon_sym_STAR,
  [8219] = 5,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      aux_sym_unix_path_token2,
    ACTIONS(1151), 1,
      sym__ipv4_address,
    ACTIONS(1153), 1,
      sym__ipv6_address,
    STATE(30), 1,
      sym_unix_path,
  [8235] = 5,
    ACTIONS(1057), 1,
      sym__empty_line,
    ACTIONS(1059), 1,
      sym_comment_line,
    ACTIONS(1139), 1,
      sym__vertical_whitespace,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_directive_request_body_repeat1,
  [8251] = 2,
    ACTIONS(1157), 1,
      anon_sym_path,
    ACTIONS(1155), 4,
      sym__empty_line,
      sym_comment_line,
      anon_sym_RBRACE,
      anon_sym_path_regexp,
  [8261] = 5,
    ACTIONS(1129), 1,
      sym__vertical_whitespace,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
    ACTIONS(1159), 1,
      sym__empty_line,
    ACTIONS(1161), 1,
      sym_comment_line,
    STATE(279), 1,
      aux_sym_directive_request_body_repeat1,
  [8277] = 3,
    ACTIONS(1165), 1,
      anon_sym_max_size,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1163), 2,
      sym__empty_line,
      sym_comment_line,
  [8288] = 3,
    ACTIONS(1169), 1,
      anon_sym_max_size,
    STATE(304), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1167), 2,
      sym__empty_line,
      sym_comment_line,
  [8299] = 3,
    ACTIONS(1171), 1,
      anon_sym_max_size,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1163), 2,
      sym__empty_line,
      sym_comment_line,
  [8310] = 3,
    ACTIONS(1175), 1,
      anon_sym_max_size,
    STATE(316), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1173), 2,
      sym__empty_line,
      sym_comment_line,
  [8321] = 4,
    ACTIONS(1177), 1,
      anon_sym_DQUOTE,
    ACTIONS(1179), 1,
      aux_sym_header_value_token1,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_header_value,
  [8334] = 4,
    ACTIONS(1177), 1,
      anon_sym_DQUOTE,
    ACTIONS(1179), 1,
      aux_sym_header_value_token1,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    STATE(122), 1,
      sym_header_value,
  [8347] = 4,
    ACTIONS(1183), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      aux_sym_header_value_token1,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    STATE(236), 1,
      sym_header_value,
  [8360] = 4,
    ACTIONS(1183), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      aux_sym_header_value_token1,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    STATE(238), 1,
      sym_header_value,
  [8373] = 2,
    ACTIONS(409), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(54), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8382] = 4,
    ACTIONS(1189), 1,
      anon_sym_DQUOTE,
    ACTIONS(1191), 1,
      aux_sym_header_value_token1,
    ACTIONS(1193), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_header_value,
  [8395] = 1,
    ACTIONS(1195), 4,
      anon_sym_off,
      anon_sym_disable_redirects,
      anon_sym_ignore_loaded_certs,
      anon_sym_disable_certs,
  [8402] = 2,
    ACTIONS(424), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(64), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [8411] = 1,
    ACTIONS(1197), 4,
      anon_sym_INFO,
      anon_sym_info,
      anon_sym_ERROR,
      anon_sym_error,
  [8418] = 4,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      aux_sym_header_value_token1,
    ACTIONS(1203), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      sym_header_value,
  [8431] = 3,
    ACTIONS(1205), 1,
      anon_sym_max_size,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1163), 2,
      sym__empty_line,
      sym_comment_line,
  [8442] = 4,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      aux_sym_header_value_token1,
    ACTIONS(1203), 1,
      anon_sym_SQUOTE,
    STATE(182), 1,
      sym_header_value,
  [8455] = 3,
    ACTIONS(1209), 1,
      anon_sym_max_size,
    STATE(321), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1207), 2,
      sym__empty_line,
      sym_comment_line,
  [8466] = 4,
    ACTIONS(1211), 1,
      anon_sym_DQUOTE,
    ACTIONS(1213), 1,
      aux_sym_header_value_token1,
    ACTIONS(1215), 1,
      anon_sym_SQUOTE,
    STATE(86), 1,
      sym_header_value,
  [8479] = 4,
    ACTIONS(1183), 1,
      anon_sym_DQUOTE,
    ACTIONS(1185), 1,
      aux_sym_header_value_token1,
    ACTIONS(1187), 1,
      anon_sym_SQUOTE,
    STATE(239), 1,
      sym_header_value,
  [8492] = 3,
    ACTIONS(1217), 1,
      anon_sym_max_size,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1163), 2,
      sym__empty_line,
      sym_comment_line,
  [8503] = 3,
    ACTIONS(1077), 1,
      anon_sym_max_size,
    STATE(322), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1219), 2,
      sym__empty_line,
      sym_comment_line,
  [8514] = 4,
    ACTIONS(1177), 1,
      anon_sym_DQUOTE,
    ACTIONS(1179), 1,
      aux_sym_header_value_token1,
    ACTIONS(1181), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      sym_header_value,
  [8527] = 4,
    ACTIONS(1199), 1,
      anon_sym_DQUOTE,
    ACTIONS(1201), 1,
      aux_sym_header_value_token1,
    ACTIONS(1203), 1,
      anon_sym_SQUOTE,
    STATE(176), 1,
      sym_header_value,
  [8540] = 3,
    ACTIONS(1224), 1,
      anon_sym_max_size,
    STATE(302), 1,
      aux_sym_directive_request_body_repeat1,
    ACTIONS(1222), 2,
      sym__empty_line,
      sym_comment_line,
  [8551] = 4,
    ACTIONS(1226), 1,
      anon_sym_DQUOTE,
    ACTIONS(1228), 1,
      aux_sym_header_value_token1,
    ACTIONS(1230), 1,
      anon_sym_SQUOTE,
    STATE(72), 1,
      sym_header_value,
  [8564] = 3,
    ACTIONS(1232), 1,
      anon_sym_DQUOTE,
    ACTIONS(1234), 1,
      aux_sym_unix_path_token2,
    STATE(484), 1,
      sym_unix_path,
  [8574] = 3,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1236), 1,
      aux_sym_unix_path_token2,
    STATE(170), 1,
      sym_unix_path,
  [8584] = 3,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1236), 1,
      aux_sym_unix_path_token2,
    STATE(169), 1,
      sym_unix_path,
  [8594] = 3,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(1238), 1,
      aux_sym_unix_path_token2,
    STATE(116), 1,
      sym_unix_path,
  [8604] = 3,
    ACTIONS(490), 1,
      anon_sym_DQUOTE,
    ACTIONS(1240), 1,
      aux_sym_unix_path_token2,
    STATE(336), 1,
      sym_unix_path,
  [8614] = 2,
    ACTIONS(1242), 1,
      anon_sym_SLASH,
    ACTIONS(1244), 2,
      anon_sym_4,
      anon_sym_6,
  [8622] = 2,
    ACTIONS(1242), 1,
      anon_sym_SLASH,
    ACTIONS(1244), 2,
      anon_sym_gram,
      anon_sym_packet,
  [8630] = 3,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(1238), 1,
      aux_sym_unix_path_token2,
    STATE(105), 1,
      sym_unix_path,
  [8640] = 3,
    ACTIONS(985), 1,
      anon_sym_DQUOTE,
    ACTIONS(1238), 1,
      aux_sym_unix_path_token2,
    STATE(104), 1,
      sym_unix_path,
  [8650] = 3,
    ACTIONS(1246), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(1248), 1,
      sym__vertical_whitespace,
    STATE(426), 1,
      sym__horizontal_whitespaces,
  [8660] = 3,
    ACTIONS(999), 1,
      anon_sym_DQUOTE,
    ACTIONS(1236), 1,
      aux_sym_unix_path_token2,
    STATE(179), 1,
      sym_unix_path,
  [8670] = 2,
    ACTIONS(1250), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(487), 1,
      sym__horizontal_whitespaces,
  [8677] = 2,
    ACTIONS(1252), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(306), 1,
      sym__horizontal_whitespaces,
  [8684] = 2,
    ACTIONS(1254), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(324), 1,
      sym__horizontal_whitespaces,
  [8691] = 2,
    ACTIONS(1256), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(512), 1,
      sym__horizontal_whitespaces,
  [8698] = 2,
    ACTIONS(1258), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(328), 1,
      sym__horizontal_whitespaces,
  [8705] = 2,
    ACTIONS(1260), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(413), 1,
      sym__horizontal_whitespaces,
  [8712] = 2,
    ACTIONS(1262), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(329), 1,
      sym__horizontal_whitespaces,
  [8719] = 2,
    ACTIONS(1264), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(326), 1,
      sym__horizontal_whitespaces,
  [8726] = 2,
    ACTIONS(1266), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(222), 1,
      sym__horizontal_whitespaces,
  [8733] = 2,
    ACTIONS(1268), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(275), 1,
      sym__horizontal_whitespaces,
  [8740] = 2,
    ACTIONS(1270), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(488), 1,
      sym__horizontal_whitespaces,
  [8747] = 2,
    ACTIONS(1272), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(315), 1,
      sym__horizontal_whitespaces,
  [8754] = 2,
    ACTIONS(1274), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(479), 1,
      sym__horizontal_whitespaces,
  [8761] = 2,
    ACTIONS(1276), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(331), 1,
      sym__horizontal_whitespaces,
  [8768] = 2,
    ACTIONS(1278), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(215), 1,
      sym__horizontal_whitespaces,
  [8775] = 2,
    ACTIONS(1280), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(287), 1,
      sym__horizontal_whitespaces,
  [8782] = 2,
    ACTIONS(1282), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(212), 1,
      sym__horizontal_whitespaces,
  [8789] = 1,
    ACTIONS(1284), 2,
      anon_sym_console,
      anon_sym_json,
  [8794] = 2,
    ACTIONS(1286), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(248), 1,
      sym__horizontal_whitespaces,
  [8801] = 2,
    ACTIONS(1288), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(485), 1,
      sym__horizontal_whitespaces,
  [8808] = 2,
    ACTIONS(1290), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(281), 1,
      sym__horizontal_whitespaces,
  [8815] = 2,
    ACTIONS(1292), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(218), 1,
      sym__horizontal_whitespaces,
  [8822] = 2,
    ACTIONS(1294), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(297), 1,
      sym__horizontal_whitespaces,
  [8829] = 2,
    ACTIONS(1296), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(312), 1,
      sym__horizontal_whitespaces,
  [8836] = 2,
    ACTIONS(1298), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(538), 1,
      sym__horizontal_whitespaces,
  [8843] = 2,
    ACTIONS(1300), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(310), 1,
      sym__horizontal_whitespaces,
  [8850] = 2,
    ACTIONS(1302), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(272), 1,
      sym__horizontal_whitespaces,
  [8857] = 2,
    ACTIONS(1304), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(203), 1,
      sym__horizontal_whitespaces,
  [8864] = 2,
    ACTIONS(355), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(357), 1,
      sym__vertical_whitespace,
  [8871] = 2,
    ACTIONS(1306), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(334), 1,
      sym__horizontal_whitespaces,
  [8878] = 2,
    ACTIONS(1308), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(89), 1,
      sym__horizontal_whitespaces,
  [8885] = 2,
    ACTIONS(1310), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(335), 1,
      sym__horizontal_whitespaces,
  [8892] = 2,
    ACTIONS(1312), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(268), 1,
      sym__horizontal_whitespaces,
  [8899] = 2,
    ACTIONS(347), 1,
      aux_sym__horizontal_whitespaces_token1,
    ACTIONS(349), 1,
      sym__vertical_whitespace,
  [8906] = 2,
    ACTIONS(1314), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(232), 1,
      sym__horizontal_whitespaces,
  [8913] = 2,
    ACTIONS(1316), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(270), 1,
      sym__horizontal_whitespaces,
  [8920] = 2,
    ACTIONS(1318), 1,
      aux_sym_matcher_path_regexp_token1,
    ACTIONS(1320), 1,
      aux_sym_matcher_path_regexp_token2,
  [8927] = 2,
    ACTIONS(1322), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(193), 1,
      sym__horizontal_whitespaces,
  [8934] = 2,
    ACTIONS(1324), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(286), 1,
      sym__horizontal_whitespaces,
  [8941] = 2,
    ACTIONS(1326), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(319), 1,
      sym__horizontal_whitespaces,
  [8948] = 2,
    ACTIONS(1328), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(535), 1,
      sym__horizontal_whitespaces,
  [8955] = 2,
    ACTIONS(1330), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(536), 1,
      sym__horizontal_whitespaces,
  [8962] = 2,
    ACTIONS(1332), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(296), 1,
      sym__horizontal_whitespaces,
  [8969] = 2,
    ACTIONS(1334), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(543), 1,
      sym__horizontal_whitespaces,
  [8976] = 2,
    ACTIONS(1336), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(254), 1,
      sym__horizontal_whitespaces,
  [8983] = 2,
    ACTIONS(1338), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(41), 1,
      sym__horizontal_whitespaces,
  [8990] = 2,
    ACTIONS(1340), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(420), 1,
      sym__horizontal_whitespaces,
  [8997] = 2,
    ACTIONS(1342), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(213), 1,
      sym__horizontal_whitespaces,
  [9004] = 2,
    ACTIONS(1344), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(465), 1,
      sym__horizontal_whitespaces,
  [9011] = 2,
    ACTIONS(1346), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(252), 1,
      sym__horizontal_whitespaces,
  [9018] = 2,
    ACTIONS(1348), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(309), 1,
      sym__horizontal_whitespaces,
  [9025] = 2,
    ACTIONS(1350), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(330), 1,
      sym__horizontal_whitespaces,
  [9032] = 2,
    ACTIONS(1352), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(320), 1,
      sym__horizontal_whitespaces,
  [9039] = 2,
    ACTIONS(1354), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(337), 1,
      sym__horizontal_whitespaces,
  [9046] = 2,
    ACTIONS(1356), 1,
      anon_sym_LBRACE,
    ACTIONS(1358), 1,
      anon_sym_browse,
  [9053] = 2,
    ACTIONS(1360), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(311), 1,
      sym__horizontal_whitespaces,
  [9060] = 2,
    ACTIONS(1362), 1,
      anon_sym_LBRACE,
    ACTIONS(1364), 1,
      anon_sym_browse,
  [9067] = 2,
    ACTIONS(1366), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(102), 1,
      sym__horizontal_whitespaces,
  [9074] = 2,
    ACTIONS(1368), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(53), 1,
      sym__horizontal_whitespaces,
  [9081] = 2,
    ACTIONS(1370), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(202), 1,
      sym__horizontal_whitespaces,
  [9088] = 2,
    ACTIONS(1372), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(494), 1,
      sym__horizontal_whitespaces,
  [9095] = 2,
    ACTIONS(1374), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(374), 1,
      sym__horizontal_whitespaces,
  [9102] = 2,
    ACTIONS(1376), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(258), 1,
      sym__horizontal_whitespaces,
  [9109] = 2,
    ACTIONS(1378), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(257), 1,
      sym__horizontal_whitespaces,
  [9116] = 2,
    ACTIONS(1380), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(307), 1,
      sym__horizontal_whitespaces,
  [9123] = 2,
    ACTIONS(1382), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(196), 1,
      sym__horizontal_whitespaces,
  [9130] = 2,
    ACTIONS(1384), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(262), 1,
      sym__horizontal_whitespaces,
  [9137] = 2,
    ACTIONS(1386), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(314), 1,
      sym__horizontal_whitespaces,
  [9144] = 2,
    ACTIONS(1388), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(327), 1,
      sym__horizontal_whitespaces,
  [9151] = 2,
    ACTIONS(1390), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(355), 1,
      sym__horizontal_whitespaces,
  [9158] = 2,
    ACTIONS(1392), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(291), 1,
      sym__horizontal_whitespaces,
  [9165] = 2,
    ACTIONS(1394), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(548), 1,
      sym__horizontal_whitespaces,
  [9172] = 2,
    ACTIONS(1396), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(313), 1,
      sym__horizontal_whitespaces,
  [9179] = 2,
    ACTIONS(1398), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(429), 1,
      sym__horizontal_whitespaces,
  [9186] = 2,
    ACTIONS(1400), 1,
      aux_sym__horizontal_whitespaces_token1,
    STATE(431), 1,
      sym__horizontal_whitespaces,
  [9193] = 1,
    ACTIONS(1402), 1,
      sym_size_number,
  [9197] = 1,
    ACTIONS(1404), 1,
      sym__vertical_whitespace,
  [9201] = 1,
    ACTIONS(1406), 1,
      anon_sym_RBRACE,
  [9205] = 1,
    ACTIONS(1408), 1,
      anon_sym_SLASH,
  [9209] = 1,
    ACTIONS(1410), 1,
      anon_sym_RBRACE,
  [9213] = 1,
    ACTIONS(1412), 1,
      sym_header_name,
  [9217] = 1,
    ACTIONS(1414), 1,
      sym_domain_address,
  [9221] = 1,
    ACTIONS(1416), 1,
      sym__vertical_whitespaces,
  [9225] = 1,
    ACTIONS(1418), 1,
      anon_sym_DQUOTE,
  [9229] = 1,
    ACTIONS(1420), 1,
      anon_sym_RBRACE,
  [9233] = 1,
    ACTIONS(1422), 1,
      aux_sym__port_number_token1,
  [9237] = 1,
    ACTIONS(1424), 1,
      aux_sym_site_address_token1,
  [9241] = 1,
    ACTIONS(1426), 1,
      aux_sym_site_address_token1,
  [9245] = 1,
    ACTIONS(1428), 1,
      anon_sym_LBRACE,
  [9249] = 1,
    ACTIONS(347), 1,
      sym__vertical_whitespace,
  [9253] = 1,
    ACTIONS(355), 1,
      sym__vertical_whitespace,
  [9257] = 1,
    ACTIONS(1402), 1,
      aux_sym__log_output_file_token2,
  [9261] = 1,
    ACTIONS(1430), 1,
      anon_sym_RBRACE,
  [9265] = 1,
    ACTIONS(1402), 1,
      aux_sym__log_output_file_token1,
  [9269] = 1,
    ACTIONS(1432), 1,
      anon_sym_RBRACE,
  [9273] = 1,
    ACTIONS(1091), 1,
      anon_sym_RBRACE,
  [9277] = 1,
    ACTIONS(1434), 1,
      anon_sym_SLASH,
  [9281] = 1,
    ACTIONS(1436), 1,
      anon_sym_RBRACE,
  [9285] = 1,
    ACTIONS(1107), 1,
      anon_sym_RBRACE,
  [9289] = 1,
    ACTIONS(1438), 1,
      sym_size_number,
  [9293] = 1,
    ACTIONS(1440), 1,
      anon_sym_DQUOTE,
  [9297] = 1,
    ACTIONS(1440), 1,
      anon_sym_SQUOTE,
  [9301] = 1,
    ACTIONS(1075), 1,
      anon_sym_RBRACE,
  [9305] = 1,
    ACTIONS(1442), 1,
      anon_sym_RBRACE,
  [9309] = 1,
    ACTIONS(1145), 1,
      anon_sym_RBRACE,
  [9313] = 1,
    ACTIONS(1444), 1,
      sym__vertical_whitespace,
  [9317] = 1,
    ACTIONS(1446), 1,
      sym_size_number,
  [9321] = 1,
    ACTIONS(1448), 1,
      anon_sym_RBRACE,
  [9325] = 1,
    ACTIONS(1123), 1,
      anon_sym_RBRACE,
  [9329] = 1,
    ACTIONS(1131), 1,
      anon_sym_RBRACE,
  [9333] = 1,
    ACTIONS(1450), 1,
      sym__vertical_whitespace,
  [9337] = 1,
    ACTIONS(1061), 1,
      anon_sym_RBRACE,
  [9341] = 1,
    ACTIONS(1452), 1,
      sym__vertical_whitespace,
  [9345] = 1,
    ACTIONS(1454), 1,
      sym__vertical_whitespace,
  [9349] = 1,
    ACTIONS(1111), 1,
      anon_sym_RBRACE,
  [9353] = 1,
    ACTIONS(1456), 1,
      anon_sym_SQUOTE,
  [9357] = 1,
    ACTIONS(1458), 1,
      anon_sym_RBRACE,
  [9361] = 1,
    ACTIONS(1460), 1,
      aux_sym__port_number_token1,
  [9365] = 1,
    ACTIONS(1456), 1,
      anon_sym_DQUOTE,
  [9369] = 1,
    ACTIONS(1462), 1,
      aux_sym_site_address_token1,
  [9373] = 1,
    ACTIONS(1464), 1,
      aux_sym_site_address_token1,
  [9377] = 1,
    ACTIONS(1466), 1,
      sym__vertical_whitespace,
  [9381] = 1,
    ACTIONS(1468), 1,
      anon_sym_LBRACE,
  [9385] = 1,
    ACTIONS(1470), 1,
      sym_header_name,
  [9389] = 1,
    ACTIONS(1472), 1,
      sym_domain_address,
  [9393] = 1,
    ACTIONS(1474), 1,
      anon_sym_DQUOTE,
  [9397] = 1,
    ACTIONS(1476), 1,
      anon_sym_RBRACE,
  [9401] = 1,
    ACTIONS(1478), 1,
      aux_sym_matcher_path_regexp_token2,
  [9405] = 1,
    ACTIONS(1480), 1,
      sym_size_number,
  [9409] = 1,
    ACTIONS(1482), 1,
      anon_sym_DQUOTE,
  [9413] = 1,
    ACTIONS(1482), 1,
      anon_sym_SQUOTE,
  [9417] = 1,
    ACTIONS(1484), 1,
      aux_sym_header_value_token3,
  [9421] = 1,
    ACTIONS(1486), 1,
      anon_sym_DQUOTE,
  [9425] = 1,
    ACTIONS(1488), 1,
      anon_sym_DQUOTE,
  [9429] = 1,
    ACTIONS(1488), 1,
      anon_sym_SQUOTE,
  [9433] = 1,
    ACTIONS(1490), 1,
      anon_sym_DQUOTE,
  [9437] = 1,
    ACTIONS(1492), 1,
      anon_sym_DQUOTE,
  [9441] = 1,
    ACTIONS(1492), 1,
      anon_sym_SQUOTE,
  [9445] = 1,
    ACTIONS(1494), 1,
      anon_sym_DQUOTE,
  [9449] = 1,
    ACTIONS(1496), 1,
      anon_sym_DQUOTE,
  [9453] = 1,
    ACTIONS(1496), 1,
      anon_sym_SQUOTE,
  [9457] = 1,
    ACTIONS(1498), 1,
      sym_snippet_name,
  [9461] = 1,
    ACTIONS(1500), 1,
      anon_sym_LBRACE,
  [9465] = 1,
    ACTIONS(1502), 1,
      aux_sym_header_value_token2,
  [9469] = 1,
    ACTIONS(1504), 1,
      anon_sym_RBRACE,
  [9473] = 1,
    ACTIONS(1506), 1,
      sym__vertical_whitespace,
  [9477] = 1,
    ACTIONS(1508), 1,
      sym__vertical_whitespace,
  [9481] = 1,
    ACTIONS(1510), 1,
      anon_sym_LBRACE,
  [9485] = 1,
    ACTIONS(1512), 1,
      sym_size_number,
  [9489] = 1,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
  [9493] = 1,
    ACTIONS(1516), 1,
      anon_sym_LBRACE,
  [9497] = 1,
    ACTIONS(1518), 1,
      aux_sym_unix_path_token1,
  [9501] = 1,
    ACTIONS(1356), 1,
      anon_sym_LBRACE,
  [9505] = 1,
    ACTIONS(1520), 1,
      anon_sym_RBRACE,
  [9509] = 1,
    ACTIONS(1522), 1,
      anon_sym_DQUOTE,
  [9513] = 1,
    ACTIONS(1524), 1,
      aux_sym__port_number_token1,
  [9517] = 1,
    ACTIONS(1526), 1,
      sym__vertical_whitespaces,
  [9521] = 1,
    ACTIONS(1528), 1,
      sym__vertical_whitespace,
  [9525] = 1,
    ACTIONS(1530), 1,
      sym_domain_address,
  [9529] = 1,
    ACTIONS(1532), 1,
      sym_header_name,
  [9533] = 1,
    ACTIONS(1362), 1,
      anon_sym_LBRACE,
  [9537] = 1,
    ACTIONS(1534), 1,
      sym_header_name,
  [9541] = 1,
    ACTIONS(1536), 1,
      sym_header_name,
  [9545] = 1,
    ACTIONS(1538), 1,
      sym_size_number,
  [9549] = 1,
    ACTIONS(1540), 1,
      anon_sym_RBRACE,
  [9553] = 1,
    ACTIONS(1542), 1,
      anon_sym_SLASH,
  [9557] = 1,
    ACTIONS(1544), 1,
      aux_sym_unix_path_token1,
  [9561] = 1,
    ACTIONS(1546), 1,
      aux_sym_header_value_token2,
  [9565] = 1,
    ACTIONS(1548), 1,
      aux_sym_header_value_token3,
  [9569] = 1,
    ACTIONS(1550), 1,
      sym__vertical_whitespace,
  [9573] = 1,
    ACTIONS(1552), 1,
      sym_size_number,
  [9577] = 1,
    ACTIONS(1554), 1,
      anon_sym_LBRACE,
  [9581] = 1,
    ACTIONS(1556), 1,
      sym_size_number,
  [9585] = 1,
    ACTIONS(1558), 1,
      sym_size_number,
  [9589] = 1,
    ACTIONS(1560), 1,
      sym_snippet_name,
  [9593] = 1,
    ACTIONS(1562), 1,
      anon_sym_RBRACE,
  [9597] = 1,
    ACTIONS(1564), 1,
      aux_sym_unix_path_token1,
  [9601] = 1,
    ACTIONS(1566), 1,
      anon_sym_RBRACE,
  [9605] = 1,
    ACTIONS(1568), 1,
      sym__vertical_whitespace,
  [9609] = 1,
    ACTIONS(1570), 1,
      sym__vertical_whitespace,
  [9613] = 1,
    ACTIONS(1572), 1,
      aux_sym_header_value_token2,
  [9617] = 1,
    ACTIONS(1574), 1,
      aux_sym_header_value_token3,
  [9621] = 1,
    ACTIONS(1576), 1,
      aux_sym_unix_path_token1,
  [9625] = 1,
    ACTIONS(1578), 1,
      aux_sym_header_value_token2,
  [9629] = 1,
    ACTIONS(1580), 1,
      aux_sym_header_value_token3,
  [9633] = 1,
    ACTIONS(1582), 1,
      aux_sym_unix_path_token1,
  [9637] = 1,
    ACTIONS(1584), 1,
      aux_sym_header_value_token2,
  [9641] = 1,
    ACTIONS(1586), 1,
      aux_sym_header_value_token3,
  [9645] = 1,
    ACTIONS(1588), 1,
      aux_sym_unix_path_token1,
  [9649] = 1,
    ACTIONS(1590), 1,
      aux_sym_header_value_token2,
  [9653] = 1,
    ACTIONS(1592), 1,
      aux_sym_header_value_token3,
  [9657] = 1,
    ACTIONS(565), 1,
      anon_sym_LBRACE,
  [9661] = 1,
    ACTIONS(1594), 1,
      anon_sym_LBRACE,
  [9665] = 1,
    ACTIONS(1596), 1,
      sym__vertical_whitespace,
  [9669] = 1,
    ACTIONS(1598), 1,
      sym_header_name,
  [9673] = 1,
    ACTIONS(1600), 1,
      sym_header_name,
  [9677] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [9681] = 1,
    ACTIONS(1602), 1,
      anon_sym_LBRACE,
  [9685] = 1,
    ACTIONS(1604), 1,
      anon_sym_LBRACE,
  [9689] = 1,
    ACTIONS(1606), 1,
      sym__vertical_whitespace,
  [9693] = 1,
    ACTIONS(1608), 1,
      sym_email_address,
  [9697] = 1,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
  [9701] = 1,
    ACTIONS(1610), 1,
      aux_sym_site_address_token1,
  [9705] = 1,
    ACTIONS(1612), 1,
      sym_header_name,
  [9709] = 1,
    ACTIONS(1614), 1,
      sym_header_name,
  [9713] = 1,
    ACTIONS(1616), 1,
      sym_snippet_name,
  [9717] = 1,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
  [9721] = 1,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
  [9725] = 1,
    ACTIONS(1618), 1,
      aux_sym_site_address_token1,
  [9729] = 1,
    ACTIONS(1620), 1,
      anon_sym_LBRACE,
  [9733] = 1,
    ACTIONS(1622), 1,
      anon_sym_LBRACE,
  [9737] = 1,
    ACTIONS(1624), 1,
      ts_builtin_sym_end,
  [9741] = 1,
    ACTIONS(1626), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 235,
  [SMALL_STATE(6)] = 309,
  [SMALL_STATE(7)] = 383,
  [SMALL_STATE(8)] = 457,
  [SMALL_STATE(9)] = 527,
  [SMALL_STATE(10)] = 597,
  [SMALL_STATE(11)] = 667,
  [SMALL_STATE(12)] = 737,
  [SMALL_STATE(13)] = 807,
  [SMALL_STATE(14)] = 877,
  [SMALL_STATE(15)] = 947,
  [SMALL_STATE(16)] = 1017,
  [SMALL_STATE(17)] = 1087,
  [SMALL_STATE(18)] = 1154,
  [SMALL_STATE(19)] = 1221,
  [SMALL_STATE(20)] = 1288,
  [SMALL_STATE(21)] = 1355,
  [SMALL_STATE(22)] = 1422,
  [SMALL_STATE(23)] = 1489,
  [SMALL_STATE(24)] = 1556,
  [SMALL_STATE(25)] = 1623,
  [SMALL_STATE(26)] = 1677,
  [SMALL_STATE(27)] = 1731,
  [SMALL_STATE(28)] = 1784,
  [SMALL_STATE(29)] = 1837,
  [SMALL_STATE(30)] = 1869,
  [SMALL_STATE(31)] = 1901,
  [SMALL_STATE(32)] = 1933,
  [SMALL_STATE(33)] = 1965,
  [SMALL_STATE(34)] = 1996,
  [SMALL_STATE(35)] = 2027,
  [SMALL_STATE(36)] = 2058,
  [SMALL_STATE(37)] = 2089,
  [SMALL_STATE(38)] = 2121,
  [SMALL_STATE(39)] = 2155,
  [SMALL_STATE(40)] = 2187,
  [SMALL_STATE(41)] = 2218,
  [SMALL_STATE(42)] = 2255,
  [SMALL_STATE(43)] = 2288,
  [SMALL_STATE(44)] = 2319,
  [SMALL_STATE(45)] = 2348,
  [SMALL_STATE(46)] = 2377,
  [SMALL_STATE(47)] = 2406,
  [SMALL_STATE(48)] = 2434,
  [SMALL_STATE(49)] = 2466,
  [SMALL_STATE(50)] = 2496,
  [SMALL_STATE(51)] = 2524,
  [SMALL_STATE(52)] = 2554,
  [SMALL_STATE(53)] = 2586,
  [SMALL_STATE(54)] = 2622,
  [SMALL_STATE(55)] = 2654,
  [SMALL_STATE(56)] = 2682,
  [SMALL_STATE(57)] = 2713,
  [SMALL_STATE(58)] = 2744,
  [SMALL_STATE(59)] = 2775,
  [SMALL_STATE(60)] = 2806,
  [SMALL_STATE(61)] = 2857,
  [SMALL_STATE(62)] = 2888,
  [SMALL_STATE(63)] = 2919,
  [SMALL_STATE(64)] = 2970,
  [SMALL_STATE(65)] = 3001,
  [SMALL_STATE(66)] = 3032,
  [SMALL_STATE(67)] = 3063,
  [SMALL_STATE(68)] = 3094,
  [SMALL_STATE(69)] = 3127,
  [SMALL_STATE(70)] = 3158,
  [SMALL_STATE(71)] = 3189,
  [SMALL_STATE(72)] = 3221,
  [SMALL_STATE(73)] = 3249,
  [SMALL_STATE(74)] = 3279,
  [SMALL_STATE(75)] = 3309,
  [SMALL_STATE(76)] = 3339,
  [SMALL_STATE(77)] = 3369,
  [SMALL_STATE(78)] = 3395,
  [SMALL_STATE(79)] = 3425,
  [SMALL_STATE(80)] = 3455,
  [SMALL_STATE(81)] = 3485,
  [SMALL_STATE(82)] = 3515,
  [SMALL_STATE(83)] = 3541,
  [SMALL_STATE(84)] = 3567,
  [SMALL_STATE(85)] = 3597,
  [SMALL_STATE(86)] = 3622,
  [SMALL_STATE(87)] = 3649,
  [SMALL_STATE(88)] = 3674,
  [SMALL_STATE(89)] = 3699,
  [SMALL_STATE(90)] = 3726,
  [SMALL_STATE(91)] = 3751,
  [SMALL_STATE(92)] = 3776,
  [SMALL_STATE(93)] = 3801,
  [SMALL_STATE(94)] = 3826,
  [SMALL_STATE(95)] = 3851,
  [SMALL_STATE(96)] = 3876,
  [SMALL_STATE(97)] = 3901,
  [SMALL_STATE(98)] = 3925,
  [SMALL_STATE(99)] = 3949,
  [SMALL_STATE(100)] = 3973,
  [SMALL_STATE(101)] = 3997,
  [SMALL_STATE(102)] = 4021,
  [SMALL_STATE(103)] = 4047,
  [SMALL_STATE(104)] = 4071,
  [SMALL_STATE(105)] = 4095,
  [SMALL_STATE(106)] = 4119,
  [SMALL_STATE(107)] = 4143,
  [SMALL_STATE(108)] = 4167,
  [SMALL_STATE(109)] = 4191,
  [SMALL_STATE(110)] = 4215,
  [SMALL_STATE(111)] = 4239,
  [SMALL_STATE(112)] = 4263,
  [SMALL_STATE(113)] = 4287,
  [SMALL_STATE(114)] = 4311,
  [SMALL_STATE(115)] = 4335,
  [SMALL_STATE(116)] = 4359,
  [SMALL_STATE(117)] = 4383,
  [SMALL_STATE(118)] = 4407,
  [SMALL_STATE(119)] = 4431,
  [SMALL_STATE(120)] = 4455,
  [SMALL_STATE(121)] = 4479,
  [SMALL_STATE(122)] = 4503,
  [SMALL_STATE(123)] = 4527,
  [SMALL_STATE(124)] = 4551,
  [SMALL_STATE(125)] = 4575,
  [SMALL_STATE(126)] = 4599,
  [SMALL_STATE(127)] = 4623,
  [SMALL_STATE(128)] = 4647,
  [SMALL_STATE(129)] = 4671,
  [SMALL_STATE(130)] = 4695,
  [SMALL_STATE(131)] = 4719,
  [SMALL_STATE(132)] = 4743,
  [SMALL_STATE(133)] = 4767,
  [SMALL_STATE(134)] = 4791,
  [SMALL_STATE(135)] = 4815,
  [SMALL_STATE(136)] = 4839,
  [SMALL_STATE(137)] = 4863,
  [SMALL_STATE(138)] = 4887,
  [SMALL_STATE(139)] = 4911,
  [SMALL_STATE(140)] = 4935,
  [SMALL_STATE(141)] = 4959,
  [SMALL_STATE(142)] = 4983,
  [SMALL_STATE(143)] = 5007,
  [SMALL_STATE(144)] = 5031,
  [SMALL_STATE(145)] = 5055,
  [SMALL_STATE(146)] = 5079,
  [SMALL_STATE(147)] = 5103,
  [SMALL_STATE(148)] = 5127,
  [SMALL_STATE(149)] = 5150,
  [SMALL_STATE(150)] = 5173,
  [SMALL_STATE(151)] = 5196,
  [SMALL_STATE(152)] = 5219,
  [SMALL_STATE(153)] = 5242,
  [SMALL_STATE(154)] = 5265,
  [SMALL_STATE(155)] = 5288,
  [SMALL_STATE(156)] = 5311,
  [SMALL_STATE(157)] = 5334,
  [SMALL_STATE(158)] = 5357,
  [SMALL_STATE(159)] = 5380,
  [SMALL_STATE(160)] = 5403,
  [SMALL_STATE(161)] = 5426,
  [SMALL_STATE(162)] = 5449,
  [SMALL_STATE(163)] = 5472,
  [SMALL_STATE(164)] = 5495,
  [SMALL_STATE(165)] = 5518,
  [SMALL_STATE(166)] = 5541,
  [SMALL_STATE(167)] = 5564,
  [SMALL_STATE(168)] = 5587,
  [SMALL_STATE(169)] = 5610,
  [SMALL_STATE(170)] = 5633,
  [SMALL_STATE(171)] = 5656,
  [SMALL_STATE(172)] = 5679,
  [SMALL_STATE(173)] = 5702,
  [SMALL_STATE(174)] = 5725,
  [SMALL_STATE(175)] = 5748,
  [SMALL_STATE(176)] = 5771,
  [SMALL_STATE(177)] = 5794,
  [SMALL_STATE(178)] = 5817,
  [SMALL_STATE(179)] = 5840,
  [SMALL_STATE(180)] = 5863,
  [SMALL_STATE(181)] = 5886,
  [SMALL_STATE(182)] = 5909,
  [SMALL_STATE(183)] = 5932,
  [SMALL_STATE(184)] = 5955,
  [SMALL_STATE(185)] = 5978,
  [SMALL_STATE(186)] = 6001,
  [SMALL_STATE(187)] = 6024,
  [SMALL_STATE(188)] = 6047,
  [SMALL_STATE(189)] = 6070,
  [SMALL_STATE(190)] = 6093,
  [SMALL_STATE(191)] = 6116,
  [SMALL_STATE(192)] = 6150,
  [SMALL_STATE(193)] = 6184,
  [SMALL_STATE(194)] = 6222,
  [SMALL_STATE(195)] = 6256,
  [SMALL_STATE(196)] = 6290,
  [SMALL_STATE(197)] = 6328,
  [SMALL_STATE(198)] = 6362,
  [SMALL_STATE(199)] = 6393,
  [SMALL_STATE(200)] = 6424,
  [SMALL_STATE(201)] = 6455,
  [SMALL_STATE(202)] = 6486,
  [SMALL_STATE(203)] = 6521,
  [SMALL_STATE(204)] = 6556,
  [SMALL_STATE(205)] = 6574,
  [SMALL_STATE(206)] = 6592,
  [SMALL_STATE(207)] = 6610,
  [SMALL_STATE(208)] = 6628,
  [SMALL_STATE(209)] = 6646,
  [SMALL_STATE(210)] = 6664,
  [SMALL_STATE(211)] = 6682,
  [SMALL_STATE(212)] = 6700,
  [SMALL_STATE(213)] = 6731,
  [SMALL_STATE(214)] = 6762,
  [SMALL_STATE(215)] = 6780,
  [SMALL_STATE(216)] = 6808,
  [SMALL_STATE(217)] = 6836,
  [SMALL_STATE(218)] = 6864,
  [SMALL_STATE(219)] = 6892,
  [SMALL_STATE(220)] = 6920,
  [SMALL_STATE(221)] = 6948,
  [SMALL_STATE(222)] = 6963,
  [SMALL_STATE(223)] = 6988,
  [SMALL_STATE(224)] = 7011,
  [SMALL_STATE(225)] = 7026,
  [SMALL_STATE(226)] = 7049,
  [SMALL_STATE(227)] = 7072,
  [SMALL_STATE(228)] = 7095,
  [SMALL_STATE(229)] = 7118,
  [SMALL_STATE(230)] = 7141,
  [SMALL_STATE(231)] = 7164,
  [SMALL_STATE(232)] = 7187,
  [SMALL_STATE(233)] = 7212,
  [SMALL_STATE(234)] = 7234,
  [SMALL_STATE(235)] = 7256,
  [SMALL_STATE(236)] = 7270,
  [SMALL_STATE(237)] = 7284,
  [SMALL_STATE(238)] = 7298,
  [SMALL_STATE(239)] = 7312,
  [SMALL_STATE(240)] = 7326,
  [SMALL_STATE(241)] = 7348,
  [SMALL_STATE(242)] = 7370,
  [SMALL_STATE(243)] = 7384,
  [SMALL_STATE(244)] = 7398,
  [SMALL_STATE(245)] = 7420,
  [SMALL_STATE(246)] = 7442,
  [SMALL_STATE(247)] = 7464,
  [SMALL_STATE(248)] = 7478,
  [SMALL_STATE(249)] = 7497,
  [SMALL_STATE(250)] = 7516,
  [SMALL_STATE(251)] = 7535,
  [SMALL_STATE(252)] = 7554,
  [SMALL_STATE(253)] = 7573,
  [SMALL_STATE(254)] = 7591,
  [SMALL_STATE(255)] = 7611,
  [SMALL_STATE(256)] = 7629,
  [SMALL_STATE(257)] = 7647,
  [SMALL_STATE(258)] = 7667,
  [SMALL_STATE(259)] = 7684,
  [SMALL_STATE(260)] = 7693,
  [SMALL_STATE(261)] = 7702,
  [SMALL_STATE(262)] = 7711,
  [SMALL_STATE(263)] = 7728,
  [SMALL_STATE(264)] = 7737,
  [SMALL_STATE(265)] = 7754,
  [SMALL_STATE(266)] = 7763,
  [SMALL_STATE(267)] = 7780,
  [SMALL_STATE(268)] = 7789,
  [SMALL_STATE(269)] = 7806,
  [SMALL_STATE(270)] = 7815,
  [SMALL_STATE(271)] = 7829,
  [SMALL_STATE(272)] = 7845,
  [SMALL_STATE(273)] = 7859,
  [SMALL_STATE(274)] = 7869,
  [SMALL_STATE(275)] = 7885,
  [SMALL_STATE(276)] = 7899,
  [SMALL_STATE(277)] = 7915,
  [SMALL_STATE(278)] = 7931,
  [SMALL_STATE(279)] = 7945,
  [SMALL_STATE(280)] = 7961,
  [SMALL_STATE(281)] = 7969,
  [SMALL_STATE(282)] = 7983,
  [SMALL_STATE(283)] = 7999,
  [SMALL_STATE(284)] = 8015,
  [SMALL_STATE(285)] = 8031,
  [SMALL_STATE(286)] = 8047,
  [SMALL_STATE(287)] = 8061,
  [SMALL_STATE(288)] = 8075,
  [SMALL_STATE(289)] = 8091,
  [SMALL_STATE(290)] = 8107,
  [SMALL_STATE(291)] = 8123,
  [SMALL_STATE(292)] = 8135,
  [SMALL_STATE(293)] = 8151,
  [SMALL_STATE(294)] = 8167,
  [SMALL_STATE(295)] = 8175,
  [SMALL_STATE(296)] = 8191,
  [SMALL_STATE(297)] = 8205,
  [SMALL_STATE(298)] = 8219,
  [SMALL_STATE(299)] = 8235,
  [SMALL_STATE(300)] = 8251,
  [SMALL_STATE(301)] = 8261,
  [SMALL_STATE(302)] = 8277,
  [SMALL_STATE(303)] = 8288,
  [SMALL_STATE(304)] = 8299,
  [SMALL_STATE(305)] = 8310,
  [SMALL_STATE(306)] = 8321,
  [SMALL_STATE(307)] = 8334,
  [SMALL_STATE(308)] = 8347,
  [SMALL_STATE(309)] = 8360,
  [SMALL_STATE(310)] = 8373,
  [SMALL_STATE(311)] = 8382,
  [SMALL_STATE(312)] = 8395,
  [SMALL_STATE(313)] = 8402,
  [SMALL_STATE(314)] = 8411,
  [SMALL_STATE(315)] = 8418,
  [SMALL_STATE(316)] = 8431,
  [SMALL_STATE(317)] = 8442,
  [SMALL_STATE(318)] = 8455,
  [SMALL_STATE(319)] = 8466,
  [SMALL_STATE(320)] = 8479,
  [SMALL_STATE(321)] = 8492,
  [SMALL_STATE(322)] = 8503,
  [SMALL_STATE(323)] = 8514,
  [SMALL_STATE(324)] = 8527,
  [SMALL_STATE(325)] = 8540,
  [SMALL_STATE(326)] = 8551,
  [SMALL_STATE(327)] = 8564,
  [SMALL_STATE(328)] = 8574,
  [SMALL_STATE(329)] = 8584,
  [SMALL_STATE(330)] = 8594,
  [SMALL_STATE(331)] = 8604,
  [SMALL_STATE(332)] = 8614,
  [SMALL_STATE(333)] = 8622,
  [SMALL_STATE(334)] = 8630,
  [SMALL_STATE(335)] = 8640,
  [SMALL_STATE(336)] = 8650,
  [SMALL_STATE(337)] = 8660,
  [SMALL_STATE(338)] = 8670,
  [SMALL_STATE(339)] = 8677,
  [SMALL_STATE(340)] = 8684,
  [SMALL_STATE(341)] = 8691,
  [SMALL_STATE(342)] = 8698,
  [SMALL_STATE(343)] = 8705,
  [SMALL_STATE(344)] = 8712,
  [SMALL_STATE(345)] = 8719,
  [SMALL_STATE(346)] = 8726,
  [SMALL_STATE(347)] = 8733,
  [SMALL_STATE(348)] = 8740,
  [SMALL_STATE(349)] = 8747,
  [SMALL_STATE(350)] = 8754,
  [SMALL_STATE(351)] = 8761,
  [SMALL_STATE(352)] = 8768,
  [SMALL_STATE(353)] = 8775,
  [SMALL_STATE(354)] = 8782,
  [SMALL_STATE(355)] = 8789,
  [SMALL_STATE(356)] = 8794,
  [SMALL_STATE(357)] = 8801,
  [SMALL_STATE(358)] = 8808,
  [SMALL_STATE(359)] = 8815,
  [SMALL_STATE(360)] = 8822,
  [SMALL_STATE(361)] = 8829,
  [SMALL_STATE(362)] = 8836,
  [SMALL_STATE(363)] = 8843,
  [SMALL_STATE(364)] = 8850,
  [SMALL_STATE(365)] = 8857,
  [SMALL_STATE(366)] = 8864,
  [SMALL_STATE(367)] = 8871,
  [SMALL_STATE(368)] = 8878,
  [SMALL_STATE(369)] = 8885,
  [SMALL_STATE(370)] = 8892,
  [SMALL_STATE(371)] = 8899,
  [SMALL_STATE(372)] = 8906,
  [SMALL_STATE(373)] = 8913,
  [SMALL_STATE(374)] = 8920,
  [SMALL_STATE(375)] = 8927,
  [SMALL_STATE(376)] = 8934,
  [SMALL_STATE(377)] = 8941,
  [SMALL_STATE(378)] = 8948,
  [SMALL_STATE(379)] = 8955,
  [SMALL_STATE(380)] = 8962,
  [SMALL_STATE(381)] = 8969,
  [SMALL_STATE(382)] = 8976,
  [SMALL_STATE(383)] = 8983,
  [SMALL_STATE(384)] = 8990,
  [SMALL_STATE(385)] = 8997,
  [SMALL_STATE(386)] = 9004,
  [SMALL_STATE(387)] = 9011,
  [SMALL_STATE(388)] = 9018,
  [SMALL_STATE(389)] = 9025,
  [SMALL_STATE(390)] = 9032,
  [SMALL_STATE(391)] = 9039,
  [SMALL_STATE(392)] = 9046,
  [SMALL_STATE(393)] = 9053,
  [SMALL_STATE(394)] = 9060,
  [SMALL_STATE(395)] = 9067,
  [SMALL_STATE(396)] = 9074,
  [SMALL_STATE(397)] = 9081,
  [SMALL_STATE(398)] = 9088,
  [SMALL_STATE(399)] = 9095,
  [SMALL_STATE(400)] = 9102,
  [SMALL_STATE(401)] = 9109,
  [SMALL_STATE(402)] = 9116,
  [SMALL_STATE(403)] = 9123,
  [SMALL_STATE(404)] = 9130,
  [SMALL_STATE(405)] = 9137,
  [SMALL_STATE(406)] = 9144,
  [SMALL_STATE(407)] = 9151,
  [SMALL_STATE(408)] = 9158,
  [SMALL_STATE(409)] = 9165,
  [SMALL_STATE(410)] = 9172,
  [SMALL_STATE(411)] = 9179,
  [SMALL_STATE(412)] = 9186,
  [SMALL_STATE(413)] = 9193,
  [SMALL_STATE(414)] = 9197,
  [SMALL_STATE(415)] = 9201,
  [SMALL_STATE(416)] = 9205,
  [SMALL_STATE(417)] = 9209,
  [SMALL_STATE(418)] = 9213,
  [SMALL_STATE(419)] = 9217,
  [SMALL_STATE(420)] = 9221,
  [SMALL_STATE(421)] = 9225,
  [SMALL_STATE(422)] = 9229,
  [SMALL_STATE(423)] = 9233,
  [SMALL_STATE(424)] = 9237,
  [SMALL_STATE(425)] = 9241,
  [SMALL_STATE(426)] = 9245,
  [SMALL_STATE(427)] = 9249,
  [SMALL_STATE(428)] = 9253,
  [SMALL_STATE(429)] = 9257,
  [SMALL_STATE(430)] = 9261,
  [SMALL_STATE(431)] = 9265,
  [SMALL_STATE(432)] = 9269,
  [SMALL_STATE(433)] = 9273,
  [SMALL_STATE(434)] = 9277,
  [SMALL_STATE(435)] = 9281,
  [SMALL_STATE(436)] = 9285,
  [SMALL_STATE(437)] = 9289,
  [SMALL_STATE(438)] = 9293,
  [SMALL_STATE(439)] = 9297,
  [SMALL_STATE(440)] = 9301,
  [SMALL_STATE(441)] = 9305,
  [SMALL_STATE(442)] = 9309,
  [SMALL_STATE(443)] = 9313,
  [SMALL_STATE(444)] = 9317,
  [SMALL_STATE(445)] = 9321,
  [SMALL_STATE(446)] = 9325,
  [SMALL_STATE(447)] = 9329,
  [SMALL_STATE(448)] = 9333,
  [SMALL_STATE(449)] = 9337,
  [SMALL_STATE(450)] = 9341,
  [SMALL_STATE(451)] = 9345,
  [SMALL_STATE(452)] = 9349,
  [SMALL_STATE(453)] = 9353,
  [SMALL_STATE(454)] = 9357,
  [SMALL_STATE(455)] = 9361,
  [SMALL_STATE(456)] = 9365,
  [SMALL_STATE(457)] = 9369,
  [SMALL_STATE(458)] = 9373,
  [SMALL_STATE(459)] = 9377,
  [SMALL_STATE(460)] = 9381,
  [SMALL_STATE(461)] = 9385,
  [SMALL_STATE(462)] = 9389,
  [SMALL_STATE(463)] = 9393,
  [SMALL_STATE(464)] = 9397,
  [SMALL_STATE(465)] = 9401,
  [SMALL_STATE(466)] = 9405,
  [SMALL_STATE(467)] = 9409,
  [SMALL_STATE(468)] = 9413,
  [SMALL_STATE(469)] = 9417,
  [SMALL_STATE(470)] = 9421,
  [SMALL_STATE(471)] = 9425,
  [SMALL_STATE(472)] = 9429,
  [SMALL_STATE(473)] = 9433,
  [SMALL_STATE(474)] = 9437,
  [SMALL_STATE(475)] = 9441,
  [SMALL_STATE(476)] = 9445,
  [SMALL_STATE(477)] = 9449,
  [SMALL_STATE(478)] = 9453,
  [SMALL_STATE(479)] = 9457,
  [SMALL_STATE(480)] = 9461,
  [SMALL_STATE(481)] = 9465,
  [SMALL_STATE(482)] = 9469,
  [SMALL_STATE(483)] = 9473,
  [SMALL_STATE(484)] = 9477,
  [SMALL_STATE(485)] = 9481,
  [SMALL_STATE(486)] = 9485,
  [SMALL_STATE(487)] = 9489,
  [SMALL_STATE(488)] = 9493,
  [SMALL_STATE(489)] = 9497,
  [SMALL_STATE(490)] = 9501,
  [SMALL_STATE(491)] = 9505,
  [SMALL_STATE(492)] = 9509,
  [SMALL_STATE(493)] = 9513,
  [SMALL_STATE(494)] = 9517,
  [SMALL_STATE(495)] = 9521,
  [SMALL_STATE(496)] = 9525,
  [SMALL_STATE(497)] = 9529,
  [SMALL_STATE(498)] = 9533,
  [SMALL_STATE(499)] = 9537,
  [SMALL_STATE(500)] = 9541,
  [SMALL_STATE(501)] = 9545,
  [SMALL_STATE(502)] = 9549,
  [SMALL_STATE(503)] = 9553,
  [SMALL_STATE(504)] = 9557,
  [SMALL_STATE(505)] = 9561,
  [SMALL_STATE(506)] = 9565,
  [SMALL_STATE(507)] = 9569,
  [SMALL_STATE(508)] = 9573,
  [SMALL_STATE(509)] = 9577,
  [SMALL_STATE(510)] = 9581,
  [SMALL_STATE(511)] = 9585,
  [SMALL_STATE(512)] = 9589,
  [SMALL_STATE(513)] = 9593,
  [SMALL_STATE(514)] = 9597,
  [SMALL_STATE(515)] = 9601,
  [SMALL_STATE(516)] = 9605,
  [SMALL_STATE(517)] = 9609,
  [SMALL_STATE(518)] = 9613,
  [SMALL_STATE(519)] = 9617,
  [SMALL_STATE(520)] = 9621,
  [SMALL_STATE(521)] = 9625,
  [SMALL_STATE(522)] = 9629,
  [SMALL_STATE(523)] = 9633,
  [SMALL_STATE(524)] = 9637,
  [SMALL_STATE(525)] = 9641,
  [SMALL_STATE(526)] = 9645,
  [SMALL_STATE(527)] = 9649,
  [SMALL_STATE(528)] = 9653,
  [SMALL_STATE(529)] = 9657,
  [SMALL_STATE(530)] = 9661,
  [SMALL_STATE(531)] = 9665,
  [SMALL_STATE(532)] = 9669,
  [SMALL_STATE(533)] = 9673,
  [SMALL_STATE(534)] = 9677,
  [SMALL_STATE(535)] = 9681,
  [SMALL_STATE(536)] = 9685,
  [SMALL_STATE(537)] = 9689,
  [SMALL_STATE(538)] = 9693,
  [SMALL_STATE(539)] = 9697,
  [SMALL_STATE(540)] = 9701,
  [SMALL_STATE(541)] = 9705,
  [SMALL_STATE(542)] = 9709,
  [SMALL_STATE(543)] = 9713,
  [SMALL_STATE(544)] = 9717,
  [SMALL_STATE(545)] = 9721,
  [SMALL_STATE(546)] = 9725,
  [SMALL_STATE(547)] = 9729,
  [SMALL_STATE(548)] = 9733,
  [SMALL_STATE(549)] = 9737,
  [SMALL_STATE(550)] = 9741,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(546),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(546),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(493),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(550),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(4),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(530),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(353),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(354),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(356),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(70),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(358),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(360),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(365),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(350),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(368),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(370),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(373),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(375),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(382),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(383),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(6),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(480),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(376),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(385),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(387),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(76),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(347),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(364),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(397),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(341),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(395),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(400),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(380),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(403),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(401),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(396),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(12),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(376),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(385),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(387),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(76),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(347),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(364),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(397),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(341),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(395),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(404),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(380),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(403),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(401),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(396),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(32),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(32),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(332),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(333),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(504),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(31),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 3, .production_id = 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 3, .production_id = 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(33),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(33),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(520),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(36),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_network_address_wo_port, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_network_address_wo_port, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 6),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 3, .production_id = 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 4),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(514),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 8),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 8),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 3, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(77),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 5, .production_id = 1),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_encode, 5, .production_id = 1),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 5, .production_id = 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(464),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 3, .production_id = 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(491),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(249),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(273),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(546),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(546),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(493),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(381),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(550),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(87),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 4, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 6, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 5, .production_id = 1),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(220),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 3, .production_id = 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_reverse_proxy, 3, .production_id = 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 1, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(515),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2), SHIFT_REPEAT(216),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_encode_format, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_reverse_proxy_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 2, .production_id = 1),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 2, .production_id = 1),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__port_number, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 3),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_address, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 3, .production_id = 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 4),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_import, 4, .production_id = 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_import, 4, .production_id = 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 6, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 6, .production_id = 1),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 5, .production_id = 9),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 5, .production_id = 9),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 5, .production_id = 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 5, .production_id = 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 7, .production_id = 1),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 7, .production_id = 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 11, .production_id = 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 11, .production_id = 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 1),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 3, .production_id = 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 8, .production_id = 1),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 8, .production_id = 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 6, .production_id = 1),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 6, .production_id = 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_block, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 10, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 10, .production_id = 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 5, .production_id = 1),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 5, .production_id = 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 9, .production_id = 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 9, .production_id = 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 6, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 6, .production_id = 11),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_request_body, 8, .production_id = 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_request_body, 8, .production_id = 1),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 7, .production_id = 1),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 7, .production_id = 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 1),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 5, .production_id = 1),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_root, 3, .production_id = 1),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_root, 3, .production_id = 1),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 3, .production_id = 1),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 3, .production_id = 1),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 5, .production_id = 1),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 5, .production_id = 1),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 7, .production_id = 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 7, .production_id = 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle, 5, .production_id = 1),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 4),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 5, .production_id = 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle_path, 7, .production_id = 1),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_handle_path, 7, .production_id = 1),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 5),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 5),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 5, .production_id = 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 5, .production_id = 1),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 5),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_definition, 5),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 1),
  [705] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 7, .production_id = 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_file_server, 4, .production_id = 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_file_server, 4, .production_id = 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 4, .production_id = 1),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_redir, 4, .production_id = 1),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_code, 1),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_log, 4, .production_id = 1),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_log, 4, .production_id = 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(461),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [737] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(192),
  [740] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(192),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(541),
  [748] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(461),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(542),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(393),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [809] = {.entry = {.count = 1, .reusable = false}}, SHIFT(499),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 2),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 2),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [825] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 6),
  [829] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 6),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_options_block, 3),
  [833] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_global_options_block, 3),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 5),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 5),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [847] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [859] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(412),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [877] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(226),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2),
  [882] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(343),
  [885] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(412),
  [888] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 2), SHIFT_REPEAT(411),
  [891] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(227),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2),
  [896] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(408),
  [899] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(407),
  [902] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_log_repeat1, 2), SHIFT_REPEAT(405),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__log_output_file_repeat1, 3),
  [943] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(244),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2),
  [948] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(406),
  [951] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matcher_definition_repeat1, 2), SHIFT_REPEAT(399),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [970] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(251),
  [973] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2),
  [975] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(362),
  [978] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_global_options_block_repeat1, 2), SHIFT_REPEAT(361),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [987] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(540),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 6),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_level, 4, .production_id = 10),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 3, .production_id = 10),
  [1013] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_output, 4, .production_id = 10),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1025] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 4),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1031] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_option_format, 4, .production_id = 10),
  [1033] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [1035] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [1037] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__log_output_file, 7),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1043] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1051] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [1053] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1057] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1065] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1071] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1077] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2),
  [1079] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(278),
  [1082] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(278),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_email, 4, .production_id = 2),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1095] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_global_option_auto_https, 3, .production_id = 2),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [1157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standard_matcher, 2),
  [1159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [1181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [1185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [1187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [1191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [1193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [1203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(525),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [1215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(506),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_request_body_repeat1, 2), SHIFT_REPEAT(322),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [1230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [1320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [1330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(543),
  [1336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(548),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [1436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 5, .production_id = 12),
  [1446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path_regexp, 3, .production_id = 7),
  [1508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_path, 3, .production_id = 7),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(539),
  [1620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
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
