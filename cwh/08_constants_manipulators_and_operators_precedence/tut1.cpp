#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was: "<<a;
    //  a = 45;

    // cout<<"The value of a is: "<<a;

    // Constants in C++

    // const float a = 3.11;
    // cout<<"The value of a is: "<<a<<endl;
    // a = 45.6;

    // cout<<"The value of a is: "<<a<<endl;

    // int a = 3, b = 78, c = 1233;

    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a without setw is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b without setw is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c without setw is: "<<setw(4)<<c<<endl;

    // Operator precendence

    int a = 3, b = 4;

    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;

    return 0;
}
