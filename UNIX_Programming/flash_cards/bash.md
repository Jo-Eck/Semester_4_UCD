# Bash

## What is the character sequence #! called?

- The shebang
- aka the hashbang, pound-bang, or hash-pling

## What is the shebang used for?

The shebang is used to tell the shell what interpreter to use to execute the script

## What is the shebang for bash?

`#!/bin/bash`

## How to make a comment in bash?

`# This is a comment`

## How does one create a variable in bash?

`var=5`

## How are values in bash stored?

As strings (untyped)

## what is `declare` in bash?

it creates a variable

## name 3 flags for `declare` and what they do

- `-i` makes the variable an integer
- `-r` makes the variable read only
- `-a` makes the variable an array
- `-f` makes the variable a function

## what does chmod do?

chmod changes the permissions of a file

## what does the `+x` flag do in chmod?

it makes the file executable

## what does && do in bash?

it makes the next command run only if the previous command was successful

## how does one chain commands in bash?

with the `;` operator
or the `&&` operator, which only runs the next command if the previous command was successful

## how does one get the return value of a command in bash?

one puts the command in backticks or `$()`

## describe the syntax for an if statement in bash

```bash

if [ condition ]; then
    code
fi

```

the fi is important to close the if statement

## what does `test` do in bash?

it tests a condition and returns a 0 or 1
`test 5 -eq 5` returns 0
identical to `[[ ]]`

## what does `[[ ]]` do in bash?

it tests a condition and returns a 0 or 1
`[[ 5 -eq 5 ]]` returns 0
identical to `test`

## what does the `-eq` flag do in bash?

it tests if two values are equal


## what does this code snippet do?

Explain every part of it.

```bash

[ $ ? - eq 0 ] && echo "Success" || echo "Failure"

```

%

- `[`:   Alias for test command.
- `$?`:  Exit status of the last command.
- `-eq`: Integer comparison operator (equals).
- `0`:   Represents success.
- `]`:   Closes the test command.
- `&&`:  Logical AND operator.
- `echo "Success"`: Prints "Success".
- `||`:  Logical OR operator.
- `echo "Failure"` : Prints "Failure"

## what does the conditional operator `-e` do in bash?

it tests if a file exists

## what does the conditional operator `-r` do in bash?

it tests if a file is readable

## what does the conditional operator `-w` do in bash?

it tests if a file is writable

## what does the conditional operator `-x` do in bash?

it tests if a file is executable

## what does the conditional operator `-s` do in bash?

it tests if a file is not empty

## what does the conditional operator `-O` do in bash?

it tests if a file is owned by the current user

## what does the conditional operator `-G` do in bash?

it tests if a file is owned by the current group

## what does the conditional operator `-eq` do in bash?

it tests if two values are equal

## what does the conditional operator `-ne` do in bash?

it tests if two values are not equal

## what does the conditional operator `-lt` do in bash?

it tests if the first value is less than the second value

## what does the conditional operator `-le` do in bash?

it tests if the first value is less than or equal to the second value

## what does the conditional operator `-gt` do in bash?

it tests if the first value is greater than the second value

## what does the conditional operator `-ge` do in bash?

it tests if the first value is greater than or equal to the second value

## what does the conditional operator `-nt` do in bash?

it tests if the first file is newer than the second file

## what does the conditional operator `-ot` do in bash?

it tests if the first file is older than the second file

## what does the conditional operator `-n` do in bash?

it tests if a string is not empty

## what does the conditional operator `-z` do in bash?

it tests if a string is empty

## what does the conditional operator `!` do in bash?

it negates the following condition

## what does the conditional operator `-o` do in bash?

logical OR

## what does the conditional operator `-a` do in bash?

logical AND

## How are arguments passed to a bash script?

as positional parameters
the first argument is `$1`, the second is `$2`, etc.

## How does one get the number of arguments passed to a bash script?

`$#`

## How does one get all the arguments passed to a bash script as a single string?

`$*`

## How does one get all the arguments passed to a bash script as an array?

`$@`

## What is the 0th argument in a bash script?

the name of the script

## How does one get the exit status of the last command in bash?

`$?`

## How does one get the length of a string in bash?

`${#string}`

## How does one get a substring in bash?

`${string:position:length}`

# Unix Lesson 20 Flash Cards

## What is a processes environment?

- a processes environment is a set of variables that are available to the process
- these variables are inherited from the parent process

## Where are the environment variables set?

- environment variables are set in the `~/.bashrc` file
- this file is executed every time a new shell is opened
- but many differnt scripts are used to set environment variables
  - `/etc/profile`
  - `/etc/bashrc`
  - `~/.bash_profile`
  - `~/.bash_login`
  - `~/.profile`

## How can you list all environment variables?

- `printenv`

## How can you set an environment variable?

- `export MY_VAR=5`

## How can you call a environment variable?

- like any other variable
- `$MY_VAR`

## how can you unset an environment variable?

- `unset MY_VAR`

## What is the difference exporting a variable and sourcing a file?

- exporting a variable makes it available to child processes
- sourcing a file executes the file in the current shell

## give the structure of a while loop

```bash

while [ condition ] ; do
    # do something
done

```

## what is a until loop?

- a until loop is the opposite of a while loop and executes the code until the condition is true

## what does the `Let` command do in bash?

- the `let` command evaluates an expression and stores the result in a variable
- `let x = 5 + 5`

## what is shell expansion?

- shell expansion is the process of expanding a variable to its value
- this is done by prefixing the variable with a `$`
- `print $MY_VAR`

## what does the `expr` command do?

give an example of its usage

%

- the `expr` command evaluates an expression and prints the result
- evert item in the expression needs to be separated by a space?!?
- `expr 5 + 5` (prints 10)

## wha does the `(())` operator do?

- the `(())` operator evaluates an expression and returns the result
- spaces are not needed between the items in the expression
- `print $((5+5))` (prints 10) 