#include <iostream>

using namespace std;
int main()
{

    // Syntax for for loop
    // for(initialization; condition; updation)

    // {
    //     loop body (C++ code);
    // }

    // Loops in C++:
    // Finite loops
    // for (int i = 1; i <= 40; i++){
    //     /* code */
    //     cout<<i<<endl;
    // }

    // Examples of infinites loops

    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }

    // While loop in C++
    // Syntax:

    // while (condition)
    // {
    //     C++ Statements
    // }

    // Printing 1 to 40 using while loops
    // int i = 1;
    // while (i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // Examples of infinite while loop
    // int i= 1;
    // while (true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // do While loop in c++
    // syntax:
    // do
    // {
    //     C++ statements;
    // }while(condition)

    // Printing 1 to 40 using while loop
    // int i =1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while (false);

    // quiz
    int a = 6;
    int i = 1;
    do
    {
        cout << a * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}
