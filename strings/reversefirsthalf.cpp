#include <bits/stdc++.h>
using namespace std;
int main(){
   string a = "beauty";
   cout<<a<<endl;
   int n = a.length();  //n =6
   int i=0;
   int j=n/2-1;
while(i<j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
cout<<a<<endl;
return 0;
 }
