#include <bits/stdc++.h>
using namespace std;
int power(int x , int y){
    if (y==0) return 1;
    return x * power(x,y-1);
}
int main(){
int x;
cout<<"Enter the number :";
cin>>x;
int y;
cout<<"Enter the power:";
cin >>y;
cout<<"The value of "<<x<<" "<<"raised to the power "<<y<<" "<<"is"<<"="<<power(x,y);
return 0;
 }
