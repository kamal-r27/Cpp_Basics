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

  sort(v.begin(),v.end());  //reverse(v.begin(),v.end()) //This is for descending order

  cout<<"The ascending order of the array will be : ";
  for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
  }
return 0;
 }
