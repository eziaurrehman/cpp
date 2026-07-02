# Variable Scope & Data Types in C++:

## Variables in C++:

Before explaining the concept of variable scope, let's clarify what variables are.
A variable can be defined as a container to hold data. Variables are of different types, for example:

- **Int** → Used to store integer data e.g. -1, 2, 5, -9, 3, 100
- **Float** → Used to store decimal numbers e.g. 0.5, 1.05, 3.5, 10.5
- **Char** → Used to store a single character e.g. 'a', 'b', 'c', 'd'
- **Boolean** → Used to store true or false
- **Double** → Used to store decimal numbers with more precision than float e.g. 10.5895758440339...

#### Example:

```cpp
int sum = 34; // 'sum' is an integer variable holding value 34
```

#### Syntax for Declaring Variables in C++:

```cpp
Data_type Variable_name = Value;
```

#### Examples:

```cpp
int a = 4;
char letter = 'p';
int a = 4, b = 6;
```

---

## Variable Scope:

The scope of a variable is the region in the program where the existence of that variable is valid.

Based on scope, variables can be classified into two types:

### Local Variables:

- Declared inside the braces of any function
- Can be accessed only from inside that function

### Global Variables:

- Declared outside any function
- Can be accessed from anywhere

---

## Literals

- a literal is a piece of data that is written directly in the source code of the program
- one of the most common uses of literals is to assign a value to a varibale

i. Integer literals

- numeric value without farction or decimal

ii. floating point literals

- numeric values with fraction or decimal point.

iii. character literals

- a character literal is a single character

iv. string literal

- a string literal is a sequence of characters enclosed in double quotes

## Data Types:

Data types define the type of data that a variable can hold; for example, an integer variable can hold integer data, a character can hold character data, etc.

#### Data types in C++ are categorized into three groups:

- Built-in
- User-defined
- Derived

### 1. Built-in Data Types in C++:

- Char
- Float
- Int
- Double
- Boolean

#### i.character data type

char data type is used to store character value

#### ii.Integer data types

interger data is the nymeric value with no decimal point or fraction

a. int data type

b. short int data type

c. long int data type

#### iii. Floating point data type

The floating point data is a numeric value with decimal point or fraction.

a. float data type

b. double data type

c. long double data type

iv. Boolan data type

- values that are true or false
- bool values are stored as integers
- false is represented by 0, true by 1

### 2. User-Defined Data Types in C++:

- Struct
- Union
- Enum

### 3. Derived Data Types in C++:

- Array
- Pointer
- Function

## Rules to Declare Variables in C++

- Variable names in C++ can range from **1 to 255 characters**
- Variable names must start with a **letter** or an **underscore (`_`)**
- After the first character, variable names can contain **letters and numbers**
- Variable names are **case-sensitive**
- **Spaces and special characters** are not allowed
- **Reserved keywords** cannot be used as variable names

---

## Overflow and underflow

- occurs with both int and floating-point data types
- occurs when assigning a value that is too large(overflow) or to close to zero(underflow) to be held in a varaible
