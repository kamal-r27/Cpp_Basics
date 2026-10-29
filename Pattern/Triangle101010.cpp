#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cout<<"Enter the number of rows : "<<endl;
    cin>>x;
    int a=1;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
    if((i+j)%2==0)
    cout<<a;
    else
    cout<<"0";
          
        }
     
      cout<<endl;
    } 
    return 0;
}
