#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int highest_element = arr[0];
    for (int i = 0; i < n; i++) {
        if (highest_element < arr[i]) {
            highest_element = arr[i];
        }

    }
    for(int i = 0; i < n; i++) {
        printf("%.2f ", 1.0 * arr[i] / highest_element);
    }
}
