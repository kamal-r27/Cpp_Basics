#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={12,6,5,8,25,48,75,47,69,36,45,78,80,45,23};
 int n =sizeof(arr)/4;
 int mn=arr[0];
 for(int i = 0;i<=n;i++){
    if (arr[i]<mn)   mn=arr[i]; //1st method using if condition
//   mn=min(mn,arr[i]);   //2nd method using in built MAX function..
 }
 cout<<mn;
return 0;
 }