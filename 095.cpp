#include <iostream>
#include <cmath>
using namespace std;

int main() {
int x, y, c, d;
cin >> x >> y >> c >> d;
double s = 0, p = 0, sp = 0, p1 = 1;

    for (int i = 1; i <= x; i++) {
        s+= 1.0 * (pow(i, 4) + pow(i, 2) + 3) / sqrt(i + exp(i));
        }
    for (int k = 1; k <= y; k++) {
        p += 1.0 * (k + 1) / (pow(k, 3) + 5 * k);
        }
    for (int m = 1; m <= c; m++) {
    for (int n = 1; n <= d; n++) {
        p1 *= sqrt(1.0 * abs(pow(m, n) - pow(n, m)) / (pow(m, n) + pow(n ,m)));
    }
    sp += p1;
    p1 = 1;
    }
    printf("%.2f %.2f %.2f", s, p, sp);
}
