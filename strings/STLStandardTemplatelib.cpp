#include <bits/stdc++.h>
using namespace std;
int main(){
  string s="Kamal";
  cout<<s<<endl;
  s.push_back('S');  //Add the defined character 
    cout<<s<<endl;
  s.pop_back();   //Remove the last character 
    cout<<s<<endl;
    s.append(" Singh"); //To add a string 
      cout<<s<<endl;
    s.clear();   //To delete or to clear the whole string
      cout<<s<<" " <<s.length()<<endl;

return 0;
 }
