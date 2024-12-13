#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    double p = 1, x;
    for(int  i = 0; i < n; i++) {
        if(v[i] % 5 == 0|| v[i] % 2 == 0) {
            p *= v[i];
        }
        x = sin(p);
    }
    printf("%.2f", x);
}
