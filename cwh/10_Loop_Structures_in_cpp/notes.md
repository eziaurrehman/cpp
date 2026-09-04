# **LOOP STRUCTURES**


# Loop:
- The control structure that executes a statements or set of statements repeatedly is called loop
- Loops are also known as iteration or repetition structure 
- Loops are basically used for two purposes

    - They are used to execute a statemenmt or number of statements for a specified number of times 
    - The loops are also used to get a sequence of values
## Types of Loops 
Loops are classified into two types depending upon the position control statements:
### 1. Entry Controlled Loop:
- A conditional statement is evaluated before executing the body of a loop. 
- It is also called as a pre-testing or Counter controlled loops 
### 2. Exit controlled Loop:
- A conditional statements is evaluted after executing the loop body once irrespective of whether the test condition is true or false
- It is also called as a post-testing or sentinel controlled loop.

There are three types of loops in C++

- while loop 
- do-while loop
- for loop


### a. while loop
- while loop is the simplest loops of C++.
- It executes one or more statements while the given condition remains true.
- It is useful when the number of iterations is not known in advance.
#### Syntax:
##### Single Statement:
```
while(condition)
     statement;
```
##### Multiple Statements:
```
while(condition)
{
    statement 1;
    statement 2;
    .
    .
    statement N;
}
```
- Condition is evaluted:

   - If it is true, the statement(s) are executed, and then condition is evaluted again
   - if it is false, the loop is exited
#### Examples:
```
int n;
n = 1;
while(n<=10)
{
    cout<<"\t"<<n;
    n++;
}
```
- Produces Output:
```
1 2 3 4 5 6 7 8 9 10
```
#### Counter Varaible 
- A variable that is inremented or decremented each time a loop iterates.
- It can be used to control the execution of the loop (as a loop control varaible)
- It must be initialized before entering loop
- It may be incremented/decremented either inside the loop or in the loop test.

### b. Infinite loop 
- The loop must contain code to allow the condition to eventually become false so the loop can be exited.
- Otherwise, you have an infinte loop

### c. do-while loop
- This loop executes one or more statements while the given condition is true.
- In this loop, the condition comes after the body of loop.
- The loop body always executes at least ones 
#### Syntax:
```
do
{
    statement 1;
    statement 2;
    :
    :
    statement N;
}
while(condition);

```

- Execution continues as longh as the condition is true; the loop is exited when the condition becomes false.
- ; after (condition) is also required.
- The loop executes at least once even if the condition is false in the beginnning.
#### Examples:
```
int n;
n = 1;
do
{
    cout<<"Welcome to C++\n"
}
while(n<=5)
```
### d. Sentinel Controlled Loop 
- It depends on special value known as sentinel value.
- Sentinel is a value in a list of values that indicates end of the list
- A sentinel value is commonly used with While and do-while loops.
- The number of iterations of sentinel-controlled loop is unknown
- It depends on the input from the user 
- can be used in the following situations:

   - A loop that inputs the marks of studenst until a negative number is entered.
   - A loop that inputs different characters untill the character 'Z' is entered
   - A loop that continues to read a string to read a string untill a peroid "." is found.
   - A loop that inputs a number untill a 0(zero) is entered.


### Difference between while and do-while loop

#### While loop:
- It is pre-test loop as the condition is checked before the body of the loop 
- The loop body is never executed if the condition is false in the beginning
- The semicolon is not used after the condition

#### do-while loop
- It is post-test loop as condition is checked after the body of the loop
- The loop body is executed at least once even if condition is false 
- The semicolon is used after the condition

### e. For Loop
- It is a pretest loop that executes one or more statements for a specified number of times.
- This loop is also called Counter-controlled loop.

#### Syntax / General Form
```
for(initialization; condition; inrement/decrement)
{
    statement 1;
    statement 2;
    :
    :
    statement N;
}
```
#### For loop modifications
- You can define varaible in initialization code.
```
for(int n=1; n<=5;n++)
```
- can omit initialiazation if alreday done
```
int n = 1;
for (;n<=5;n++)
```
- Can omit update if done in loop body
```
for (n = 1;n<=5;)
n++
```
- The condition in for loop is mandatory.It cannot be omitted 
```
int n = 1;
for (;n<=5;)
n++;
```

### f. Nested loop
- A loop within a loop is called nested loop.
-  Nested loops consists of an outer loop with one or more inner loops.
-  Any loop can be used as inner loop of another loop.
-  e.g while loop can be used as outer loop and for loop can be used as inner loop in nested loop.

#### Example
```
int i, j;
for(i=1; i<=2;i++)
  for(j=1; j<=3; j++)
    cout<<"Outer. "<<i<<"inner"<<j<<endl;
```
#### output
```
Outer: 1 Inner: 1
Outer: 1 Inner: 2
Outer: 1 Inner: 3
Outer: 2 Inner: 1
Outer: 2 Inner: 2
Outer: 2 Inner: 3

```

- The inner loop goes through all its iterations for each iteration of the outer loop
- Toatal number of iterations for inner loop is product of number of iterations of the two loops.
- The outer loop executes two times and the inner loop executes three times with each iteration of outer loop.

