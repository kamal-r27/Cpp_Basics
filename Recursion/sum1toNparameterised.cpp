#include <bits/stdc++.h>
using namespace std;
void sum(int n){
    int s=0;
    for (int i=1;i<=n;i++){
        s+=i;
    }
cout<<"Sum is :"<<s<<endl;
 return;
}
int main(){
    int n;
    cout<<"Enter the number till you want the sum..";
    cin>>n;
    sum (n);
return 0;
 }
