#include<bits/stdc++.h>
using namespace std;

int pow(int num1, int num2) {
    int ans=1;
    for(int i=1;i<=num2;i++) {
        ans=ans*num1;
        }
        return ans;
}


int main() {
   int x,y;
   cin>>x>>y;
   int answer= pow(x,y);
   cout<<"Answer is "<<answer<<endl;
    
    return 0;
}   