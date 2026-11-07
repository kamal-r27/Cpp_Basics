#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
int arr[n];
for(int i =0;i<=n;i++){
    cin>>arr[i];
}
cout<<endl;
cout<<"The given array of size n+1 is :";
for(int i =0;i<=n;i++){
   cout<<arr[i]<<" ";
}
cout<<endl;
//FROM HERE TIME COMPLEXICITY....
int temp[n];
for(int i =0;i<=n;i++){
    if(temp[arr[i]]==1){
        cout<<"Duplicates are present.";
        break;
    }
    else {
        temp[arr[i]]=1;
        cout<<"No duplicates";
        break;
    }
}
return 0;
 }
