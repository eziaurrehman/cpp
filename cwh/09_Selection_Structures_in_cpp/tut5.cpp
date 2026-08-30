/*
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter three number. ";
    cin>>a>>b>>c;
    if (a<b)
      if(a<c)
      cout<<a<<" is smallest number. ";
      else 
      cout<<c<<" is smallest number.";
    else
      if (b<c)
       cout<<b<<" is smallest number.";
      else 
        cout<<c<<" Is smallest number.";

  return 0;
}
*/

#include <iostream>
using namespace std;
int main (){
    int X;
    cout<<"Enter a number: ";
    cin>>X;
    if(X>50)
    {
        if(X>100)
          cout<<X<<"is greater than 100" <<endl;
        else 
          cout<<X<<" is between 50 and 100" <<endl;
    }
    else 
    cout<<X<<" is less than 50";

    return 0;

}