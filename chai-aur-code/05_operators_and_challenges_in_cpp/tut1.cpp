/*
1.Arithmetics Operators:

Changllenge:
Create a program that calculates the total price of tea cups. The
user inputs the number of the cups they wants and the price per cup.
The program should calculates the total price, apply a 5% discount if
the total is above a 100, and show the final price.
+,-,*,/,%


#include <iostream>
using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrie, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> cups;
    cout << "Enter the price per cups: ";
    cin >> pricePerCup;

    totalPrie = cups * pricePerCup;

    // Apply 5% discount if total price is above 100

    if (totalPrie > 100)
    {
        discountedPrice = totalPrie - (totalPrie * 0.05);
        cout << "Discounted price is: " << discountedPrice << endl;
    }
    else
    {
        cout << "Total price is " << totalPrie << endl;
    }

    return 0;
}

*/

/*
2. Assignment Operators
Challenge:
Write a program that allows a user to input the number of tea bags
they have. Assign additional bags to them based on certain conditions
(e.g, if they have fewer than 10 bags, give them 5 extra). Update the
origanl number using assignment operators.
+=,-=,*=,/=,%=


#include <iostream>
using namespace std;

int main()
{
    int teaBags;

    cout << "Enter the number of tea bags you have: ";
    cin >> teaBags;

    if (teaBags < 10)
    {
        // teaBags = teaBags + 5;
        teaBags += 5;
    }

    cout << "Your total bags are: " << teaBags << endl;
    return 0;
}
*/

/*
3.Relational Operators:
Challenge:
A tea shop offers a loyalty program. Customers who buy more than 20 cups
of tea get a special "Gold" badge, and those who buy 10 to 20 cups get
a "Silver" badge. Write a program to display the badge they will receive
based on the number of cups they buy.
>=,<,<=



#include <iostream>
using namespace std;

int main()
{
    int cups;

    cout << "Enter the number of cups you have" << endl;
    cin >> cups;

    if (cups > 20)
    {
        cout << "You will get a Gold badge" << endl;
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You will get a Silver badge" << endl;
    }
    else
    {
        cout << "No Badge for you" << endl;
    }

    return 0;
}
*/

/*
4.Logical Operators
Challenge:
Create a program that checks if a user is eligible for a tea subscription
discount. The discount applies if the user is either a student or has
purchased more than 15 cups. Ask the user to input their status (student
or not) and their cups count.
&& and || operators
*/

#include <iostream>
using namespace std;

int main()
{
    bool isStudent;
    int cups;

    cout << "Are you a student (1 for yes and 0 for No) ?" << endl;
    cin >> isStudent;
    cout << "How many cups of tea have you purchased  ?" << endl;
    cin >> cups;

    if (isStudent || cups > 15)
    {
        cout << "You are elegible for a discount " << endl;
    }
    else
    {
        cout << "You are Not elegible for a discount " << endl;
    }

    return 0;
}
