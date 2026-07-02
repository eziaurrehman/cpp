/* #include <iostream>
using namespace std;
int main()
{
    int a;
    a = 10;
    cout << "Value of a: " << a << endl;
    a += 5;
    cout << "Value of a after a+=5: " << a << endl;
    a -= 5;
    cout << "Value of a after a-=5: " << a << endl;
    a *= 2;
    cout << "Value of a after a*=2: " << a << endl;
    a /= 2;
    cout << "Value of a after a/=2: " << a << endl;
    a %= 2;
    cout << "Value of a after a%=2: " << a << endl;
    return 0;
} */
#include <iostream>
using namespace std;
int main()
{

    int n = 2;
    int result;
    result = 2 * (n++);
    cout << result << endl;
    cout << n;
    return 0;
}