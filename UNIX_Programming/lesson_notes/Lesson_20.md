# Lesson 20

## Bash

### Functional decomposition

- As most programming languages, Bash can be split into multiple functions to make the code more readable and maintainable
- this makes the code:
    - more abstract
    - more modular
    - more reusable
    - more testable

> when writing modular code it is important to keep the functions small and focused on a single task

### Functions

- Functions are declared with the `function` keyword
    - `function my_function() { ... }`
- a function needs to be declared before it can be called
- a function can be called with the `()` operator
    - `my_function()`

### Function parameters

Functions can take parameters

 - `function my_function(param1, param2) { ... }`
    - `my_function(5, 5)`

### Scope

- Bash has a so called dynamic scope
    - this means that variables declared inside a function are only accessible inside that function
    - variables declared outside a function are accessible inside that function

```bash
x = 1

f() {
   print $x
}

g() {
   x = 2
   f()
}

f() # prints 1
g() # prints 2
```

### Arrays

- Bash can work with arrays
- Arrays are declared with the `()` operator
    - `my_array=(1 2 3)`
- Arrays can be accessed with the `[]` operator
    - `echo ${my_array[0]}`
- Arrays can be iterated over with the `for` loop
    - ```for i in ${my_array[@]}; do echo $i; done```

### Wildcards

- Bash can use wildcards to match multiple files
- wildcards are:
    - `*` matches zero or more characters
    - `?` matches exactly one character
    - `[ ]` matches any character inside the brackets
    - `[! ]` matches any character not inside the brackets

### Job control

- Bash can control jobs
- a job is a process running in the background
- a job can be started with the `&` operator
    - `sleep 5 &`
- a job can be stopped with the `CTRL + Z` key combination