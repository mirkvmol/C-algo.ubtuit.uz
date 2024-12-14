#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s+= pow(-1 , i - 1) * 1.0 / i * cos(1 * x);
    }
    printf("%.2f", s);
}
