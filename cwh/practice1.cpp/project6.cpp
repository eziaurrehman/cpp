/*
Project 6: Shop Bill Generator
Statement
Create a shop billing program.

Take input:

Product Name
Product Price
Quantity
Calculate the total bill.

Formula:
Total Bill = Price × Quantity


Example
Enter Product Name: Biscuit
Enter Price: 50
Enter Quantity: 5

=========== BILL ===========

Product : Biscuit
Price   : 50
Qty     : 5

Total   : 250

============================

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string productName;
    int productPrice;
    int Quantity;

    cout << "Enter Product Name: " << endl;
    cin >> productName;
    cout << "Enter Price: " << endl;
    cin >> productPrice;
    cout << "Enter Quantity: " << endl;
    cin >> Quantity;

    int totalBill = productPrice * Quantity;

    cout << "Product : " << productName << endl;
    cout << "Price : " << productPrice << endl;
    cout << "Qty : " << Quantity << endl;
    cout << endl;

    cout << "Total : " << totalBill << endl;
    return 0;
}