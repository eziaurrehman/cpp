# Constants, Manipulators & Operator Precedence:

In this series of our C++ tutorials, we will visualize **constants, manipulators, and operator precedence** in the C++ language in this lecture.  
In our last lesson, we discussed **reference variables and typecasting** in C++.
---

## Topics Covered in This Tutorial

- Constants in C++
- Manipulators in C++
- Operator Precedence in C++

---

## Constants in C++

Constants are **unchangeable**; when a constant variable is initialized in a program, its value **cannot be changed afterward**.

### Example Program: Constants in C++

```cpp
#include <iostream>
using namespace std;

int main() {
    const float a = 3.11;
    // a = 45.6;  // This line will cause an error
    
    cout << "The value of a is: " << a << endl;


    return 0;
}
```

### Explanation

- A constant float variable **`a`** is initialized with the value **3.11**
- When we try to reassign a new value (**45.6**) to `a`, the compiler throws an error
- This happens because **constant variables cannot be modified**

### Compiler Error (Expected)

```
error: assignment of read-only variable 'a'
```

---

## Manipulators in C++:

In C++ programming, **manipulators** are used to format the output.

The two most commonly used manipulators are:

- **endl** → used to move the cursor to the next line
- **setw** → used to set the width of output

( `setw` is available in the `<iomanip>` header file )

---

### Example Program: Manipulators in C++

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 3, b = 78, c = 1233;

    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;

    cout << "The value of a with setw is: " << setw(4) << a << endl;
    cout << "The value of b with setw is: " << setw(4) << b << endl;
    cout << "The value of c with setw is: " << setw(4) << c << endl;

    return 0;
}
```

### Output

```
The value of a is: 3
The value of b is: 78
The value of c is: 1233
The value of a with setw is:    3
The value of b with setw is:   78
The value of c with setw is: 1233
```

### Explanation

- First, all variables are printed normally using `endl`
- Then, `setw(4)` sets the width of each value to **4 characters**
- Smaller values are right-aligned automatically

---

## Operator Precedence & Operator Associativity

### Operator Precedence

Operator precedence determines **which operator is evaluated first** in an expression.

Example:
```
int c = a * b + c;
```
- Multiplication (`*`) has **higher precedence** than addition (`+`)
- So, `a * b` is evaluated first

---

### Operator Associativity

Operator associativity is used when **two or more operators have the same precedence**.

- It tells whether the expression is evaluated:
  - **Left-to-right**
  - **Right-to-left**

---

### Example Program: Operator Precedence & Associativity

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 3;
    int b = 4;

    int c = a * 5 + b;
    cout << "The value of c is: " << c << endl;

    int d = ((((a * 5) + b) - 45) + 87);
    cout << "The value of d is: " << d << endl;

    return 0;
}
```

### Output

```
The value of c is: 19
The value of d is: 61
```

### Explanation

- In `a * 5 + b`, multiplication is performed first because it has higher precedence
- Addition and subtraction have the **same precedence**
- Their **associativity is left-to-right**
- So the expression is solved step by step from left to right

---

## Summary

- **Constants**: Values that cannot be changed once initialized
- **Manipulators**: Used to format output (`endl`, `setw`)
- **Operator Precedence**: Decides which operation is performed first
- **Operator Associativity**: Decides the direction of evaluation when precedence is the same
