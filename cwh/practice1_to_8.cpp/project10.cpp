/*
Project 10: Student Report Management System
Statement
Create a complete student report system.

Take input:
 .Name
 .Age
 .Height

Take marks of:
 .Computer
 .Mathematics
 .Physics
 .English
 .Biology

Calculate:
 .Total Marks
 .Average Marks
 .Percentage

Use setw() to align the output properly.


Example
========================================
           STUDENT REPORT
========================================

Name       : Zia
Age        : 21
Height     : 5ft 8in

Computer   : 90
Math       : 80
Physics    : 85
English    : 70
Biology    : 95

----------------------------------------

Total      : 420
Average    : 84
Percentage : 84%

========================================
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string Name;
    int age;
    string height;
    int physics, Math, Computer, English, Biology;

    cout << "Enter Your Name: " << endl;
    cin >> Name;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    cout << "Enter Your Height: " << endl;
    cin >> height;
    cout << endl;

    cout << "Enter Computer Marks: ";
    cin >> Computer;
    cout << "Enter Mathematics Marks: ";
    cin >> Math;
    cout << "Enter Physics Marks: ";
    cin >> physics;
    cout << "Enter English Marks: ";
    cin >> English;
    cout << "Enter Biology Marks: ";
    cin >> Biology;

    int totalMarks = Computer + Math + physics + English + Biology;
    int averageMarks = totalMarks / 5;
    float percentage = totalMarks * 100.0 / 500;

    cout << "\n========================================\n";
    cout << "           STUDENT REPORT\n";
    cout << "========================================\n\n";

    cout << left << setw(12) << "Name" << ": " << Name << endl;
    cout << left << setw(12) << "Age" << ": " << age << endl;
    cout << left << setw(12) << "Height" << ": " << height << endl;

    cout << "\n";

    cout << left << setw(12) << "Computer" << ": " << Computer << endl;
    cout << left << setw(12) << "Math" << ": " << Math << endl;
    cout << left << setw(12) << "Physics" << ": " << physics << endl;
    cout << left << setw(12) << "English" << ": " << English << endl;
    cout << left << setw(12) << "Biology" << ": " << Biology << endl;

    cout << "\n----------------------------------------\n\n";

    cout << left << setw(12) << "Total" << ": " << totalMarks << endl;
    cout << left << setw(12) << "Average" << ": " << averageMarks << endl;
    cout << left << setw(12) << "Percentage" << ": " << percentage << "%" << endl;

    cout << "\n========================================\n";
    return 0;
}