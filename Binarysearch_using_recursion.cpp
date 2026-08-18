#include<bits/stdc++.h>
using namespace std;

bool binarysearch(int arr[], int s, int e, int Key) {
    //base case

  if(s>e) {
    return false;
  }
  int mid=s+(e-s)/2;

  if(arr[mid]==Key){
    return true;
  }

  if(arr[mid]<Key) {
    return binarysearch( arr, mid+1, e, Key);
  }
  else {
    return binarysearch( arr, s, mid-1, Key);
  }
    
}

int main() {
   cout<<"enter the size for an array: "<< endl;
    int n;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array: "<< endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int Key;
    cout<<"Enter the Number to be found : "<< endl;
    cin>>Key;
    
    bool ans= binarysearch(arr, 0, n-1, Key);
    if(ans) {
        cout<<"The Number is present. "<< endl;
    }
    else {    
        cout<<"The Number is not present. "<< endl;
    }
    return 0;
}   