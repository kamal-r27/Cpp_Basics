#include <bits/stdc++.h>
using namespace std;
void swap (int& x,int& y){//use of & which makes the box of void one into the original one 
    int temp=x;
    x=y;
    y=temp;
};
 
int main() {int x,y;
cout<<"Enter the value of x :";
cin>>x;
    cout<<"Enter the value of y :";
    cin>>y;
cout<<"Before swapping :"<<x<<" "<<y<<endl;
swap(x,y);
cout<<"After swapping :"<<x<<" "<<y<<endl;
return 0;
}
