# Lesson 6

## Pointers

Pointers locate the memory address of a variable. They are used to pass variables by reference to functions, and to return values from functions. Pointers are also used to dynamically allocate memory.

Pointers are declared as follows:

```c
// the * indicates that p is a pointer
int *p;

// to access the value of the variable that p points to, use the * operator
*p = 10;
printf("%d", *p);
>> 10


// to assign a pointer to a variable, use the & operator
int x = 15;
p = &x;

printf("%d", *p);
>> 15

```

## Arrays

Arrays are a collection of variables of the same type:

```c
// declare an array of 10 integers
int a[10];

// assign values to the array
a[0] = 10;
a[1] = 20;
...

// access the values of the array
printf("%d", a[0]);
>> 10
```

Asrrays can also be allocated dynamically using the `malloc` function:

```c
// allocate n integers
int *a = malloc(n * sizeof(int));

// assign values to the array
a[0] = 10;
a[1] = 20;
...

// access the values of the array
printf("%d", a[0]);
>> 10
```

### Multi-dimensional Arrays

Multi-dimensional arrays are arrays of arrays:

```c
// declare a 2D array of 10 rows and 5 columns
int a[10][5];

// assign values to the array
a[0][0] = 10;
a[0][1] = 20;
a[1][0] = 30;
a[1][1] = 40;
...

// access the values of the array
printf("%d", a[0][0]);
>> 10
printf("%d", a[1][1]);
>> 40
```
