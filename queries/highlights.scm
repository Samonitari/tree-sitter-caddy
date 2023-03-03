(snippet_name) @function

(directive_header directive_type: "header" @keyword)
(directive_abort directive_type: "abort" @keyword)
(directive_bind directive_type: "bind" @keyword)
(directive_encode directive_type: "encode" @keyword)
(directive_file_server directive_type: "file_server" @keyword)
(directive_handle directive_type: "handle" @keyword)
(directive_handle_path directive_type: "handle_path" @keyword)
(directive_import directive_type: "import" @keyword)
(directive_log directive_type: "log" @keyword)
(directive_redir directive_type: "redir" @keyword)
(directive_request_body directive_type: "request_body" @keyword)
(directive_reverse_proxy directive_type: "reverse_proxy" @keyword)
(directive_root directive_type: "root" @keyword)
(directive_tls directive_type: "tls" @keyword)

(log_option_format log_option_type: "format" @function.method)
(log_option_output log_option_type: "output" @function.method)
(log_option_level log_option_type: "level" @function.method)

(matcher_path_regexp matcher_type: "path_regexp" @function.macro)
(matcher_path matcher_type: "path" @function.macro)

[
  "max_size"
  ; global options
  "email"
  "auto_https"
] @function.method

[
  (matcher_name)
  (matcher_token)
] @tag

(header_name) @string.special

[
  (header_value)
  (unix_path)
  (email_address)
] @string

(comment_line) @comment

(size_number) @number

(site_address) @constant

[
  "stdout"
  "stderr"
  "discard"
  "file"

  "console"
  "json"

  "info"
  "INFO"
  "error"
  "ERROR"
] @constant.builtin

["{" "}"] @punctuation.bracket
