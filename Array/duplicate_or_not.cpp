#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(5);
  for(int i=0;i<5;i++){
    cin>>v[i];
  }
  for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  bool flag = false;

  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(v[i]==v[j]) {
            flag = true;
            break;
        }
    }
     
        }
if(flag=true){
    cout<<"Duplicates are present..";
    }
  else{
    cout<<"No duplicates";
  }
return 0;
 }

