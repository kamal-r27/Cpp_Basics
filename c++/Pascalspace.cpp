#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main(){

    int x;
    cout<<"Enter x : ";
    cin>>x;
    for (int i=0;i<=x;i++){
        for(int j=0;j<=x-i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<nCr(i,j)<<"   ";
        }
     
      cout<<endl;
    } 
return 0;
 }
