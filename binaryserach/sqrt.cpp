#include <bits/stdc++.h>
using namespace std;
int main(){
long long x;
cout<<"Enter the number you want to calculate the sqrt to the possible integer :";
cin>>x;
long long low=0,high=x,answer=0;
      while(low<=high){
        long long mid=(low+high)/2;
        if(mid*mid==x){
            answer = mid;
            break;
        }
        else if(mid*mid>x){
            high=mid-1;
        }
        else{
            low=mid+1;
            answer=mid;
        }
       
      }
         cout<<answer; 
return 0;
 }
