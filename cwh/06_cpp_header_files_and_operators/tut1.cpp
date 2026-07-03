#include <iostream>
// There are two types of header files:
// 1. System header files: It comes with the compiler
using namespace std;
// 2. User defined header files: It is written by the programmer
// #include "this.h" //--> This will produce an error if this.h is no present in the current direcTory
int main()
{
    int a = 4, b = 5;
    cout << "Operators in C++:" << endl;
    cout << "Following are the types of operator in C++" << endl;

    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of ++a is " << --a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << endl;

    // Assigfnement Operators --> used to assign values to variables
    // int a =3, b=9;
    // char d='d';

    // Comparsion Operators
    // ==, =
    // &&, &
    //

    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << endl;

    // Logical Operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and operator ((a==b) && (a<b)) is:" << ((a == b) && (a < b)) << endl;
    cout << "The value of this logical and operator ((a==b) || (a<b)) is:" << ((a == b) || (a < b)) << endl;
    cout << "The value of this logical and operator (!(a==b) is:" << (!(a == b)) << endl;

    bool mybool1 = true;
    int myint1 = true;
    int myint2 = false;
    int myint3 = 100;
    int myint4 = 0;
    int myint5 = 102.5;

    cout << "\nMy bool " << !!mybool1 << endl;
    cout << "My int" << myint1 << endl;
    cout << "My int" << myint2 << endl;
    cout << "My int" << myint3 << endl;
    cout << "My int" << !!myint3 << endl;
    cout << "My int" << !!myint4 << endl;
    cout << "My int" << myint5 << endl;

    // Penny shaving

    return 0;
}
