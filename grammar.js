const DIRECTIVE_NAMES = [
  'abort', // Matcher; no args; no block
  'acme_server', // Matcher; no args; ca: <id>, lifetime: <duration>
  'basicauth', // Matcher, [<hash_algorithm> [<realm>]]; <username>: <hashed_password> [<salt_base64>]
  'bind', // NoM; <hosts...>
  'encode', // Matcher; <formats...>; gzip: [<level>], zstd, minimum_length: <length>, match block
  'error', // Matcker; (<status>|<message> [<status>]); message: <text>
  'file_server', // Matcher; [browse]; { various }
  'forward_auth', // Matcher; [<upstreams...>] { uri: <to>, copy_headers: <fields...>|{ <fields> }}
  'handle', // Matcher; { <directives...> }
  'handle_errors', // NoM; { <directives...> }
  'handle_path', // PathMatcher; { <directives...> }
  'header', // Matcher; [[+|-|?]<field> [<value>|<find>] [<replace>]]; various
  'import', // NoM; <pattern> [<args...>]
  'log', // NoM; { output: <writer_module>, format: <encoder_module>, level: <level>}
  'map', // Matcher <source> <destinations...>; { [-]<input>: <outputs...>, default: <defaults...>}
  'method', // Matcher; <method>
  'metrics', // Matcher; { disable_openmetrics }
  'php_fastcgi', // Matcher; <php-fpm_gateways...> {various}
  'push', // Matcher; [<resource>] { various }
  'redir', // Matcher; <to> [<code>]
  'request_body', // Matcher; { max_size: <value>}
  'request_header', //Matcher; 
  'respond',
  'reverse_proxy',
  'rewrite',
  'root',
  'route',
  'skip_log',
  'templates',
  'tls',
  'tracing',
  'try_files',
  'uri',
  'vars'
];


const STANDARD_MATCHER_NAMES = [
  'expression',
  'file',
  'header',
  'header_regexp',
  'host',
  'method',
  'not',
  'path',
  'path_regexp',
  'protocol',
  'query',
  'remote_ip',
  'vars',
  'vars_regexp'
]

