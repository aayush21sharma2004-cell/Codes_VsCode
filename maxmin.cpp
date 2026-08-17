#include<bits/stdc++.h>
using namespace std;

int getmax(int num[], int n) {
    int maxi=INT_MIN;
    for (int i=0; i<n; i++) {

     maxi=max(maxi,num[i]);   
     //   if (num[i]>max) {
       //     max= num[i];
       // }
    }
return maxi;
}


int getmin(int num[], int n) {
    int mini=INT_MAX;
    for (int i=0; i<n; i++) {
      
      mini=min(mini,num[i]);
        // if (num[i]<min) {
         //   min= num[i];
       // }
    }
return mini;
}

int main() {
   int val;
   cin>>val;
   int arr[100];
   for(int i=0; i<val; i++) {
    cin>>arr[i];
   }

cout<<"Maximum is "<<getmax(arr , val)<<endl;
cout<<"Minimum is "<<getmin(arr , val)<<endl;

    
    return 0;
}   