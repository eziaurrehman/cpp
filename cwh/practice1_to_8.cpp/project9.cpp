/*
Project 9: Mini Banking System
Statement:
Create a banking program.

Take input:
 .Account Holder Name
 .Current Balance
 .Deposit Amount

Calculate:
New Balance = Current Balance + Deposit


Example
Enter Account Holder Name: Zia
Enter Current Balance: 5000
Enter Deposit Amount: 1000

========== ACCOUNT ==========
Account Holder : Zia
Old Balance    : 5000
Deposit        : 1000
New Balance    : 6000
=============================
*/

#include <iostream>
using namespace std;
#include <string>
int main()
{
    string accountHoldername;
    int currentBalance;
    int depositAmout;

    cout << "Enter Account Holder Name: " << endl;
    cin >> accountHoldername;
    cout << "Enter Current Balance: " << endl;
    cin >> currentBalance;
    cout << "Enter Deposit Amount: " << endl;
    cin >> depositAmout;

    int newBalance = currentBalance + depositAmout;
    cout << endl;
    cout << "Accout Holder :" << accountHoldername << endl;
    cout << "Old Balance   :" << currentBalance << endl;
    cout << "Deposit       :" << depositAmout << endl;
    cout << "New Balance   :" << newBalance << endl;

    return 0;
}