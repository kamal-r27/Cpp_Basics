#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[2][2]={{2,4},{4,6}};
int prod=1;
for (int i = 0 ;i <=1;i++){
  for(int j=0;j<=1;j++){
   prod*=arr[i][j];
}
}
cout<<prod;
return 0;
 }