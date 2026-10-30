# Continue statments:

- The continue statements is used in the body of the loop.
- When this executed in the loop body, the remaining statements of current iteration are not executed.
- The control directly moves to the next iteration.

## Examples:
```
int x;
for(x=1; x<=5; x++)
{
    cout<<"Hello world \n";
    continue;
    cout<<"Knowledge is power."'
}
```
- The above examples has two cout statements.
- One statements is before the continue statement and one is after contunie statement.
- The second statement is never executed.
- This is because each time continue statement is executed, the control moves back to the start of the body. So "Knowledge is power" is never displayed.

## Break Statements:
- It can be used with while, for, do- while or switch structure
- When this statement is executed in the loop body, the remainig iterations of the loop are skipped.
- The control directly moves outside the body, the remainig iterations of the loop are skipped.
- When used in an inner loop, break terminates that loop only and retruns to the outer loop.

## Example 
```
for(int x=1; x<=5; x++)
{
    cout<<"Questioning\n";
    break;
    cout<<"Gateway to knowledge";
}
cout<<"Bye";
```
- The counter varible x indicates that the loop should execute for fives times.
- But it is executed only once.
- the first iteration, the cout statement in the loop displays "Questioning"And control moves to break statement.
- This statement moves the control out of the loop. So the message appears only once.



