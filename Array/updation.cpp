#include <bits/stdc++.h>
using namespace std;
int main(){
 // 5 integers -> 5,98,56,80,0
 int arr[5] ; //declaration
 cout<<"Enter the value of array :";
  for (int i =0;i<=4;i++){
    cin>>arr[i];
 }
 for (int i =0;i<=4;i++){
    cout<<arr[i]<<endl;
 }
 arr[0]=548;
 arr[4]=89;
 cout<<endl;
 cout<<"Updated values of array are :";
 for (int i =0;i<=4;i++){
    cout<<arr[i]<<endl;
 }
return 0;
 }