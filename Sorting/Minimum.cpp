#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr [6]={2,4,3,8,6,-4};
  int n = sizeof(arr)/4;
  int mn =arr[0];
  int min_index = -1;  //Let any value of minimum index 
  for (int i = 0;i<n;i++){
    mn=min(mn,arr[i]);
    min_index = i;
  }
cout<<mn<<" "<<min_index;

  return 0;
 }
