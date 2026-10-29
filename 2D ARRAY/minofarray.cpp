#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[2][2]={10,11,23,40};
  int mn=INT_MAX;
  for(int i=0 ; i<2 ; i++){
    for(int j=0 ; j<2 ; j++){
        mn=min(mn,arr[i][j]);
    }
  }
  cout<<"The min. value in the given 2D array is : "<<mn;
return 0;
 }
