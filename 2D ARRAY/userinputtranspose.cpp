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
int temp =n;
n=m;
m=temp;
int b[n][m];
cout<<"The transpose of the matrix A is : "<<endl;

for (int j = 0;j<n;j++){                 
    for (int i = 0;i<m;i++){          
       cout<<a[i][j]<<" ";
    }
     cout<<endl;
}
return 0;
}