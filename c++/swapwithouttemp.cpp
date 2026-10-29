#include <bits/stdc++.h>
using namespace std;
int main(){
int x=10;
int y=20;
cout<<"Before swapping :"<<x<<" "<<y<<endl;
x=x+y;
y=x-y;
x=x-y;
cout<<"After swapping :"<<x<<" "<<y<<endl;
return 0;
 }
