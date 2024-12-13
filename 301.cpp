#include <iostream>
using namespace std;

int main() {
    int x, y;
    double w;
    cin >> x >> y;

    w = pow(y, x - 5 ) + sqrt(pow(pow( x, y - 5) + pow( y + 5, x) , x - y)) / (pow( x - 1, y - 7) + x * y);
    printf("%.2f", w);
}
