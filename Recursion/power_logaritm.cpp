#include <bits/stdc++.h>
using namespace std;
int power(int x , int y){
    if (y==0) return 1;
    
   int temp = power(x, y / 2);

if (y % 2 == 0)
    return temp * temp;
else
    return x * temp * temp;
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
