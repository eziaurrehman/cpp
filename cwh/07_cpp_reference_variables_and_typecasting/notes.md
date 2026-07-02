# C++ Reference Variables & Typecasting:

## Built-in Data Types

Built-in data types are predefined by the language and can be used directly. The example program below declares three variables `a`, `b`, and `c` inside `main`, and one global variable `g`. To access the global variable we can use the scope resolution operator `::`.

**Example**:

```cpp
    #include <iostream>
    using namespace std;

    int c = 45; // global variable

    int main() {
     int a, b, c;
     cout<<"Enter the value of a:"<<endl;
     cin>>a;
     cout<<"Enter the value of b:"<<endl;
     cin>>b;
     c = a + b;
     cout<<"The sum is "<<c<<endl;
     cout<<"The global c is "<<::c;
        return 0;
    }
```

**Expected output:**

    Enter the value of a:
    5
    Enter the value of b:
    9
    The sum is 14
    The global c is 45

As we hav eentered the value of the variable "a" as five and "b" as 6, it gives us the sum 14, but for the global variable,it has given us the value of 45.

## Float, Double and Long Double Literals

Decimal literals are `double` by default in C++. To make a literal a `float`, append `f` or `F`; to make it a `long double`, append `l` or `L`. Use `sizeof` to display sizes of these types (sizes may vary by platform/compiler).

**Example:**

    #include <iostream>
    using namespace std;

    int main() {
        float f = 34.4F;       // float literal
        double d = 34.4;       // double literal (default)
        long double ld = 34.4L; // long double literal

        cout << "Size of float: " << sizeof(f) << " bytes" << endl;
        cout << "Size of double: " << sizeof(d) << " bytes" << endl;
        cout << "Size of long double: " << sizeof(ld) << " bytes" << endl;

        cout << "Value of float f: " << f << endl;
        cout << "Value of double d: " << d << endl;
        cout << "Value of long double ld: " << ld << endl;

        return 0;
    }

**Output (may vary by system):**

    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of long double: 16 bytes
    Value of float f: 34.4
    Value of double d: 34.4
    Value of long double ld: 34.4

> Note: The sizes above are common on many modern systems (4, 8, 16 bytes), but `sizeof(long double)` can vary by compiler/ABI.

## Reference Variable:

Reference variables can be defined as another name for an already existing variable. These are also called an alias. For example, let us say we have a variable with the name of **"sum"**, but we also want to use the same variable with the name of **"add"**, to do that we will make a reference variable with the name of **"add"**. The example code for the reference variable is below.

**Example**:

    #include <iostream>
    using namespace std;

    int main() {
        int x = 455;
        int &y = x; // y is a reference (alias) to x

        cout << "Value of x: " << x << endl;
        cout << "Value of y (reference to x): " << y << endl;

        // Changing y changes x because y is an alias
        y = 500;
        cout << "After y = 500;" << endl;
        cout << "Value of x: " << x << endl;
        cout << "Value of y: " << y << endl;

        return 0;
    }

**Output:**

    Value of x: 455
    Value of y (reference to x): 455
    After y = 500;
    Value of x: 500
    Value of y: 500

---

## Typecasting:

- The process of converting data type of a value during execution

### 1. Implicit Type Casting

- Performed automatically by C++ compiler
- Also known as automatic conversion
- Arithmetic operations are performed between operands of the same type
- if operands do not have the same type, C++ will automatically convert one to be the type of the other
- suppose an expression contains an interger and double as operands. The result will be evaluated to a double data type.
- conversion from one data type to another is proven to data loss

````cpp
# C++ Type Promotion and Demotion

```text
          No Data Loss
               ↑
+-------------+
| long double |
+-------------+
       ↑
+-------------+
|   double    |
+-------------+
       ↑
+-------------+
|    float    |
+-------------+
       ↑
+-------------+
|    long     |
+-------------+
       ↑
+-------------+
|     int     |
+-------------+
       ↑
+-------------+
|    short    |
+-------------+
       ↑
+-------------+
|    char     |
+-------------+
       ↓
          Data Loss
````

**Rules**

1. char, short, unsigned short are automatically promoted to int.

2. When operating with values of diiferent data types, the lower-ranked one is promoted to the types of the higher one.

3. When using the = operator, the type of expression on right will be converted to the type of variable on left.

4. If a real value is assigned to an integer variable, it is truncated(shopped off after the decimal point, not rounded off).

5. If an integer value is assigned to a real varaible, it is promoted (conversion to a higher type )to a real (decimal point added).

### 2. Explicit ype casting

- Explicit casting is performed by programmer.
- **cast operator:** provide explicit type conversion
- **syntax:** static_cast<Data Type>(Expression)
- **type:** it indicated the data type to which operand is to be converted
- **Expression:** it indicated the constant, variable or expression whose data type is to be converted.
- **Example:**

```cpp
int A = 5 + static_cast <int>(12.75);
```

**Example1**:

    #include <iostream>
    using namespace std;

    int main() {
        int a = 5;
        float b = 5.3f;

        // Convert integer a to float
        float a_as_float1 = (float)a;   // C-style cast
        float a_as_float2 = float(a);   // functional form

        // Convert float b to integer
        int b_as_int1 = (int)b;         // C-style cast (truncates)
        int b_as_int2 = int(b);         // functional form (truncates)

        cout << "a (int): " << a << endl;
        cout << "a as float (C-style): " << a_as_float1 << endl;
        cout << "a as float (functional): " << a_as_float2 << endl;

        cout << "b (float): " << b << endl;
        cout << "b as int (C-style): " << b_as_int1 << endl;
        cout << "b as int (functional): " << b_as_int2 << endl;

        return 0;
    }

**Output (Figure 8):**

    a (int): 5
    a as float (C-style): 5
    a as float (functional): 5
    b (float): 5.3
    b as int (C-style): 5
    b as int (functional): 5

> Note: Casting `float` to `int` truncates the fractional part (does not round).

**Example2:**

#include <iostream>
using namespace std;

int main() {
int a = 45;  
 float b = 45.46;

    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;

    int c = int(b);

    cout << "The value of c is " << c << endl;

    cout << "The expression is " << a + b << endl;
    cout << "The expression is " << a + int(b) << endl;
    cout << "The expression is " << a + (int)b << endl;

    return 0;

}

We have initialized two variables, integer "a" and float "b". After that, we converted an integer variable "a" into a float variable and float variable "b" into an integer variable. In C++, there are two ways to typecast a variable, either using "(float)a" or using "float(a)". The output for the above program is shown below.

```
Output:

The value of a is 45
The value of a is 45
The value of b is 45
The value of b is 45
The value of c is 45
The expression is 90.46
The expression is 90
The expression is 90

```
