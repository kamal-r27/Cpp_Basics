#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rows :";
    cin>>n;
    int m;
    cout<<"Enter the columns:";
    cin>>m;
    int a[n][m];
  for (int i = 0;i<n;i++){                 
    for (int j = 0;j<m;j++){          
        cin>>a[i][j];
    }
  
 } 
 for (int i = 0;i<n;i++){                 
    for (int j = 0;j<m;j++){          
       cout<<a[i][j]<<" ";
    }
     cout<<endl;
}
 int l1, r1, l2, r2;
 cout<<"Enter the first coordinate : ";
 cin>>l1;
 cin>>r1;
 
  cout<<"Enter the second coordinate : ";
  cin>>l2;
  cin>>r2;
    
int sum=0;
for (int i =l1;i <=l2;i++){
  for(int j=r1;j<=r2;j++){
   sum+=a[i][j];
}
}
cout<<"The sum is : "<<sum;
return 0;
 }
