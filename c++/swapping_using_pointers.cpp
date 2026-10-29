#include <bits/stdc++.h>
using namespace std;
void swap (int* a,int* b){ 
    int temp=*a;
    *a=*b;
    *b=temp;
};
 
int main() {
int a,b;
cout<<"Enter the value of a :";
cin>>a;
    cout<<"Enter the value of b :";
    cin>>b;
cout<<"Before swapping :"<<a<<" "<<b<<endl;
swap(&a,&b);   //Here we use &x and &y because int*a and int* b stores the adresses not
cout<<"After swapping :"<<a<<" "<<b<<endl;
return 0;
}
