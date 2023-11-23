#include <iostream>

using namespace std;

int secondLargest(int data[], int n) {
   if (n == 1) {
       return data[0];
   } else {
       int largest = max(data[0], data[1]);
       int secondLargest = min(data[0], data[1]);
       for (int i = 2; i < n; i++) {
           if (data[i] > largest) {
               secondLargest = largest;
               largest = data[i];
           } else if (data[i] > secondLargest) {
               secondLargest = data[i];
           }
       }
       return secondLargest;
   }
}

int main() {
   int n = 0;
   int data[100];
   while (true) {
       cin >> data[n];
       if (data[n] == 0) {
           break;
       }
       n++;
   }
   int secondLargestElement = secondLargest(data, n);
   cout << secondLargestElement << endl;
   return 0;
}



///time complexity is O(n)
