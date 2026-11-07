#include <bits/stdc++.h>
using namespace std ;

int main() {
    int arr[10]={0,5,1,0,0,3,2,4,0,0};
    int n = sizeof(arr)/4;
    cout<<"Unsorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<n-1;i++){ 
    
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
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