#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cout<<"Enter the string : ";
   cin>>s;
   cout<<endl;
   int n = s.length();
   reverse(s.begin()+1,s.begin()+5);
   cout<<s<<endl;
   return 0;
 }
