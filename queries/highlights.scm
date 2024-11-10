; highlights.scm
; Instructions and Registers
(instruction
  opcode: (mnemonic) @keyword
  operand: (operand (_) @number))

; Labels
(label
  name: (identifier)? @variable
  value: (
      (number)? @number
      (identifier)? @variable
      )
  operator: (operator)? @operator)

(label name: (identifier)) @label

(directive
  directive:
    (directives)? @label
    (identifier)? @variable
    (number)? @number
    (string)? @string
  value:
    (binary_file
      path: (string)? @string
      options: (string)? @string
    )? @function
    (identifier)? @number
    (number)? @number
) @label

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
(comment)+ @comment

; Identifiers
;(identifier) @variable

; Operators
(operator) @operator

; Punctuation
;"." @punctuation.delimiter
"=" @punctuation.delimiter
"," @punctuation.delimiter
;":" @punctuation.delimiter
"!" @punctuation.delimiter
;"*" @punctuation.special

"(" @punctuation.bracket
")" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

; Constants
;(boolean_value) @constant.builtin
;(null_value) @constant.builtin
