#include <bits/stdc++.h>
using namespace std;
void change(int arr[]){  //In arrays there is pass by reference ..
    arr[0]=5;
    arr[1]=9;
}
int main(){
int arr[3]={1,2,3};
for(int i = 0;i<3;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
change(arr);
for(int i = 0;i<3;i++){
    cout<<arr[i]<<" ";
}
return 0;
 }
