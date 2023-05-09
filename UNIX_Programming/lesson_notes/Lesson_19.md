# Lesson 19

## Bash

-> Bash can not work with floating point numbers. It can only work with integers and strings.

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

- Bash can perform many conditional operations
- Bash can perform conditional operations with the `test` command
  - `test 5 -eq 5`
- Bash can perform conditional operations with the `[[ ]]` command
  - `[[ 5 -eq 5 ]]`
- Bash can perform conditional operations with the `if` statement
- comparation include
  - `-eq` equal
  - `-ne` not equal
  - `-gt` greater than
  - `-ge` greater than or equal to
  - `-lt` less than
  - `-le` less than or equal to
  - `-e` file exists
  - `-r` file is readable
  - `-w` file is writable
  - `-x` file is executable
  - `-s` file is not empty
  - `-O` file is owned by the current user
  - `-G` file is owned by the current group
- logical operators include
  - `&&` logical AND
  - `||` logical OR
  - `!` logical NOT
- which each have their flags
  - `-a` logical AND
  - `-o` logical OR
  - `!` logical NOT

### Executing Commands

- Bash can execute commands with the `$( )` operator
  - `echo $(ls)`
- Bash can execute commands with the backtick operator
  - ```echo `ls` ```

## Command substitution

- Bash can substitute commands with the `$( )` operator
  - `echo $(ls)`
- Bash can substitute commands with the backtick operator
  - ```echo `ls` ```

### Command line arguments

- Bash can access command line arguments with the `$` operator
  - `echo $1`
- They are accessed in order
  - `echo $1 $2 $3`
- They can be accessed as a list with the `$@` operator
  - `echo $@`
- The number of arguments can be accessed with the `$#` operator
  - `echo $#`

### Command chaining

- Bash can chain commands with the `;` operator
  - `echo "Hello"; echo "World"`
- Bash can chain commands with the `&&` operator
  - `echo "Hello" && echo "World"`
  - The second command will only run if the first command was successful

