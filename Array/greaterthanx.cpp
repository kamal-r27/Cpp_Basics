#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,6,5,86,32,45,7,9,54,8,79}; 
    int x=4;
   int count = 0;
   for (int i = 0;i<=10;i++){
   if (arr[i]>x) count++;

   }
 cout<<count;
return 0;
 }
