/*
Challenge 01
Write a C++ program to get 5 subjects marks of a student and then calculate its total, average and percentage and display them on the screen


#include <iostream>
using namespace std;
int main()
{
    int totalMarks = 500;
    int computerScience = 90;
    int Math = 93;
    int Physics = 80;
    int English = 70;
    int Biology = 96;

    int obtainMarks = Math + computerScience + Physics + English + Biology;
    cout << "Total marks is: " << obtainMarks << endl;
    cout << "Average of number is: " << (float)obtainMarks / 5 << endl;
    cout << "Percentage of numbers is: " << (float)obtainMarks / totalMarks * 100 << endl;
    return 0;
}
*/

/*
Challenge 02
Write a C++ program to find out the maximum value out of four integers using conditional operator.

#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 2, c = 1, d = 8;
    int max1 = (a > b) ? a : b;
    int max2 = (max1 > c) ? max1 : c;
    int maximum = (max2 > d) ? max2 : d;

    cout << "Maximum value is: " << maximum << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Enter the value of a" << endl;
    cin >> a;

    cout << "Enter the value of b" << endl;
    cin >> b;

    cout << "Enter the value of c" << endl;
    cin >> c;

    cout << "Enter the value of d" << endl;
    cin >> d;

    int max1 = (a > b) ? a : b;
    int max2 = (max1 > c) ? max1 : c;
    int maximum = (max2 > d) ? max2 : d;

    cout << "Maximum value is: " << maximum << endl;

    return 0;
}
*/
/*
Challange 03:
Write a C++ program to find out the roots of a quadratic equation.


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    double d = b * b - 4 * a * c;

    double root1 = (-b + sqrt(d)) / (2 * a);
    double root2 = (-b - sqrt(d)) / (2 * a);

    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2 << endl;
    return 0;
}
*/

/*
Challange 04:
Write a C++ program to find out the area of rectangle and display the result on the screen.


#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int length, width;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    int area = length * width;
    cout << "Area of rectangle = " << area << endl;
    return 0;
}

*/

/*
Challange 05:
Write a C++ program to get the age of a student from the user at run time and display it on the screen.

#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age: " << endl;
    cin >> age;
    cout << "The age of student is " << age << endl;
    return 0;
}
*/
