#include <iostream>

using namespace std;
void recursion(int a){


    if(a==0){
       cout<<"YES";
        return;
   }
   if(a<0){
       cout<<"NO";
       return;

   }
   recursion(a-2);

}
int main(){
   int a;
   cin>>a;
   recursion(a);
}
