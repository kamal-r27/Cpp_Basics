#include <bits/stdc++.h>
using namespace std;
int main(){
  string s ="Kamal";
  int n = s.length();
  cout<<s<<endl;
  //1st Method
   int i =0;
  int j=n-1;
  while(i<j){
    int temp =s[i];
    s[i]=s[j];
    s[j]= temp;
    i++;
    j--;
  }
  cout<<s;
return 0;
 }
