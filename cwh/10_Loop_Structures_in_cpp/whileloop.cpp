/*
#include <iostream>
using namespace std;
int main()
{
    int c, sum;
    c = 1;
    sum = 0;
    while (c <= 5)
    {
        cout << c << endl;
        sum = sum + c;
        c = c + 1;
    }
    cout << "Sum is " << sum;

    return 0;
} 


#include <iostream>
using namespace std;
int main ()
{
    int i= 1;
    while (i<6)
    {
        cout<< "Pakistan"<<endl;
        ++i;
    }
    
    return 0;
}


#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the starting numbers: ";
    cin>>n;
    while (n>0)
    {
        cout<<n<<",";
        --n;
    }
    
    return 0;
}

*/

#include <iostream>
using namespace std;
int main (){
    int n = 1;
    while (n<=50)
    {
        cout << n <<" ";
        if(n%10 == 0)
        cout <<endl;
        n++;
    }
    
    return 0;
}