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