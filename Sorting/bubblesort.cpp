#include <bits/stdc++.h>
using namespace std ;

int main() {
    int arr[]={5,4,3,2,1};
    int n = sizeof(arr)/4;
    cout<<"Unsorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
//STARTING OF THE BUBBLE SORTING.....
    for(int i=1;i<=n-1;i++){ //This loop for i is only for the number of passes  //If initialising from 0 then it will be less than n-1 (not equal to)
    
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   