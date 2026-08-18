#include<bits/stdc++.h>
using namespace std;

void reverse(string& str, int i , int j) {
    //base case

  if(i>j) {
    return ;
  }
  swap(str[i], str[j]);
  i++;
  j--;
  
  //recursive call

   reverse(str, i , j);
}

int main() {
   cout<<"enter the string: "<< endl;
    
    string str;

    
    cin>>str;
    
        
    reverse(str, 0 , str.size()-1);

    cout<<"Reversed String: "<<str<<endl;

    return 0;
}   