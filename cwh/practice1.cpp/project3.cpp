/*
Project 3: Basic Calculator
Statement
Create a calculator that takes two numbers from the user and displays:

Addition
Subtraction
Multiplication
Division
Modulus

*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the value of a: " << endl;
    cin >> a;
    cout << "Enter the value of b: " << endl;
    cin >> b;

    cout << "The sum of a + b is: " << a + b << endl;
    cout << "The difference of a - b is: " << a - b << endl;
    cout << "The multiplication of a * b is: " << a * b << endl;
    cout << "The division of a / b is: " << a / b << endl;
    cout << "The modulus of a % b is: " << a % b << endl;

    return 0;
}
