#include <bits/stdc++.h>
using namespace std;
int main(){
     int a[2][3];
     int b[2][3];
     int c[2][3]; 

     cout<<"Enter the elements of matrix A : ";
      for (int i = 0;i<=1;i++){                 
    for (int j = 0;j<=2;j++){          
        cin>>a[i][j];
    }
}
    cout<<"The matrix A is : "<<endl;
    for (int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }
   cout<<"Enter the elements of matrix B : ";
      for (int i = 0;i<=1;i++){                 
    for (int j = 0;j<=2;j++){          
        cin>>b[i][j];
    }}
    cout<<"The matrix A is : "<<endl;
    for (int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cout<<b[i][j]<<" ";

        }
        cout<<endl;
    }
   for (int i = 0; i <=1; i++) {
    for (int j = 0; j <=2; j++) {
        c[i][j] = a[i][j] + b[i][j];
    }
}
    cout<<"The matrix C will be : "<<endl;
    for (int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            cout<<c[i][j]<<" ";

        }
        cout<<endl;
    }

return 0;
 }
