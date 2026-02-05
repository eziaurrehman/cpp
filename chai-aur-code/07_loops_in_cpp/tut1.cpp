/*
Tasks to learn loop in C++

1.While Loop:
Challenge:
Write a program that keeps tarck of tea orders. Each time a cup of tea
is made, decrease the number of cups remainig. The loop should run untill
all cups are served.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaCups;

    cout << "Enter the number of tea cups to server: ";
    cin >> teaCups;

    while (teaCups > 0)
    {

        cout << "Serving a cup of tea \n " << teaCups << " remaining" << endl;
        teaCups--;
    }

    cout << "All tea cups are served. " << endl;

    return 0;
}
*/

/*
2.Do-While Loop
Challenge:
Create a program that asks the user if they want more tea. Keep asking
them untill they type "no" (case-insensitive),using a do-while loop.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    do
    {
        cout << "Do you want more tea (yes/no): ";
        getline(cin, response);
    } while (response != "no" || response != "No");
    return 0;
}
*/

/*
3.For Loop
Chanllenge:
Write a program that prints the brewing instructions for making 5 cups
of tea. The brewing process should be printed once for each cup using a
for loop.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int teaCups = 5;

    for (int i = 1; i <= teaCups; i++)
    {
        cout << "Brewing cup " << i << "of tea..." << endl;
    }

    cout << "Outside of loop";
    return 0;
}
*/

/*
4. Break Keyword
Challenge:
Write a program that keeps serving tea until the user says they've had
enough (input 'stop'). Use a break statement to exit the loop when the
user types 'stop'.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string response;

    while (true)
    {
        cout << "Do you want more tea (type 'stop' to exit)?: ";
        getline(cin, response);

        if (response == "stop")
        {
            // exit the loop
            break;
        }

        cout << "Here is your another cup of tea.\n ";
    }
    cout << "No more tea will be served to you";

    return 0;
}
*/

/*
5. Continue Keyword
Challenge:
Write a program that skips brewing green tea if the user dislikes it.
Use a continue statement to skip over green tea but brew other types
of tea in a list.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string teatypes[3] = {"Green Tea", "Black Tea", "lemon Tea"};

    for (int i = 0; i < 3; i++)
    {
        if (teatypes[i] == "Green Tea")
        {
            cout << "Skipping the " << teatypes[i] << endl;
            continue;
        }

        cout << "Brewing " << teatypes[i] << "..." << endl;
    }
    return 0;
}
