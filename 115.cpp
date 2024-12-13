#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> m;
    int p = 0;
    for(int i = 0; i < n; i++){
        if(v[i] < m) {
            p += v[i];
        }
    }
    cout << p;
}
