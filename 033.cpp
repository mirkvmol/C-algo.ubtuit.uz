#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, z, a, b;
    cin >> x >> y >> z;
    a = max(max(x + y + z, x), max(y, z));
    b = pow(min(min(x + y / 2, x), min(y, z)), 2);
    printf("%.2f %.2f", a,b);
    return 0;
}
