#include <iostream>
using namespace std;
void Ascending(int a,int b){

    cout<<a<<" ";
    if(a==b){
        return;
    }
    Ascending(a-1,b);

}
void Decsending(int a,int b){

    cout<<a<<" ";
    if(a==b){
        return;
    }
   Decsending(a+1,b);

}

int main(){
    int a;
    int b;
    cin>>a>>b;
    if(a>b) {
        Ascending(a, b);
    }
    else{
        Decsending(a,b);
    }
}



//// time complexity is O(n) 