module.exports = grammar({
  name: 'caddy',

  externals: $ => [$._eof],

  word: $ => $._valid_uri_path_string,

  rules: {
    document: $ => repeat(choice(
      $.comment,
      $.snippet,
      $.site_block
    )),

    comment: $ => token(seq('#', /.*/)),

    _newline: _ => choice(/\r/, /\n/, /\r\n/, /\u0085/, /\u000C/, /\u2028/, /\u2029/),

    site_block: $ => seq(
      // TODO: repeatable path
      $.site_address,
      // TODO: single site block doesn't require '{}' delimiting
      '{',
      repeat(choice(
        $.comment,
        $.matcher_definition,
        $.directive_block,
        $.import
      )),
      '}'
    ),

    // TODO: Make sure all of this is handled, like (currently missing) only http://
    // https://caddyserveGr.com/docs/caddyfile/concepts#addresses
    site_address: $ => seq(
      optional(
        $.protocol,
      ),
      choice(
        seq(
          $._ip_or_domain_address,
          optional(
            $._port_number
          )
        ),
        $._port_number
      )
    ),

    protocol: $ => choice(
      'http://',
      'https://'
    ),

    _ip_or_domain_address: $ => choice(
        $._ipv4_address,
        $._ipv6_address,
        $.domain_address,
        'localhost'
    ),

    _ipv4_address: $ => /((25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])\.){3,3}(25[0-5]|(2[0-4]|1{0,1}[0-9]){0,1}[0-9])/,

    _ipv6_address: $ => /(fe80:(:[0-9a-fA-F]{0,4}){0,4}%[0-9a-zA-Z]{1,}|([0-9a-fA-F]{1,4}:){1,2}(:[0-9a-fA-F]{1,4}){1,5}|([0-9a-fA-F]{1,4}:){1,3}(:[0-9a-fA-F]{1,4}){1,4}|[0-9a-fA-F]{1,4}:((:[0-9a-fA-F]{1,4}){1,6})|([0-9a-fA-F]{1,4}:){1,4}(:[0-9a-fA-F]{1,4}){1,3}|([0-9a-fA-F]{1,4}:){1,5}(:[0-9a-fA-F]{1,4}){1,2}|([0-9a-fA-F]{1,4}:){1,6}:[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,7}:|([0-9a-fA-F]{1,4}:){7,7}[0-9a-fA-F]{1,4}|([0-9a-fA-F]{1,4}:){1,4}:((25[0-5]|2[0-4][0-9]|1{0,1}[0-9]{0,1}[0-9])\.{3,3})(25[0-5]|2[0-4][0-9]|1{0,1}[0-9]{0,1}[0-9])|::(ffff(:0{1,4}){0,1}:){0,1}((25[0-5]|2[0-4][0-9]|1{0,1}[0-9]{0,1}[0-9])\.{3,3})(25[0-5]|2[0-4][0-9]|1{0,1}[0-9]{0,1}[0-9])|:((:[0-9a-fA-F]{1,4}){1,7}|:))/,

    // https://regex101.com/r/1Nfemn/2
    // PLEASE DON'T USE THIS TO DELETE https://regex101.com/delete/fDMBWjTwA2aWYy2HFbVBe9dX
    domain_address: $ => /((([a-zA-Z0-9][a-zA-Z0-9-]{0,61}[a-zA-Z0-9]|[a-zA-Z0-9])\.)+)[a-zA-Z]{2,}/,

    _port_number: $ => seq(
      ':',
      /\d{1,5}/
    ),

    matcher_definition: $ => seq(
      $.matcher_name,
      // TODO: blocks are optional if only one matcher is used
      '{',
      $.standard_matcher,
      '}'
    ),

    matcher_name: $ => token(seq(
      '@',
      /[\w-]*/
    )),
    
    standard_matcher: $ => seq(
      choice(...STANDARD_MATCHER_NAMES),
      // TODO: matcher args needs serious work
      seq(
        /[\w\/*]/
      )
    ),

    directive_block: $ => choice(    
      $.directive_abort,
      // $.directive_acme_server,
      // $.directive_basicauth,
      $.directive_bind,
      $.directive_encode,
      // $.directive_error,
      // $.directive_file_server,
      // $.directive_forward_auth,
      $.directive_handle,
      // $.directive_handle_errors,
      // $.directive_handle_path,
      $.directive_header,
      // $.directive_import,
      // $.directive_log,
      // $.directive_map,
      // $.directive_method,
      // $.directive_metrics,
      // $.directive_php_fastcgi,
      // $.directive_push,
      $.directive_redir,
      // $.directive_request_body,
      // $.directive_request_header,
      // $.directive_respond,
      // $.directive_reverse_proxy,
      // $.directive_rewrite,
      // $.directive_root,
      // $.directive_route,
      // $.directive_skip_log,
      // $.directive_templates,
      $.directive_tls,
      // $.directive_tracing,
      // $.directive_try_files,
      // $.directive_uri,
      // $.directive_var
    ),

    directive_abort: $ => prec.left(seq(
      field('directive_name', 'abort'),
      optional($.matcher_token)
    )),

    directive_bind: $ => seq(
      field('directive_name', 'bind'),
      repeat1(seq(
        optional(seq(
          $._network,
          '/'
        )),
        choice(
          $._ipv4_address,
          $._ipv6_address,
          // TODO unix socket properly
          $.unix_path
        )
      ))
    ),

    _network: $ => choice(
      seq(
        choice('tcp', 'udp', 'ip'),
        optional(choice('4', '6')),
      ),
      seq(
        'unix',
        optional(choice('gram', 'packet'))
      )
    ),

    unix_path: $ => choice(
      seq(
        '"',
        /[\w\s\/]+/,
        '"'
      ),
      /[\w\/\.-]+/
    ),

    directive_encode: $ => prec.left(seq(
      field('directive_name', 'encode'),
      optional($.matcher_token),
      repeat1($.encode_format)
    )),

    encode_format: $ => choice('gzip', 'zstd'),

    // directive_file_server: $ => seq(
    //   field('directive_name', 'file_server'),
    //   optional($.matcher_token,),
    //   optional('browse'),
    //   optional(seq(
    //     '{',
    //     // TODO: file_server options
    //     '}'
    //   ))
    // ),
    
    directive_handle: $ =>seq(
      field('directive_name', 'handle'),
      optional($.matcher_token),
      seq(
        '{',
        repeat1($.directive_block),
        '}'
      )
    ),

    directive_handle_path: $ =>seq(
      field('directive_name', 'handle_path'),
      optional($.matcher_token),
      seq(
        '{',
        repeat1($.directive_block),
        '}'
      )
    ),
    
    directive_header: $ => prec.left(seq(
      field('directive_name', 'header'),
      optional($.matcher_token),
      optional($.field_manipulator),
      optional(seq(
        '{',
        repeat1($.field_manipulator),
        optional('defer'),
        '}',
      ))
    )),

    field_manipulator: $ => choice(
      $.field_replace,
      $.field_add_or_set,
      $.field_delete,
      $.field_set_default
    ),

    field_replace: $ => seq(
      $.header_name,
      $.header_value,
      $.header_value
    ),

    field_add_or_set: $ => seq(
      optional('+'),
      $.header_name,
      $.header_value
    ),

    field_delete: $ => seq(
      '-',
      $.header_name
    ),

    field_set_default: $ => seq(
      '?',
      $.header_name,
      $.header_value
    ),

    header_name: $ => /[\w-]+/,

    header_value: $ => choice(
      /[\w:;\.,\\\/"'\?\!\(\){}\[\]@<>=+\*#\$\&`\|\~\^%\-]+/,
      seq(
        '"',
        // /[\w:;\.,\\\/"'?!(){}\[\]@<>=-+\*#$&\`\|~\^% -]+/,
        '"'
      ),
      seq(
        "'",
        // /[\w:;\.,\\\/"'?!(){}\[\]@<>=-+\*#$&\`\|~\^% -]+/,
        "'" 
      )
    ),
       
    directive_redir: $ => seq(
      field('directive_name', 'redir'),
      // optional($.matcher_token),
      $.redir_or_rewrite_target,
      optional($.redir_code)
    ),

    redir_or_rewrite_target: $ => choice(
      field('address_target', seq(
        optional($.protocol),
        $.domain_address,
        optional($.uri_path_with_placeholders)
      )),
      field('uri_path_target', $.uri_path_with_placeholders)
    ),

    // uri_path_with_placeholders: $ => repeat1(choice(
    //   $._valid_uri_path_string,
    //   /\{[\w\.\*]+\}/,
    // )),
    // uri_path_with_placeholders: $ => token(seq(
    //   /([\w\.\~\!\$\&'\(\)\*\+,;=:@-]|(%[0-9a-fA-F]{2}))+/,
    //   optional(repeat(choice(
    //     /([\w\.\~\!\$\&'\(\)\*\+,;=:@-]|(%[0-9a-fA-F]{2}))+/,
    //     /\{[a-z\.]+\}/,
    //   )))
    // )),
    uri_path_with_placeholders: $ => token(repeat1(
      choice(
        /([\w\.\~\!\$\&'\(\)\*\+,;=:@-]|(%[0-9a-fA-F]{2}))+/,
        /\{[a-z\.]+\}/,
      )
    )),

    _valid_uri_path_string: $ => /([\w\.\~\!\$\&'\(\)\*\+,;=:@-]|(%[0-9a-fA-F]{2}))+/,
      
    redir_code: $ => choice(/3\d\d/, '401', 'temporary', 'permanent', 'html'),
    
    directive_tls: $ => seq(
      field('directive_name', 'tls'),
      optional(choice(
        'internal',
        $.email_address
      )),
      optional(seq(
        field('cert_file', $.unix_path),
        field('key_file', $.unix_path)
      )),
      // optional(seq(
      //   '{',
      //   // TODO: tls options
      //   '}'
      // ))
    ),

    email_address: $ => /(?:[a-z0-9!#$%&'*+\/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+\/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")@(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9]))\.){3}(?:(2(5[0-5]|[0-4][0-9])|1[0-9][0-9]|[1-9]?[0-9])|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])/,
    // _email_address: $ => /[\w.-]+@[\w.-]+/,

    matcher_token: $ => choice(
      field('path_matcher', $._valid_uri_path_string),
      $.matcher_name
    ),
    
    subdirective_block: $ => choice(
      // $.directive_name,
      $.subdirective_name,
    ),

    // TODO: external scanner to validate if subdirective is valid for directive?
    subdirective_name: $ => /\w+/,
    // directive_arg: $ => /.*/

    snippet: $ => seq(
      $.snippet_name,
      '{',
      seq(choice(
        $.comment,
        $.matcher_definition,
        $.directive_block
      )),
      '}'
    ),

    // TODO: Are numbers allowed?
    snippet_name: $ => token(seq('(', /[\w-]*/, ')')),
    // _definition: $ => choice(
    //   $._directive_definition
    // ),

    // directive_definition: $ => seq(
    //   $.directive_name,
    //   $.block
    // ),

    // block: $ => seq(
    //   '{',
    //   repeat($.directive_option),
    //   '}'
    // ),
    import: $ => seq(
      'import',
      choice(
        $.snippet
        // TODO: file import?
      )
    )

    
  }
});