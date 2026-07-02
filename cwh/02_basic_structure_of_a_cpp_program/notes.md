# Basic Structure of a C++ Program:

## Program:

```cpp
#include <iostream>

int main() {
    std::cout << "hello world";
    return 0;
}
```

---

## Line-by-Line Explanation

### 1. `#include <iostream>`

- This line is called a **header file**.
- `#include` is a **keyword** used to add libraries to our program.
- `iostream` is the **library** we are adding.
- **Purpose:** The `iostream` library helps us get input and show output. It has more uses, but for now, we focus on input/output.
- preprocessor is a program that set up your source code for the complier.
- the iostream file is called a header file, so it should be include: at the head , or top, of the program
- The iostream file contain code that allows a Cpp program to display output and read input from keyboard

### Use the standard (std) namespace

- namespaces defined , collection of name definition
- namespace std has all standard library we need
- all the identifer in the ANSI standar header files are pat of the std namespace

---

### 2. Blank Line

- The second line in the program is blank.
- **Important:** The compiler ignores empty lines and only checks lines with code.

---

### 3. `int main() {`

- `int` is the **return type** (integer).
- `main()` is a **function**, and the parentheses `()` indicate it is a function.
- `{` indicates the **start** of the function, and `}` indicates the **end**.

- `main` is a **reserved keyword** and cannot be changed.
- overall structure of a C++ program contain one fuction named main(), called the driver function
- all other function are invoked from main()

---

### 4. `std::cout << "hello world";`

- `std` is a **namespace**.
- `::` is the **scope resolution operator**.
- `cout <<` is a **function** used to output data.
- `"hello world"` is our **output string**.
- `;` **ends the statement**.

**Key Points:**

- `std::cout` tells the compiler that `cout` resides in the `std` namespace.
- You can write multiple statements in one line, but **one statement per line is recommended**.
- Anything in **double quotes `" "`** is a **string literal**.

---

### 5. `return 0;`

- The `return` keyword **returns a value** to the `main()` function.
- Returning `0` indicates **successful termination** of the program.

---

## Identifier

- Identifier are name of things that appear in programs such as variable, constants, and functions etc.

### Types of identifier

1. standard/ predefined identifiers

2. user-defined identifiers
