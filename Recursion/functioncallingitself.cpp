#include <bits/stdc++.h>
using namespace std;

void greet (){
    cout<<"hey"<<endl;  //Recursion work - Replacement of for loops..
    greet();    //Ek chiz tum karo baki recursion karega 
}
int main(){
greet();
return 0;
 }
//Here the code will give the infinite loop 