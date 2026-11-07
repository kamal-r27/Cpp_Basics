#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[5]={5,1,3,2,4};
    int n = sizeof(arr)/4;
    cout<<"Unsorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
//STARTING OF THE BUBBLE SORTING.....
bool flag=true;
for(int i=0;i<n-1;i++){    //Number of passes
        for(int j=0;j<n-1- i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false; //false means sorting occurs
            }
        }
        if(flag==true) {break;}
    }
    cout<<"Sorted array : ";
    for (int i =0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
   
return 0;
 }
