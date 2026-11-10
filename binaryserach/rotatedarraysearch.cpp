#include <bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={4,5,6,7,0,1,2,3};
 int n = sizeof(arr)/4;
 int target;
 cout<<"Enter the target : ";
 cin>>target;
 int pivot=-1;
  int low = 0, high = n - 1;
  //loop for finding the pivot element
while(low <= high) {
    int mid = low + (high-low)/2;

    if(mid < high && arr[mid] > arr[mid+1]) {
        pivot = mid;
        break;
    }
    else if(arr[mid] >= arr[low]) {
        low = mid+1;
    }
    else {
        high = mid-1;
    }
}
low=0;
high=pivot;
int idx=-1;
//LOOP FROM LOW TO TE PIVOT ELEMENT 
 while(low<=high){
  int mid=(high+low)/2;

    if(arr[mid]==target) {
    if(mid>0 && arr[mid]==arr[mid-1])
    high = mid-1;
    else {
        idx=mid;
        break;
    }
    }
    else if (arr[mid]>target) high = mid-1;
    else low = mid +1;}
//LOOP FROM PIVOT NEXT INDEX TO LAST ONE 

 if(idx==-1){
     low = pivot+1;
 high = n-1;
 while(low<=high){
  int mid=(high+low)/2;

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
 }
cout<<"Target index is : "<<idx;
return 0;
 }
