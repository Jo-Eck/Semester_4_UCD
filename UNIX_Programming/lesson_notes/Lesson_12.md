# Lesson No 12

## Race Conditions

When two threads change the same resource at the same time and the result is not what you expect.
This can be avoided by using mutexes (mutual exclusion).
When a thread is using a resource, it locks the mutex and when it is done, it unlocks the mutex.
If tries to access a locked resource, it will wait until the mutex is unlocked.

## POSIX Threads

POSIX threads are a standard for threads in UNIX. 
They consist of a thread ID, a thread attributes, a thread function and a thread argument.
The thread ID is a unique identifier for the thread.
The thread attributes are used to set the thread attributes.
The thread function is the function that the thread will execute.
The thread argument is the argument that will be passed to the thread function.

They are created using the pthread_create() function. 
And when compiling you need to link the pthread library using the -pthread flag.

### Simple Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function(void *arg){
    
    int  thread_id;
    thread_id = *(int *)arg;
    printf("Thread %d: Hello World!\n", thread_id);

    return NULL;
}

int main(){

    pthread_t thread1, thread2;
    int thread1_id = 1;
    int thread2_id = 2;

    pthread_create(&thread1, NULL, print_message_function, (void *)&thread1_id);
    pthread_create(&thread2, NULL, print_message_function, (void *)&thread2_id);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
```

```bash
$ gcc -Wall -pthread -o thread thread.c
$ ./thread
Thread 1: Hello World!
Thread 2: Hello World!
```

## Shared Memory

While threads have their own private memory, they can also share memory.
This shared memory can be used to pass data between threads, but has to be managed carefully.

When threads share memory, they need to be synchronized.
To synchronize the main thread and the child thread, the main thread can wait for the child thread to finish using the pthread_join() function.
It will wait for the thread to finish and then continue.

### Another Example

```c
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *print_message_function(void *arg){
    
    int  thread_id;
    thread_id = *(int *)arg;
    printf("Thread %d: Hello World!\n", thread_id);

    return NULL;
}

int main(){

    pthread_t thread1, thread2;
    int thread1_id = 1;
    int thread2_id = 2;

    pthread_create(&thread1, NULL, print_message_function, (void *)&thread1_id);
    pthread_create(&thread2, NULL, print_message_function, (void *)&thread2_id);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
```

```bash
$ gcc -Wall -pthread -o thread thread.c
$ ./thread
Thread 1: Hello World!
Thread 2: Hello World!
```
