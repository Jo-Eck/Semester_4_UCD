# Lesson No 11

## Multi Threading

### What is Multi Threading

* Multi Threading is a way of executing multiple threads simultaneously within a process.
* When a process is created, it has a single thread of execution.
  
### What is it used for

1. Blocking I/O
   1. writing to a file
   2. asynchronous I/O
2. Server applications
   1. web server
   2. database server
   3. mail server
3. GUI applications
4. Performance
    1. parallel processing
    2. multi-core processors

### How to create a thread

`fork()` is used to create a new process. `fork()` creates a new process by duplicating the calling process.
The new process, referred to as the child, is an exact duplicate of the calling process, referred to as the parent.
The child process is created with a new process ID, and parent and child processes do not share any memory.
The child process is started with a call to `main()`, with the same arguments as the call to `fork()` that created it.
Howerver we face issues when trying to work on the same data in the same task.

Light weight processes are used to solve this issue. They are called threads.
Threads are used to execute multiple tasks within a process.
Threads are created within a process and share the same memory space.
Threads are created using the `pthread_create()` function.

```c
#include <pthread.h>
int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine) (void *), void *arg);
```

* `thread` is a pointer to a `pthread_t` variable that is set by this function to the ID value for the new thread.
* `attr` is a pointer to a `pthread_attr_t` structure whose contents are used at thread creation time to determine attributes for the new thread; this argument is optional and should be `NULL` if no thread attributes are to be set.
* `start_routine` is the name of the function to be executed by the new thread.
* `arg` is a pointer to an object that may be used to pass arguments to the function specified by `start_routine`; it may be `NULL` if no arguments are to be passed.
