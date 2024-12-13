#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, c, d;
    cin >> x >> y >> c >> d;
    double s = 0.0, p = 1.0, sp = 0.0, s1 = 0.0;

    for(int a = 1; a <= x; a++) {
        s += pow( 2 * a  + cos(a), 2);
    }
    for(int a = 1; a <= y; a++) {
        p *= (a + 6) / sqrt(a*a + 2);
    }
    for(int k = 1; k <= c; k++) {
        for(int y = 1; y <= d; y++) {
            s1 += (k*k + y) / sqrt(k*k + y*y);
        }
        sp += s1;
        s1 = 0.0;
    }
    printf("%.2f %.2f %.2f", s, p, sp);
}
