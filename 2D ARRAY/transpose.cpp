#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3];   //int arr[r][c] //r is rows and c is columns
    arr[0][0]=6;
    arr[0][1]=2;
    arr[0][2]=8;
    arr[1][0]=9;
    arr[1][1]=5;
    arr[1][2]=3;
    for (int j =0;j<=2;j++){  //j is for columns
        for(int i=0;i<=1;i++){  //i is for rows
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;  //For printing in next line 
    }
return 0;
 }
