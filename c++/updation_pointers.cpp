#include <bits/stdc++.h>
using namespace std;
int main(){
int x=12;
int* p = &x;
cout<<x<<endl; //Or we can type (cout<<*p<<endl;)
*p = 23;
cout<<x<<endl;  //Updation of value of x..
return 0;
 }
