#include <bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter the size of the array : ";
   cin>>n;
   vector<int> arr(n,0); //By default the value assigned is 0
   for (int i =0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<arr.size()<<endl;
   cout<<arr.capacity()<<endl;
   arr.push_back(10);   
   cout<<arr.size()<<endl;   //Increase in size due to number of elements increases
   cout<<arr.capacity()<<endl;  //Capacity gets doubled 
   arr.pop_back();
   cout<<arr.size()<<endl; //Decrease in size reduces to 5
   cout<<arr.capacity()<<endl;  //Capacity remains unchanged
return 0;
 }
