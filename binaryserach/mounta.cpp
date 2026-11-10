
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {0, -2, 4, 80, 5};

    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = (high + low) / 2;

        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
{
            cout << "The peak value index is: " << mid;
            break;
        }

        else if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    return 0;
}
 