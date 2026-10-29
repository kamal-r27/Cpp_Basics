#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin>>x;
    for (int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
    if((i==1 || j==1))
{    cout<<"*";
 }
 else if ((i==x) || (j==x))
  { cout<<"*";}
  
  else

  { cout<<"#";}
          
        }
     cout<<endl;
      }
      return 0;
    } 