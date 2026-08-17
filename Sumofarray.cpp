#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int n) {
    int val=0;
    for(int i=0; i<n; i++) {
        val= val+ arr[i];
        }
        return val;
}

int main() {
   int size;
   cin>>size;
   int arr[100];
   for(int i=0; i<size; i++) {
    cin>>arr[i];
   }
cout<<" The Sum of elements i an array is "<<sum(arr,size)<< endl;
    
    return 0;
}   