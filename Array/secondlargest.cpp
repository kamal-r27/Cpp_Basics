#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={12,6,5,8,25,48,75,47,69,36,45,78,80,45,23};
 int n =sizeof(arr)/4;
 int mx=INT_MIN;
 for(int i = 0;i<=n;i++){
   mx=max(mx,arr[i]); 
 }
 int smax=INT_MIN;   //Gives the largest negative value for eg -2154203548
 for(int i=0; i<=n; i++){
    if (arr[i]!=mx) smax=max(smax,arr[i]); //smax=second maximum largest value..
 }
 cout<<smax;
return 0;
}