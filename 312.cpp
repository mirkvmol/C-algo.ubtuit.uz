#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = a * b;
    d = a + b;
    if (a < b) {
        a = c;
        b = d;
    } else {
        a = d;
        b = c;
    }

    cout << a << " " << b;
}
