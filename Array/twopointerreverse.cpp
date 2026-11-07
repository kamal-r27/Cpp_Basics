#include <bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,20,30,40,50,60,70,80,90};
int n=sizeof(arr)/4;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 int i=0;
 int j=n-1;
while(i<j){
    swap(arr[i],arr[j]); //swap is a built in function
    i++;
    j--;
}
cout<<endl;

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }
return 0;
 }
