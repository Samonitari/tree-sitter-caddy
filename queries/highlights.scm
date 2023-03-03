(snippet_name) @function

(_ directive_type: _ @keyword)

(_ log_option_type: _ @function.method)

(_ file_server_option_browse: _ @function.method)

(_ matcher_type: _ @function.macro)

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
  (http_message)
] @string

(comment_line) @comment

[
  (http_error_code)
  (size_number)
] @number

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
