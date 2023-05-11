# Compiling

## What is compiling?

Compiling is the process of translating source code into machine code.

## What is the standard compiler for C on UNIX systems?

The standard compiler for C on UNIX systems is `gcc`.

## What is the difference between compiling and linking?

Compiling is the process of translating source code into machine code.
Linking is the process of linking the object files together to create an executable.

## What is the difference between an object file and an executable?

An object file is the result of compiling a source file.
An executable is the result of linking object files together.

## what does the preprocessor do?

The preprocessor is the first step of the compilation process.
It is responsible for expanding macros and including header files.
It takes care of all the `#` directives.

## what does the compiler do?

The compiler is the second step of the compilation process.
It is responsible for translating source code into assembly code.

## what does the assembler do?

The assembler is the third step of the compilation process.
It is responsible for translating assembly code into object code.
Object code is machine code that has not been linked yet, but is already in binary form.

## What does the -c flag do in gcc?

The `-c` flag in gcc tells gcc to stop after the compilation step.
It tells gcc to not link the object files together.
This is used when one wants to compile multiple source files into object files, and then link them together later, by hand.

## What does the -S flag do in gcc?

The `-S` flag in gcc tells gcc to stop after the assembly step.
It tells gcc to not compile the source code into assembly code. 
We can then inspect the assembly code to see what the compiler did.

## What does the -E flag do in gcc?

The `-E` flag in gcc tells gcc to stop after the preprocessing step.
It tells gcc to not compile the source code into assembly code, and to not assemble the assembly code into object code.
We can then inspect the preprocessed code to see what the preprocessor did.

## what does the -lx flag do in gcc?

The `-lx` flag in gcc tells gcc to link the library `libx.a` to the executable. 
where `x` is the name of the library.
We can use this flag to link any library to the executable.
This differs from the `-L` flag, which tells gcc where to look for libraries.

## how does one create a library?

To create a library, we first compile the source files into object files.
Then we use the `ar` command to create a library from the object files.
The `ar` command takes the object files as arguments, and creates a library from them.

## give the syntax for creating a library from object files.

```bash
ar rcs libx.a x.o y.o z.o
ls
```

> `libx.a` `x.o` `y.o` `z.o`

## how does one link a library to an executable?

To link a library to an executable, we use the `-lx` flag.
Where `x` is the name of the library.
The `-lx` flag tells gcc to link the library `libx.a` to the executable.

## give thesyntax for linking a library to an executable

```bash
gcc -o main main.o -lx
ls
```
> `main` `main.o` `libx.a`


## what does the .a extension mean?

The `.a` extension means that the file is a static library.
A static library is a library that is linked to the executable at compile time.
The executable will contain the code of the library.

## what does the .so extension mean?

The `.so` extension means that the file is a dynamic library.
A dynamic library is a library that is linked to the executable at runtime.
The executable will not contain the code of the library.

## what does the .o extension mean?

The `.o` extension means that the file is an object file.
An object file is the result of compiling a source file.
It contains machine code that has not been linked yet.

## what does the .c extension mean?

The `.c` extension means that the file is a source file.
A source file is a file that contains source code.

## what does the .h extension mean?

The `.h` extension means that the file is a header file.
A header file is a file that contains declarations of functions and variables.
It is used to share declarations between source files.
 
## How does one include a header file?

To include a header file, we use the `#include` directive.
The `#include` directive takes the path to the header file as argument.
The path can be either absolute or relative.

## what is the most basic makefile?

```makefile
main: main.o
    gcc -o main main.o
```



## What does CC = gcc signify in a Makefile?

This sets the CC variable to gcc, which is the GNU C Compiler. This is the compiler that will be used to compile the source files.

## What does CFLAGS = -g -Wall do in a Makefile?

This sets the CFLAGS variable to -g -Wall. The -g flag tells the compiler to include debug information in the executable (useful for debugging), and -Wall enables all compiler's warning messages (useful to catch common bugs).

## What is the purpose of TARGET = program in a Makefile?

This sets the TARGET variable to the name of the final executable file that make will create.

## What does all: $(TARGET) represent in a Makefile?

This is the default goal. When you run make without specifying a goal, it uses the first goal defined in the Makefile. Here, all is that default goal, and its dependency is $(TARGET).

## In a Makefile, what does $(TARGET): main.o do?

This is the rule to link the object files into the final executable. The executable depends on main.o.

## What is the purpose of main.o: main.c in a Makefile?

This is the rule to compile the main.c source file into an object file main.o.

## What does the clean rule do in a Makefile?

This is a special rule that doesn't correspond to a file. It is used to clean up the files that were produced by the compilation process. You can run it manually by typing make clean.

## What are the three typical minimal set of rules you would find in a basic Makefile for a C program?

The three typical minimal set of rules you would find in a basic Makefile for a C program are compile (e.g., main.o: main.c), link (e.g., $(TARGET): main.o), and clean (e.g., clean: ...).