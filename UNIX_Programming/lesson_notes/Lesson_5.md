## C Variable scopes

Variable scopes are the areas of a program where a variable can be accessed. There are two types of variable scopes: local and global. Local variables are only accessible within the function in which they are declared. Global variables are accessible throughout the entire program.

### Global Variables
A global variable is a variable that is declared outside of any function. Global variables are accessible throughout the entire program. Global variables are created in the data segment. The data segment is a section of memory that stores global variables.

### Local Variables
A local variable is a variable that is declared within a function. Local variables are only accessible within the function in which they are declared. Local variables are created on the stack. The stack is a data structure that stores local variables.

### Static Memory
Static memory is a section of memory that is allocated at compile time. Static memory is used to store global variables and static local variables. Static memory is created in the data segment.

### External Variables
External variables are variables that are declared outside of a function. External variables are accessible throughout the entire program. External variables are created in the data segment. External variables are declared using the `extern` keyword.

## Dynamic Memory Allocation

### Malloc
Malloc is a function that allocates a block of memory in the heap. The heap is a section of memory that is allocated at runtime. The heap is used to store dynamically allocated memory. Malloc takes a single argument, the size of the block of memory to allocate. Malloc returns a pointer to the allocated memory. Malloc returns a `void *` pointer. A `void *` pointer can be cast to any other pointer type. Malloc returns a `NULL` pointer if the memory allocation fails.

### Calloc
Is different to malloc in that it allocates a block of memory and initializes it to zero. Calloc takes two arguments, the number of elements to allocate and the size of each element. Calloc returns a pointer to the allocated memory. Calloc returns a `NULL` pointer if the memory allocation fails.


# Program Variables

### argc
The `argc` variable is the number of command line arguments passed to the program. The `argc` variable is an integer.

### argv
The `argv` variable is an array of strings. The `argv` variable contains the command line arguments passed to the program. The first element of the `argv` array is the name of the program. The second element of the `argv` array is the first command line argument. The third element of the `argv` array is the second command line argument. The `argv` array is terminated by a `NULL` pointer.

### getopt
The `getopt` function is used to parse command line arguments. The `getopt` function takes three arguments. The first argument is the number of command line arguments. The second argument is an array of strings containing the command line arguments. The third argument is a string containing the valid command line options. The `getopt` function returns the next command line option. The `getopt` function returns `-1` if there are no more command line options. The `getopt` function returns `?` if an invalid command line option is encountered.