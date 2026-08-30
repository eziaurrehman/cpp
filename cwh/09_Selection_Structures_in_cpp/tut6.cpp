/*
#include <iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter an alphabet: ";
    cin>>c;
    switch(c)
    {
        case 'a':
        case 'A':
         cout<<"You entered vowel.";
         break;
        case 'e':
        case 'E':
         cout<<"You entered vowel.";
         break;
        case 'i':
        case 'I':
         cout<<"You entered vowel.";
         break;
        case 'o':
        case 'O':
         cout<<"You entered vowel.";
         break;
        case 'u':
        case 'U':
         cout<<"You entered vowel.";
         break;
        default:
        cout<<"Not vowel";

    }
    return 0;
}

*/

#include <iostream>
using namespace std;
int main()
{
    char grade = 'B';
    switch (grade)
    {
        case 'A':
        cout<< "Excellent ! "<<endl;
        break;
        
        case 'B':
        cout<< "Outstanding ! "<<endl;
        break;

        case 'C':
        cout<< "Good ! "<<endl;
        break;

        case 'D':
        cout<< "Can do better ! "<<endl;
        break;

        case 'E':
        cout<< "Just passed ! "<<endl;
        break;

        case 'F':
        cout<< "You failed ! "<<endl;
        break;
        default:
        cout<< "Invalid grade " <<endl;
    }
    return 0;
}