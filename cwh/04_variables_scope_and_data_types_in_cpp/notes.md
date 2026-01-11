/*
# Variable Scope & Data Types in C++:

In this series of C++ tutorials, we will visualize the variable scope and data types in the C++ language. 
In our last lesson, we discussed the variable's role and comments. In this C++ tutorial, we are going to cover two important concepts of C++:

1. Variable Scope  
2. Data Types  

---

## Variables in C++:

Before explaining the concept of variable scope, let's clarify what variables are. 
A variable can be defined as a container to hold data. Variables are of different types, for example:

- **Int** → Used to store integer data e.g. -1, 2, 5, -9, 3, 100  
- **Float** → Used to store decimal numbers e.g. 0.5, 1.05, 3.5, 10.5  
- **Char** → Used to store a single character e.g. 'a', 'b', 'c', 'd'  
- **Boolean** → Used to store true or false  
- **Double** → Used to store decimal numbers with more precision than float e.g. 10.5895758440339...

#### Example:
```  
int sum = 34; // 'sum' is an integer variable holding value 34
```
#### Syntax for Declaring Variables in C++:

Data_type Variable_name = Value;

#### Examples:
```
int a = 4;
char letter = 'p';
int a = 4, b = 6;
```
---

## Variable Scope:

The scope of a variable is the region in the program where the existence of that variable is valid.  
**Analogy:** If a person travels to another country illegally, we do not consider that country as his scope because he doesn't have the necessary documents.

Based on scope, variables can be classified into two types:

### Local Variables:
- Declared inside the braces of any function  
- Can be accessed only from inside that function  

### Global Variables:
- Declared outside any function  
- Can be accessed from anywhere  

---

## Data Types:
Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

#### Data types in C++ are categorized into three groups:
- Built-in
- User-defined
- Derived

### 1. Built-in Data Types in C++:
- Int
- Float
- Char
- Double
- Boolean
### 2. User-Defined Data Types in C++:
- Struct
- Union
- Enum
##### Note:
We will discuss the concepts of user-defined data types in another lecture. For now, understanding that these are user-defined data types is enough.
### 3. Derived Data Types in C++:
- Array
- Pointer
- Function
##### Note: 
We will discuss the concept of derived data types in another lecture. For now, understanding that these are derived data types is enough.


# Practical Explanation of Variable Scope

We have discussed variable scope in theory; now we will see its actual code and working.

---

In this piece of code, we have initialized two `glo` variables:

* The **first `glo`** variable is declared **outside the `main()` function** (global scope).
* The **second `glo`** variable is declared **inside the `main()` function** (local scope).

The value assigned to the `glo` variable **outside** the `main()` function is **6**, and the value assigned to the `glo` variable **inside** the `main()` function is **9**. One important thing to note is that inside the `main()` function, we again assign the value **78** to the variable `glo`, which updates the previous value **9**.

After initializing the `glo` variables, we output the value of `glo` at two places in our program:

1. Inside the `main()` function
2. Inside the `sum()` function

The main points to note are:

* When `cout` runs inside the `sum()` function, it first checks for a `glo` variable **inside the `sum()` function scope**. Since there is **no local `glo` variable** inside `sum()`, it then checks the **global scope**.
* The global `glo` variable is initialized with the value **6**, so the `sum()` function uses this value.
* When `cout` runs inside the `main()` function, it first checks for a `glo` variable **inside the `main()` function scope**. Since a local `glo` variable exists there, it uses the **local value**.

---

Explanation of the output:

* **6** → Printed from the `cout` of `glo` inside the `sum()` function (global `glo`)
* **78** → Printed from the `cout` of `glo` inside the `main()` function (local `glo`)
* **1** → Printed from the `cout` of the boolean variable `is_true` inside the `main()` function (`false` is printed as `0`, `true` as `1`)

---

## Rules to Declare Variables in C++

* Variable names in C++ can range from **1 to 255 characters**
* Variable names must start with a **letter** or an **underscore (`_`)**
* After the first character, variable names can contain **letters and numbers**
* Variable names are **case-sensitive**
* **Spaces and special characters** are not allowed
* **Reserved keywords** cannot be used as variable names

---

## Code (As Written in the Video)

```cpp
# include <iostream>

using namespace std;

int glo = 6;

void sum() {
    int a;
    cout << glo;
}

int main() {
    int glo = 9;
    glo = 78;

    // int a = 14;
    // int b = 15;

    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;

    sum();
    cout << glo << is_true;

    // cout << "This is tutorial 4.\nHere the value of a is " << a
    //      << ".\nThe value of b is " << b;
    // cout << "\nThe value of pi is: " << pi;
    // cout << "\nThe value of c is: " << c;

    return 0;
}
```

