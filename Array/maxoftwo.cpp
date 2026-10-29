#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={12,6,5,8,25,48,75,47,69,36,45,78,80,45,23};
 int n =sizeof(arr)/4;
 int mx=arr[0];
 for(int i = 0;i<=n;i++){
    if (arr[i]>mx)   mx=arr[i]; //1st method using if condition
//   mx=max(mx,arr[i]);   //2nd method using in built MAX function..
 }
 cout<<mx;
return 0;
 }
//cout<<INT_MIN;   IT GIVES US THE MINIMUM VALUE FROM THE GARBAGE
//cout<<INT_MAX;   IT GIVES US THE MAXIMUM VALUE FROM THE GARBAGE