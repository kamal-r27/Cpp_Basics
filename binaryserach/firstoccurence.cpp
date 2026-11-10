#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={1,3,4,4,5,5,5,6,9,7};
 int n = sizeof(arr)/4;
 int target;
 cout<<"Enter the target : ";
 cin>>target;
 int low=0;
 int high=n-1;
 int idx=-1;
 while (low<=high){
 
    int mid=( high+low)/2;

    if(arr[mid]==target) {
    if(mid>0 && arr[mid]==arr[mid-1])
    high = mid-1;
    else {
        idx=mid;
        break;
    }
    }
    else if (arr[mid]>target) high = mid-1;
    else low = mid +1;
 }
 cout<<idx; 
return 0;
 }
