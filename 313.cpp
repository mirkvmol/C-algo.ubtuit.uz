#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > 0 && b > 0 && c > 0 ) {
        cout << a + b + c << endl;
    } else {
        cout << a * b * c << endl;
    }
    return 0;
}

