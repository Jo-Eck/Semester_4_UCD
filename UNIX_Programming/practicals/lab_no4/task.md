# Lab 4

## Task 1

Starting from the following code, make adjustments so that it compiles and gives the expected output

```C
#include <stdio.h>
int maths(int a, int b, int sum, int difference, int division);

int main(){
int a = 5;
int b = 3;


printf("sum:%d, difference:%d, division:%d\n", math.sum(a,b), math.difference(a,b), math.division(a,b));
return 0;
}

int maths(int a, int b, int sum, int difference, int division){
    int sum (){
        return a + b;
    }
    int difference (){
        return b - a;
    }
    int division (){
        return a / b;
    }
return 0;
}

```

## Task 2

Write a program that uses getopt( ) to read in command line arguments.

The program should behave as follows:

```bash
Usage: a.exe [options]
-h Print this help message and nothing else.
-i Print: "Interactive mode."
-v Print: "Verbose mode."
-n K Set the value K. K should default to 10.
```

By "default" also should print help message.

## Task 3

Write a function which accepts three inputs: start index, end index and a function (which accepts one integer argument and returns an integer). The function should be defined as follows:

void printTable(int start, int end, int (*fp) (int));

printTable function applies the input function to the numbers in the range of start and end. Then the result is printed as a table.

You have to get two user inputs in the main method by argv, validate them and then pass the inputs to the printTable function as follows:

printTable(start, end, square);

int square(int x) {
        return x * x;
} //end square

The expected inputs and outputs should be as below:

Input:                       Output:

1 5                           1 1
                                2 4
                                3 9
                                4 16
                                5 25

Input:                       Output:

1                              Wrong number of inputs.

5 5                           End should be greater than start.

5 4                           End should be greater than start.
