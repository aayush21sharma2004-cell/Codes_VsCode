#include<bits/stdc++.h>
using namespace std;

int main() {
   
 int num = 5;
 cout<<"address of num is "<< &num << endl;
 int *ptr = &num;
 cout<<"Address is: " << ptr <<endl; 
 cout<<"Value is: " << *ptr <<endl; 

 double d = 8.5;
 cout<<"address of num is "<< &d << endl;
 double *ptr2 = &d;
 cout<<"Address is: " << ptr2 <<endl; 
 cout<<"Value is: " << (*ptr2)++ <<endl; 
 
 *ptr2 = *ptr2 + 1;
 cout<<"Value updated is: " << *ptr2 <<endl; 


    return 0;
}   