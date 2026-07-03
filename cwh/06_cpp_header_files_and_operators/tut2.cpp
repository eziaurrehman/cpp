#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++" << endl;
    cout << "Following are the types of operators in C++" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;

    int myint1 = 100;
    cout << "My int1" << myint1 << endl;   // 100
    cout << "My int1" << --myint1 << endl; // 99

    cout << "My int1" << myint1++ << endl; // 99
    myint1++;
    cout << "My int1" << ++myint1 << endl; // 102
    cout << "My int1" << --myint1 << endl; // 101

    cout << "My int1" << myint1 << endl; // 101
    return 0;
}
