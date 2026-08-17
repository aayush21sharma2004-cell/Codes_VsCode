#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size) {
    //base case

    if( size<=0 ){
        return 0;
    }
    return arr[0]+sum(arr+1,size-1); 
}

int main() {
   cout<<"enter the size for an array: "<<endl;
    int n;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array: "<< endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    int ans=sum (arr,n);
    cout<<ans<<" "<<" "<<endl;   
    return 0;
}   