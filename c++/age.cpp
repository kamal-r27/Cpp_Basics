#include <iostream>
using namespace std;
int main(){
    int Ram,Shyam,Ajay;
    cout<<"Enter the age of Ram : ";
    cin>>Ram;
    cout<<"Enter the age of Shyam : ";
    cin>>Shyam;
     cout<<"Enter the age of Ajay : ";
    cin>>Ajay;
    if (Ram<Shyam && Shyam<Ajay)
    cout<<"The younger among Ram, Shyam and Ajay is Ram.";
    else if (Shyam<Ram && Ram<Ajay)
    cout<<"The younger among Ram, Shyam and Ajay is Shyam.";
    else
    cout<<"The younger among Ram, Shyam and Ajay is Ajay.20";

return 0;

}