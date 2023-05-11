# Unix IPC


## Name three types of inter process communication and describe them

- pipes - uni directional communication between two processes based on byte streams
- datagram sockets - bi directional communication between two processes based on messages
- shared memory - bi directional communication between two processes based on shared memory

## name three types of inter process synchronization and describe them

- semaphores - a counter that can be incremented and decremented
- file locks - locks a file so that only one process can access it at a time 
- mutexes and conditions - utilized by threads to prevent unsafe access to shared data

## what are the three main types of IPC

- communication (transfer of data)
- synchronization (control access to shared resources)
- signalling (kinda does both)

## what are the two important things kinds of communication

- data transfer (pipes, sockets)
- shared memory (shared memory)

## why are two transfers needed for data transfer based IPC

- one process writes the user data to the kernel buffer
- the other process reads the data from the kernel buffer to its own buffer

## how does shared memory work and why is it tricky

- the kernel maps a region of memory into the address space of two processes
- both processes can read and write to the memory
- it is tricky because you have to make sure that both processes dont overwrite each others data at the same time

## What are the three types of data tansfer based IPC?

byte streams, messages, and pseudoterminals

## Give thre examples of byte stream based IPC

- pipes
- FIFOs
- sockets

## What is the difference between a pipe and a FIFO

- a pipe is a unidirectional byte stream
- a fifo (aka named pipe) is a bidirectional byte stream

## what is the key feature of pipes and FIFOs

- they are byte streams and therefore have no concept of message boundaries

## give two examples of message based IPC

- datagram sockets
- message queues

## what is the key feature of message based IPC

and what effect does it have?
%23

- they are message based and therefore have message boundaries
- this means that the receiver can/must read the entire message at once
- it is not possible to read part of a message
- it is not possible to read multiple messages at once

## what is a pseudo terminal

a data transfer based IPC that is used to connect a terminal emulator to a shell

## what is a message?

a message is a data transfer based IPC that uses defined message boundaries

## what is a byte stream?

a data transfer based IPC that has no concept of message boundaries

## what ipc does ssh use?

- ssh uses a pseudo terminal to connect a terminal emulator to a shell

## what ipc does netcat use?

- netcat uses a socket to connect two processes

## what ipc does a web browser use?

- a web browser uses a socket to connect to a web server

## what is a semaphore?

- a semaphore is a counter that can be incremented and decremented

## what is a file lock?

- a file lock is a lock that can be locked and unlocked
- it lives in the file system

## what is a condition?

- a condition is a variable that can be set and cleared

## what does fcntl() do?

- fcntl() is a system call that can be used to lock a file

## how does one lock a file?

- one uses the fcntl() system call to lock a file

```c
int fcntl(int fd, int cmd, ... /* arg */ );
```

## what is a mutex?

- short for mutual exclusion
- a mutex is a lock that can be locked and unlocked
- it prevents multiple threads from accessing the same data at the same time

## give the code for a pipe and explain it

```c
int pipe(int pipefd[2]);
```

- pipefd[0] is the read end of the pipe
- pipefd[1] is the write end of the pipe

## what happens if a pipe is full?

- the write() system call blocks until there is space in the pipe

## what is the process to connect two processes with a pipe?

1. open a pipe
2. fork()
3.1 in the child process, close the read end of the pipe
3.2 in the parent process, close the write end of the pipe
4.1 in the child process, write to the pipe
4.2 in the parent process, read from the pipe

## How does one create a pipe?

- one uses the pipe() system call

```c

int pipe(int pipefd[2]);

```

## How doe one close a pipe?

- one uses the close() system call

```c

int close(int fd);

```

where fd is the file descriptor of the pipe
(it has two file descriptors, one for the read end and one for the write end)


## How does one write to a pipe?

- one uses the write() system call

```c

ssize_t write(int fd, const void *buf, size_t count);

```

where fd is the file descriptor of the pipe
buf is the buffer to write from
count is the number of bytes to write

it returns the number of bytes written as a ssize_t

## What is the return value of write() and what does it mean?

- the return value of write() is the number of bytes written
- it is of type ssize_t
- if it is negative, then an error occurred

## How does one read from a pipe?

- one uses the read() system call

```c

ssize_t read(int fd, void *buf, size_t count);

```

where fd is the file descriptor of the pipe
buf is the buffer to read into
count is the number of bytes to read

## which is the read end of the pipe?

- pipefd[0]

## which is the write end of the pipe?

- pipefd[1]

## What happens if child process terminates before parent process calls wait()?

wait() call allows parent to reap
the child process and disallow it to become a zombie.

## what is the difference between _exit and exit?

- _exit() is a system call that terminates the calling process immediately
- exit() is a library function that terminates the calling process after flushing the stdio buffers
