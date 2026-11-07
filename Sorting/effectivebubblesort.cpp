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
//STARTING OF THE BUBBLE SORTING.....
    for(int i=0;i<n-1;i++){ //This is called effective time complexity by making the changes in the condition that is (n-1-i) on inner loop and iniialising the value of i from 0
    
        for(int j=0;j<n-1-i;j++){
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