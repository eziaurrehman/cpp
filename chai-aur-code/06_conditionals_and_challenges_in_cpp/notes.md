# C++ Conditional Statements:

## 1. What are Conditions in C++?

A **condition** means:

> _“If something is true, do this; otherwise, do something else.”_

In C++, conditions control the **flow of execution** of a program.

---

## 2. Conditional Flow:(Conceptual Explanation)

1. Program reaches a **condition evaluator**
2. Condition is checked
3. Result is either:

   - **True**
   - **False**

4. Based on result:

   - True → execute **if block**
   - False → execute **else block** (optional)

5. Program continues **outside the conditional block**

> Only **one path** executes (true **OR** false), never both.

---

## 3. `if` Statement

### Syntax

```cpp
if (condition) {
    // code runs if condition is true
}
```

### Example – Tea Order (Only `if`, no `else`)

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string teaOrder;
    cout << "Enter your tea order: ";
    getline(cin, teaOrder);

    if (teaOrder == "Green Tea") {
        cout << "You have ordered Green Tea" << endl;
    }

    return 0;
}
```

**Notes:**

- `==` is used for **comparison**, not assignment
- Exact match matters (`Green Tea` ≠ `green tea`)

---

## 4. `if – else` Statement

### Syntax

```cpp
if (condition) {
    // true block
} else {
    // false block
}
```

---

## 5. Multiple Conditions (Logical Operators)

### Logical AND `&&`

Both conditions must be true.

```cpp
if (hour >= 8 && hour <= 18)
```

---

## 6. Example – Tea Shop Open or Closed

### Problem

Shop is open **between 8 and 18 (24‑hour format)**

```cpp
#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Enter current hour (0–23): ";
    cin >> hour;

    if (hour >= 8 && hour <= 18) {
        cout << "TEA SHOP IS OPEN" << endl;
    } else {
        cout << "TEA SHOP IS CLOSED" << endl;
    }

    return 0;
}
```

---

## 7. Nested `if – else if – else`

Used when **multiple ranges or cases** exist.

---

## 8. Example – Discount Based on Tea Cups

### Rules

- More than 20 cups → **20% discount**
- 10–20 cups → **10% discount**
- Less than 10 → **No discount**

```cpp
#include <iostream>
using namespace std;

int main() {
    int cups;
    double pricePerCup = 2.5;
    double discount = 0.0;
    double totalPrice;

    cout << "Enter number of tea cups: ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if (cups > 20) {
        discount = 0.20;
    } else if (cups >= 10 && cups <= 20) {
        discount = 0.10;
    } else {
        discount = 0.0;
    }

    totalPrice -= totalPrice * discount;

    cout << "Total price after discount: " << totalPrice << endl;

    return 0;
}
```

---

## 9. Variable Scope: (Very Important)

- Variables declared **inside `{ }`** exist **only inside** that block
- Variables declared **outside** can be used inside inner blocks

### Wrong:

```cpp
if (x > 0) {
    int discount = 10;
}
cout << discount; // ERROR
```

### Correct:

```cpp
int discount;
if (x > 0) {
    discount = 10;
}
```

---

## 10. `switch` Statement

Used when:

- Multiple **fixed choices**
- Cleaner than many `else if` statements

### Syntax

```cpp
switch (variable) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}
```

---

## 11. Example – Tea Menu Using `switch`

```cpp
#include <iostream>
using namespace std;

int main() {
    int choice;
    double price;

    cout << "Select your tea:\n";
    cout << "1. Green Tea ($2)\n";
    cout << "2. Lemon Tea ($3)\n";
    cout << "3. Long Tea ($4)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            price = 2.0;
            cout << "You selected Green Tea. Price: $" << price << endl;
            break;
        case 2:
            price = 3.0;
            cout << "You selected Lemon Tea. Price: $" << price << endl;
            break;
        case 3:
            price = 4.0;
            cout << "You selected Long Tea. Price: $" << price << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
```

---

## 12. Why `break` is Important:

Without `break`, C++ executes **all cases below the matched one**.
This behavior is called **fall‑through**.

---

## 13. Compilation Reminder: (Very Important)

If you change code, **recompile** it:

```bash
g++ task4.cpp -o task4
./task4
```

Running without recompiling executes the **old binary**.

---
