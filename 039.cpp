#include <iostream>
using namespace std;

int main() {
    double x, y, a, b;
    cin >> x >> y;
    a = (x + y) / 2.0;
    b = 2 * x * 2 * y;
    if (x > y) {
        y = a;
        x = b;
    } else {
        x = a;
        y = b;
    }
    printf("%.1f %.1f", x, y);
}
