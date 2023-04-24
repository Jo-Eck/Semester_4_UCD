# Lesson 19

## Bash

> Bash can not work with floating point numbers. It can only work with integers and strings.

- Bash variables are untyped
 - Essentially they are all handled as strings

 ### Declaring Variables

- Variables are declared with the `=` operator
    - `var=5`
- Variables are referenced with the `$` operator
    - `echo $var`
- Variables can be declared and referenced in the same line
    - `var=5; echo $var`

### Arithmetic

- Bash can perform arithmetic operations
    - `echo $(( 5 + 5 ))`
- Bash can perform arithmetic operations on variables
    - `var=5; echo $(( $var + 5 ))`

### Conditionals

- Bash can perform conditional operations
    - `if [ 5 -eq 5 ]; then echo "5 is equal to 5"; fi`


### Executing Commands 

- Bash can execute commands with the `$( )` operator
    - `echo $(ls)`
- Bash can execute commands with the backtick operator
    - ```echo `ls` ```

