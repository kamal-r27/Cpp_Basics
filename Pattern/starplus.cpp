#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the value :";
    cin>>x;
    int mid = x/2 + 1;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
    if(x%2!=0){
     if(i==mid || j==mid){
        cout<<"* ";
 }
     else{
        cout<<"  ";
        }
        }
    else{
        cout<<"Program will not execute for even values.";
        return 0;
    }
    }
    cout<<endl;
        }
      return 0;
    } 
