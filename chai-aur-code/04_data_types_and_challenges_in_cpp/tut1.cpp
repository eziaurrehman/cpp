/* #include <iostream>

using namespace std;

int main() {
    int teaLeaves = 50;
    float waterTemperature = 85.565575;
    double priceOfTea = 299.99;
    char teaGrade = 'A';
    bool isTeaReady = false;

    cout << waterTemperature <<endl;
    
  return 0;
} */

/* 
#include <iostream>

using namespace std;

int main() {
     int smallTeaPack = 1200;
     long long largeTeaStorage = 1000000;
     short teaSample = 25;

     cout << largeTeaStorage << endl;
    
  return 0;
} */

/* #include <iostream>

using namespace std;

int main() {
   float teaPrice = 49.99;
   int roundedTeaPrice = (int) teaPrice;

   int teaQuantity = 2;
   int totalPrice = teaPrice * teaQuantity;

   cout << totalPrice << endl;

  return 0;
} */


/* 
// string
#include <iostream>
#include <string>
using namespace std;

int main() {
    string favoriteTea = "Lemon Tea \n";
    string description = "Known as \"best\" tea";

    cout<< favoriteTea << description << endl;

  return 0;
}

 */


// User inputs 
#include <iostream>
#include <string>
using namespace std;

int main() {
  
  string userTea;
  int teaQuantity;

  cout << "What would you like to order in tea? \n";
  getline(cin, userTea);

  // ask for quantity 
  cout << "how many cups of " << userTea << "would you like to have ?";
  cin >> teaQuantity;

  cout << teaQuantity;
  cout << userTea;
  return 0;
}


