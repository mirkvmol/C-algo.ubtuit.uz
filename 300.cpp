#include <iostream>
#include <cmath>
using namespace std;

int main() {
int N;
cin >> N;

if(N % 2 == 0 && N % 3 == 0){
    cout << "double";
} else if(N % 2 == 0 ){
    cout << 2;
} else if (N % 3 == 0) {
    cout << 3;
} else{
    cout << "none";
}
    return 0;
}
