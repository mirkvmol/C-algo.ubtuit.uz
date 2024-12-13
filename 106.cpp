#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int kv_yigindi = 0;
    for (int i = 0; i < n; i++) {
            kv_yigindi += pow(v[i], 2);

    }
    cout << kv_yigindi << endl;
}

