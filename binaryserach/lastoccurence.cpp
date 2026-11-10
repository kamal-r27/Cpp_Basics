#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={1,3,4,5,5,5,7,8,25,80};
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
    if(mid<n-1 && arr[mid]==arr[mid+1])
    low = mid+1;
    else {
        idx=mid;
        break;
    }
    }
    else if (arr[mid]>target) high = mid-1;
    else low = mid +1;
 }
 cout<<idx; //Here it will get printed only when the entered target is not in the array
return 0;
 }
