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
    
        string copy = str;
        reverse(str, 0 , str.size()-1);
        
    if( str == copy) {
      

    cout<<"Palindrome String. "<<endl;
    }
    else {
      cout<<"Not a Palindrome String. "<< endl;
    }

    return 0;
}   