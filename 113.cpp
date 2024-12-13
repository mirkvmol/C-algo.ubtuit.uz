#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s = 0, cnt = 0;
    cin >> n;
    vector<int> array(n);
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for(int i = 0; i < n; i++) {
        if (array[i] < 0 ) {
            s += array[i];
            cnt += 1;
        }
    }
    double result = 1.0 * s / cnt;
    printf("%.2f", result);
}
