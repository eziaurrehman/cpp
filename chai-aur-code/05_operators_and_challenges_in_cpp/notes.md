# C++ Operators and Conditionals

## 1. Operators in C++:

Operators are symbols that perform operations on data (called **operands**).

### 1.1 Arithmetic Operators:

Used for basic mathematical calculations.

| Operator | Description         | Example |
| -------- | ------------------- | ------- |
| `+`      | Addition            | `a + b` |
| `-`      | Subtraction         | `a - b` |
| `*`      | Multiplication      | `a * b` |
| `/`      | Division            | `a / b` |
| `%`      | Modulus (remainder) | `a % b` |

**Example:**

```cpp
double totalPrice = cups * pricePerCup;
```

---

### 1.2 Assignment Operators

Used to assign or update values in variables.

| Operator | Meaning             | Example  |
| -------- | ------------------- | -------- |
| `=`      | Assign              | `x = 5`  |
| `+=`     | Add and assign      | `x += 2` |
| `-=`     | Subtract and assign | `x -= 2` |
| `*=`     | Multiply and assign | `x *= 2` |
| `/=`     | Divide and assign   | `x /= 2` |

**Example:**

```cpp
bags += 5;   // same as bags = bags + 5
```

---

### 1.3 Relational Operators:

Used to compare two values. The result is **true (1)** or **false (0)**.

| Operator | Meaning               | Example  |
| -------- | --------------------- | -------- |
| `>`      | Greater than          | `a > b`  |
| `<`      | Less than             | `a < b`  |
| `>=`     | Greater than or equal | `a >= b` |
| `<=`     | Less than or equal    | `a <= b` |
| `==`     | Equal to              | `a == b` |
| `!=`     | Not equal to          | `a != b` |

---

### 1.4 Logical Operators:

| Operator | Name | Description                      |
| -------- | ---- | -------------------------------- | --- | --------------------------------- |
| \\&\\&   | AND  | True if both conditions are true |
| \\       | \\   |                                  | OR  | True if any one condition is true |
| !        | NOT  | Reverses the condition           |

**Example:**

```cpp
if (isStudent || cups > 15)
```

---

### 1.5 Operator Classification by Operands

| Type    | Operands | Example             |
| ------- | -------- | ------------------- |
| Unary   | One      | `++i`, `!flag`      |
| Binary  | Two      | `a + b`, `x > y`    |
| Ternary | Three    | `condition ? x : y` |

---

## 2. Conditional Statements: (if–else)

Conditional statements control the **flow of execution** based on conditions.

### Basic Syntax

```cpp
if (condition) {
    // executes if condition is true
} else {
    // executes if condition is false
}
```

**Important Rules**

- Condition must evaluate to **true (1)** or **false (0)**
- Any **non-zero value = true**
- `0 = false`

---

## 3. Examples from Practice

### 3.1 Discount Calculation (Arithmetic + Relational)

```cpp
int cups;
double pricePerCup;
cin >> cups >> pricePerCup;

double totalPrice = cups * pricePerCup;

if (totalPrice > 100) {
    double discounted = totalPrice - totalPrice * 0.05;
    cout << "Discounted Price: " << discounted;
} else {
    cout << "Total Price: " << totalPrice;
}
```

✔ Uses `*`, `>`, `if-else`

---

### 3.2 Extra Tea Bags (Assignment Operator)

```cpp
int bags;
cin >> bags;

if (bags < 10) {
    bags += 5;
}

cout << "Total bags: " << bags;
```

✔ Demonstrates compound assignment `+=`

---

### 3.3 Loyalty Badge System (Relational + Logical)

```cpp
int cups;
cin >> cups;

if (cups > 20) {
    cout << "Gold Badge";
} else if (cups >= 10 && cups <= 20) {
    cout << "Silver Badge";
} else {
    cout << "No Badge";
}
```

✔ Uses `>`, `>=`, `<=`, `&&`

---

### 3.4 Subscription Discount (Logical OR)

```cpp
bool isStudent;
int cups;
cin >> isStudent >> cups;

if (isStudent || cups > 15) {
    cout << "Eligible for discount";
} else {
    cout << "Not eligible";
}
```

✔ Uses logical OR `||`

---

## 4. Bitwise Operators (Intro Only)

Operate directly on binary representation of integers.

| Operator | Meaning     |     |
| -------- | ----------- | --- |
| `&`      | AND         |     |
| `        | `           | OR  |
| `^`      | XOR         |     |
| `<<`     | Left shift  |     |
| `>>`     | Right shift |     |

**Example:**

```cpp
2 & 3   // 10 & 11 = 10 (binary) = 2
```

Mostly used in **low-level programming** and **competitive programming**.

---

## 5. Key Takeaways:

- Operators perform actions on data
- `if-else` controls program flow
- Relational and logical operators are core to conditions
- Compound assignments make code cleaner
- Understanding these basics is essential for all C++ programs

---

## Challenges for Students

---

### Challenge 1: Arithmetic Operators

Write a program that calculates the price of tea packs.  
A user enters the number of tea packs they want, and the price per pack.  
Apply a 10% tax to the total price and display the final cost.

---

### Challenge 2: Assignment Operators

Create a program where the user inputs the number of tea bags they have.  
If the number is less than 20, give them 10 extra bags using the += assignment operator.  
Display the updated total.

---

### Challenge 3: Relational and Logical Operators

A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year.  
Write a program that checks if the user qualifies for a discount based on their input.

---

### Challenge 4: Bitwise Operators

Write a program that uses bitwise AND (&) to check which tea types are in stock.  
The stock is encoded in an integer (1 for Green, 2 for Black, 4 for Oolong).  
Allow the user to check availability by inputting the tea type (1, 2, or 4), and display a message saying whether that tea is in stock or not.
