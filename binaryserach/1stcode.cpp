
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "The given array is: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    int target;
    cout << "Enter the target element you want to find: ";
    cin >> target;
    int low = 0;
    int high = n - 1;
    bool found = false;
    while(low <= high) {
        int mid = high+low / 2;
        if(v[mid] == target) {
            cout << "The index of the target element is " << mid;
            found = true;
            break;
        }
        else if(v[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(found == false) {
        cout << "Element is not present in the array.";
    }
    return 0;
}
