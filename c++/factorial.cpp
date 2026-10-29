#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cout<<"Enter the number you want to calculate the factorial of : ";
cin>>x;
cout<<"The factorial of the given number is :";
int fact=1;
for (int i=1;i<=x;i++){
    fact=fact*i;

}
cout<<fact;
return 0;
 }
