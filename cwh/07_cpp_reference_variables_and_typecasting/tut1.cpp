#include <iostream>
using namespace std;

int c = 45;
int main()
{
    /*
       int a, b, c;

       cout<<"Enter the value of a:"<<endl;
       cin>>a;
       cout<<"Enter the value of a:"<<endl;
       cin>>b;
       c = a + b;
       cout<<"The sum is "<<c<<endl;
       cout<<"The gloabl c is "<<::c; */

    /*
        float d = 34.4F;
        long double e = 34.4L;
        cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
        cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
        cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
        cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
        cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; */

    /*
        float x = 455;
        float & y = x;

        cout<<x<<endl;
        cout<<y<<endl; */

    int a = 45;
    float b = 45.46;

    cout << "The value of a is " << (float)a << endl;
    cout << "The value of a is " << float(a) << endl;

    cout << "The value of b is " << (int)b << endl;
    cout << "The value of b is " << int(b) << endl;
    int c = int(b);

    cout << "The expression is " << a + b;
    cout << "The expression is " << a + int(b);
    cout << "The expression is " << a + (int)b;
    return 0;
}
