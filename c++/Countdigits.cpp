#include <bits/stdc++.h>
using namespace std;

int main() {
	int n ;
	cout<<"Enter the number you want to count the digits of : ";
	cin>>n;
	int i=0;
	while(n>=0){
	    n/=10;
	    i++;
	}
    cout<<i;

return 0;
}