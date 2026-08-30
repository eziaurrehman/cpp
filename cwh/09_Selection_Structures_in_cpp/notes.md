# Selection Structures
## Control Structures
Control structures are just a way to specify flow of control in program

The work of control structures is to give flow and logic to a program.

## Types of control structures 
### 1. Sequence Structure:
Sequence structure refers to the sequence in which program execute instructions one after another.

### 2. Selection Structure:
Selection structure refers to the execution of instruction according to the selected condition, which can be either true or false. There are two ways to implement selection structures, by “if-else statements” or by “switch case statements”
### 3. Loop Structure 
Loop structure refers to the execution of an instruction in a loop until the condition gets false

## Use Of Decision Statement
### a. If Statement
The if statement is the primary selection control structure 

It is used to exxecutes or skip a statement or set of statement by checking a condition 

#### Syntax / General Form 

The syntax of if statemnet for single statements:
```
if (condition)
statement;

```
The syntax for compound statements
```
if (condition)
{
    statement 1;
    statement 2;
    :
    statement N;
}
```

### Examples of programs 1
````
#include <iostream>
using namespace sdtd;
int main ()
{
    int a, b, c, d, e, max, min;
    count<<"Enter five intergers: ";
    cin>>a>>b>>c>>d>>e;
    min = max = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
    if(e < min) min = e;
    if(b > min) max = b;
    if(c > min) max = c;
    if(d > min) max = d;
    if(e > min) max = e;
    cout<<"Largest numbeer is "<<max<<endl;
    cout<<"Smallest number is " <<min<<endl;
    return 0;

}
````

### Examples of Programs 2
````
# include <iostream>
using namespace std;
int main()
{
    int X;
    cout<< "Enter a number: "<<endl;
    cin >> X;
    if(X %2 ==0)
    cout << X <<" is even number"<<endl;
    else
    cout << X <<" is odd number"<<endl;
    return 0;
}
````
## Compound Condition
A type of comparison in which more than one conditions are evaluated is called compund condition

Compound condition is executed by using logical operators.
## Logical Operator 
The logical operators are used to evaluate compound conditions.

There are three kinds of logical operators

- && and 
- || or
- ! not

#### AND Operator (&&)

Used to evaluate two conditions

produces true result if both condition are true

produces false result if any one condition is false.

#### OR Operator (||)

Used to evaluate two conditions

Produces true result if either conditions is true.

#### NOT Operators (!)

Reverse the result of a condition

Produces true result if condition is false.

Produces false result if conditions is true

### Examples of programs 
##### AND Operator (&&) program
```
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"Maximum number is " <<a;
    else if(b>a && b>c)
    cout<<"Maximum number is "<<b;
    else
    cout<<"Maximum number is "<<c;
    return 0;
}
```
##### OR Operator (||) program
```
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cins>>ch;
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
    cout<<"You enteered a vowel: "<<ch;
    else
    cout<<"You did not enter a vowel: "<<ch;
    return 0;
}
```

### b. if-else Statement

Used to make two-way decisions.

it executes one block of statements when the condition is true and the other when it is false.

In any situation, one block is executeed and the other is skipped 

- Both blocks of statement can never be executed
- both blocks of statements can never be skippeed.

##### Single statement if structure 
```
if(condition)
statement;
else
statement;
```
##### Multiple statement if-else Structure
```
if (condition)
{
    Statement 1;
    Statement 2;
    .
    .
    Statement n;
}
else
{
    Statement 1;
    Statement 2;
    .
    .
    Statement n;
}
```

#### Examples of programs 
##### Examples 1:
```
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2 == 0)
    cout<<n<<" Is even.";
    else 
    cout<<n<<" Is odd.";
    return 0;
}
```
##### Examples 2:
```
#include <iostream>
using namespace std;
int main()
{
    int X;
    cout<<"Enter a number: ";
    cin>>X;
    if(x%2 ==0)
    {
        cout << "You have entered " <<X<<endl;
        cout<<X<< "is an even number" <<endl;
    }
    else 
    {
        cout<<"You have entered " <<X<<endl;
        cout<<X<< " is an odd number" <<endl;
    }
    return 0;
}
```

### c. if-else-if Statement / else-if Ladder
It is used when there are many options and only one block of statements should be executed on the basis of a condition.
##### Syntax 
```
if (condition 1)
{
    Block of statement 1;
}
else if(condition 2)
{
    Block of statements 2;
}
else 
{
    Block of statements N;
}
```

#### Working of if-else-if:
- The condtion 1 is evaluated and the first block of statement is executed if the condtion 1 is true.
- The condition 2 is evaluated if the condition 1 is false. The second block of statements is executed if the condition 2 is true.
- The block of statement after the last Else is executed if all conditions are false.

