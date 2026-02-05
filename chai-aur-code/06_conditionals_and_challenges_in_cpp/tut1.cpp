/*
1.If Statement:
Challenge:
Write a program that checks if the  user wants to order Green Tea. If
the user types "Green Tea," the program should confirm their code.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teaOrder;

    cout << "Enter your tea order" << endl;
    getline(cin, teaOrder);

    if (teaOrder == "Green tea")
    {
        cout << "You have ordered Green Tea" << endl;
    }

    return 0;
}
*/

/*
2.If-Else Statement
Challenge:
Write a program that checks if a tea shop is open. If the current hour
(input by the user) is between 8 AM and 6 PM, the shop is open;otherwise,
it's closed.

#include <iostream>
using namespace std;

int main()
{
    int hour;

    cout << "Enter the current hour (0-23): ";
    cin >> hour;

    if (hour >= 8 && hour <= 18)
    {
        cout << "Tea shop is OPEN!" << endl;
    }
    else
    {
        cout << "Tea shop is CLOSED!" << endl;
    }

    return 0;
}
*/

/*
3.Nested If-Else
Challenge:
A tea shop offers discounts based on the number of tea cups ordered.
Write a program that checks the number of cups ordered and applies a
discount:*More than 20 cups:20% discount
 . Between 10 and 20 cups: 10% discount
 . Less than 10 cups: No discount

#include <iostream>
using namespace std;

int main()
{
    int cups;

    double pricePerCup = 2.5, totalPrice, discount;

    cout << "Enter the number of tea cups";
    cin >> cups;

    totalPrice = pricePerCup * cups;

    if (cups > 20)
    {
        discount = 0.20;
    }
    else if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);

    cout << "Total price after discount is: " << totalPrice << endl;
    return 0;
}
*/

/*
4. Switch case:
Challenge
Write a program that lets the user select a tea type from a menu. Use a
switch statement to display the price based on the selected tea:*Green tea:$2
  .Black Tea:$3
  .Oolong Tea:$4
*/
#include <iostream>
using namespace std;

int main()
{
    int choice;
    double price;

    cout << "Select your tea\n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your choice in number: \n";

    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "You selected Green Tea. Price: " << price << endl;
        break;
    case 2:
        price = 3.0;
        cout << "You selected Lemon Tea. Price: " << price << endl;
        break;
    case 3:
        price = 4.0;
        cout << "You selected Oolong Tea. Price: " << price << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}
