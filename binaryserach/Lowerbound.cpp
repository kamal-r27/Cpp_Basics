#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr []={1,2,3,4,5};
  int n=sizeof(arr)/4;
  int target;
  int idx=-1;
  cout<<"Enter the target element : ";
  cin>>target;
 int low=0;
 int high = n-1;

 while(low<=high){
 int mid =(high+low)/2;
if(arr[mid]>target){
  high=mid-1;
}
else if (arr[mid]<target){
  low=mid+1;
}
else{
    if(mid>0 && arr[mid]==arr[mid-1])
    {high = mid-1;}
    else {
       idx=mid;
       low=idx;
        break;
    }
    }
  
 }
cout<<"LOWER BOUND INDEX WILL BE : " <<low;
 return 0;
}