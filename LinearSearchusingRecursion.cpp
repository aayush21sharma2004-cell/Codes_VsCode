#include<bits/stdc++.h>
using namespace std;

bool linearsearch(int arr[], int size, int Key) {
    //base case

  if(size==0 ) {
    return false;
  }
  if(arr[0]==Key) {
    return true;
  }
  else {
    bool ans= linearsearch(arr+1, size-1, Key);
    return ans;
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
    
    bool ans= linearsearch(arr, n, Key);
    if(ans) {
        cout<<"The Number is present. "<< endl;
    }
    else {
        cout<<"The Number is not present. "<< endl;
    }
    return 0;
}   