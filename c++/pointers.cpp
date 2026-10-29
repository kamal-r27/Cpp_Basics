//Pointers are used to store the addresses of the datatype..
//Pointers are also used to access the value of the variable whose addresses is in the pointer using derefernce / * operator 

#include <bits/stdc++.h>
using namespace std;
int main(){
int x=4;
int* p = &x;    //int* p is storing the value of the address of the x ..
 // we can also type this (p = &x;)  

cout<<p<<endl;    //This will show the adress of the x as the address of x is stored in p.

cout<<&x<<endl;   //This will show the adress of the x..

cout<<*p<<endl;   //This will also print the value of the x .

// *p is a dereference operator which picks the value of x from the stored address....

cout<<&p<<endl;  //The p has its individual address


return 0;
 }
