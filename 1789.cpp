#include <iostream>
using namespace std;

int main() {
    int a=1, b=0;
    long long s=0, in;
    cin >> in;

    while(s<=in) {
        s+=a;

        a++;
        b++;
    }
    cout << --b;
}