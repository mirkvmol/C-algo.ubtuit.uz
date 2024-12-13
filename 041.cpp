#include <iostream>
using namespace std;

int main()  {
    double x, y, z;
    cin >> x >> y >> z;
    if (x < 1 && y < 1 && z < 1) {
        if (x < y && x < z) {
            x = (y + z) / 2.0;
        } else if (y < x && y < z) {
            y = (x + z) / 2.0;
        } else {
            z = (x + y) / 2.0;
        }
        cout << x << " " << y << " " << z;
    } else {
        cout << x << " " << y << " " << z;
    }
}
