#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout<<"The given array is :";

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;

    bool palindrome = true;

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            palindrome = false;
            break;
        }
    }

    if (palindrome) {
        cout << "Array is a Palindrome";
    } else {
        cout << "Array is not a Palindrome";
    }

    return 0;
}