#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
int arr[n+1];
for(int i =0;i<=n;i++){
    cin>>arr[i];
}
cout<<endl;
cout<<"The given array of size n+1 is :";
for(int i =0;i<=n;i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
int sum,formulasum;
sum=0;
formulasum=(n*(n+1))/2;
for(int i=0;i<=n;i++){
sum+=arr[i];
}
cout<<"The duplicate value in the given array is : "<<sum-formulasum;
return 0;
 }
//Only for consecutive values...