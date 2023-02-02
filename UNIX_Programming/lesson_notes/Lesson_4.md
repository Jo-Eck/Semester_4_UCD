## Input output in C

The Linux system provides a number of functions for input and output operations.
 These functions are defined in the header file stdio.h. The functions in this header file are used to perform input and output operations on files, strings, and standard input and output devices.

 ### Open
 the open() system call opens the file specified by pathname. If the call is successful, it returns a file descriptor, a small, nonnegative integer for use in subsequent system calls. If an error occurs, open() returns -1.

```c
 open(path, flags, mode)
```

 - path - the path to the file (relative or 
 - flags - the flags to open the file with (see below)
 - mode - the mode to open the file with (only used if the file is created)

 file descriptor :  
 - 1 - stdin
 - 2 - stdout
 - 3 - stderr

### stdin, stdout, stderr

#### Standard input
the standard input is the input stream of the program. It is usually the keyboard, but it can be redirected to a file or a pipe.
Just like the standard output, the standard input is buffered. The buffer is flushed when a newline character is read or when the buffer is full.

#### Standard output
the standard output is the output stream of the program. It is usually the screen, but it can be redirected to a file or a pipe.
The standard output is buffered. The buffer is flushed when a newline character is written or when the buffer is full.

#### Standard error
the standard error is the error stream of the program. It behaves like the standard output and is usually the screen, but it can be redirected to a file or a pipe.

### File pointers
A file pointer is a pointer to a file. It is used to access the file. It is a pointer to a structure of type FILE. The FILE structure contains information about the file, such as the file descriptor, the buffer, the current position in the file, and the error indicator.

### File modes
The file modes are used to specify the access mode of the file.They are represented by a few  ascii characters. The following table shows the file modes.

| Mode | Description |
|------|-------------|
| r    | Open a file for reading. The file must exist. |
| w    | Create an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered as a new empty file. |
| a    | Append to a file. Writing operations append data at the end of the file. The file is created if it does not exist. |

they can be combined with the following modifiers:
| Modifier | Description |
| ---  | --- |
| +   | Open a file for update (both for reading and writing). |   
| b   | Open in binary mode. |
| t   | Open in text mode. |

These flags can be combined to form a single mode. For example, the mode "r+" opens a file for both reading and writing. The mode "w+b" opens a file for both reading and writing in binary mode. If no mode is specified, the default mode is "r" (open for reading).

