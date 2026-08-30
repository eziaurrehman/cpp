/*
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"Maximum number is " <<a<<endl;
    else if(b>a && b>c)
    cout<<"Maximum number is "<<b<<endl;
    else
    cout<<"Maximum number is "<<c<<endl;
    return 0;
}
    */

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u')
    cout<<"You enter a vowel: "<<ch<<endl;
    else
    cout<<"You did not enter a vowel: "<<ch<<endl;
    return 0;
}