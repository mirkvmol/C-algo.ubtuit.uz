#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b, s = 0;
    cin >> n >> a >> b;
    for (int x = 1; x <= n; x++) {
        s += pow(a * x + b, 2);
    }
    cout << s;
}

