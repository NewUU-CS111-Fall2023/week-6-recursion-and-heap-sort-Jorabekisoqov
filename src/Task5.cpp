#include <iostream>
#include <string>
using namespace std;

void isPalindrome(string str, int start, int end) {

   if (start >= end) {
       cout<<"YES";
       return;
   }

   if (str[start] != str[end]) {
       cout<<"NO";
       return;
   }

   return isPalindrome(str, start + 1, end - 1);
}

int main() {
   string word;
   cin >> word;
   int len = word.length();
    isPalindrome(word, 0, len - 1);
}
