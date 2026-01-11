# C++ Basic Input/Output & More:

In this tutorial, we will visualize **basic input and output** in the C++ language.  
In our last lesson, we discussed the **variable's scope and data types**.  
In this C++ tutorial, we are going to cover **basic input and output**.

---

## Basic Input and Output in C++:

C++ language comes with different libraries, which helps us in performing input/output operations.  
In C++, the sequence of bytes corresponding to input and output are commonly known as **streams**.

There are two types of streams:

---

### Input Stream:
In the input stream, the direction of the flow of bytes occurs from the **input device**  
(for example: keyboard) to the **main memory**.

---
### Output Stream:
In the output stream, the direction of flow of bytes occurs from **main memory**  
to the **output device** (for example: display).

---

## Practical Explanation of Input/Output:

We will see the actual code for input/output and its working.

---
## Practical Explanation of Input/Output

We will see the actual code for input/output and its working. Consider the code below.

```cpp
# include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num1:\n"; /* '<<' is called Insertion operator */
    cin>>num1; /* '>>' is called Extraction operator */

    cout<<"Enter the value of num2:\n"; /* '<<' is called Insertion operator */
    cin>>num2; /* '>>' is called Extraction operator */

    cout<<"The sum is "<< num1+num2;

    return 0;
}
```

- In this piece of code, we have declared two integer variables "num1" and "num2".
- Firstly we used "cout" to print "Enter the value of num1:" as it shown in programs
and then we used "cin" to take the input in "num1" at run time from the user.

- Secondly, we used "cout" to print "Enter the value of num2:" as it is shown in program.
and then we used "cin" to take the input in "num2" at run time from the user.

- In the end, we used "cout" to print "The sum is" as it is in outputs and also gave the literal "num1+num2" which will add the values of both variables and print
it on the screen.


---

## Output of the Program
- The output of the following program is shown below.
- We have executed our program two times, which can seen below.

### 1st Execution

**Input**
```
Enter the value of num1:
54
Enter the value of num2:
4
```

**Output**
```
The sum is 58
```

> In our 1st execution, we had input the value "54" for the variable **num1** and value "4" for the variable **num2**. This gives us the sum of both numbers as "58".

### 2nd Execution

**Input**
```
Enter the value of num1:
5
Enter the value of num2:
8
```

**Output**
```
The sum is 13
```

> In our 2nd execution, we had input the value "5" for the variable **num1** and value "8" for the variable **num2**. This gives us the sum of both numbers as "13".

---

## Important Points

- The sign `<<` is called **insertion operator**.  
- The sign `>>` is called **extraction operator**.  
- `cout` keyword is used to **print**.  
- `cin` keyword is used to **take input at run time**.

---


# Reserved Keywords in C++

Reserved keywords are those keywords that are used by the language itself, which is why these keywords are not available for re-definition or overloading. In short, you cannot create variables with these names. A list of reserved keywords is:

```cpp
alignas
alignof
and
and_eq
asm
atomic_cancel
atomic_commit
atomic_noexcept
auto
bitand
bitor
bool
break
case
catch
char
char8_t
char16_t
char32_t
class
compl
concept
const
consteval
constexpr
constinit
const_cast
continue
co_await
co_return
co_yield
decltype
default
delete
do
double
dynamic_cast
else
enum
explicit
export
extern
false
float
for
friend
goto
if
inline
int
long
mutable
namespace
new
noexcept
not
not_eq
nullptr
operator
or
or_eq
private
protected
public
register
reinterpret_cast
requires
return
short
signed
sizeof
static
static_assert
static_cast
struct
switch
synchronized
template
this
thread_local
throw
true
try
typedef
typeid
typename
union
unsigned
using
virtual
void
volatile
wchar_t
while
xor
xor_eq


