; highlights.scm
; Instructions and Registers
(mnemonic) @keyword
(accumulator) @constant.builtin
(register_x) @constant.builtin
(register_y) @constant.builtin

; Numbers
(float) @number
(decimal_number) @number
(binary_number) @number
(one_byte_number) @number
(two_byte_number) @number

; Strings
(string) @string

; Comments
(comment) @comment

; Labels
(label) @label

; Identifiers
(identifier) @variable

; Operators
(operator) @operator

; Punctuation
"." @punctuation.delimiter
"#" @punctuation.delimiter
"=" @punctuation.delimiter
"," @punctuation.delimiter
":" @punctuation.delimiter
"!" @punctuation.delimiter
"*" @punctuation.special

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

; Directives
(directives) @keyword.directive

; Constants
(boolean_value) @constant.builtin
(null_value) @constant.builtin
