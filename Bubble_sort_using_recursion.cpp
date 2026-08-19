#include<bits/stdc++.h> 
using namespace std;

  void sortArray(vector<int>& v, int n) {
    if(n==0 || n==1) {
        return;
    }
    for(int i=0; i<n-1; i++){
        if(v[i]>v[i+1]) {
            swap(v[i], v[i+1]);
        }
    }
    sortArray(v,n-1);
  }


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i = 0; i<n; i++) {
        cin>>v[i];
    }
    sortArray(v,n);

    for(int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}