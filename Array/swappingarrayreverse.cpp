#include <bits/stdc++.h>
using namespace std;
int main(){
  int a[]={12,54,62,4,38,8,76,15,504,324,78};
  int n = sizeof(a)/4;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  //reverse process ->
  int i =0;
  int j=n-1;
  while(i<j){
    int temp =a[i];
    a[i]=a[j];
    a[j]= temp;
    i++;
    j--;
  }
  cout<<endl;
  //for printing after reverse 
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
return 0;
 }
