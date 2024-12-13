#include <iostream>
#include <cmath>

int main() {
    double x, y, z;
    x = 2.0;
    y = 3.0;
    double part1 = pow((x + y), 2);
    double part2 = sqrt(abs(y) + 2);
    double part3 = x - (x * y) / (pow(x, 2) / 2.0 - 5.0);
    double part4 = pow(cos(x + y), 2);
    double part5 = pow((x + y), 1.0 / 3.0);
    z = log(part1 + part2 - part3) + (part4 / part5);
    std::cout << "The value of z is: " << z << std::endl;

    return 0;
}
