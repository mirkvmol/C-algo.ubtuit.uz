#include <iostream>
#include <cmath>
using namespace std;

int main() {
int a, b, c, d;
cin >> a >> b >> c >> d;
double s = 0, p = 1, sp = 0, p1 = 1;

for (int m = 1; m <= a; m++) {
    s+= 1.0 * (3 * pow(m, 3) + 4 * m + 5) / (pow(m,3) + log(m));
}
for (int k = 1; k <= b; k++) {
    p *= 1.0 * k / (pow(k, 3) + 7 * k + 5);
}
for (int i = 1; i <= c; i++) {
    for (int m = 1; m <= d; m++) {
        p1 *= 1.0 * (log(i) + pow(m, i)) / pow(m, i);
    }
    sp += p1;
    p1 = 1;
}
printf("%.2f %.2f %.2f", s, p, sp);
}s
