#include <bits/stdc++.h>
using namespace std;
int main(){
  string s="life is too short to do arguments with people just enjoy it.";
   int count =0;
   for (int i=0;i<s.length();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
        count ++;
    }
   }
   cout<<count;
return 0;
 }
