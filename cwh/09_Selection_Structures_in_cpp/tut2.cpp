/*
#include <iostream>
using namespace std;
int main ()
{
    int a, b, c, d, e, max, min;
    cout<<"Enter five intergers: ";
    cin>>a>>b>>c>>d>>e;
    min = max = a;
    if(b < min) min = b;
    if(c < min) min = c;
    if(d < min) min = d;
    if(e < min) min = e;
    if(b > min) max = b;
    if(c > min) max = c;
    if(d > min) max = d;
    if(e > min) max = e;
    cout<<"Largest numbeer is "<<max<<endl;
    cout<<"Smallest number is " <<min<<endl;
    return 0;

}
*/

# include <iostream>
using namespace std;
int main()
{
    int X;
    cout<< "Enter a number: "<<endl;
    cin >> X;
    if(X %2 ==0)
    cout << X <<" is even number"<<endl;
    else
    cout << X <<" is odd number"<<endl;
    return 0;
}

