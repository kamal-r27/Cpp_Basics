#include <bits/stdc++.h>
using namespace std;
void change(int arr[]){  //In arrays there is pass by reference ..
    arr[0]=5;
    arr[1]=9;
}
int main(){
int arr[]={1,2,3};
for(int i = 0;i<sizeof(arr)/4;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

change(arr);
for(int i = 0;i<sizeof(arr)/4;i++){
    cout<<arr[i]<<" ";
}
return 0;
 }
