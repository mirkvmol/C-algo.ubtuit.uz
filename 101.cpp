#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, s = 0, sum = 0, cnt = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        s += v[i];
    }
    double average_element = 1.0 * s / n;
    for (int i = 0; i < n; i++) {
        if(v[i] < average_element) {
            sum += v[i];
            cnt += 1;

        }
    }
    double avg = 1.0 * sum / cnt;
    printf("%.2f", avg);
}
