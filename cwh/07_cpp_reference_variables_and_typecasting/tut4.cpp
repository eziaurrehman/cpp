/* #include <iostream>
using namespace std;

int c = 45; // global variable

int main() {
 int a, b, c;
 cout<<"Enter the value of a: ";
 cin>>a;
 cout<<"Enter the value of b: ";
 cin>>b;
 c = a + b;
 cout<<"The sum is "<<c<<endl;
 cout<<"The global c is "<<::c;

 cout<<endl;
 cout<<endl;
    return 0;
} */

// Type casting
#include <iostream>
using namespace std;

int c = 45; // global variable

int main()
{
    // implicit conversion
    int x = 20;
    char y = 'a';
    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;
    cout << "x= " << x << endl;

    // emplicit conversion
    float a, b;
    int c;
    a = 10.3;
    b = 5.2;
    c = static_cast<int>(a) % static_cast<int>(b);
    cout << "Result is " << c;

    return 0;
}
