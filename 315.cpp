#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > 0 && b> 0) {
        printf("%.1f", 1.0 * a * b);
    } else if( a < 0 && b < 0) {
        printf("%.1f", (a + b)/ 2.0);
    } else {
        printf("%.1f", 1.0 *(abs(a)+ abs(b)));
    }
}
