#include <iostream>
using namespace std;

int main() {
    int x = 455;
    int &y = x; // y is a reference (alias) to x

    cout << "Value of x: " << x << endl;
    cout << "Value of y (reference to x): " << y << endl;

    // Changing y changes x because y is an alias
    y = 500;
    cout << "After y = 500;" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 455;
    int &y = x; // y is a reference (alias) to x

    cout << "Value of x: " << x << endl;
    cout << "Value of y (reference to x): " << y << endl;

    // Changing y changes x because y is an alias
    y = 500;
    cout << "After y = 500;" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    return 0;
}

