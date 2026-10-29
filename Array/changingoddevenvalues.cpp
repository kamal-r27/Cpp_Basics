#include <bits/stdc++.h>
using namespace std;
void call(){
    int arr[]={4,6,2,5,8,7,9,3};
    int n = 8;
    for (int i =0;i<n;i++){
if (i%2!=0)
    arr[i] = arr[i]*2;
else 
    arr[i]+=10;
 }
 for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
int main(){
 call();
return 0;
 }