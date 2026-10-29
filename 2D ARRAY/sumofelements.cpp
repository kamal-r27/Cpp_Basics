#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[2][2]={{2,4},{4,6}};
int sum=0;
for (int i = 0 ;i <=1;i++){
  for(int j=0;j<=1;j++){
   sum+=arr[i][j];
}
}
cout<<sum;
return 0;
 }