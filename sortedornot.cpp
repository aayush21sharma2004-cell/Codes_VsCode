#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int arr[], int size) {
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]) {
        return false;
    }
    else{
        bool remainingPart = is_sorted(arr+1, size-1 ); 
        return remainingPart;
    }
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
    bool ans= is_sorted (arr,n);

if(ans){
    cout<<"array is sorted. "<<endl;
}
else {
    cout<<"array is not sorted. "<<endl;
}


    
    return 0;
}   