#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, a, b, s = 0, cnt = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> a >> b;
    for (int i = 0; i < arr.size(); i++) {
        if (!(i >= a - 1 && i <= b - 1)) {
            s += arr[i];
            cnt += 1;
        }
    }
    double average_value = 1.0 * s / cnt;
    printf("%.2f", average_value);
}

