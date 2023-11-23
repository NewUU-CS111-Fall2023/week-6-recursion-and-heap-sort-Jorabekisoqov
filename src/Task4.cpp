#include <iostream>
#include <cmath>
using namespace std;
static int checker=2;
void CheckIfPrime(int a, int check){
   if(a==2){
       cout<<"YES";
       return;
   }
   if(a%check==0){
       cout<<"NO";
       return;
   }
   if(check> ::sqrt(a)){
       cout<<"YES";
       return;
   }

   CheckIfPrime(a,check+1);
}
int main(){
int a;
cin>>a;
   CheckIfPrime(a,checker);
}


///for the worst cases it will run until sqrt(a)  so complexity still O(n)
