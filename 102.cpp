#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    vector<int> v (n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> a >> b;
    int min_value = v[0];
    for (int i = 0; i < n; i++) {
        if (min_value > v[i]) {
            min_value = v[i];
        }
    }
        for (int i = 0; i < n; i++) {
            if (i >= a - 1 && i <= b - 1) {
                printf("%.1f", 1.0 + v[i] / min_value);
            } else {
                printf("%.1f", 1.0 * v[i]);
        }
        cout << endl;
        }