#### Program Examples 
```
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your Marks: ";
    cin>>marks;
    if(marks>=90)
    cout<<"Your grade is A.";
    else if(marks>=80)
    cout<<"Your grade is B.";
    else if(marks>=70)
    cout<<"Your grade is C.";
    else if(marks>=60)
    cout<<"Your grade is D.";
    else
    cout<<"Your grade is F.";
    return 0;     
}
```
### d. Nested if Statement
Any if statement within an if statement is caleed nested if statement.

#### Syntax/ Gerneral Form
```
if(condition)
     if(condition)
     {
        statement(s);
     }
     else
     {
        statement(s);
     }

else
{
    statement(s);
}
```
#### Working of Nested if
- The condition of outer "If" is evaluated first. If it is true, the control enters the "inner if" block.
- if the condtions is false, the "inner if" is skiiped and teh control diretly moves to the "else" parts of the "outer if"
- If outer "if" is true, the control enters the "inner if" statement.
- The "inner if" evaluated according to simple "if" statement.

#### Examples 1:
```
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    count<<"Enter three number. ";
    cin>>a>>b>>c;
    if (a<b)
      if(a<c)
      cout<<a<<" Is smallest number. ";
      else 
      cout<<c<<" Is smallest number.";
    esle
      if (b<c)
       cout<<b<<" is smallest number.";
      else 
        cout<<c<<" Is smallest number.";

  return 0;
}
```

#### Examples 2:
```
#include <iostream>
using namespace std;
int main (){
    int X;
    cout<<"Enter a number: ";
    cin>>X;
    if(X>50)
    {
        if(X>100)
          cout<<X<<"is greater than 100" <<endl;
        else 
          cout<<X<<" is between 50 and 100" <<endl;
    }
    else 
    cout<<X<<" is less than 50";

    retrun 0;

}
```
### e.  switch-case/switch-default statement

Select one of teh several alternatives when selection is based on the value of a single "varaible" or "an expression"

the value of this expression may be type int or char.

The switch statement is a better way of writing a program when a series of if-else-if occurs 

#### Syntax / general form
```
switch(expression)
{
    case val1:
    statement1;
    break;
    case val2:
    statement2;
    break;
    :
    :
    case valn:
    statementn;
    break;
    default:
    statements;
}
```

#### Example 1:
```
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c
    switch(c)
    {
        case 'a':
        case 'A':
         cout<<"You entered vowel.";
         break;
        case 'e':
        case 'E':
         cout<<"You entered vowel.";
         break;
        case 'i':
        case 'I':
         cout<<"You entered vowel.";
         break;
        case 'o':
        case 'O':
         cout<<"You entered vowel.";
         break;
        case 'u':
        case 'U':
         cout<<"You entered vowel.";
         break;
        default:
        cout<<"Not vowel";

    }
    return 0;
}
```
#### Example 2:
```
#include <iostream>
using namespace std;
int main()
{
    char grade = 'B'
    switch (grade)
    {
        case 'A':
        cout<< "Excellent ! "<<endl;
        break;
        
        case 'B':
        cout<< "Outstanding ! "<<endl;
        break;

        case 'C':
        cout<< "Good ! "<<endl;
        break;

        case 'D':
        cout<< "Can do better ! "<<endl;
        break;

        case 'E':
        cout<< "Just passed ! "<<endl;
        break;

        case 'F':
        cout<< "You failed ! "<<endl;
        break;
        default:
        cout<< "Invalid grade " <<endl;
    }
    return 0;
}
```

### Difference Between if-Else-if And switch statement

#### if-else-if
- if-else statement can test for equality as well as for logical expression
- it uses multiples expressions for multiples choices 
- it can check a range of values.
- it is less compact than switch
- it can evaluate int, float and other data types.
#### switch
- switch statement only test for the equality
- it uses single expression for multiples choices 
- it cannot check a range of values 
- it is more comapct than if-else-if.
- it can only evalute character or integers.

### Conditional Operator
- conditional operator is a decision-making or selection control structure.
- It can be used in place of simple if-else structure 
- It is also called ternary operator as it uses three operands.
#### Syntax 
(condition) ? true : false;

- condition: The condition is specified as relational or logical expression 
- true: It is executed if expression evaluates to true 
- false: It is executed if expressions evalutes to false 

#### Examples
```
#include <iostream>
using namespace std;
int main() {
    int marks;
    cout<<"Enter Your Marks : ";
    cin>>marks;
    cout<<"Result is: "<<(marks>40 ? "Pass" : "Fail");
    return 0;
}
```


  




 

 



