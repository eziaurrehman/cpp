#include <iostream>
using namespace std;
int main()
{
    int s;
    for (s = 10; s <= 100; s++)
    {
        if (s % 2 == 0 || s % 3 == 0 || s % 5 == 0 || s % 7 == 0)
        {
            continue;
        }
        cout << s << endl;
    }
    
    return 0;
}