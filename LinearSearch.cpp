#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(arr[i]==key) {
            return 1;
        }
    }
    return 0;
}

int main() {
   int size;
   cin>>size;
   int arr[100];
   for (int i=0; i<size; i++) {
    cin>>arr[i];
   }
   int key;
   cout<<"Enter the number to be found : "<<endl;
cin>>key;
bool found= search(arr, size, key);

if(found) {
    cout<<"Present "<<endl;
}
else {
cout<<"Absent "<<endl;
}    
    return 0;
}   