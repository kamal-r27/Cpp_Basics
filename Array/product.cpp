#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={4,3,2,1,2,1,2};
int prod=1;
for (int i = 0 ;i <=6;i++){
   prod*=arr[i];
}
cout<<prod;
return 0;
 }
