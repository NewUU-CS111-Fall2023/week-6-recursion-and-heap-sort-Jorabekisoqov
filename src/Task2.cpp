#include <iostream> 
using namespace std; 
void recursion(int N)
{ if(N==1)
{ cout<<"YES"; return; } 
else if(N%2==1)
{ cout<<"NO"; return; }
 recursion(N/2); 
 cout<<"0"<<endl; }
int main()
{ int N;
 cin>>N; 
 recursion(N); 
} 

////time complexity //O(logn)
