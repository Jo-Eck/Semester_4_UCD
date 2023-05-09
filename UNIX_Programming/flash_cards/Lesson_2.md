# Unix Lesson 2 Flash Cards

## What is a shell?

- command line interface to the operating system
- takes standard input and executes commands in the operating system
- replaced by Graphical User Interfaces for most end users

## What are the most common shells?

- `bash` (Bourne Again Shell)
- `zsh` (Z Shell)

## What is the difference between a shell and a terminal?

- a terminal is device that allows you to interact with a shell
- a terminal emulator is a program that emulates a terminal on an operating system to allow you to interact with a shell

## What is the structure of a shell command?

provide an example
%

- `command [options] [arguments]`
- eg `ls -l /home`

## 'man' command

- `man` is short for manual
- prints the manual for a command

## 'ls' command

- `ls` is short for list
- lists the contents of a directory

## 'mkdir' command

- `mkdir` is short for make directory
- creates a new directory

## 'cd' command

- `cd` is short for change directory
- changes the current working directory

## 'pwd' command

- `pwd` is short for print working directory
- prints the current working directory

## 'cp' command

also provide an example for arguments
%

- `cp` is short for copy
- copies a file or directory
- eg `cp source destination`

## 'mv' command

also provide an example for arguments
%

- `mv` is short for move
- moves a file or directory
- eg `mv source destination`

## how does one rename a file?

- `mv` can be used to rename a file
- eg `mv old_name new_name`

## What does the `.` directory refer to?

- the current working directory

## What does the `..` directory refer to?

- the parent directory
- aka the directory that contains the current working directory

## What does the `~` directory refer to?

- the home directory

## What is the difference between a relative path and an absolute path?

- a relative path is relative to the current working directory
- an absolute path is relative to the root directory

## What is $PATH?

- a list of directories that the shell indexes to find commands
- the shell will search these directories in order to find a command

## How does a program become a command?

- it is placed in a directory that is indexed by the shell aka a directory in $PATH

## What is the difference between a file and a directory?


TRICK QUESTION! EVERYTHING IS A FILE!

- there is none a directory is a file that contains information about other files which are "contained" in the directory

## Why is everything a file?

- it allows the operating system to treat everything the same way

## 'cat' command

- `cat` is short for concatenate
- prints the contents of a file to standard output

## 'wc' command

also provide 2 examples for arguments
%

- `wc` is short for word count
- prints the number of lines, words and bytes in a file
- examples:
  - `wc -l file` prints the number of lines in a file
  - `wc -w file` prints the number of words in a file
  - `wc -c file` prints the number of bytes in a file
  - `wc -m file` prints the number of characters in a file
  - `wc -L file` prints the length of the longest line in a file

## 'gcc' command

provide 2 examples for arguments
%

- `gcc` is the GNU C Compiler
- compiles C code into an executable
- examples:
  - `gcc -o executable source.c` compiles source.c into an executable named executable
  - `gcc source.c -lm` compiles source.c into an executable and links the math library
  - `gcc source.c -Wall` compiles source.c into an executable and enables all warnings (warning all)

## What is the root of all directories?

- `/`

## What is the root user?

- the root user is the super user aka the administrator
- the root user has access to all files and directories

## What is the home directory of the administrator?

- `/root`
- not to be confused with the root directory `/`

## What is the home directory of a user?

- `/home/[username]`
- when logged in as a user, `~` refers to this directory

## what is in `/bin`?

- Commands used by all users

## what is in `/sbin`?

- Commands used by the super user

## what is in `/lib`?

- Libraries used by programs in `/bin` and `/sbin`

## what is in `etc`?

- "Everthing to configure"

## what is in `/dev`?

- Device files
- Or virtual devices like `/dev/null`

## what is in `/proc`?

- Contains the process information for all processes

## what is in `/var`?

- Variable data
- general files which are expected to change in size and content as you use the computer like :
  - `/var/log` - log files
  - `/var/spool` - print queues and mailboxes
  - `/var/tmp` - temporary files to be preserved between reboots

## what is in `/tmp`?

- Temporary files to be deleted between reboots

## what is in `/usr`?

- Second level programs and data
- `/usr/bin` - programs for all users
- `/usr/sbin` - programs for the super user
- ...

## what is in `/boot`?

- Boot loader files
- Kernel files

## what is in `/home`?

- Home directories for all users
- Users can get their own space to store their files

## what is in `/mnt`?

- users can manually mount devices here
- similar to `/media` but `/media` is for automatically mounted devices

## what is in `/media`?

- Automatically mounted devices
- similar to `/mnt` but `/mnt` is for manually mounted devices

## what is in `/opt`?

- Optional software for distributors

## How to quit vim?

- `esc` + `:q` to quits
