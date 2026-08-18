#include<bits/stdc++.h>
using namespace std;

/* void reverse(string& str, int i , int j) {
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
*/
bool checkPalindrome(string str, int i, int j) {
  //base case
  if(i>j) {
    return true;
  }
  if(str[i]!=str[j]) {
    return false;
  }
  else {
    //recursive function
    checkPalindrome( str,  i+1,  j-1);
  }
}



int main() {
   cout<<"enter the string: "<< endl;
    string str;
    cin>>str;
    bool isPalindrome = checkPalindrome( str, 0, str.size()-1);
    if(isPalindrome) {
      cout<<"Palindrome String"<<endl;
    }
    else {
      cout<<"Not a Palindrome String"<<endl;
    }
    
/*
        string copy = str;
        reverse(str, 0 , str.size()-1);

    if( str == copy) {
      

    cout<<"Palindrome String. "<<endl;
    }
    else {
      cout<<"Not a Palindrome String. "<< endl;
    }
*/
    return 0;
}   