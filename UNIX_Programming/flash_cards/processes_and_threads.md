# Processes and Threads in C

## what does clobbering mean?

Clobbering is when a process overwrites the memory of another process. This can happen when two processes are writing to the same memory location.

## what is a zombie process?

A zombie process is a process that has completed execution but still has an entry in the process table. This happens when the parent process has not yet called the wait() system call.

## what is the difference between a process and a thread?

A process is an instance of a program that is being executed. A thread is a subset of a process. A process can have multiple threads. Threads share the same memory space and resources.

## give the syntax for creating a thread in C

```c
pthread_t thread;
pthread_create(&thread, NULL, function, NULL);
```

where:

- `pthread_t thread` is the thread object
- `pthread_create` is the function to create a thread
- `function` is the function that the thread will execute
- `NULL` is the argument to the function

## Explain everythin in the following code

```c
#include <pthread.h>
#include <stdio.h>

#define NUM_THREADS 4
#define ARRAY_SIZE 1000

int array[ARRAY_SIZE];
int sum = 0;
pthread_mutex_t sum_mutex;

void *sum_array(void *arg) {
    int start = (int)arg;
    int end = start + ARRAY_SIZE / NUM_THREADS;
    int local_sum = 0;
    int i;
    for (i = start; i < end; i++) {
        local_sum += array[i];
    }
    pthread_mutex_lock(&sum_mutex);
    sum += local_sum;
    pthread_mutex_unlock(&sum_mutex);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int i;
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i;
    }
    pthread_mutex_init(&sum_mutex, NULL);
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_create(&threads[i], NULL, sum_array, (void *)(i * ARRAY_SIZE / NUM_THREADS));
    }
    for (i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    printf("sum: %d\n", sum);
    pthread_mutex_destroy(&sum_mutex);
    return 0;
}
```

%



## give the syntax for creating a mutex in C

```c
pthread_mutex_t mutex;
pthread_mutex_init(&mutex, NULL);

// *in the thread*

pthread_mutex_lock(&mutex);
// critical section
pthread_mutex_unlock(&mutex);
```

where:

- `pthread_mutex_t mutex` is the mutex object
- `pthread_mutex_init` is the function to create a mutex
- `pthread_mutex_lock` is the function to lock a mutex
- `pthread_mutex_unlock` is the function to unlock a mutex

