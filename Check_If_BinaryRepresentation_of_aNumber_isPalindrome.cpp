#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(long long N)
{
  vector<int> v;
	while(N>0) {
    v.push_back(N%2);
    N=N/2;
  }
  int s=0;
  int e=v.size()-1;

  while(s<e) {
    if(v[s]!=v[e]){
      return false;
    }
    else {
      s++;
      e--;
    }

  }
  return true;
}

int main() {
  int n;
  cout<<"enter a number to Check If Binary Representation of a Number is Palindrome: "<<endl;
  cin>>n;
  bool t= checkPalindrome(n);
  
  if(t) {
    cout<<"Palindrome"<<endl;
  }
  else{
    cout<<"Not a Palindrome "<< endl;

  }
  return 0;

}