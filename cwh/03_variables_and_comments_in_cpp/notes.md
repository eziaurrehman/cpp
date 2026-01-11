# Variables & Comments in C++:

In this tutorial, we will learn about the **variables** and **comments** in the C++ language. In our last lesson, we discussed the basic structure of a C++ program, where we understood the working of the C++ code line by line.

We are going to cover two important concepts of C++ language:

- Variables in C++
- Comments in C++

---

## Low-Level vs High-Level:

Before explaining the concept of variables and comments, I would like to clarify two more ideas: **low level** and **high level**.  

To make it easy to understand, let's consider this scenario:

> When we go to Google search engine and search for some queries, Google displays us some websites according to our question. Google does this for us at a very high level. We don't know what's happening at the low level until we look into Google servers (at a low level) and further to the level where the data is in the form of 0s/1s.  

The point I want to make here is:

- **Low level:** nearest to the hardware  
- **High level:** farther from the hardware with a lot of layers of abstraction

---

## Variables in C++:

Variables are **containers to store our data**.  

To make it easy to understand, consider this scenario:

- To store water, we use **bottles**  
- To store sugar, we use **boxes**  

In this scenario, the **bottle** and **box** are containers that are storing water and sugar. Similarly, **variables are containers for data types**.  

As there are many types of data types, for example:

- `int` is used for integers  
- `float` is used for floating-point numbers  
- `char` is used for characters  

…and many more data types are available. We will discuss them in upcoming lectures.  

The main point here is that **variables store the values of these data types**.  

> Example: `"sum"` is taken as an integer variable, which will store a value `6`. Writing `sum` after the `cout` statement will show the value of `"sum"` on the output window.

---

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

