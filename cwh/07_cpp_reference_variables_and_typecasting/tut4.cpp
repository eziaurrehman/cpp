#include <iostream>
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
}
