#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0) return ;  //base case
    print(n-1);        //call
    cout <<n<<endl;    //work

}
int main(){
int n;
cout<<"Enter the number :";
cin>>n;
print(n);
return 0;
 }
//Here we have use the call before the work and the code executed successfully..