#include <bits/stdc++.h>
using namespace std;
int fibo(int x){
    if (x==1 || x==2) return 1 ;
    return fibo(x-1) + fibo(x-2);
}
int main(){
    int x ;
    cout<<"Enter the value : ";
    cin>>x;
   cout<<"The fibonacci term will be :"<<fibo(x);
return 0;
 }
