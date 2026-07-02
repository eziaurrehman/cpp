/*
Task 5
Ask the user:
Enter your name:

Then display:
Welcome Zia

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name:";
    cin >> name;
    cout << "Welcome " << name << endl;

    return 0;
}
*/

/*
Task 6
Take two numbers from the user and display:

Addition
Subtraction
Multiplication
Division
*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    int sum;

    cout << "Enter the value of num1" << endl;
    cin >> num1;
    cout << "Enter the value of num2" << endl;
    cin >> num2;
    cout << "Sum of num1 + num2 is: " << num1 + num2 << endl;
    cout << "Subtraction of num1 - num2 is: " << num1 - num2 << endl;
    cout << "Multiplication of num1 * num2 is: " << num1 * num2 << endl;
    cout << "Division of num1 / num2 is: " << num1 / num2 << endl;
    return 0;
}