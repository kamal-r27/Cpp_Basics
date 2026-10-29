#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int permutation(int n, int r) {
    return fact(n) /  fact(n - r);
}

int main() {
    int n, r;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    cout << "Permutation is: " << permutation(n, r);

    return 0;
}