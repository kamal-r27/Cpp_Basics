#include <bits/stdc++.h>
using namespace std;
int main(){
 int a[]={1,2,3,4,5};
 int n=5;
 int b[5];
 for (int i=0;i<n;i++){
    int j=n-1-i;
    b[i]=a[j];
 }
 for(int i=0;i<n;i++){
    cout<<b[i]<<" ";
 }
return 0;
 }
