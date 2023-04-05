# Lesson 16

## Reentry

Reentry is when a function is called while it is already running. This can happen when a signal is sent to the process.
A function that is reentered is called a reentrant function.

- a function my not be reentrant if it uses global variables
  - eg malloc is not reentrant because it uses a global variable to keep track of the memory it has allocated
- man signal-safety
  - lists functions that are safe to call from a signal handler
  - eg printf is not safe to call from a signal handler because it is not reentrant

> printf is not reentrant because it uses a global variable to keep track of the number of characters it has printed lol

## Threadsafety

Threadsafety is when a function is safe to call from multiple threads at the same time.
It is similar to reentry, but it is not the same.
To make a thread safe function, you must make sure that it does not use any global or static variables.
To pass data to a thread safe function, you must pass it as a parameter. 

If in a signal handler, you must make sure that the function you call is reentrant and thread safe.

