# Variables & Comments in C++:

## Variables in C++:

Variables are **containers to store our data**.

To make it easy to understand, consider this scenario:

- To store water, we use **bottles**

In this scenario, the **bottle** and are containers that are storing water. Similarly, **variables are containers for data types**.

As there are many types of data types, for example:

- `int` is used for integers
- `float` is used for floating-point numbers
- `char` is used for characters

And many more data types are available.

The main point here is that **variables store the values of these data types**.

### Example

```cpp
int x = 5;
int y = 3;
```

## Declaration and initialization of variable:

The process of specifying the variable name and it types is callled the variable declaration, The variable declaration tells the compiler about the varaible.

The process of assigning a value to a varaible at the time of declaration is called varaible initialization

## Comments in C++:

A **comment** is a human-readable text in the source code, which is **ignored by the compiler**.

There are **two ways** to write comments:

1. **Single-Line Comments:**  
   Use `//` before a single line of text to make it unparsable by the compiler.

2. **Multi-Line Comments:**  
   Use `/*` as the opening and `*/` as the closing of the comment. Write text in between them. If text is written without this, the compiler will try to read the text and give an error.

---

## Example Code:

```cpp
#include<iostream>
using namespace std;

// This program was created by Code With Harry
/* this
is
a
multi
line
comment */
int main(){
    int sum = 6;
    cout<< "Hello world"<< sum;
    return 0;
}
```
