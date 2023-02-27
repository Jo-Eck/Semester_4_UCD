# Lesson 10

## Execve

`execve` is a system call that replaces the current process with a new one
so it is a way to run an executable file by calling execve on the file
name.

It takes three arguments:

1. The name of the file to run
2. An array of strings that are the arguments to the program
3. An array of strings that are the environment variables

```c
#include <unistd.h>

extern char **environ;
int main(int argc, char *argv[]) {
    execve("/bin/ls", args, environ);
    printf("This will never be printed\n");
    return 0;
}
```

## Fork

will create a new process that is a copy of the current process. The
child process will have the same memory space as the parent process.

```c
#include <unistd.h>

int main(int argc, char *argv[]) {
    pid_t pid = fork();
    if (pid == 0) {
        printf("I am the child\n");
    } else {
        printf("I am the parent\n");
    }
    return 0;
}
```

## strtok

`strtok` is a function that takes a string and a delimiter and returns
a pointer to the first token in the string. 
If a NULL pointer is passed as the first argument, it will continue
tokenizing the string that was passed previously.

```c
#include <string.h>

char input_string[] = "This is a string";
char output_string = malloc(sizeof(char*));
int i = 0;
char *token = strtok(input_string, " ");
while (token != NULL) {
    output_string[i] = token;
    i++;
    token = strtok(NULL, " ");
}
return 0;

```

``` bash
$ ./a.out
This
is
a
string
```

## Signals

A signal is a notification sent to a process to notify it of an event
that has occurred. Signals are used to notify a process that it should
terminate, that it should suspend execution, or that a condition has
occurred.

every signal has a number associated with it. The number is used to
identify the signal. 

```c
#include <signal.h>

void handler(int signum) {
    printf("Received signal %d\n", signum);
}

int main(int argc, char *argv[]) {
    signal(SIGINT, handler);
    while (1) {
        printf("Hello\n");
        sleep(1);
    }
    return 0;
}
```

``` bash
$ ./a.out
Hello
Hello
^CReceived signal 2
Hello
Hello
^CReceived signal 2
Hello

```

## kill

`kill` is a system call that sends a signal to a process. It takes two
arguments:

1. The process ID of the process to send the signal to
2. The signal number to send

Tabel with most common signals:

| Signal | Number | Description |
|--------|--------|-------------|
| SIGHUP | 1 | Hangup detected on controlling terminal or death of controlling process |
| SIGINT | 2 | Interrupt from keyboard |
| SIGQUIT | 3 | Quit from keyboard |
| SIGILL | 4 | Illegal Instruction |
| SIGABRT | 6 | Abort signal from abort(3) |
| SIGFPE | 8 | Floating point exception |
| SIGKILL | 9 | Kill signal |
| SIGSEGV | 11 | Invalid memory reference |
| SIGPIPE | 13 | Broken pipe: write to pipe with no readers |
| SIGALRM | 14 | Timer signal from alarm(2) |
| SIGTERM | 15 | Termination signal |
| SIGSTOP | 19 | Stop process |
