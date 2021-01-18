#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int a, b, k;
    cin >> a >> b;

    if(a>b) {
        k = gcd(b, a);
    } else {
        k = gcd(a, b);
    }

    cout << k << " " << (a * b) / k;
}