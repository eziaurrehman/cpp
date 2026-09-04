#include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number (0 to exist): ";
   cin>>n;
   while (n != 0)
   {
    cout<<"Square of "<<n<<" = "<<n*n<<endl;
    cout<<"Enter a number (0 to exit): ";
    cin>>n;

   }
   cout<<"Goodbye";
   
    return 0;
}
