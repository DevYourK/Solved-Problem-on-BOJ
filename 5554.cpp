#include <iostream>
using namespace std;

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    cout << (a[0] + a[1] + a[2] + a[3])/60 << endl << (a[0] + a[1] + a[2] + a[3])%60;
}