# Lesson 2 - Shell, Directory Structure and STDIO

## Shell

### What is a shell?

- command line interface to the operating system
- a programm that take commands from the standard input and executes them in the operating system
- replaced by Graphical User Interfaces for most end users
- most common shells are `bash` (Bourne Again Shell) and `zsh` (Z Shell)

### Shell commands

- user types a line of text
- shell reads the line of text and executes the command
- shell waits for the command to finish
- shell prints the output of the command
- then waits for the next command

> structure is `command [options] [arguments]` \
> eg `ls -l /home`

- arguments are input to the command
  - it can be a file, a directory, a string, etc
- options are flags that modify the behaviour of the command
  - they are usually preceded by a `-` or `--`
- the core utilities are documented in the `man` pages
- the binary is usually located in `/bin` or `/usr/bin`
- the shell indexes these folders because they are in the $PATH variable

## stdio

- standard input, standard output, standard error are the three default streams that are opened when a program is executed
- they are abstract devices that are mapped to the terminal

### Manipulating stdio

- `>` redirects the output of a command to a file
- `>>` appends the output of a command to a file
- `<` redirects the input of a command to a file
- `2>` redirects the error output of a command to a file
- `&>` redirects the output and error output of a command to a file
- `|` pipes the output of a command to the input of another command

## Filesystem

- the filesystem is a tree structure
- everything is a file!
  - files are files
  - directories are files that contain other files
  - devices are files that represent hardware
  - sockets are files that represent network connections
  - pipes are files that represent interprocess communication
  - processes are files that represent running programs

![dir tree](/.images/dir_tree.png)
