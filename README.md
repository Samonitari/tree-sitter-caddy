# tree-sitter-caddy

[![Build/test](https://github.com/Samonitari/tree-sitter-caddy/actions/workflows/ci.yml/badge.svg)](https://github.com/Samonitari/tree-sitter-caddy/actions/workflows/ci.yml)

Caddyfile grammar for [tree-sitter](https://github.com/caddyserver/caddy)

:warning: Currently in alpha - may have bugs or instability - use with caution :warning:

## Features

### Type of structures

- [x] Global options: only `email` and `auto_https` 
- [x] Snippets
- [x] Directives - see below
- [x] Matchers - see below

### Directives handled

The following directives are **at least partially\*** handled.  
\*: Directives may not recognize all of their options.

- [x] `abort`
- [ ] `acme_server`
- [x] `basicauth`
- [x] `bind`
- [x] `encode`
- [x] `error`
- [x] `file_server`
- [ ] `forward_auth`
- [x] `handle`
- [ ] `handle_errors`
- [x] `handle_path`
- [x] `header`
- [x] `import`
- [x] `log`
- [ ] `map`
- [ ] `method`
- [ ] `metrics`
- [ ] `php_fastcgi`
- [ ] `push`
- [x] `redir`
- [x] `request_body`
- [ ] `request_header`
- [ ] `respond`
- [x] `reverse_proxy`
- [ ] `rewrite`
- [x] `root`
- [x] `route`
- [ ] `skip_log`
- [ ] `templates`
- [x] `tls`
- [ ] `tracing`
- [ ] `try_files`
- [ ] `uri`
- [ ] `var`

### Matchers handled

- `path` and `path_regexp`

## References

* [Caddyfile documentation](https://caddyserver.com/docs/caddyfile) - *Not so* exhaustive documentation on Caddy's own configuration file format.
