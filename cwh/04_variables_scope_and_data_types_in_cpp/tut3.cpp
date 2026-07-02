// write a program that explain the concept of overflow and underflow.
#include <iostream>
using namespace std;
int main()
{
    short testVar = 32767;
    cout << testVar << endl;
    testVar = testVar + 1;
    cout << testVar << endl;
    testVar = testVar - 1;
    cout << testVar << endl;
}