#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={50,89,56,2,57,85,42,13,79};
int sum=0;
int summ=0;
for (int i = 0 ;i <=8;i++){
   if(i%2!=0) sum+=arr[i];
   else summ+=arr[i];
}
cout<<sum-summ;
return 0;
 }
