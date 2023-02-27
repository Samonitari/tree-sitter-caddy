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
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 9

enum {
  sym__valid_uri_path_string = 1,
  sym_comment = 2,
  aux_sym__newline_token4 = 3,
  aux_sym__newline_token5 = 4,
  aux_sym__newline_token6 = 5,
  aux_sym__newline_token7 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_http_COLON_SLASH_SLASH = 9,
  anon_sym_https_COLON_SLASH_SLASH = 10,
  anon_sym_localhost = 11,
  sym__ipv4_address = 12,
  sym__ipv6_address = 13,
  sym_domain_address = 14,
  anon_sym_COLON = 15,
  aux_sym__port_number_token1 = 16,
  sym_matcher_name = 17,
  anon_sym_expression = 18,
  anon_sym_file = 19,
  anon_sym_header = 20,
  anon_sym_header_regexp = 21,
  anon_sym_host = 22,
  anon_sym_method = 23,
  anon_sym_not = 24,
  anon_sym_path = 25,
  anon_sym_path_regexp = 26,
  anon_sym_protocol = 27,
  anon_sym_query = 28,
  anon_sym_remote_ip = 29,
  anon_sym_vars = 30,
  anon_sym_vars_regexp = 31,
  aux_sym_standard_matcher_token1 = 32,
  anon_sym_abort = 33,
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
  anon_sym_handle = 50,
  anon_sym_handle_path = 51,
  anon_sym_defer = 52,
  anon_sym_PLUS = 53,
  anon_sym_DASH = 54,
  anon_sym_QMARK = 55,
  sym_header_name = 56,
  aux_sym_header_value_token1 = 57,
  anon_sym_SQUOTE = 58,
  anon_sym_redir = 59,
  sym_uri_path_with_placeholders = 60,
  aux_sym_redir_code_token1 = 61,
  anon_sym_401 = 62,
  anon_sym_temporary = 63,
  anon_sym_permanent = 64,
  anon_sym_html = 65,
  anon_sym_tls = 66,
  anon_sym_internal = 67,
  sym_email_address = 68,
  sym_snippet_name = 69,
  anon_sym_import = 70,
  sym__eof = 71,
  sym_document = 72,
  sym_site_block = 73,
  sym_site_address = 74,
  sym_protocol = 75,
  sym__ip_or_domain_address = 76,
  sym__port_number = 77,
  sym_matcher_definition = 78,
  sym_standard_matcher = 79,
  sym_directive_block = 80,
  sym_directive_abort = 81,
  sym_directive_bind = 82,
  sym__network = 83,
  sym_unix_path = 84,
  sym_directive_encode = 85,
  sym_encode_format = 86,
  sym_directive_handle = 87,
  sym_directive_header = 88,
  sym_field_manipulator = 89,
  sym_field_replace = 90,
  sym_field_add_or_set = 91,
  sym_field_delete = 92,
  sym_field_set_default = 93,
  sym_header_value = 94,
  sym_directive_redir = 95,
  sym_redir_or_rewrite_target = 96,
  sym_redir_code = 97,
  sym_directive_tls = 98,
  sym_matcher_token = 99,
  sym_snippet = 100,
  sym_import = 101,
  aux_sym_document_repeat1 = 102,
  aux_sym_site_block_repeat1 = 103,
  aux_sym_directive_bind_repeat1 = 104,
  aux_sym_directive_encode_repeat1 = 105,
  aux_sym_directive_handle_repeat1 = 106,
  aux_sym_directive_header_repeat1 = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__valid_uri_path_string] = "_valid_uri_path_string",
  [sym_comment] = "comment",
  [aux_sym__newline_token4] = "_newline_token4",
  [aux_sym__newline_token5] = "_newline_token5",
  [aux_sym__newline_token6] = "_newline_token6",
  [aux_sym__newline_token7] = "_newline_token7",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_http_COLON_SLASH_SLASH] = "http://",
  [anon_sym_https_COLON_SLASH_SLASH] = "https://",
  [anon_sym_localhost] = "localhost",
  [sym__ipv4_address] = "_ipv4_address",
  [sym__ipv6_address] = "_ipv6_address",
  [sym_domain_address] = "domain_address",
  [anon_sym_COLON] = ":",
  [aux_sym__port_number_token1] = "_port_number_token1",
  [sym_matcher_name] = "matcher_name",
  [anon_sym_expression] = "expression",
  [anon_sym_file] = "file",
  [anon_sym_header] = "header",
  [anon_sym_header_regexp] = "header_regexp",
  [anon_sym_host] = "host",
  [anon_sym_method] = "method",
  [anon_sym_not] = "not",
  [anon_sym_path] = "path",
  [anon_sym_path_regexp] = "path_regexp",
  [anon_sym_protocol] = "protocol",
  [anon_sym_query] = "query",
  [anon_sym_remote_ip] = "remote_ip",
  [anon_sym_vars] = "vars",
  [anon_sym_vars_regexp] = "vars_regexp",
  [aux_sym_standard_matcher_token1] = "standard_matcher_token1",
  [anon_sym_abort] = "abort",
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
  [anon_sym_handle] = "handle",
  [anon_sym_handle_path] = "handle_path",
  [anon_sym_defer] = "defer",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [sym_header_name] = "header_name",
  [aux_sym_header_value_token1] = "header_value_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_redir] = "redir",
  [sym_uri_path_with_placeholders] = "uri_path_with_placeholders",
  [aux_sym_redir_code_token1] = "redir_code_token1",
  [anon_sym_401] = "401",
  [anon_sym_temporary] = "temporary",
  [anon_sym_permanent] = "permanent",
  [anon_sym_html] = "html",
  [anon_sym_tls] = "tls",
  [anon_sym_internal] = "internal",
  [sym_email_address] = "email_address",
  [sym_snippet_name] = "snippet_name",
  [anon_sym_import] = "import",
  [sym__eof] = "_eof",
  [sym_document] = "document",
  [sym_site_block] = "site_block",
  [sym_site_address] = "site_address",
  [sym_protocol] = "protocol",
  [sym__ip_or_domain_address] = "_ip_or_domain_address",
  [sym__port_number] = "_port_number",
  [sym_matcher_definition] = "matcher_definition",
  [sym_standard_matcher] = "standard_matcher",
  [sym_directive_block] = "directive_block",
  [sym_directive_abort] = "directive_abort",
  [sym_directive_bind] = "directive_bind",
  [sym__network] = "_network",
  [sym_unix_path] = "unix_path",
  [sym_directive_encode] = "directive_encode",
  [sym_encode_format] = "encode_format",
  [sym_directive_handle] = "directive_handle",
  [sym_directive_header] = "directive_header",
  [sym_field_manipulator] = "field_manipulator",
  [sym_field_replace] = "field_replace",
  [sym_field_add_or_set] = "field_add_or_set",
  [sym_field_delete] = "field_delete",
  [sym_field_set_default] = "field_set_default",
  [sym_header_value] = "header_value",
  [sym_directive_redir] = "directive_redir",
  [sym_redir_or_rewrite_target] = "redir_or_rewrite_target",
  [sym_redir_code] = "redir_code",
  [sym_directive_tls] = "directive_tls",
  [sym_matcher_token] = "matcher_token",
  [sym_snippet] = "snippet",
  [sym_import] = "import",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_site_block_repeat1] = "site_block_repeat1",
  [aux_sym_directive_bind_repeat1] = "directive_bind_repeat1",
  [aux_sym_directive_encode_repeat1] = "directive_encode_repeat1",
  [aux_sym_directive_handle_repeat1] = "directive_handle_repeat1",
  [aux_sym_directive_header_repeat1] = "directive_header_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__valid_uri_path_string] = sym__valid_uri_path_string,
  [sym_comment] = sym_comment,
  [aux_sym__newline_token4] = aux_sym__newline_token4,
  [aux_sym__newline_token5] = aux_sym__newline_token5,
  [aux_sym__newline_token6] = aux_sym__newline_token6,
  [aux_sym__newline_token7] = aux_sym__newline_token7,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_http_COLON_SLASH_SLASH] = anon_sym_http_COLON_SLASH_SLASH,
  [anon_sym_https_COLON_SLASH_SLASH] = anon_sym_https_COLON_SLASH_SLASH,
  [anon_sym_localhost] = anon_sym_localhost,
  [sym__ipv4_address] = sym__ipv4_address,
  [sym__ipv6_address] = sym__ipv6_address,
  [sym_domain_address] = sym_domain_address,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym__port_number_token1] = aux_sym__port_number_token1,
  [sym_matcher_name] = sym_matcher_name,
  [anon_sym_expression] = anon_sym_expression,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_header] = anon_sym_header,
  [anon_sym_header_regexp] = anon_sym_header_regexp,
  [anon_sym_host] = anon_sym_host,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_path] = anon_sym_path,
  [anon_sym_path_regexp] = anon_sym_path_regexp,
  [anon_sym_protocol] = anon_sym_protocol,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_remote_ip] = anon_sym_remote_ip,
  [anon_sym_vars] = anon_sym_vars,
  [anon_sym_vars_regexp] = anon_sym_vars_regexp,
  [aux_sym_standard_matcher_token1] = aux_sym_standard_matcher_token1,
  [anon_sym_abort] = anon_sym_abort,
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
  [anon_sym_handle] = anon_sym_handle,
  [anon_sym_handle_path] = anon_sym_handle_path,
  [anon_sym_defer] = anon_sym_defer,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_header_name] = sym_header_name,
  [aux_sym_header_value_token1] = aux_sym_header_value_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_redir] = anon_sym_redir,
  [sym_uri_path_with_placeholders] = sym_uri_path_with_placeholders,
  [aux_sym_redir_code_token1] = aux_sym_redir_code_token1,
  [anon_sym_401] = anon_sym_401,
  [anon_sym_temporary] = anon_sym_temporary,
  [anon_sym_permanent] = anon_sym_permanent,
  [anon_sym_html] = anon_sym_html,
  [anon_sym_tls] = anon_sym_tls,
  [anon_sym_internal] = anon_sym_internal,
  [sym_email_address] = sym_email_address,
  [sym_snippet_name] = sym_snippet_name,
  [anon_sym_import] = anon_sym_import,
  [sym__eof] = sym__eof,
  [sym_document] = sym_document,
  [sym_site_block] = sym_site_block,
  [sym_site_address] = sym_site_address,
  [sym_protocol] = sym_protocol,
  [sym__ip_or_domain_address] = sym__ip_or_domain_address,
  [sym__port_number] = sym__port_number,
  [sym_matcher_definition] = sym_matcher_definition,
  [sym_standard_matcher] = sym_standard_matcher,
  [sym_directive_block] = sym_directive_block,
  [sym_directive_abort] = sym_directive_abort,
  [sym_directive_bind] = sym_directive_bind,
  [sym__network] = sym__network,
  [sym_unix_path] = sym_unix_path,
  [sym_directive_encode] = sym_directive_encode,
  [sym_encode_format] = sym_encode_format,
  [sym_directive_handle] = sym_directive_handle,
  [sym_directive_header] = sym_directive_header,
  [sym_field_manipulator] = sym_field_manipulator,
  [sym_field_replace] = sym_field_replace,
  [sym_field_add_or_set] = sym_field_add_or_set,
  [sym_field_delete] = sym_field_delete,
  [sym_field_set_default] = sym_field_set_default,
  [sym_header_value] = sym_header_value,
  [sym_directive_redir] = sym_directive_redir,
  [sym_redir_or_rewrite_target] = sym_redir_or_rewrite_target,
  [sym_redir_code] = sym_redir_code,
  [sym_directive_tls] = sym_directive_tls,
  [sym_matcher_token] = sym_matcher_token,
  [sym_snippet] = sym_snippet,
  [sym_import] = sym_import,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_site_block_repeat1] = aux_sym_site_block_repeat1,
  [aux_sym_directive_bind_repeat1] = aux_sym_directive_bind_repeat1,
  [aux_sym_directive_encode_repeat1] = aux_sym_directive_encode_repeat1,
  [aux_sym_directive_handle_repeat1] = aux_sym_directive_handle_repeat1,
  [aux_sym_directive_header_repeat1] = aux_sym_directive_header_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__valid_uri_path_string] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
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
  [anon_sym_expression] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_header_regexp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_host] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_path_regexp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_protocol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remote_ip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vars] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vars_regexp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_standard_matcher_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_abort] = {
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
  [anon_sym_handle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_handle_path] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_redir] = {
    .visible = true,
    .named = false,
  },
  [sym_uri_path_with_placeholders] = {
    .visible = true,
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
  [sym_snippet_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
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
  [sym_directive_handle] = {
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
  [sym_directive_redir] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_or_rewrite_target] = {
    .visible = true,
    .named = true,
  },
  [sym_redir_code] = {
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
  [sym_snippet] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
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
};

enum {
  field_address_target = 1,
  field_cert_file = 2,
  field_directive_name = 3,
  field_key_file = 4,
  field_path_matcher = 5,
  field_uri_path_target = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address_target] = "address_target",
  [field_cert_file] = "cert_file",
  [field_directive_name] = "directive_name",
  [field_key_file] = "key_file",
  [field_path_matcher] = "path_matcher",
  [field_uri_path_target] = "uri_path_target",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 3},
  [7] = {.index = 9, .length = 3},
  [8] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_directive_name, 0},
  [1] =
    {field_path_matcher, 0},
  [2] =
    {field_address_target, 0},
  [3] =
    {field_uri_path_target, 0},
  [4] =
    {field_address_target, 0},
    {field_address_target, 1},
  [6] =
    {field_cert_file, 1},
    {field_directive_name, 0},
    {field_key_file, 2},
  [9] =
    {field_address_target, 0},
    {field_address_target, 1},
    {field_address_target, 2},
  [12] =
    {field_cert_file, 2},
    {field_directive_name, 0},
    {field_key_file, 3},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 11,
  [27] = 27,
  [28] = 14,
  [29] = 12,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 21,
  [44] = 2,
  [45] = 45,
  [46] = 19,
  [47] = 47,
  [48] = 48,
  [49] = 33,
  [50] = 34,
  [51] = 36,
  [52] = 47,
  [53] = 53,
  [54] = 33,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 6,
  [61] = 41,
  [62] = 42,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 7,
  [68] = 68,
  [69] = 42,
  [70] = 70,
  [71] = 71,
  [72] = 12,
  [73] = 48,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 8,
  [79] = 45,
  [80] = 80,
  [81] = 81,
  [82] = 80,
  [83] = 83,
  [84] = 80,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 14,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 34,
  [101] = 93,
  [102] = 41,
  [103] = 14,
  [104] = 11,
  [105] = 42,
  [106] = 12,
  [107] = 21,
  [108] = 19,
  [109] = 109,
  [110] = 110,
  [111] = 41,
  [112] = 112,
  [113] = 112,
  [114] = 112,
  [115] = 42,
  [116] = 36,
  [117] = 66,
  [118] = 34,
  [119] = 59,
  [120] = 33,
  [121] = 47,
  [122] = 68,
  [123] = 64,
  [124] = 63,
  [125] = 125,
  [126] = 41,
  [127] = 127,
  [128] = 125,
  [129] = 42,
  [130] = 125,
  [131] = 131,
  [132] = 45,
  [133] = 131,
  [134] = 134,
  [135] = 131,
  [136] = 136,
  [137] = 134,
  [138] = 131,
  [139] = 139,
  [140] = 136,
  [141] = 48,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 148,
  [150] = 147,
  [151] = 14,
  [152] = 12,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 155,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 165,
  [177] = 177,
  [178] = 170,
  [179] = 156,
  [180] = 154,
  [181] = 181,
  [182] = 182,
  [183] = 175,
  [184] = 184,
  [185] = 185,
  [186] = 175,
  [187] = 165,
  [188] = 156,
  [189] = 154,
  [190] = 155,
  [191] = 191,
  [192] = 156,
  [193] = 154,
  [194] = 155,
  [195] = 156,
  [196] = 154,
  [197] = 155,
  [198] = 156,
  [199] = 154,
  [200] = 200,
  [201] = 171,
  [202] = 191,
  [203] = 168,
  [204] = 168,
  [205] = 168,
  [206] = 168,
  [207] = 158,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(383);
      if (lookahead == '\f') ADVANCE(422);
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '\'') ADVANCE(894);
      if (lookahead == '(') ADVANCE(1093);
      if (lookahead == '+') ADVANCE(777);
      if (lookahead == '-') ADVANCE(780);
      if (lookahead == '/') ADVANCE(620);
      if (lookahead == '1') ADVANCE(569);
      if (lookahead == '2') ADVANCE(563);
      if (lookahead == '3') ADVANCE(566);
      if (lookahead == '4') ADVANCE(628);
      if (lookahead == '6') ADVANCE(630);
      if (lookahead == ':') ADVANCE(559);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead == 'b') ADVANCE(597);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(599);
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead == 'h') ADVANCE(590);
      if (lookahead == 'i') ADVANCE(598);
      if (lookahead == 'l') ADVANCE(600);
      if (lookahead == 'p') ADVANCE(595);
      if (lookahead == 'r') ADVANCE(596);
      if (lookahead == 't') ADVANCE(592);
      if (lookahead == 'u') ADVANCE(593);
      if (lookahead == 'z') ADVANCE(601);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == 133) ADVANCE(421);
      if (lookahead == 8232) ADVANCE(423);
      if (lookahead == 8233) ADVANCE(424);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('!' <= lookahead && lookahead <= ')') ||
          (',' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '*' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'y')) ADVANCE(603);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '1') ADVANCE(642);
      if (lookahead == '2') ADVANCE(638);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'b') ADVANCE(702);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(701);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'r') ADVANCE(722);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(707);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(732);
      if (lookahead == 'r') ADVANCE(722);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '1') ADVANCE(642);
      if (lookahead == '2') ADVANCE(638);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'a') ADVANCE(700);
      if (lookahead == 'b') ADVANCE(702);
      if (lookahead == 'e') ADVANCE(703);
      if (lookahead == 'f') ADVANCE(701);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 'r') ADVANCE(722);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c' ||
          lookahead == 'd') ADVANCE(707);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '1') ADVANCE(642);
      if (lookahead == '2') ADVANCE(638);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(701);
      if (lookahead == 'i') ADVANCE(739);
      if (lookahead == 't') ADVANCE(715);
      if (lookahead == 'u') ADVANCE(721);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(707);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '1') ADVANCE(642);
      if (lookahead == '2') ADVANCE(638);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == 'f') ADVANCE(701);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(640);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(707);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == 'a') ADVANCE(712);
      if (lookahead == 'b') ADVANCE(726);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead == 'r') ADVANCE(722);
      if (lookahead == 't') ADVANCE(729);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(633);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '#') ADVANCE(419);
      if (lookahead == '\'') ADVANCE(895);
      if (lookahead == '@') ADVANCE(579);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == 'h') ADVANCE(861);
      if (lookahead == 'i') ADVANCE(877);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '\'') ADVANCE(895);
      if (lookahead == '+') ADVANCE(778);
      if (lookahead == '-') ADVANCE(781);
      if (lookahead == '?') ADVANCE(784);
      if (lookahead == 'd') ADVANCE(831);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('!' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('0' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '\'') ADVANCE(895);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == 'b') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead == 'h') ADVANCE(861);
      if (lookahead == 'r') ADVANCE(869);
      if (lookahead == 't') ADVANCE(875);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '\'') ADVANCE(895);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(429);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(635);
      if (lookahead == '\'') ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == '#') ADVANCE(394);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(665);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '}') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == 'a') ADVANCE(648);
      if (lookahead == 'b') ADVANCE(660);
      if (lookahead == 'e') ADVANCE(666);
      if (lookahead == 'h') ADVANCE(647);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead == 'r') ADVANCE(655);
      if (lookahead == 't') ADVANCE(662);
      if (lookahead == '}') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(634);
      if (lookahead == 'i') ADVANCE(667);
      if (lookahead == '}') ADVANCE(428);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(381);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '+') ADVANCE(777);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(798);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead == 'i') ADVANCE(802);
      if (lookahead == 'r') ADVANCE(794);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(1117);
      if (lookahead == 'b') ADVANCE(1136);
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'i') ADVANCE(1145);
      if (lookahead == 'r') ADVANCE(1127);
      if (lookahead == 't') ADVANCE(1140);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '3') ADVANCE(1090);
      if (lookahead == '4') ADVANCE(1035);
      if (lookahead == '@') ADVANCE(578);
      if (lookahead == 'a') ADVANCE(1041);
      if (lookahead == 'b') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead == 'h') ADVANCE(1040);
      if (lookahead == 'i') ADVANCE(1060);
      if (lookahead == 'p') ADVANCE(1048);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '+') ADVANCE(776);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'b') ADVANCE(837);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == 'h') ADVANCE(819);
      if (lookahead == 'i') ADVANCE(841);
      if (lookahead == 'r') ADVANCE(827);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '3') ADVANCE(365);
      if (lookahead == '4') ADVANCE(256);
      if (lookahead == '@') ADVANCE(580);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == 'g') ADVANCE(357);
      if (lookahead == 'h') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'p') ADVANCE(315);
      if (lookahead == 'r') ADVANCE(316);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == 'z') ADVANCE(350);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '+') ADVANCE(777);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'b') ADVANCE(798);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == 'h') ADVANCE(786);
      if (lookahead == 'r') ADVANCE(794);
      if (lookahead == 't') ADVANCE(800);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 23:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '+') ADVANCE(777);
      if (lookahead == '-') ADVANCE(779);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '~') ADVANCE(1187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 24:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '/') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 25:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'a') ADVANCE(1117);
      if (lookahead == 'b') ADVANCE(1136);
      if (lookahead == 'e') ADVANCE(1149);
      if (lookahead == 'h') ADVANCE(1116);
      if (lookahead == 'r') ADVANCE(1127);
      if (lookahead == 't') ADVANCE(1140);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 26:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == 'g') ADVANCE(1186);
      if (lookahead == 'z') ADVANCE(1176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 27:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '@') ADVANCE(577);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 28:
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(1126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 29:
      if (lookahead == '%') ADVANCE(379);
      END_STATE();
    case 30:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 31:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(463);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(471);
      END_STATE();
    case 42:
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == '%') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == '%') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == '%') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(475);
      END_STATE();
    case 46:
      if (lookahead == '%') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '%') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '3') ADVANCE(1090);
      if (lookahead == '4') ADVANCE(1035);
      if (lookahead == 'a') ADVANCE(1041);
      if (lookahead == 'b') ADVANCE(1056);
      if (lookahead == 'e') ADVANCE(1064);
      if (lookahead == 'h') ADVANCE(1040);
      if (lookahead == 'p') ADVANCE(1048);
      if (lookahead == 'r') ADVANCE(1049);
      if (lookahead == 't') ADVANCE(1054);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 49:
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '3') ADVANCE(1090);
      if (lookahead == '4') ADVANCE(1035);
      if (lookahead == 'h') ADVANCE(1086);
      if (lookahead == 'p') ADVANCE(1048);
      if (lookahead == 't') ADVANCE(1055);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 50:
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'h') ADVANCE(904);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(906);
      END_STATE();
    case 51:
      if (lookahead == ')') ADVANCE(1214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '+') ADVANCE(776);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == 'a') ADVANCE(820);
      if (lookahead == 'b') ADVANCE(837);
      if (lookahead == 'e') ADVANCE(842);
      if (lookahead == 'h') ADVANCE(819);
      if (lookahead == 'r') ADVANCE(827);
      if (lookahead == 't') ADVANCE(839);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(52)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 53:
      if (lookahead == '+') ADVANCE(776);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == 'd') ADVANCE(830);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 54:
      if (lookahead == '+') ADVANCE(776);
      if (lookahead == '-') ADVANCE(782);
      if (lookahead == '?') ADVANCE(783);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '}') ADVANCE(427);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 55:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == '5') ADVANCE(215);
      if (lookahead == ':') ADVANCE(267);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 56:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 58:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 59:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(558);
      END_STATE();
    case 63:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 64:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(261);
      if (lookahead == '5') ADVANCE(223);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 65:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 66:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 67:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '5') ADVANCE(226);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 68:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 69:
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 70:
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '.') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '-') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 72:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(380);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(231);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '0') ADVANCE(84);
      if (lookahead == '1') ADVANCE(83);
      if (lookahead == '2') ADVANCE(80);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '5') ADVANCE(81);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == ']') ADVANCE(1211);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == ']') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(84);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == ']') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == ']') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == ']') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      if (lookahead == '-') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == '-') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 91:
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      if (lookahead == '-') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 94:
      if (lookahead == '-') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 95:
      if (lookahead == '-') ADVANCE(98);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == '-') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 99:
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == '-') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 103:
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 104:
      if (lookahead == '-') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 106:
      if (lookahead == '-') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == '-') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 111:
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '.') ADVANCE(363);
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
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 188:
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 189:
      if (lookahead == '-') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(191);
      END_STATE();
    case 190:
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 't') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 191:
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 192:
      if (lookahead == '-') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 193:
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'h') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      if (lookahead == '-') ADVANCE(199);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      if (lookahead == '-') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 198:
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 200:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 201:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '0') ADVANCE(210);
      if (lookahead == ':') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 202:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 203:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'a') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 204:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'p') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 205:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 206:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 207:
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 208:
      if (lookahead == '-') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 209:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 210:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 211:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(251);
      if (lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 212:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 213:
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 214:
      if (lookahead == '-') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(195);
      END_STATE();
    case 215:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(200);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 216:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 217:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(260);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 218:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '8') ADVANCE(201);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 219:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 220:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 'c') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 221:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 222:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 223:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(206);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 224:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 225:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 226:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(207);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 227:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 228:
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 229:
      if (lookahead == '-') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 230:
      if (lookahead == '.') ADVANCE(363);
      END_STATE();
    case 231:
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 232:
      if (lookahead == '.') ADVANCE(262);
      END_STATE();
    case 233:
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(233);
      END_STATE();
    case 234:
      if (lookahead == '.') ADVANCE(79);
      END_STATE();
    case 235:
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '5') ADVANCE(236);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(238);
      END_STATE();
    case 236:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(234);
      END_STATE();
    case 237:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 239:
      if (lookahead == '.') ADVANCE(232);
      END_STATE();
    case 240:
      if (lookahead == '.') ADVANCE(258);
      END_STATE();
    case 241:
      if (lookahead == '.') ADVANCE(258);
      if (lookahead == '5') ADVANCE(242);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(244);
      END_STATE();
    case 242:
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(240);
      END_STATE();
    case 243:
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == '.') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      END_STATE();
    case 245:
      if (lookahead == '.') ADVANCE(259);
      END_STATE();
    case 246:
      if (lookahead == '.') ADVANCE(259);
      if (lookahead == '5') ADVANCE(247);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(249);
      END_STATE();
    case 247:
      if (lookahead == '.') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(245);
      END_STATE();
    case 248:
      if (lookahead == '.') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == '.') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 250:
      if (lookahead == '/') ADVANCE(620);
      if (lookahead == '4') ADVANCE(627);
      if (lookahead == '6') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(250)
      END_STATE();
    case 251:
      if (lookahead == '/') ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == '/') ADVANCE(430);
      END_STATE();
    case 253:
      if (lookahead == '/') ADVANCE(431);
      END_STATE();
    case 254:
      if (lookahead == '/') ADVANCE(253);
      END_STATE();
    case 255:
      if (lookahead == '0') ADVANCE(476);
      if (lookahead == '1') ADVANCE(508);
      if (lookahead == '2') ADVANCE(482);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 256:
      if (lookahead == '0') ADVANCE(263);
      END_STATE();
    case 257:
      if (lookahead == '0') ADVANCE(245);
      if (lookahead == '1') ADVANCE(248);
      if (lookahead == '2') ADVANCE(246);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 258:
      if (lookahead == '0') ADVANCE(234);
      if (lookahead == '1') ADVANCE(237);
      if (lookahead == '2') ADVANCE(235);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 259:
      if (lookahead == '0') ADVANCE(240);
      if (lookahead == '1') ADVANCE(243);
      if (lookahead == '2') ADVANCE(241);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 260:
      if (lookahead == '1') ADVANCE(69);
      if (lookahead == '2') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 261:
      if (lookahead == '1') ADVANCE(441);
      if (lookahead == '2') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 262:
      if (lookahead == '1') ADVANCE(551);
      if (lookahead == '2') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 263:
      if (lookahead == '1') ADVANCE(1189);
      END_STATE();
    case 264:
      if (lookahead == '1') ADVANCE(66);
      if (lookahead == '2') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 265:
      if (lookahead == '1') ADVANCE(502);
      if (lookahead == '2') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 266:
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 267:
      if (lookahead == ':') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 268:
      if (lookahead == ':') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      END_STATE();
    case 269:
      if (lookahead == ':') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 270:
      if (lookahead == ':') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 271:
      if (lookahead == ':') ADVANCE(269);
      END_STATE();
    case 272:
      if (lookahead == ':') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      if (lookahead == ':') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      if (lookahead == ':') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      if (lookahead == ':') ADVANCE(270);
      END_STATE();
    case 276:
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 278:
      if (lookahead == ':') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 279:
      if (lookahead == ':') ADVANCE(268);
      END_STATE();
    case 280:
      if (lookahead == ':') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == ':') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 282:
      if (lookahead == ':') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead == ':') ADVANCE(295);
      END_STATE();
    case 284:
      if (lookahead == ':') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      if (lookahead == ':') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      if (lookahead == ':') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 288:
      if (lookahead == ':') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      if (lookahead == ':') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      if (lookahead == ':') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      if (lookahead == ':') ADVANCE(297);
      END_STATE();
    case 292:
      if (lookahead == ':') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      if (lookahead == ':') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      if (lookahead == ':') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      if (lookahead == ':') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 296:
      if (lookahead == ':') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 297:
      if (lookahead == ':') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 298:
      if (lookahead == '@') ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == '[') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 300:
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == ']') ADVANCE(1213);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(300);
      END_STATE();
    case 301:
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == ']') ADVANCE(1213);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(300);
      END_STATE();
    case 302:
      if (lookahead == '\\') ADVANCE(301);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(300);
      END_STATE();
    case 303:
      if (lookahead == 'a') ADVANCE(335);
      END_STATE();
    case 304:
      if (lookahead == 'a') ADVANCE(314);
      END_STATE();
    case 305:
      if (lookahead == 'a') ADVANCE(345);
      END_STATE();
    case 306:
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 307:
      if (lookahead == 'b') ADVANCE(336);
      END_STATE();
    case 308:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 309:
      if (lookahead == 'd') ADVANCE(612);
      END_STATE();
    case 310:
      if (lookahead == 'd') ADVANCE(763);
      END_STATE();
    case 311:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 312:
      if (lookahead == 'd') ADVANCE(324);
      END_STATE();
    case 313:
      if (lookahead == 'd') ADVANCE(317);
      END_STATE();
    case 314:
      if (lookahead == 'd') ADVANCE(320);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(753);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 322:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 323:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 324:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 325:
      if (lookahead == 'l') ADVANCE(1198);
      END_STATE();
    case 326:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 327:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 328:
      if (lookahead == 'm') ADVANCE(325);
      END_STATE();
    case 329:
      if (lookahead == 'm') ADVANCE(303);
      END_STATE();
    case 330:
      if (lookahead == 'm') ADVANCE(341);
      END_STATE();
    case 331:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 332:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 333:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 334:
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 335:
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 336:
      if (lookahead == 'o') ADVANCE(346);
      END_STATE();
    case 337:
      if (lookahead == 'o') ADVANCE(348);
      END_STATE();
    case 338:
      if (lookahead == 'o') ADVANCE(313);
      END_STATE();
    case 339:
      if (lookahead == 'o') ADVANCE(349);
      END_STATE();
    case 340:
      if (lookahead == 'p') ADVANCE(761);
      END_STATE();
    case 341:
      if (lookahead == 'p') ADVANCE(337);
      END_STATE();
    case 342:
      if (lookahead == 'p') ADVANCE(339);
      END_STATE();
    case 343:
      if (lookahead == 'r') ADVANCE(896);
      END_STATE();
    case 344:
      if (lookahead == 'r') ADVANCE(581);
      END_STATE();
    case 345:
      if (lookahead == 'r') ADVANCE(356);
      END_STATE();
    case 346:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 347:
      if (lookahead == 'r') ADVANCE(329);
      END_STATE();
    case 348:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 349:
      if (lookahead == 'r') ADVANCE(353);
      END_STATE();
    case 350:
      if (lookahead == 's') ADVANCE(355);
      END_STATE();
    case 351:
      if (lookahead == 's') ADVANCE(1201);
      END_STATE();
    case 352:
      if (lookahead == 't') ADVANCE(604);
      END_STATE();
    case 353:
      if (lookahead == 't') ADVANCE(1215);
      END_STATE();
    case 354:
      if (lookahead == 't') ADVANCE(1195);
      END_STATE();
    case 355:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 356:
      if (lookahead == 'y') ADVANCE(1192);
      END_STATE();
    case 357:
      if (lookahead == 'z') ADVANCE(323);
      END_STATE();
    case 358:
      if (lookahead == '}') ADVANCE(1092);
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(359)
      if (lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(589);
      END_STATE();
    case 360:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(636);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 361:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(361)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 362:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(362)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      END_STATE();
    case 363:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 364:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1188);
      END_STATE();
    case 365:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 366:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1187);
      END_STATE();
    case 367:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1092);
      END_STATE();
    case 368:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 369:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      END_STATE();
    case 370:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 371:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 372:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      END_STATE();
    case 373:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 374:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 375:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 376:
      if (lookahead == '.' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(358);
      END_STATE();
    case 377:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      END_STATE();
    case 378:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(233);
      END_STATE();
    case 379:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 380:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(230);
      END_STATE();
    case 381:
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(16);
      END_STATE();
    case 382:
      if (eof) ADVANCE(383);
      if (lookahead == '#') ADVANCE(420);
      if (lookahead == '\'') ADVANCE(893);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '/') ADVANCE(620);
      if (lookahead == '1') ADVANCE(57);
      if (lookahead == '2') ADVANCE(55);
      if (lookahead == ':') ADVANCE(560);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == 'l') ADVANCE(60);
      if (lookahead == '{') ADVANCE(425);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(382)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(59);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead == '.') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '0') ADVANCE(391);
      if (lookahead == '1') ADVANCE(390);
      if (lookahead == '2') ADVANCE(387);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == '5') ADVANCE(388);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == ']') ADVANCE(420);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == ']') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(391);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == ']') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == ']') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == ']') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (lookahead == ':') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '@') ADVANCE(413);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead == '5') ADVANCE(396);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead == '5') ADVANCE(401);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead == '5') ADVANCE(406);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '.') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '0') ADVANCE(409);
      if (lookahead == '1') ADVANCE(408);
      if (lookahead == '2') ADVANCE(405);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '0') ADVANCE(399);
      if (lookahead == '1') ADVANCE(398);
      if (lookahead == '2') ADVANCE(395);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '0') ADVANCE(404);
      if (lookahead == '1') ADVANCE(403);
      if (lookahead == '2') ADVANCE(400);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '[') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == ']') ADVANCE(414);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(415);
      if (lookahead == ']') ADVANCE(414);
      if ((1 <= lookahead && lookahead <= '\t') ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 127)) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(415);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          ('/' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_comment);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym__newline_token4);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym__newline_token5);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym__newline_token6);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym__newline_token7);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '.') ADVANCE(378);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          lookahead == '=' ||
          lookahead == '?' ||
          ('^' <= lookahead && lookahead <= '~')) ADVANCE(233);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_http_COLON_SLASH_SLASH);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_https_COLON_SLASH_SLASH);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_localhost);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '5') ADVANCE(435);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(436);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(438);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('6' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(438);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (lookahead == '5') ADVANCE(443);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(445);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(214);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(442);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (lookahead == '5') ADVANCE(447);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(450);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__ipv4_address);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__ipv6_address);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(453);
      if (lookahead == ':') ADVANCE(41);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(457);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(458);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(457);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(455);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == '1') ADVANCE(456);
      if (lookahead == '2') ADVANCE(452);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(460);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(461);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(41);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(464);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(466);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(33);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(468);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(469);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(470);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(370);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(473);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '%') ADVANCE(379);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(474);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '0') ADVANCE(477);
      if (lookahead == ':') ADVANCE(265);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == ':') ADVANCE(265);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(483);
      if (lookahead == ':') ADVANCE(375);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(489);
      if (lookahead == ':') ADVANCE(370);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(495);
      if (lookahead == ':') ADVANCE(371);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(501);
      if (lookahead == ':') ADVANCE(373);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == '5') ADVANCE(507);
      if (lookahead == ':') ADVANCE(374);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(487);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(493);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(499);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(505);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(511);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '.') ADVANCE(239);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '0') ADVANCE(521);
      if (lookahead == ':') ADVANCE(265);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(486);
      if (lookahead == '2') ADVANCE(478);
      if (lookahead == 'f') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(528);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(490);
      if (lookahead == '2') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(534);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(496);
      if (lookahead == '2') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(538);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(502);
      if (lookahead == '2') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(542);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '1') ADVANCE(508);
      if (lookahead == '2') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(546);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == '5') ADVANCE(549);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(550);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(255);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(265);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(526);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(522);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (lookahead == 'f') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(527);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(522);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(526);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(527);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(372);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(531);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(370);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(535);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(371);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(540);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(537);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(539);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(373);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(544);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(541);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(543);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(374);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(545);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (lookahead == ':') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(547);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(451);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(451);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(552);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(553);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(532);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__ipv6_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_domain_address);
      if (lookahead == '-') ADVANCE(208);
      if (lookahead == '.') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (lookahead == '1') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (lookahead == '5') ADVANCE(564);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(568);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(567);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__port_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1092);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_matcher_name);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_matcher_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(580);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_header);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_header);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_header);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == 't') ADVANCE(1146);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(1155);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(1160);
      if (lookahead == 'e') ADVANCE(1148);
      if (lookahead == 'l') ADVANCE(1175);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1161);
      if (lookahead == 'n') ADVANCE(1137);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1134);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1171);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1124);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(1165);
      if (lookahead == 'n') ADVANCE(1183);
      if (lookahead == 'p') ADVANCE(625);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1119);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1182);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'z') ADVANCE(1138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_standard_matcher_token1);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_abort);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_abort);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_abort);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_bind);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_bind);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_bind);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_tcp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_udp);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_udp);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_ip);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_ip);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_4);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (lookahead == '0') ADVANCE(562);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_6);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_unix);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_unix);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(381);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(16);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(636);
      if (('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_unix_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('/' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(637);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == '5') ADVANCE(639);
      if (lookahead == ':') ADVANCE(267);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(643);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(644);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(696);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(663);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'a') ADVANCE(670);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'b') ADVANCE(671);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'c') ADVANCE(672);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(661);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(664);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'd') ADVANCE(659);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(757);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(769);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(678);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'e') ADVANCE(676);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(669);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'i') ADVANCE(675);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(657);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(674);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(683);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(645);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(650);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'n') ADVANCE(652);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(677);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(653);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'o') ADVANCE(679);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(673);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(900);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(681);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(668);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 'r') ADVANCE(682);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 's') ADVANCE(1205);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 't') ADVANCE(608);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 't') ADVANCE(1219);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(697);
      if (lookahead == '5') ADVANCE(686);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(689);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(689);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(697);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(698);
      if (lookahead == '5') ADVANCE(691);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(692);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(694);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(694);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '.') ADVANCE(698);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == ':') ADVANCE(267);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(693);
      if (lookahead == '2') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(449);
      if (lookahead == '2') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(448);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '1') ADVANCE(688);
      if (lookahead == '2') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '8') ADVANCE(695);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(705);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(706);
      if (('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(267);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == ':') ADVANCE(30);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(718);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'a') ADVANCE(735);
      if (lookahead == 'e') ADVANCE(710);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'b') ADVANCE(736);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(737);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(740);
      if (lookahead == 'l') ADVANCE(747);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'c') ADVANCE(740);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(618);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(730);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(725);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(728);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(723);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'd') ADVANCE(741);
      if (lookahead == 'n') ADVANCE(727);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(719);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(759);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(771);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'e') ADVANCE(745);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(734);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(750);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'i') ADVANCE(744);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(747);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'l') ADVANCE(724);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(742);
      if (lookahead == 'p') ADVANCE(626);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'm') ADVANCE(742);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(713);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'n') ADVANCE(717);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(743);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(720);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'o') ADVANCE(746);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(626);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(622);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'p') ADVANCE(738);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(748);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(902);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(587);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'r') ADVANCE(749);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 's') ADVANCE(1207);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(610);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 't') ADVANCE(1221);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == 'x') ADVANCE(632);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_unix_path_token2);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_encode);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_encode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_encode);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_gzip);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_gzip);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_zstd);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_zstd);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_handle);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_handle);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_handle);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_handle);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_defer);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_defer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(791);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(805);
      if (lookahead == 'e') ADVANCE(785);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(806);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(807);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(613);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(799);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(797);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(801);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(795);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(790);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(754);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(766);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(811);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(814);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(796);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(809);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(788);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(789);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(792);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(810);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(793);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(813);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(808);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(815);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(897);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(582);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(816);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1202);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(605);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1216);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'a') ADVANCE(844);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'b') ADVANCE(845);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'c') ADVANCE(846);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(617);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(838);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(833);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(840);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'd') ADVANCE(828);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(823);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(836);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(835);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(853);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(851);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'e') ADVANCE(852);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'f') ADVANCE(832);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'f') ADVANCE(834);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(843);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'i') ADVANCE(850);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(855);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'm') ADVANCE(848);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(821);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(822);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'n') ADVANCE(825);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(849);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(826);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'o') ADVANCE(854);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'p') ADVANCE(847);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(856);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(901);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(775);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(774);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 'r') ADVANCE(857);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 's') ADVANCE(1206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(609);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == 't') ADVANCE(1220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_header_name);
      if (('!' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('[' <= lookahead && lookahead <= '^') ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(892);
      if (('-' <= lookahead && lookahead <= 'z')) ADVANCE(858);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'a') ADVANCE(866);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'a') ADVANCE(880);
      if (lookahead == 'e') ADVANCE(860);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'b') ADVANCE(881);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'c') ADVANCE(882);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'd') ADVANCE(619);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'd') ADVANCE(874);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'd') ADVANCE(872);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'd') ADVANCE(876);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'd') ADVANCE(870);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'e') ADVANCE(865);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'e') ADVANCE(760);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'e') ADVANCE(772);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'e') ADVANCE(887);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'i') ADVANCE(879);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'i') ADVANCE(886);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'l') ADVANCE(889);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'l') ADVANCE(871);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'm') ADVANCE(884);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'n') ADVANCE(863);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'n') ADVANCE(864);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'n') ADVANCE(867);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'o') ADVANCE(885);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'o') ADVANCE(868);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'o') ADVANCE(888);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'p') ADVANCE(883);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'r') ADVANCE(890);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'r') ADVANCE(903);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'r') ADVANCE(588);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 'r') ADVANCE(891);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 's') ADVANCE(1208);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 't') ADVANCE(611);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (lookahead == 't') ADVANCE(1222);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_header_value_token1);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_redir);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_redir);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_redir);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == 't') ADVANCE(1028);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1029);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1030);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1029);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1091);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1031);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1091);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1031);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(912);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(911);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(908);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(907);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(908);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(907);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(916);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(915);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(910);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(909);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(910);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(909);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(920);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(920);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(919);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(914);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(913);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(914);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(913);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(924);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(924);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(923);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(918);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(917);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(918);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(917);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(927);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(928);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(927);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(922);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(921);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(931);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(932);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(931);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(925);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(926);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(925);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(936);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(936);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(935);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(930);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(930);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(929);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(940);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(940);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(939);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(934);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(934);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(933);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(944);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(944);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(943);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(938);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(937);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(948);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(947);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(941);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(942);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(941);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(951);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(952);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(951);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(946);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(945);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(955);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(955);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(949);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(960);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(959);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(953);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(954);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(953);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(964);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(963);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(958);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(957);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(958);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(957);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(967);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(968);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(967);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(962);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(961);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(971);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(972);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(971);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(965);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(966);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(965);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(975);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(976);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(975);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(970);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(969);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(979);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(980);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(979);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(973);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(974);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(973);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(983);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(984);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(983);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(977);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(978);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(977);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(988);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(987);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(982);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(981);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(991);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(992);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(991);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(986);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(985);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(995);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(996);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(995);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(990);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(989);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(999);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1000);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(999);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(994);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(993);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1003);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1004);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1003);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(997);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(998);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(997);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1008);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1007);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1001);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1002);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1001);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1012);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1011);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1006);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1005);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1015);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1016);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1015);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1009);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1010);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1009);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1034);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1021);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1020);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1013);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1014);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1013);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == 'p') ADVANCE(1025);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1026);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1026);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1026);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == ':') ADVANCE(1033);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1018);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1018);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1019);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1018);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == 't') ADVANCE(1022);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '-') ADVANCE(1024);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1023);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '.') ADVANCE(1089);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '0') ADVANCE(1036);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('1' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '1') ADVANCE(1191);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(1068);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(1047);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(1078);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'a') ADVANCE(1066);
      if (lookahead == 'e') ADVANCE(1038);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'b') ADVANCE(1069);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(1071);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(615);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(1057);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(1059);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(1050);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'd') ADVANCE(1053);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1080);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(756);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(768);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1067);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1077);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1063);
      if (lookahead == 'l') ADVANCE(1082);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'e') ADVANCE(1063);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(1065);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(1076);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(1200);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(1051);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(1073);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(1058);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(1037);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'm') ADVANCE(1074);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(1042);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(1043);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(1045);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(1085);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'n') ADVANCE(1052);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(1075);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(1079);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(1046);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(1081);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(1070);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'p') ADVANCE(1072);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(1083);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(584);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(1087);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(1084);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(1062);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'r') ADVANCE(1039);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 's') ADVANCE(1204);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 't') ADVANCE(607);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 't') ADVANCE(1218);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 't') ADVANCE(1197);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == 'y') ADVANCE(1194);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1092);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(905);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1088);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '_' ||
          lookahead == '~') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1032);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_uri_path_with_placeholders);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == ')') ADVANCE(1187);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1093);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '5') ADVANCE(1095);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1096);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1098);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('6' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1098);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1107);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1108);
      if (lookahead == '5') ADVANCE(1100);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(1101);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(1103);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('6' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1103);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '.') ADVANCE(1108);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '-') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '/') ADVANCE(252);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '1') ADVANCE(1102);
      if (lookahead == '2') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1101);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '1') ADVANCE(437);
      if (lookahead == '2') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '1') ADVANCE(1097);
      if (lookahead == '2') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1096);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == ':') ADVANCE(1104);
      if (lookahead == 's') ADVANCE(1110);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == ':') ADVANCE(1105);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1152);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1142);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1125);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1143);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1169);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'b') ADVANCE(1155);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(1157);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'c') ADVANCE(1112);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(614);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(764);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1128);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1144);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1139);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(1133);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1113);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1124);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(755);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(767);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1166);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1153);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1170);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'e') ADVANCE(1168);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'f') ADVANCE(1130);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'h') ADVANCE(1156);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1150);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1184);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1162);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(1167);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1175);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1199);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1135);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1209);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'l') ADVANCE(1129);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(1165);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(1141);
      if (lookahead == 't') ADVANCE(1163);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(1111);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'm') ADVANCE(1164);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1120);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1123);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1181);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(1114);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1172);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1177);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1122);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1173);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(621);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(623);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(762);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(1109);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(1158);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'p') ADVANCE(1159);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(773);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(898);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(583);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1185);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1154);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1147);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1178);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1115);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'r') ADVANCE(1179);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1203);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1182);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 's') ADVANCE(1180);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1217);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(432);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1196);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1121);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 't') ADVANCE(1132);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'x') ADVANCE(631);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'y') ADVANCE(1193);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == 'z') ADVANCE(1138);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__valid_uri_path_string);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_redir_code_token1);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(anon_sym_401);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(anon_sym_401);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(anon_sym_temporary);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(anon_sym_temporary);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(anon_sym_permanent);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(anon_sym_permanent);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(anon_sym_html);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(anon_sym_html);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(anon_sym_tls);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(anon_sym_tls);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(anon_sym_tls);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(anon_sym_internal);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_email_address);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '.') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1212);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_email_address);
      if (lookahead == '\\') ADVANCE(301);
      if (lookahead == ']') ADVANCE(1213);
      if ((1 <= lookahead && lookahead <= 8) ||
          lookahead == 11 ||
          lookahead == '\f' ||
          (14 <= lookahead && lookahead <= 31) ||
          ('!' <= lookahead && lookahead <= 127)) ADVANCE(300);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_snippet_name);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '=' ||
          lookahead == '@' ||
          lookahead == '~') ADVANCE(1187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(817);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(368);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1187);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '%') ADVANCE(369);
      if (lookahead == '{') ADVANCE(376);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '.') ||
          ('0' <= lookahead && lookahead <= ';') ||
          lookahead == '=' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(1092);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.') ADVANCE(751);
      if (lookahead == '@') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '?' ||
          lookahead == '^' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(752);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(684);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(anon_sym_import);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(752);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(anon_sym_import);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(892);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'e') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'g') ADVANCE(3);
      if (lookahead == 'h') ADVANCE(4);
      if (lookahead == 'm') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'q') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'x') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'h') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_gram);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_host);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_path);
      if (lookahead == '_') ADVANCE(56);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_vars);
      if (lookahead == '_') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_packet);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_protocol);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_remote_ip);
      END_STATE();
    case 89:
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_expression);
      END_STATE();
    case 91:
      if (lookahead == 'h') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_handle_path);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_path_regexp);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_vars_regexp);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_header_regexp);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 382},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 382},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 382},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 21},
  [25] = {.lex_state = 21},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 48},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 52},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 53},
  [58] = {.lex_state = 53},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 53},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 25},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 54},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 21},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 21},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 54},
  [96] = {.lex_state = 382},
  [97] = {.lex_state = 382},
  [98] = {.lex_state = 54},
  [99] = {.lex_state = 54},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 382},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 49},
  [108] = {.lex_state = 49},
  [109] = {.lex_state = 382},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 53},
  [112] = {.lex_state = 50},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 53},
  [116] = {.lex_state = 15},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 54},
  [121] = {.lex_state = 54},
  [122] = {.lex_state = 53},
  [123] = {.lex_state = 53},
  [124] = {.lex_state = 53},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 11},
  [127] = {.lex_state = 382},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 11},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 12},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 382},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 382},
  [146] = {.lex_state = 250},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 382},
  [154] = {.lex_state = 382},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 359},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 382},
  [165] = {.lex_state = 382},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 360},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 361},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 361},
  [174] = {.lex_state = 361},
  [175] = {.lex_state = 382},
  [176] = {.lex_state = 382},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 382},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 382},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 382},
  [187] = {.lex_state = 382},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 382},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 361},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 382},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 382},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 382},
  [200] = {.lex_state = 362},
  [201] = {.lex_state = 361},
  [202] = {.lex_state = 361},
  [203] = {.lex_state = 360},
  [204] = {.lex_state = 360},
  [205] = {.lex_state = 360},
  [206] = {.lex_state = 360},
  [207] = {.lex_state = 0},
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
    [sym__valid_uri_path_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [anon_sym_expression] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_header_regexp] = ACTIONS(1),
    [anon_sym_host] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_path] = ACTIONS(1),
    [anon_sym_path_regexp] = ACTIONS(1),
    [anon_sym_protocol] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_remote_ip] = ACTIONS(1),
    [anon_sym_vars] = ACTIONS(1),
    [anon_sym_vars_regexp] = ACTIONS(1),
    [aux_sym_standard_matcher_token1] = ACTIONS(1),
    [anon_sym_abort] = ACTIONS(1),
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
    [anon_sym_handle] = ACTIONS(1),
    [anon_sym_handle_path] = ACTIONS(1),
    [anon_sym_defer] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_redir] = ACTIONS(1),
    [aux_sym_redir_code_token1] = ACTIONS(1),
    [anon_sym_401] = ACTIONS(1),
    [anon_sym_temporary] = ACTIONS(1),
    [anon_sym_permanent] = ACTIONS(1),
    [anon_sym_html] = ACTIONS(1),
    [anon_sym_tls] = ACTIONS(1),
    [anon_sym_internal] = ACTIONS(1),
    [sym_snippet_name] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(157),
    [sym_site_block] = STATE(18),
    [sym_site_address] = STATE(181),
    [sym_protocol] = STATE(109),
    [sym__ip_or_domain_address] = STATE(145),
    [sym__port_number] = STATE(169),
    [sym_snippet] = STATE(18),
    [aux_sym_document_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_http_COLON_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_https_COLON_SLASH_SLASH] = ACTIONS(7),
    [anon_sym_localhost] = ACTIONS(9),
    [sym__ipv4_address] = ACTIONS(9),
    [sym__ipv6_address] = ACTIONS(11),
    [sym_domain_address] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [sym_snippet_name] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(17), 1,
      sym__valid_uri_path_string,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym_header_name,
    STATE(8), 1,
      sym_matcher_token,
    STATE(56), 1,
      sym_field_manipulator,
    ACTIONS(19), 2,
      sym_comment,
      anon_sym_RBRACE,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
    ACTIONS(23), 9,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [46] = 13,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym_matcher_name,
    ACTIONS(39), 1,
      anon_sym_header,
    ACTIONS(41), 1,
      anon_sym_abort,
    ACTIONS(43), 1,
      anon_sym_bind,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(49), 1,
      anon_sym_redir,
    ACTIONS(51), 1,
      anon_sym_tls,
    ACTIONS(53), 1,
      anon_sym_import,
    STATE(4), 4,
      sym_matcher_definition,
      sym_directive_block,
      sym_import,
      aux_sym_site_block_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [95] = 13,
    ACTIONS(37), 1,
      sym_matcher_name,
    ACTIONS(39), 1,
      anon_sym_header,
    ACTIONS(41), 1,
      anon_sym_abort,
    ACTIONS(43), 1,
      anon_sym_bind,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(49), 1,
      anon_sym_redir,
    ACTIONS(51), 1,
      anon_sym_tls,
    ACTIONS(53), 1,
      anon_sym_import,
    ACTIONS(55), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(5), 4,
      sym_matcher_definition,
      sym_directive_block,
      sym_import,
      aux_sym_site_block_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [144] = 13,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_matcher_name,
    ACTIONS(67), 1,
      anon_sym_header,
    ACTIONS(70), 1,
      anon_sym_abort,
    ACTIONS(73), 1,
      anon_sym_bind,
    ACTIONS(76), 1,
      anon_sym_encode,
    ACTIONS(79), 1,
      anon_sym_handle,
    ACTIONS(82), 1,
      anon_sym_redir,
    ACTIONS(85), 1,
      anon_sym_tls,
    ACTIONS(88), 1,
      anon_sym_import,
    STATE(5), 4,
      sym_matcher_definition,
      sym_directive_block,
      sym_import,
      aux_sym_site_block_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [193] = 10,
    ACTIONS(93), 1,
      sym__ipv4_address,
    ACTIONS(95), 1,
      sym__ipv6_address,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym_unix_path_token2,
    STATE(175), 1,
      sym__network,
    STATE(7), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(91), 3,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(97), 8,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [236] = 10,
    ACTIONS(109), 1,
      sym__ipv4_address,
    ACTIONS(112), 1,
      sym__ipv6_address,
    ACTIONS(120), 1,
      anon_sym_unix,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      aux_sym_unix_path_token2,
    STATE(175), 1,
      sym__network,
    STATE(7), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(107), 3,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(117), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(115), 8,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [279] = 9,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(31), 1,
      sym_header_name,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    STATE(70), 1,
      sym_field_manipulator,
    ACTIONS(129), 3,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
    ACTIONS(133), 8,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [319] = 12,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(137), 1,
      sym__valid_uri_path_string,
    ACTIONS(139), 1,
      sym_matcher_name,
    ACTIONS(141), 1,
      sym_header_name,
    STATE(17), 1,
      sym_matcher_token,
    STATE(56), 1,
      sym_field_manipulator,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
    ACTIONS(23), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [365] = 10,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(143), 1,
      sym__ipv4_address,
    ACTIONS(145), 1,
      sym__ipv6_address,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_unix_path_token2,
    STATE(186), 1,
      sym__network,
    STATE(13), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(97), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [405] = 2,
    ACTIONS(151), 5,
      sym_comment,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(153), 14,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [429] = 2,
    ACTIONS(155), 5,
      sym_comment,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(157), 14,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [453] = 10,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_unix,
    ACTIONS(159), 1,
      sym__ipv4_address,
    ACTIONS(162), 1,
      sym__ipv6_address,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_unix_path_token2,
    STATE(186), 1,
      sym__network,
    STATE(13), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(117), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
    ACTIONS(115), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [493] = 2,
    ACTIONS(171), 5,
      sym_comment,
      anon_sym_RBRACE,
      sym__ipv6_address,
      sym_matcher_name,
      anon_sym_DQUOTE,
    ACTIONS(173), 14,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [517] = 11,
    ACTIONS(37), 1,
      sym_matcher_name,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(175), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_header,
    ACTIONS(179), 1,
      anon_sym_abort,
    ACTIONS(181), 1,
      anon_sym_bind,
    ACTIONS(183), 1,
      anon_sym_redir,
    ACTIONS(185), 1,
      anon_sym_tls,
    STATE(178), 2,
      sym_matcher_definition,
      sym_directive_block,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [558] = 11,
    ACTIONS(37), 1,
      sym_matcher_name,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(177), 1,
      anon_sym_header,
    ACTIONS(179), 1,
      anon_sym_abort,
    ACTIONS(181), 1,
      anon_sym_bind,
    ACTIONS(183), 1,
      anon_sym_redir,
    ACTIONS(185), 1,
      anon_sym_tls,
    ACTIONS(187), 1,
      sym_comment,
    STATE(170), 2,
      sym_matcher_definition,
      sym_directive_block,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [599] = 9,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(141), 1,
      sym_header_name,
    STATE(70), 1,
      sym_field_manipulator,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
    ACTIONS(133), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [636] = 12,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      sym_snippet_name,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 1,
      sym_comment,
    STATE(109), 1,
      sym_protocol,
    STATE(145), 1,
      sym__ip_or_domain_address,
    STATE(169), 1,
      sym__port_number,
    STATE(181), 1,
      sym_site_address,
    ACTIONS(7), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(9), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(11), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(20), 3,
      sym_site_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [678] = 3,
    ACTIONS(197), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(193), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(195), 14,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
      anon_sym_import,
  [702] = 12,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      sym_snippet_name,
    STATE(109), 1,
      sym_protocol,
    STATE(145), 1,
      sym__ip_or_domain_address,
    STATE(169), 1,
      sym__port_number,
    STATE(181), 1,
      sym_site_address,
    ACTIONS(204), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
    ACTIONS(207), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(210), 2,
      sym__ipv6_address,
      sym_domain_address,
    STATE(20), 3,
      sym_site_block,
      sym_snippet,
      aux_sym_document_repeat1,
  [744] = 3,
    ACTIONS(223), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(219), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(221), 14,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
      anon_sym_import,
  [768] = 10,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 1,
      anon_sym_header,
    ACTIONS(229), 1,
      anon_sym_abort,
    ACTIONS(231), 1,
      anon_sym_bind,
    ACTIONS(233), 1,
      anon_sym_redir,
    ACTIONS(235), 1,
      anon_sym_tls,
    STATE(24), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [806] = 10,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(227), 1,
      anon_sym_header,
    ACTIONS(229), 1,
      anon_sym_abort,
    ACTIONS(231), 1,
      anon_sym_bind,
    ACTIONS(233), 1,
      anon_sym_redir,
    ACTIONS(235), 1,
      anon_sym_tls,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [844] = 10,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(241), 1,
      anon_sym_header,
    ACTIONS(244), 1,
      anon_sym_abort,
    ACTIONS(247), 1,
      anon_sym_bind,
    ACTIONS(250), 1,
      anon_sym_encode,
    ACTIONS(253), 1,
      anon_sym_handle,
    ACTIONS(256), 1,
      anon_sym_redir,
    ACTIONS(259), 1,
      anon_sym_tls,
    STATE(24), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [882] = 3,
    STATE(87), 1,
      sym_redir_code,
    ACTIONS(264), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
    ACTIONS(262), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [906] = 2,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(153), 13,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [927] = 1,
    ACTIONS(266), 16,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
      anon_sym_import,
  [946] = 2,
    ACTIONS(171), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(173), 13,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [967] = 2,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(157), 13,
      sym__ipv4_address,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [988] = 1,
    ACTIONS(193), 16,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
      anon_sym_import,
  [1007] = 1,
    ACTIONS(268), 16,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
      anon_sym_import,
  [1026] = 9,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(227), 1,
      anon_sym_header,
    ACTIONS(229), 1,
      anon_sym_abort,
    ACTIONS(231), 1,
      anon_sym_bind,
    ACTIONS(233), 1,
      anon_sym_redir,
    ACTIONS(235), 1,
      anon_sym_tls,
    STATE(23), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [1061] = 2,
    ACTIONS(270), 6,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(272), 10,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_DASH,
      sym_header_name,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1082] = 6,
    ACTIONS(274), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_header_value_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym_header_value,
    ACTIONS(276), 11,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1111] = 9,
    ACTIONS(45), 1,
      anon_sym_encode,
    ACTIONS(47), 1,
      anon_sym_handle,
    ACTIONS(227), 1,
      anon_sym_header,
    ACTIONS(229), 1,
      anon_sym_abort,
    ACTIONS(231), 1,
      anon_sym_bind,
    ACTIONS(233), 1,
      anon_sym_redir,
    ACTIONS(235), 1,
      anon_sym_tls,
    STATE(22), 2,
      sym_directive_block,
      aux_sym_directive_handle_repeat1,
    STATE(83), 7,
      sym_directive_abort,
      sym_directive_bind,
      sym_directive_encode,
      sym_directive_handle,
      sym_directive_header,
      sym_directive_redir,
      sym_directive_tls,
  [1146] = 6,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_unix_path_token2,
    STATE(150), 1,
      sym_unix_path,
    ACTIONS(284), 2,
      sym_comment,
      sym_matcher_name,
    ACTIONS(292), 2,
      anon_sym_internal,
      sym_email_address,
    ACTIONS(286), 9,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1175] = 3,
    ACTIONS(296), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(40), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(294), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1197] = 3,
    ACTIONS(296), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(40), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(298), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1219] = 3,
    STATE(160), 1,
      sym_standard_matcher,
    ACTIONS(302), 3,
      anon_sym_header,
      anon_sym_path,
      anon_sym_vars,
    ACTIONS(300), 11,
      anon_sym_expression,
      anon_sym_file,
      anon_sym_header_regexp,
      anon_sym_host,
      anon_sym_method,
      anon_sym_not,
      anon_sym_path_regexp,
      anon_sym_protocol,
      anon_sym_query,
      anon_sym_remote_ip,
      anon_sym_vars_regexp,
  [1241] = 3,
    ACTIONS(306), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(40), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
    ACTIONS(304), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1263] = 2,
    ACTIONS(309), 1,
      sym_comment,
    ACTIONS(311), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_DQUOTE,
      anon_sym_encode,
      anon_sym_handle,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1283] = 2,
    ACTIONS(313), 1,
      sym_comment,
    ACTIONS(315), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_DQUOTE,
      anon_sym_encode,
      anon_sym_handle,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1303] = 3,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(221), 12,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
  [1324] = 11,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_PLUS,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(317), 1,
      sym__valid_uri_path_string,
    ACTIONS(319), 1,
      sym_matcher_name,
    ACTIONS(321), 1,
      sym_header_name,
    STATE(56), 1,
      sym_field_manipulator,
    STATE(78), 1,
      sym_matcher_token,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [1361] = 5,
    ACTIONS(290), 1,
      aux_sym_unix_path_token2,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_unix_path,
    ACTIONS(323), 3,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
    ACTIONS(325), 8,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1386] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(195), 12,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
      anon_sym_tls,
  [1407] = 1,
    ACTIONS(329), 13,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_gzip,
      anon_sym_zstd,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1423] = 4,
    ACTIONS(331), 1,
      sym__valid_uri_path_string,
    STATE(75), 1,
      sym_matcher_token,
    ACTIONS(333), 2,
      sym_comment,
      anon_sym_RBRACE,
    ACTIONS(335), 9,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1445] = 1,
    ACTIONS(270), 13,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_gzip,
      anon_sym_zstd,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1461] = 5,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_header_value_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym_header_value,
    ACTIONS(276), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [1485] = 6,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_unix_path_token2,
    ACTIONS(337), 1,
      anon_sym_internal,
    ACTIONS(339), 1,
      sym_email_address,
    STATE(150), 1,
      sym_unix_path,
    ACTIONS(286), 8,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [1511] = 2,
    ACTIONS(329), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(341), 9,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_DASH,
      sym_header_name,
      anon_sym_redir,
      anon_sym_tls,
  [1529] = 1,
    ACTIONS(343), 13,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_gzip,
      anon_sym_zstd,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1545] = 2,
    ACTIONS(270), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(272), 9,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_DASH,
      sym_header_name,
      anon_sym_redir,
      anon_sym_tls,
  [1563] = 1,
    ACTIONS(309), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1578] = 2,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1595] = 8,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_defer,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    STATE(65), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [1624] = 8,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(359), 1,
      anon_sym_defer,
    STATE(65), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [1653] = 1,
    ACTIONS(361), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1668] = 9,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(363), 1,
      sym__ipv4_address,
    ACTIONS(365), 1,
      sym__ipv6_address,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      aux_sym_unix_path_token2,
    STATE(183), 1,
      sym__network,
    STATE(67), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [1699] = 1,
    ACTIONS(311), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_DQUOTE,
      anon_sym_encode,
      anon_sym_handle,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
      anon_sym_redir,
      anon_sym_tls,
  [1714] = 1,
    ACTIONS(315), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_DQUOTE,
      anon_sym_encode,
      anon_sym_handle,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
      anon_sym_redir,
      anon_sym_tls,
  [1729] = 1,
    ACTIONS(371), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1744] = 1,
    ACTIONS(373), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1759] = 8,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      anon_sym_defer,
    ACTIONS(379), 1,
      anon_sym_PLUS,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(385), 1,
      anon_sym_QMARK,
    ACTIONS(388), 1,
      sym_header_name,
    STATE(65), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [1788] = 1,
    ACTIONS(391), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1803] = 9,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(120), 1,
      anon_sym_unix,
    ACTIONS(393), 1,
      sym__ipv4_address,
    ACTIONS(396), 1,
      sym__ipv6_address,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    ACTIONS(402), 1,
      aux_sym_unix_path_token2,
    STATE(183), 1,
      sym__network,
    STATE(67), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(117), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [1834] = 1,
    ACTIONS(405), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1849] = 1,
    ACTIONS(313), 12,
      sym_comment,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1864] = 2,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1881] = 8,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      anon_sym_defer,
    STATE(65), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [1910] = 1,
    ACTIONS(155), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1924] = 5,
    ACTIONS(331), 1,
      sym__valid_uri_path_string,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      sym_matcher_name,
    STATE(75), 1,
      sym_matcher_token,
    ACTIONS(335), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [1946] = 1,
    ACTIONS(417), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1960] = 1,
    ACTIONS(419), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1974] = 1,
    ACTIONS(421), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [1988] = 1,
    ACTIONS(423), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2002] = 8,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(321), 1,
      sym_header_name,
    STATE(70), 1,
      sym_field_manipulator,
    STATE(66), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [2030] = 5,
    ACTIONS(290), 1,
      aux_sym_unix_path_token2,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym_unix_path,
    ACTIONS(325), 7,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
  [2052] = 8,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      aux_sym_unix_path_token2,
    ACTIONS(425), 1,
      sym__ipv4_address,
    ACTIONS(427), 1,
      sym__ipv6_address,
    STATE(183), 1,
      sym__network,
    STATE(60), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [2080] = 1,
    ACTIONS(429), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2094] = 8,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym_unix_path_token2,
    ACTIONS(431), 1,
      sym__ipv4_address,
    ACTIONS(433), 1,
      sym__ipv6_address,
    STATE(175), 1,
      sym__network,
    STATE(6), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [2122] = 1,
    ACTIONS(435), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2136] = 8,
    ACTIONS(101), 1,
      anon_sym_unix,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_unix_path_token2,
    ACTIONS(437), 1,
      sym__ipv4_address,
    ACTIONS(439), 1,
      sym__ipv6_address,
    STATE(186), 1,
      sym__network,
    STATE(10), 2,
      sym_unix_path,
      aux_sym_directive_bind_repeat1,
    ACTIONS(99), 3,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
  [2164] = 1,
    ACTIONS(441), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2178] = 1,
    ACTIONS(443), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2192] = 1,
    ACTIONS(445), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2206] = 1,
    ACTIONS(447), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2220] = 1,
    ACTIONS(449), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2234] = 1,
    ACTIONS(451), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2248] = 1,
    ACTIONS(453), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2262] = 1,
    ACTIONS(455), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2276] = 1,
    ACTIONS(457), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2290] = 1,
    ACTIONS(171), 11,
      sym_comment,
      anon_sym_RBRACE,
      sym_matcher_name,
      anon_sym_header,
      anon_sym_abort,
      anon_sym_bind,
      anon_sym_encode,
      anon_sym_handle,
      anon_sym_redir,
      anon_sym_tls,
      anon_sym_import,
  [2304] = 6,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    STATE(57), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [2327] = 2,
    ACTIONS(461), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [2342] = 2,
    ACTIONS(465), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
    ACTIONS(463), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [2357] = 6,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    STATE(58), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [2380] = 6,
    ACTIONS(349), 1,
      anon_sym_PLUS,
    ACTIONS(351), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      anon_sym_QMARK,
    ACTIONS(355), 1,
      sym_header_name,
    STATE(71), 2,
      sym_field_manipulator,
      aux_sym_directive_header_repeat1,
    STATE(117), 4,
      sym_field_replace,
      sym_field_add_or_set,
      sym_field_delete,
      sym_field_set_default,
  [2403] = 5,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_header_value_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    STATE(119), 1,
      sym_header_value,
    ACTIONS(276), 6,
      anon_sym_RBRACE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
  [2424] = 2,
    ACTIONS(473), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
    ACTIONS(457), 7,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
      sym__ipv6_address,
      sym_domain_address,
      sym_snippet_name,
  [2439] = 1,
    ACTIONS(311), 9,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
  [2451] = 2,
    ACTIONS(171), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(173), 6,
      sym__ipv4_address,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
  [2465] = 2,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(153), 6,
      sym__ipv4_address,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
  [2479] = 1,
    ACTIONS(315), 9,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      anon_sym_defer,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_QMARK,
      sym_header_name,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
  [2491] = 2,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      sym__ipv6_address,
      anon_sym_DQUOTE,
    ACTIONS(157), 6,
      sym__ipv4_address,
      anon_sym_tcp,
      anon_sym_udp,
      anon_sym_ip,
      anon_sym_unix,
      aux_sym_unix_path_token2,
  [2505] = 3,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(221), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
  [2519] = 3,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(195), 5,
      aux_sym_redir_code_token1,
      anon_sym_401,
      anon_sym_temporary,
      anon_sym_permanent,
      anon_sym_html,
  [2533] = 5,
    ACTIONS(13), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym__ip_or_domain_address,
    STATE(177), 1,
      sym__port_number,
    ACTIONS(475), 2,
      anon_sym_localhost,
      sym__ipv4_address,
    ACTIONS(477), 2,
      sym__ipv6_address,
      sym_domain_address,
  [2551] = 5,
    ACTIONS(331), 1,
      sym__valid_uri_path_string,
    ACTIONS(415), 1,
      sym_matcher_name,
    STATE(142), 1,
      sym_matcher_token,
    ACTIONS(479), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(38), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [2569] = 2,
    ACTIONS(309), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(311), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2580] = 5,
    ACTIONS(481), 1,
      sym_domain_address,
    ACTIONS(483), 1,
      sym_uri_path_with_placeholders,
    STATE(25), 1,
      sym_redir_or_rewrite_target,
    STATE(187), 1,
      sym_protocol,
    ACTIONS(7), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [2597] = 5,
    ACTIONS(483), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(485), 1,
      sym_domain_address,
    STATE(25), 1,
      sym_redir_or_rewrite_target,
    STATE(165), 1,
      sym_protocol,
    ACTIONS(7), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [2614] = 5,
    ACTIONS(483), 1,
      sym_uri_path_with_placeholders,
    ACTIONS(487), 1,
      sym_domain_address,
    STATE(25), 1,
      sym_redir_or_rewrite_target,
    STATE(176), 1,
      sym_protocol,
    ACTIONS(7), 2,
      anon_sym_http_COLON_SLASH_SLASH,
      anon_sym_https_COLON_SLASH_SLASH,
  [2631] = 2,
    ACTIONS(313), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(315), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2642] = 6,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(288), 1,
      anon_sym_DQUOTE,
    ACTIONS(290), 1,
      aux_sym_unix_path_token2,
    ACTIONS(489), 1,
      anon_sym_internal,
    ACTIONS(491), 1,
      sym_email_address,
    STATE(147), 1,
      sym_unix_path,
  [2661] = 2,
    ACTIONS(391), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(493), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2672] = 5,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_header_value_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(59), 1,
      sym_header_value,
    ACTIONS(276), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2689] = 2,
    ACTIONS(361), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(495), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2700] = 2,
    ACTIONS(272), 2,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(270), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [2711] = 2,
    ACTIONS(341), 2,
      anon_sym_DASH,
      sym_header_name,
    ACTIONS(329), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
  [2722] = 2,
    ACTIONS(405), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(497), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2733] = 2,
    ACTIONS(373), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(499), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2744] = 2,
    ACTIONS(371), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_QMARK,
    ACTIONS(501), 3,
      anon_sym_defer,
      anon_sym_DASH,
      sym_header_name,
  [2755] = 5,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym_unix_path_token2,
    ACTIONS(503), 1,
      sym__ipv4_address,
    ACTIONS(505), 1,
      sym__ipv6_address,
    STATE(11), 1,
      sym_unix_path,
  [2771] = 1,
    ACTIONS(311), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
  [2779] = 2,
    ACTIONS(509), 2,
      sym__ipv6_address,
      sym_domain_address,
    ACTIONS(507), 3,
      anon_sym_localhost,
      sym__ipv4_address,
      anon_sym_COLON,
  [2789] = 5,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_unix_path_token2,
    ACTIONS(511), 1,
      sym__ipv4_address,
    ACTIONS(513), 1,
      sym__ipv6_address,
    STATE(26), 1,
      sym_unix_path,
  [2805] = 1,
    ACTIONS(315), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
      aux_sym_header_value_token1,
      anon_sym_SQUOTE,
  [2813] = 5,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(369), 1,
      aux_sym_unix_path_token2,
    ACTIONS(515), 1,
      sym__ipv4_address,
    ACTIONS(517), 1,
      sym__ipv6_address,
    STATE(104), 1,
      sym_unix_path,
  [2829] = 4,
    ACTIONS(519), 1,
      anon_sym_DQUOTE,
    ACTIONS(521), 1,
      aux_sym_header_value_token1,
    ACTIONS(523), 1,
      anon_sym_SQUOTE,
    STATE(100), 1,
      sym_header_value,
  [2842] = 4,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(327), 1,
      anon_sym_DQUOTE,
    ACTIONS(525), 1,
      aux_sym_unix_path_token2,
    STATE(149), 1,
      sym_unix_path,
  [2855] = 4,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
    ACTIONS(529), 1,
      aux_sym_header_value_token1,
    ACTIONS(531), 1,
      anon_sym_SQUOTE,
    STATE(50), 1,
      sym_header_value,
  [2868] = 4,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_header_value_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(64), 1,
      sym_header_value,
  [2881] = 4,
    ACTIONS(533), 1,
      anon_sym_DQUOTE,
    ACTIONS(535), 1,
      aux_sym_header_value_token1,
    ACTIONS(537), 1,
      anon_sym_SQUOTE,
    STATE(118), 1,
      sym_header_value,
  [2894] = 4,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_header_value_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_header_value,
  [2907] = 4,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_header_value_token1,
    ACTIONS(471), 1,
      anon_sym_SQUOTE,
    STATE(123), 1,
      sym_header_value,
  [2920] = 4,
    ACTIONS(539), 1,
      anon_sym_DQUOTE,
    ACTIONS(541), 1,
      aux_sym_header_value_token1,
    ACTIONS(543), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym_header_value,
  [2933] = 4,
    ACTIONS(317), 1,
      sym__valid_uri_path_string,
    ACTIONS(319), 1,
      sym_matcher_name,
    ACTIONS(545), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_matcher_token,
  [2946] = 4,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      aux_sym_header_value_token1,
    ACTIONS(282), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_header_value,
  [2959] = 4,
    ACTIONS(317), 1,
      sym__valid_uri_path_string,
    ACTIONS(319), 1,
      sym_matcher_name,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      sym_matcher_token,
  [2972] = 2,
    ACTIONS(296), 2,
      anon_sym_gzip,
      anon_sym_zstd,
    STATE(37), 2,
      sym_encode_format,
      aux_sym_directive_encode_repeat1,
  [2981] = 3,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym__port_number,
  [2991] = 2,
    ACTIONS(551), 1,
      anon_sym_SLASH,
    ACTIONS(553), 2,
      anon_sym_gram,
      anon_sym_packet,
  [2999] = 3,
    ACTIONS(549), 1,
      anon_sym_COLON,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym__port_number,
  [3009] = 2,
    ACTIONS(551), 1,
      anon_sym_SLASH,
    ACTIONS(553), 2,
      anon_sym_4,
      anon_sym_6,
  [3017] = 3,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_unix_path_token2,
    STATE(89), 1,
      sym_unix_path,
  [3027] = 3,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_unix_path_token2,
    STATE(77), 1,
      sym_unix_path,
  [3037] = 3,
    ACTIONS(367), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_unix_path_token2,
    STATE(77), 1,
      sym_unix_path,
  [3047] = 3,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    ACTIONS(561), 1,
      aux_sym_unix_path_token2,
    STATE(89), 1,
      sym_unix_path,
  [3057] = 1,
    ACTIONS(171), 2,
      anon_sym_DQUOTE,
      aux_sym_unix_path_token2,
  [3062] = 1,
    ACTIONS(155), 2,
      anon_sym_DQUOTE,
      aux_sym_unix_path_token2,
  [3067] = 2,
    ACTIONS(563), 1,
      sym_snippet_name,
    STATE(88), 1,
      sym_snippet,
  [3074] = 1,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
  [3078] = 1,
    ACTIONS(567), 1,
      anon_sym_DQUOTE,
  [3082] = 1,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
  [3086] = 1,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
  [3090] = 1,
    ACTIONS(571), 1,
      anon_sym_LBRACE,
  [3094] = 1,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
  [3098] = 1,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
  [3102] = 1,
    ACTIONS(577), 1,
      aux_sym_standard_matcher_token1,
  [3106] = 1,
    ACTIONS(579), 1,
      anon_sym_LBRACE,
  [3110] = 1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
  [3114] = 1,
    ACTIONS(581), 1,
      anon_sym_SLASH,
  [3118] = 1,
    ACTIONS(583), 1,
      sym_domain_address,
  [3122] = 1,
    ACTIONS(585), 1,
      anon_sym_LBRACE,
  [3126] = 1,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
  [3130] = 1,
    ACTIONS(589), 1,
      aux_sym_unix_path_token1,
  [3134] = 1,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
  [3138] = 1,
    ACTIONS(591), 1,
      anon_sym_RBRACE,
  [3142] = 1,
    ACTIONS(593), 1,
      sym_header_name,
  [3146] = 1,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
  [3150] = 1,
    ACTIONS(597), 1,
      sym_header_name,
  [3154] = 1,
    ACTIONS(599), 1,
      sym_header_name,
  [3158] = 1,
    ACTIONS(601), 1,
      anon_sym_SLASH,
  [3162] = 1,
    ACTIONS(603), 1,
      sym_domain_address,
  [3166] = 1,
    ACTIONS(547), 1,
      anon_sym_LBRACE,
  [3170] = 1,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
  [3174] = 1,
    ACTIONS(607), 1,
      anon_sym_DQUOTE,
  [3178] = 1,
    ACTIONS(607), 1,
      anon_sym_SQUOTE,
  [3182] = 1,
    ACTIONS(609), 1,
      anon_sym_LBRACE,
  [3186] = 1,
    ACTIONS(611), 1,
      anon_sym_RBRACE,
  [3190] = 1,
    ACTIONS(613), 1,
      anon_sym_SLASH,
  [3194] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [3198] = 1,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [3202] = 1,
    ACTIONS(617), 1,
      anon_sym_SLASH,
  [3206] = 1,
    ACTIONS(619), 1,
      sym_domain_address,
  [3210] = 1,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
  [3214] = 1,
    ACTIONS(621), 1,
      anon_sym_SQUOTE,
  [3218] = 1,
    ACTIONS(623), 1,
      anon_sym_DQUOTE,
  [3222] = 1,
    ACTIONS(625), 1,
      sym_header_name,
  [3226] = 1,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
  [3230] = 1,
    ACTIONS(627), 1,
      anon_sym_SQUOTE,
  [3234] = 1,
    ACTIONS(629), 1,
      anon_sym_DQUOTE,
  [3238] = 1,
    ACTIONS(631), 1,
      anon_sym_DQUOTE,
  [3242] = 1,
    ACTIONS(631), 1,
      anon_sym_SQUOTE,
  [3246] = 1,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
  [3250] = 1,
    ACTIONS(635), 1,
      anon_sym_DQUOTE,
  [3254] = 1,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
  [3258] = 1,
    ACTIONS(637), 1,
      aux_sym__port_number_token1,
  [3262] = 1,
    ACTIONS(639), 1,
      sym_header_name,
  [3266] = 1,
    ACTIONS(641), 1,
      sym_header_name,
  [3270] = 1,
    ACTIONS(643), 1,
      aux_sym_unix_path_token1,
  [3274] = 1,
    ACTIONS(645), 1,
      aux_sym_unix_path_token1,
  [3278] = 1,
    ACTIONS(647), 1,
      aux_sym_unix_path_token1,
  [3282] = 1,
    ACTIONS(649), 1,
      aux_sym_unix_path_token1,
  [3286] = 1,
    ACTIONS(651), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 95,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 193,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 279,
  [SMALL_STATE(9)] = 319,
  [SMALL_STATE(10)] = 365,
  [SMALL_STATE(11)] = 405,
  [SMALL_STATE(12)] = 429,
  [SMALL_STATE(13)] = 453,
  [SMALL_STATE(14)] = 493,
  [SMALL_STATE(15)] = 517,
  [SMALL_STATE(16)] = 558,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 636,
  [SMALL_STATE(19)] = 678,
  [SMALL_STATE(20)] = 702,
  [SMALL_STATE(21)] = 744,
  [SMALL_STATE(22)] = 768,
  [SMALL_STATE(23)] = 806,
  [SMALL_STATE(24)] = 844,
  [SMALL_STATE(25)] = 882,
  [SMALL_STATE(26)] = 906,
  [SMALL_STATE(27)] = 927,
  [SMALL_STATE(28)] = 946,
  [SMALL_STATE(29)] = 967,
  [SMALL_STATE(30)] = 988,
  [SMALL_STATE(31)] = 1007,
  [SMALL_STATE(32)] = 1026,
  [SMALL_STATE(33)] = 1061,
  [SMALL_STATE(34)] = 1082,
  [SMALL_STATE(35)] = 1111,
  [SMALL_STATE(36)] = 1146,
  [SMALL_STATE(37)] = 1175,
  [SMALL_STATE(38)] = 1197,
  [SMALL_STATE(39)] = 1219,
  [SMALL_STATE(40)] = 1241,
  [SMALL_STATE(41)] = 1263,
  [SMALL_STATE(42)] = 1283,
  [SMALL_STATE(43)] = 1303,
  [SMALL_STATE(44)] = 1324,
  [SMALL_STATE(45)] = 1361,
  [SMALL_STATE(46)] = 1386,
  [SMALL_STATE(47)] = 1407,
  [SMALL_STATE(48)] = 1423,
  [SMALL_STATE(49)] = 1445,
  [SMALL_STATE(50)] = 1461,
  [SMALL_STATE(51)] = 1485,
  [SMALL_STATE(52)] = 1511,
  [SMALL_STATE(53)] = 1529,
  [SMALL_STATE(54)] = 1545,
  [SMALL_STATE(55)] = 1563,
  [SMALL_STATE(56)] = 1578,
  [SMALL_STATE(57)] = 1595,
  [SMALL_STATE(58)] = 1624,
  [SMALL_STATE(59)] = 1653,
  [SMALL_STATE(60)] = 1668,
  [SMALL_STATE(61)] = 1699,
  [SMALL_STATE(62)] = 1714,
  [SMALL_STATE(63)] = 1729,
  [SMALL_STATE(64)] = 1744,
  [SMALL_STATE(65)] = 1759,
  [SMALL_STATE(66)] = 1788,
  [SMALL_STATE(67)] = 1803,
  [SMALL_STATE(68)] = 1834,
  [SMALL_STATE(69)] = 1849,
  [SMALL_STATE(70)] = 1864,
  [SMALL_STATE(71)] = 1881,
  [SMALL_STATE(72)] = 1910,
  [SMALL_STATE(73)] = 1924,
  [SMALL_STATE(74)] = 1946,
  [SMALL_STATE(75)] = 1960,
  [SMALL_STATE(76)] = 1974,
  [SMALL_STATE(77)] = 1988,
  [SMALL_STATE(78)] = 2002,
  [SMALL_STATE(79)] = 2030,
  [SMALL_STATE(80)] = 2052,
  [SMALL_STATE(81)] = 2080,
  [SMALL_STATE(82)] = 2094,
  [SMALL_STATE(83)] = 2122,
  [SMALL_STATE(84)] = 2136,
  [SMALL_STATE(85)] = 2164,
  [SMALL_STATE(86)] = 2178,
  [SMALL_STATE(87)] = 2192,
  [SMALL_STATE(88)] = 2206,
  [SMALL_STATE(89)] = 2220,
  [SMALL_STATE(90)] = 2234,
  [SMALL_STATE(91)] = 2248,
  [SMALL_STATE(92)] = 2262,
  [SMALL_STATE(93)] = 2276,
  [SMALL_STATE(94)] = 2290,
  [SMALL_STATE(95)] = 2304,
  [SMALL_STATE(96)] = 2327,
  [SMALL_STATE(97)] = 2342,
  [SMALL_STATE(98)] = 2357,
  [SMALL_STATE(99)] = 2380,
  [SMALL_STATE(100)] = 2403,
  [SMALL_STATE(101)] = 2424,
  [SMALL_STATE(102)] = 2439,
  [SMALL_STATE(103)] = 2451,
  [SMALL_STATE(104)] = 2465,
  [SMALL_STATE(105)] = 2479,
  [SMALL_STATE(106)] = 2491,
  [SMALL_STATE(107)] = 2505,
  [SMALL_STATE(108)] = 2519,
  [SMALL_STATE(109)] = 2533,
  [SMALL_STATE(110)] = 2551,
  [SMALL_STATE(111)] = 2569,
  [SMALL_STATE(112)] = 2580,
  [SMALL_STATE(113)] = 2597,
  [SMALL_STATE(114)] = 2614,
  [SMALL_STATE(115)] = 2631,
  [SMALL_STATE(116)] = 2642,
  [SMALL_STATE(117)] = 2661,
  [SMALL_STATE(118)] = 2672,
  [SMALL_STATE(119)] = 2689,
  [SMALL_STATE(120)] = 2700,
  [SMALL_STATE(121)] = 2711,
  [SMALL_STATE(122)] = 2722,
  [SMALL_STATE(123)] = 2733,
  [SMALL_STATE(124)] = 2744,
  [SMALL_STATE(125)] = 2755,
  [SMALL_STATE(126)] = 2771,
  [SMALL_STATE(127)] = 2779,
  [SMALL_STATE(128)] = 2789,
  [SMALL_STATE(129)] = 2805,
  [SMALL_STATE(130)] = 2813,
  [SMALL_STATE(131)] = 2829,
  [SMALL_STATE(132)] = 2842,
  [SMALL_STATE(133)] = 2855,
  [SMALL_STATE(134)] = 2868,
  [SMALL_STATE(135)] = 2881,
  [SMALL_STATE(136)] = 2894,
  [SMALL_STATE(137)] = 2907,
  [SMALL_STATE(138)] = 2920,
  [SMALL_STATE(139)] = 2933,
  [SMALL_STATE(140)] = 2946,
  [SMALL_STATE(141)] = 2959,
  [SMALL_STATE(142)] = 2972,
  [SMALL_STATE(143)] = 2981,
  [SMALL_STATE(144)] = 2991,
  [SMALL_STATE(145)] = 2999,
  [SMALL_STATE(146)] = 3009,
  [SMALL_STATE(147)] = 3017,
  [SMALL_STATE(148)] = 3027,
  [SMALL_STATE(149)] = 3037,
  [SMALL_STATE(150)] = 3047,
  [SMALL_STATE(151)] = 3057,
  [SMALL_STATE(152)] = 3062,
  [SMALL_STATE(153)] = 3067,
  [SMALL_STATE(154)] = 3074,
  [SMALL_STATE(155)] = 3078,
  [SMALL_STATE(156)] = 3082,
  [SMALL_STATE(157)] = 3086,
  [SMALL_STATE(158)] = 3090,
  [SMALL_STATE(159)] = 3094,
  [SMALL_STATE(160)] = 3098,
  [SMALL_STATE(161)] = 3102,
  [SMALL_STATE(162)] = 3106,
  [SMALL_STATE(163)] = 3110,
  [SMALL_STATE(164)] = 3114,
  [SMALL_STATE(165)] = 3118,
  [SMALL_STATE(166)] = 3122,
  [SMALL_STATE(167)] = 3126,
  [SMALL_STATE(168)] = 3130,
  [SMALL_STATE(169)] = 3134,
  [SMALL_STATE(170)] = 3138,
  [SMALL_STATE(171)] = 3142,
  [SMALL_STATE(172)] = 3146,
  [SMALL_STATE(173)] = 3150,
  [SMALL_STATE(174)] = 3154,
  [SMALL_STATE(175)] = 3158,
  [SMALL_STATE(176)] = 3162,
  [SMALL_STATE(177)] = 3166,
  [SMALL_STATE(178)] = 3170,
  [SMALL_STATE(179)] = 3174,
  [SMALL_STATE(180)] = 3178,
  [SMALL_STATE(181)] = 3182,
  [SMALL_STATE(182)] = 3186,
  [SMALL_STATE(183)] = 3190,
  [SMALL_STATE(184)] = 3194,
  [SMALL_STATE(185)] = 3198,
  [SMALL_STATE(186)] = 3202,
  [SMALL_STATE(187)] = 3206,
  [SMALL_STATE(188)] = 3210,
  [SMALL_STATE(189)] = 3214,
  [SMALL_STATE(190)] = 3218,
  [SMALL_STATE(191)] = 3222,
  [SMALL_STATE(192)] = 3226,
  [SMALL_STATE(193)] = 3230,
  [SMALL_STATE(194)] = 3234,
  [SMALL_STATE(195)] = 3238,
  [SMALL_STATE(196)] = 3242,
  [SMALL_STATE(197)] = 3246,
  [SMALL_STATE(198)] = 3250,
  [SMALL_STATE(199)] = 3254,
  [SMALL_STATE(200)] = 3258,
  [SMALL_STATE(201)] = 3262,
  [SMALL_STATE(202)] = 3266,
  [SMALL_STATE(203)] = 3270,
  [SMALL_STATE(204)] = 3274,
  [SMALL_STATE(205)] = 3278,
  [SMALL_STATE(206)] = 3282,
  [SMALL_STATE(207)] = 3286,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(162),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(48),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(82),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(110),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(139),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(114),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(36),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_site_block_repeat1, 2), SHIFT_REPEAT(153),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_bind, 2, .production_id = 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_bind, 2, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(7),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(7),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(146),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(144),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(204),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 2, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_header, 2, .production_id = 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 1),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(13),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(13),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(206),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unix_path, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unix_path, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 2, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(127),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(145),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(200),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(158),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(9),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(73),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(84),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(110),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(139),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(112),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_handle_repeat1, 2), SHIFT_REPEAT(51),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 2, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 3, .production_id = 7),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_or_rewrite_target, 1, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1, .production_id = 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1, .production_id = 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 1, .production_id = 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 1, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 3, .production_id = 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_encode, 2, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_encode_repeat1, 2), SHIFT_REPEAT(53),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header_value, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header_value, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_tls, 2, .production_id = 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_token, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 1, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_abort, 1, .production_id = 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matcher_token, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_encode_format, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_replace, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_set_default, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_add_or_set, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(201),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(173),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(202),
  [388] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_header_repeat1, 2), SHIFT_REPEAT(131),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_manipulator, 1),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(67),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(67),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(168),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_directive_bind_repeat1, 2), SHIFT_REPEAT(106),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_delete, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 3, .production_id = 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 5, .production_id = 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_abort, 2, .production_id = 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 5, .production_id = 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 4, .production_id = 8),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_handle, 4, .production_id = 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_block, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 7, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redir_code, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_redir, 3, .production_id = 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_tls, 3, .production_id = 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 6, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matcher_definition, 4),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_header, 4, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_snippet, 4),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_block, 4),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_site_block, 4),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_snippet, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_manipulator, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_replace, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_delete, 2),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_add_or_set, 3),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_set_default, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_protocol, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_protocol, 1),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [569] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_site_address, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__network, 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__port_number, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standard_matcher, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__valid_uri_path_string,
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
