#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y ;
    cin>>x;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=i;j++)
        if(i%2!=0)
      { cout <<j;}
      else 
      {cout<<(char)(j+64);}
      cout<<endl;
    } 
    return 0;
}

