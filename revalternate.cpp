#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int n) {
    for(int i=0; i<n; i+=2) {
        if(i+1<n) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void printarray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

int main() {
   int size;
   cin>>size;
   int arr[100];
   for (int i=0; i<size; i++) {
    cin>>arr[i];
   }

rev(arr, size);
printarray(arr, size);
    return 0;
}   