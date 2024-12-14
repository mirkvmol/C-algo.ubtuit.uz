#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    cin >> n;
    cin >> c;
    int array[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int p = 1;
    for (int i = 0; i < n; i++) {
        if (array[i] < c) {
            p *= array[i];
        }
    }
    cout << p;
}
