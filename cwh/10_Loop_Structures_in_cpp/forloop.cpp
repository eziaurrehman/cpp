#include <iostream>
using namespace std;
int main () {
    int tab, len, c;
    cout<<"Enter number for table: ";
    cin>>tab;
    cout<<"Enter length of table: ";
    cin>>len;
    for(c=1; c<=len; c++){
        cout<<tab<<" * "<<c<<" = "<<tab*c<<endl;
    }
    return 0;
}