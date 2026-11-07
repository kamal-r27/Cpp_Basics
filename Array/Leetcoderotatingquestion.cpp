#include <bits/stdc++.h>
using namespace std;
void reverse(int a[] , int i ,int j ){
      while(i<j){
    int temp =a[i];
    a[i]=a[j];
    a[j]= temp;
    i++;
    j--;
  }
}
int main(){
  int a[]={12,54,62,4,38,8,76,15,504,324,78};
  int n = sizeof(a)/4;
  int k = k%n;
  cout<<"Enter how many times you want to rotate the array : ";
  cin>>k;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  reverse(a,0,n-k-1);
  reverse(a,n-k,n-1);
  reverse(a,0,n-1);
  cout<<endl;
 
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
return 0;
 }