#include<bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    if(n&1){
        return 0;
    }
    else {
    return 1;
}
}

int main() {
   int n;
   cout<<"Enter a number: "<<endl;
   cin>>n;
   if(isEven(n)) {
    cout<<"The number is Even "<<endl; 
   } 
   else {
   cout<<"The number is Odd "<<endl;
   }
   return 0;
}   