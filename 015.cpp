#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, r2, r3;
    cin >> r1 >> r2 >> r3;
    double R = 1.0 / (1.0 / r1 + 1.0 / r2 + 1.0 / r3);
    printf("%.2f\n", R);
}
