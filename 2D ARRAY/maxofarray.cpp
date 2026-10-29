#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[2][2]={10,11,23,40};
  int mx=INT_MIN;
  for(int i=0 ; i<2 ; i++){
    for(int j=0 ; j<2 ; j++){
        mx=max(mx,arr[i][j]);
    }
  }
  cout<<"The maximum value in the given 2D array is : "<<mx;
return 0;
 }
