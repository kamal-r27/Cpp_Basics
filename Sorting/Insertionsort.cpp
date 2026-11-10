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
//INSERTION SORT 
    for(int i=0;i<n-1;i++){   //NUMBER OF PASSES
    int j=i+1;
    while (j>=1 && arr[j]<arr[j-1]) //Condition of j is important 
    {
        swap(arr[j],arr[j-1]);
        j--;
    } 
    
    }
    cout<<"Sorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}