#include <iostream>

using namespace std;

void SumOfDigits(int a, int sum) {
   if (a == 0) {
       cout << sum;
       return;
   } else {
       sum += a % 10;
       SumOfDigits(a / 10, sum);
   }
}

int main() {
   int a;
   cin >> a;
   int sum = 0;
   SumOfDigits(a, sum);
   return 0;
}

////time complexity O(log n )=> n is number of digits  and it depends on how large number is , but smaller numbers time compexity is O(1) constant
