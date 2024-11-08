; General
(label) @label
(directive) @keyword
(preprocessor_directive) @keyword
(mnemonic) @function.builtin
(operand) @number
; Comments
(comment) @comment

; Literals
(any_number) @number

(string) @string

; Operators & Punctuation
[
  "+"
  "-"
  "*"
  "/"
  "<"
    ">"
    "<<"
    ">>"
  "|"
  "^"
  "&"
  "~"
] @operator

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket
