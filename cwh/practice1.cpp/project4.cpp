/*
Project 4: Circle Information System
Statement
Create a constant variable:
const float PI = 3.14159;

Ask the user to enter the radius of a circle.
Calculate and display:

. Diameter
. Circumference
. Area


Example
Enter Radius: 5

Diameter      : 10
Circumference : 31.4159
Area          : 78.5397
*/

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    // Formula:
    // Diameter: d = 2r
    // Circumference: C = 2*pi*r or C = pi*d
    // Area: A = pi*r^2

    const float Pi = 3.14159;
    int radius;
    cout << "Enter the radius of a circle" << endl;
    cin >> radius;

    cout << "Diameter of a circle is: " << 2 * radius << endl;
    cout << "Circumference of a circle is: " << 2 * Pi * radius << endl;
    cout << "Area of a circle is: " << Pi * pow(radius, 2) << endl;
    return 0;
}