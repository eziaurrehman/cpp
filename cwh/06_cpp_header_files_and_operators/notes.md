# C++ Header files & Operators:

## 1. Header Files in C++:

`#include` is used in C++ to import header files in our C++ program. The reason to include `<iostream>` is that functions like `cout` and `cin` are defined there.

There are two types of header files:

### System Header Files:

System header files ship with the compiler. Example:

```
#include <iostream>
```

### User-Defined Header Files:

The programmer writes user-defined header files. To include your header file in the program, first make the header file in the current directory, then add it with `#include "yourheader.h"`.

---

## 2. Operators in C++:

Operators are used to perform calculations or evaluations on one or more inputs. Below are the common operator categories with short explanations and typical examples.

### 2.1 Arithmetic Operators

Used for mathematical operations: `+`, `-`, `*`, `/`, `%`, `++`, `--`.
#### **Examples:**
```
# include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    cout<<"Operators in C++:"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;
    // Arithmetic operators
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

    return 0;
```
1. The function "a+b", will add a and b values and print them.
2. The function "a-b "will subtract a and b values and print them.
3. The function "a*b" will multiply a and b values and print them.
4. The function "a/b ", will divide a and b values and print them.
5. The function "a%b ", will take the modulus of a and b values and print them.
6. The function "a++" will first print the value of a and then increment it by 1.
7. The function "a--", will first print the value of a and then decrement it by 1.
8. The function "++a", will first increment it by one and then print its value.
9. The function "--a", will first decrement it by one and then print its value.
##### **Outputs of program:**
```
Operators in C++:
Following are the types of operators in C++
The value of a + b is 9
The value of a - b is -1
The value of a * b is 20
The value of a / b is 0
The value of a % b is 4
The value of a++ is 4
The value of a-- is 5
The value of ++a is 5
The value of --a is 4
```
### 2.2 Assignment Operators:

Used for assigning values to variables. Example:

```
int a = 10;
int b = 5;
```

There are compound assignment operators as well (e.g. `+=`, `-=`, `*=`, `/=`, `%=`).

### 2.3 Comparison Operators:

Used to compare two values. 
#### **Examples:**
```
#include <iostream>
using namespace std;
int main(){

    int a = 4, b = 5;
    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    return 0;
}

```
1. The function "(a==b)", will compare a and b values and check if they are equal. The output will be one if equal, and 0 if not.
2. The function "(a!=b)", will compare a and b values and check if "a" is not equal to "b". The output will be one if not equal and 0 if equal.
3. The function "(a>=b)", will compare a and b values and check if "a" is greater than or equal to "b". The output will be one if greater or equal, and 0 if not.
4. The function "(a<=b)", will compare a and b values and check if "b" is greater than or equal to "a". The output will be one if greater or equal, and 0 if not.
5. The function "(a>b)", will compare a and b values and check if "a" is greater than "b". The output will be one if greater and 0 if not.
6. The function "(a<b)", will compare a and b values and check if "b" is greater than "a". The output will be one if greater and 0 if not.

#### **Output of Programs:**
```
Following are the comparison operators in C++
The value of a == b is 0
The value of a != b is 1
The value of a >= b is 0
The value of a <= b is 1
The value of a > b is 0
The value of a < b is 1
```

### 2.4 Logical Operators:
Used for comparing/combining boolean expressions.

#### **Examples:**

#include <iostream>
using namespace std;
```
int main() {
    int a = 4, b = 5;

    // Logical operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical AND operator ((a==b) && (a<b)) is: " << ((a==b) && (a<b)) << endl;
    cout << "The value of this logical OR operator ((a==b) || (a<b)) is: " << ((a==b) || (a<b)) << endl;
    cout << "The value of this logical NOT operator (!(a==b)) is: " << (!(a==b)) << endl;

    return 0;
}
```

1. The function "((a==b)&& (a<b))" will first compare a and b values and check if they are equal or not; if they are equal, the next expression will check whether "a" is smaller than "b". The output will be one if both expressions are true and 0 if not.
2. The function "((a==b) || (a<b))", will first compare a and b values and check if they are equal or not, even if they are not equal it will still check the next expression ie whether "a" is smaller than "b" or not. The output will be one if any one of the expressions is true and 0 if both are false.
3. The function "(!(a==b))", will first compare a and b values and check if they are equal or not. The output will be inversed ie if "a" and "b" are equal; the output will be 0 and 1 otherwise.


#### **Output:**
```
Following are the logical operators in C++
The value of this logical AND operator ((a==b) && (a<b)) is: 0
The value of this logical OR operator ((a==b) || (a<b)) is: 1
The value of this logical NOT operator (!(a==b)) is: 1
```


