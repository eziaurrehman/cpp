/*
Task 7
Questions:
What will be printed?
Why?
Which variable has higher priority inside main()?

#include <iostream>
using namespace std;

int a = 100; // global

int main()
{
    int a = 50; // local

    cout << a << endl;
}
*/

/*
Task 8
Create:

int globalVar = 10;

Print it inside main().
*/

#include <iostream>
using namespace std;

int globalVar = 10;
int main()
{
    cout << globalVar << endl;

    return 0;
}
