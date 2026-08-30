/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2 == 0)
    cout<<n<<" is even."<<endl;
    else 
    cout<<n<<" is odd."<<endl;
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int X;
    cout<<"Enter a number: ";
    cin>>X;
    if(X %2 == 0)
    {
        cout << "You have entered " << X <<endl;
        cout<< X << " is an even number " <<endl;
    }
    else 
    {
        cout<<"You have entered " << X <<endl;
        cout<< X << " is an odd number " <<endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter your Marks: ";
    cin>>marks;
    if(marks>=90)
    cout<<"Your grade is A.";
    else if(marks>=80)
    cout<<"Your grade is B.";
    else if(marks>=70)
    cout<<"Your grade is C.";
    else if(marks>=60)
    cout<<"Your grade is D.";
    else
    cout<<"Your grade is F.";
    return 0;     
}