# C++ Control Structures, If-Else and Switch-Case Statement:

In this series of our C++ tutorials, we will visualize **control structures**, **if-else**, and **switch statements** in the C++ language in this lecture. In our last lesson, we discussed **constants, manipulators, and operator precedence** in C++.

In this C++ tutorial, the topics which we are going to cover today are:

- Control Structures in C++
- If-Else in C++
- Switch Statement in C++

---

## Control Structures in C++:

The work of **control structures** is to give flow and logic to a program. There are three basic types of control structures in C++:

### 1. Sequence Structure

Sequence structure refers to the sequence in which a program executes instructions **one after another**.

#### Example for sequence structure:

- Sequnce Structure:
- **Entry** ---> **Action 1** ---> **Action 2** ---> **Exit**

---

### 2. Selection Structure

Selection structure refers to the execution of instructions according to a **condition**, which can be either true or false.

There are two ways to implement selection structures:

- Using **if-else statements**
- Using **switch-case statements**

#### Example diagram for selection structure:

```
          Entry
            |
            v
          [Cond?]
          /     \
       True      False
       /           \
     [A1]         [A2]
       \           /
        \         /
          \     /
            v
           Exit
```

### 3. Loop Structure

Loop structure refers to the execution of an instruction repeatedly **until the condition becomes false**.

#### Example diagram for loop structure:

---

## If-Else Statements in C++

As discussed, **if-else statements** are used to implement a selection structure.

#### Example program:

```
#include <iostream>
using namespace std;

int main() {
    int age;

    // Ask the user for their age
    cout << "Tell me your age: ";
    cin >> age;

    // Selection control structure: If-else-if ladder
    if (age < 1) {
        cout << "You are not yet born." << endl;
    }
    else if (age < 18) {
        cout << "You cannot come to my party." << endl;
    }
    else if (age == 18) {
        cout << "You are a kid and you will get a kid pass to the party." << endl;
    }
    else {
        cout << "You can come to the party." << endl;
    }

    return 0;
}


```

### Explanation of the program:

- A variable `age` is declared, and its value is taken from the user at runtime using `cin`.
- **`if` statement:** `if (age < 18)`  
  If the age entered by the user is less than 18, the output will be:  
  `"You cannot come to my party"`.
- **`else if` statement:** `else if (age == 18)`  
  If the age entered is exactly 18, the output will be:  
  `"You are a kid and you will get a kid pass to the party"`.
- **`else` statement:**  
  If none of the above conditions are true, the output will be:  
  `"You can come to the party"`.

#### Program Output Example:

_If-Else Program Output:_

- For input age `81` (greater than 18), the output is: `"You can come to the party"`.
- You can use **as many `else if` statements as needed**.

---

## Switch Case Statements in C++:

In **switch-case statements**, the value of a variable is tested against all defined cases.

### Example program:

```
#include <iostream>
using namespace std;

int main() {
    int age;

    // Ask the user for their age
    cout << "Tell me your age: ";
    cin >> age;

    cout << endl; // just for spacing

    // 2. Selection control structure: Switch Case statements
    switch (age) {
        case 2:
            cout << "You are 2" << endl;
            break;
        case 18:
            cout << "You are 18" << endl;
            break;
        case 22:
            cout << "You are 22" << endl;
            break;
        default:
            cout << "No special cases" << endl;
            break;
    }

    cout << "Done with switch case." << endl;

    return 0;
}
```

#### Explanation of the program:

- The variable `age` is passed to the switch statement.
- The switch statement compares the value of `age` with all cases.
- For example, if the value is `18`, the case with value `18` is executed, printing:  
  `"You are 18"`.
- The **`break`** statement stops the execution of other cases and exits the switch statement.

### Program Output Example:

```
Tell me your age: 18

You are 18
Done with switch case.
```
