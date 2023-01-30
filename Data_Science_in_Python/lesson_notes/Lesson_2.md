# Lesson No 2

## Still basic stuff ....

### Flow control
While loops, if statements, for loops, etc.

### Comments
```python
# This is a single line comment
```

```python
""" This is a multi-line comment """
```

### Functions

```python
def function_name(arg1, arg2, arg3):
    """This is a docstring. It explains what the function does."""
    # Do stuff
    return output
``` 
The creation of a function is indicated by the def keyword. function name is followed by a list of arguments in parentheses. The code block that is part of the function is indented. The return statement is used to return a value from the function.

A function can have no arguments, one argument, or multiple arguments. The arguments can be of any type, including lists, dictionaries, and other functions.

A function can be called with positional arguments, keyword arguments, a combination of both or even without arguments.
If no arguments are passed, the function will try use  default values if they are defined.


```python
def function_name(arg1, arg2, arg3):
    """This is an example of positional arguments"""
    # Do stuff
    return output

function_name(1, 2, 3)

def function_name(arg1, arg2, arg3):
    """This is an example of keyword arguments"""
    # Do stuff
    return output

function_name(arg1=1, arg2=2, arg3=3)

def function_name(arg1 = 1, arg2 = 2, arg3 = 3):
    """This is an example of default arguments"""
    # Do stuff
    return output

function_name()
```
When a function is called it returns a value. This value can be assigned to a variable or used in any other way a variable can be used.
If no return statement is used, the function will return None.
A function can return multiple values as a tuple.


```python
def function_name(arg1, arg2, arg3):
    """This is an example of mutli-value return"""
    # Do stuff
    return output1, output2, output3

output1, output2, output3 = function_name(1, 2, 3)
```

### Strings

Strings are sequences of characters. They can be defined using single quotes, double quotes or triple quotes. Triple quotes are used to define multi-line strings.

#### String functions
Strings have a number of useful functions. Some of the most common are:

```python
string = "This is a string"
len(string) # Returns the length of the string
>>> print(len(string))
 16
string.lower() # Returns the string in lower case
>>> print(string.lower())
"this is a string"

string.upper() # Returns the string in upper case
>>> print(string.upper())
"THIS IS A STRING"

string.split() # Returns a list of words in the string, or a list split on a specific character.
>>> print(string.split())
['This', 'is', 'a', 'string']

string.strip() # Returns a string with whitespace removed from the start and end
>>> print(string.strip())
"This is a string"

string.replace("is", "at") # Returns a string where a is replaced with b.
>>> print(string.replace("is", "at"))
"Thaat at a string"
```

#### String formatting
One way of formatting strings is to use the % operator. The % operator is used to format a set of variables enclosed in a "tuple" (a fixed size list), together with a format string, which contains normal text together with "argument specifiers", special symbols like "%s" and "%d".

```python
>>> print("Hello %s" % "world")
Hello world
>>> print("Hello %s %s" % ("beautiful", "world"))
Hello beautiful world
```
Depending on the argument specifier, the % operator converts the value to a string. The argument specifier can be a string, a number, or a variable.

```python
>>> print("I have %d %s" % (2, "apples"))
I have 2 apples
```

### File I/O

#### Reading files
The open function is used to open a file. It returns a file object, also called a handle, as it is used to read or modify the file accordingly.

```python
file = open("filename.txt", "r")
for line in file:
    print(line)
```
The first argument is a string containing the filename. The second argument is another string containing a few characters describing the way in which the file will be used. mode can be 'r' when the file will only be read, 'w' for only writing (an existing file with the same name will be erased), and 'a' opens the file for appending; any data written to the file is automatically added to the end. 'r+' opens the file for both reading and writing. The mode argument is optional; 'r' will be assumed if it’s omitted.

When you are done with the file, you should close it. This is done with the close method of the file object.

```python
file.close()
```

Alternatively, you sould use the "with" statement to automatically close the file when you are done with it.

```python
with open("filename.txt", "r") as file:
    for line in file:
        print(line)
```

#### Writing files
To write to a file, you need to open it with mode 'w' or 'a' (append).

```python
with open("filename.txt", "w") as file:
    file.write("This is a line of text\n")
```

### Exceptions

Exceptions are errors that occur during execution of a program. When an error occurs, or exception as we call it, Python will normally stop and generate an error message. These exceptions can be handled using the try statement.

```python
try:
    # do something
except:
    # do something else
```

One should allow the except clause to handle the exception. If you don't handle the exception, the program will crash. But when catching an exception one should be careful not to catch all exceptions. This can be done by specifying the type of exception to catch.

```python
try:
    number = int("UCD")
except ValueError:
    # do something else
```