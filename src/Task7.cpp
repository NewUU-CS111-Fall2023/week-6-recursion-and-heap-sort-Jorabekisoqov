#include <iostream>
#include <cmath>
using namespace std;

void reversedOrder(int a) {
   if (a == 0) {
       return;
   } else {
       cout << a % 10;
       reversedOrder(a / 10);
   }
}

int main() {
   int a;
   cin >> a;
   reversedOrder(a);
   cout << endl;
   return 0;
}

//O(logn)
