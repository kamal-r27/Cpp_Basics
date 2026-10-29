#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cout<<"Enter the number of rows : ";
    cin>>x;
    for (int i=1;i<=x;i++){  //rows wala 
      for(int j=x ;j>=i;j--){  //spaces wala 
        cout<<" ";
      }
        for(int j=1;j<=i;j++)// stars wala 
        {
           cout<<"*";
        }
     
      cout<<endl;
    } 
    return 0;
}