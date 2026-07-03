/*
Project 7: Future Age Predictor
Statement
Ask the user to enter their current age.

Display:
 .Current Age
 .Age After 5 Years
 .Age After 10 Years
 .Age After 20 Years


Example
Enter Your Age: 21

Current Age     : 21
After 5 Years   : 26
After 10 Years  : 31
After 20 Years  : 41
*/

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter Your Age: " << endl;
    cin >> age;

    cout << "Current Age         :" << age << endl;
    cout << "Age After 5 Years   :" << age + 5 << endl;
    cout << "Age After 10 Years  :" << age + 10 << endl;
    cout << "Age After 20 Years  :" << age + 20 << endl;

    return 0;
}