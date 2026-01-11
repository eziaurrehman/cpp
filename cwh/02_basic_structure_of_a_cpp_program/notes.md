# Basic Structure of a C++ Program:

In this series of C++ tutorials, we will visualize the **basic structure of a C++ program**. In our last lesson, we discussed C++, and we had also learned how to download and install **Visual Studio Code** and **g++**

In our previous lecture, we had written and executed a small C++ program. Today, we are going to discuss that program in more detail.

---

## Program from the Previous Lecture:

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

---

### 2. Blank Line

- The second line in the program is blank.
- **Important:** The compiler ignores empty lines and only checks lines with code.

---

### 3. `int main() {`

- `int` is the **return type** (integer).
- `main()` is a **function**, and the parentheses `()` indicate it is a function.
- `{` indicates the **start** of the function, and `}` indicates the **end**.

#### Analogy:

Imagine you own a coffee shop with three employees:

- Anna takes orders.
- Blake makes coffee.
- Charlie delivers coffee.

Anna is like `main()`. She starts the process, Blake and Charlie perform tasks, and the final product (coffee) is returned.

**Note:**

- `main` is a **reserved keyword** and cannot be changed.

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

## Summary

We have learned the **anatomy of a C++ program**, including:

- Header files (`#include <iostream>`)
- Functions (`int main()`)
- Output statements (`std::cout`)
- Return statements (`return 0`)

This will help you understand the **functions of various parts** of a C++ program.
