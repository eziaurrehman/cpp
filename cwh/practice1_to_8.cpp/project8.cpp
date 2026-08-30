/*
Project 8: Operator Precedence Analyzer
Statement
Create variables:

 .int a = 10;
 .int b = 5;
 .int c = 2;

Display results of:

 .a + b * c
 .(a + b) * c
 .a - b / c
 .(a - b) / c
 .a * b + c
 .a * (b + c)


Questions:
Which operator has higher precedence?
How do parentheses affect the result?
*/

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 5;
    int c = 2;

    cout << a + b * c << endl;
    cout << (a + b) * c << endl;
    cout << a - b / c << endl;
    cout << (a - b) / c << endl;
    cout << a * b + c << endl;
    cout << a * b + c << endl;
    return 0;
}