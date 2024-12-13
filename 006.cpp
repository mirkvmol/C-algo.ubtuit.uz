#include <bits/stdc++.h>
using namespace std;


int main() {
    int a, b, h;
    double S;
    cin >> a >> b >> h;
    S = M_PI * (a + b) / 2 * sqrt(h*h + pow((a - b) / 2.0, 2)) + M_PI * (a*a + b*b) / 4.0;
    printf("%.2f", S);

}

