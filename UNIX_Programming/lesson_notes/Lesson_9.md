# Lesson No 9

## Header Files

- Header files are used to define constants, macros, and function prototypes
- makes it easier to write and maintain program
- Header files are included in the source code using the #include directive

## Make-files

- Used to automate the compilation process
- Makefile are used to specify the dependencies between files
- Only the files that have changed are recompiled

```makefile
# Makefile
CC = gcc
CFLAGS = -Wall -g
Libs = -lm

all : circle

main.o : main.c
    $(CC) $(CFLAGS) -c main.c

area.o : area.c
    $(CC) $(CFLAGS) -c area.c

clean :
    rm -f *.o
```

```bash
make all # compiles all the files
make clean # removes all the object files
make # compiles only the files that have changed
```

### Dependencies

Make files can be used to specify the dependencies between files.
For example, if the file main.c includes the file area.h,
then the file area.h must be compiled before main.c.
This can be specified in the make file as follows:

```makefile
main.o : main.c area.h
    $(CC) $(CFLAGS) -c main.c
```