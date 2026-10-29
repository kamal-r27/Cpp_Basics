#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if (n==0) return;    //Condition must be given so that infinite loop not come.....
    cout<<n<<endl;     //When n will be equal to zero the function will be ended ...
    print(n-1);
}
int main(){
   print(5);
return 0;
 }
