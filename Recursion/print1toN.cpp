#include <bits/stdc++.h>
using namespace std;
void print(int x , int n){  //We have taken an extra parameter so that the condition can be given so that the loops stop working...
    if (x>n) return ; //This line is called (base case)
    cout<<x<<endl; //work
    print(x+1,n);   //calls
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
     print(1,n);
return 0;
 }
