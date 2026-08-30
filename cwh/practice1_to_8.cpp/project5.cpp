/*
Project 5: Type Casting Demonstration
Statement
Create a program that:

1.Stores a decimal number in a float variable.
2.Converts it into an integer using type casting.
3.Displays both values.

Example
Original Float Value : 9.87
After Type Casting   : 9

Questions
What value was lost?
Why did it happen?
*/

#include <iostream>
using namespace std;
int main()
{
    float a = 9.87;
    int b = (int)a;
    cout << "Original Float Value: " << a << endl;
    cout << "After Type Casting: " << b << endl;
    return 0;
}