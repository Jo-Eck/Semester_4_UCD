# Lesson 18

## different types of interprocess communication

- pipes
- FIFOs
- sockets
- message queues
- shared memory
- semaphores
- eventfd
- file locks
- mutexes
- condition variables
- barriers
- signals

## main types of IPC

- communication between processes
    - transfer of data
        - once the data is transferred, the data is no longer available
        - byte streams
            - undelimited
            - no boundaries
        - messages
            - messages are packets of data
            - cant read a partial message
            - cant read more than one message at a time
        - pseudo files
            - files that are not actually files
            - can be read and written to
            - can be opened and closed
    - shared memory
        - not actuall transfer of data but rather access to the same 
        memory
        - super fast but can be dangerous

- synchronization between processes
    - semaphores
        - a counter that can be incremented and decremented
        - may never be less than 0
        - used to control access to a shared resource
        - counts like how many slots are available
    - file locks
        - locks a file so that only one process can access it at a time
        - can be used to synchronize access to a file
        - can target a specific region of a file
    - Mutexes and conditions
        - utilized by threads
        - prevents unsafe access to shared data
        - the difference between a mutex and the condition is that the condition is used to wait for a condition to be true so it is a blocking call
- signalling between processes (kinda does both)
