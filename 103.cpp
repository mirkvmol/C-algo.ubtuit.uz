#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> k >> l;
    int sum = 0, cnt =0;
    for (int i = 0; i < n; i++) {
        if (i >= k - 1 && i <= l - 1) {
            if (i >= k - l && i <= l - 1) {
                sum += nums[i];
                cnt += 1;
            }
        }
    }
    double average_num = 1.0 * sum / cnt;
    printf("%.1f", average_num);
}
