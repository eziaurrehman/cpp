/*
Project 2: Student Information Card
Statement:
Create a program that asks the user to enter:

Name
Age
Height
Grade

Display the information in a formatted student card.
*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int age;
    string height, name;
    char grade;

    cout << "Enter Your Name: " << endl;
    cin >> name;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    cout << "Enter Your Height: " << endl;
    cin >> height;
    cout << "Enter Your Grade: " << endl;
    cin >> grade;

    cout << "User Name is: " << name << endl;
    cout << "User Age is: " << age << endl;
    cout << "User Height is: " << height << endl;
    cout << "User Garde is: " << grade << endl;

    return 0;
}