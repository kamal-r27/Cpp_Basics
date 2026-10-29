#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the number you want to print the table : ";
    cin>>n;
    int i=1 ;
    while(i<=10){
    cout<<n<<" X "<< i << "="<< n*i<<endl;
    i++;
} return 0;
}