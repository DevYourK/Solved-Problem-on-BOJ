#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    cout << (long long)(ceil(sqrt(n)));
}