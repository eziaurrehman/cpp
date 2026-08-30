/*
Project 1:Student Result Calculator
Statement:
Create a C++ program that asks the user to enter marks of 5 subjects.

The program should calculate:
Total Marks
Average Marks
Percentage
Display all results neatly on the screen.
*/
#include <iostream>
using namespace std;
int main()
{
    int Physics, Biology, ComputerScience, Math, Urdu;
    cout << "Enter the number of Physics: " << endl;
    cin >> Physics;
    cout << "Enter the number of Biology: " << endl;
    cin >> Biology;
    cout << "Enter the number of Computer science: " << endl;
    cin >> ComputerScience;
    cout << "Enter the number of Math: " << endl;
    cin >> Math;
    cout << "Enter the number of Urdu: " << endl;
    cin >> Urdu;

    int totalMarks = 500;
    int obtainMarks = Physics + Biology + ComputerScience + Math + Urdu;

    cout << "The total subjects marks is: " << totalMarks << endl;
    cout << "The average marks of all subjects is: " << obtainMarks / 5 << endl;
    cout << "The percentage of user marks is: " << (float)obtainMarks / totalMarks * 100 << endl;
    return 0;
}