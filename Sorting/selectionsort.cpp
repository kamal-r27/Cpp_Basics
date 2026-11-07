#include <bits/stdc++.h>
using namespace std ;

int main() {
    int arr[5]={5,1,3,2,4};
    int n = sizeof(arr)/4;
    cout<<"Unsorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
//SELECTION SORTING 
    for(int i=0;i<n-1;i++){ //NUMBER OF PASSES
      int mn =INT_MAX;
  int min_index = -1;  //Let any value of minimum index which will get swapped
  for (int j=i;j<n;j++){ 
  if(mn>arr[j]){
  mn=arr[j];
  min_index=j;
  }
  }
  swap(arr[i],arr[min_index]); //Swap the i th element and the min_index element
    }
    cout<<"Sorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}