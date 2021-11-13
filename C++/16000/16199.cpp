#include <iostream>
using namespace std;

int main() {
    int Y, M, D;
    int aY, aM, aD;

    cin >> Y >> M >> D >> aY >> aM >> aD;

    //만 나이
    if(Y <= aY && (M < aM || (M == aM && D <= aD))) {
        cout << aY - Y << "\n";
    } else {
        cout << aY - Y - 1 << "\n";
    }
    //세는 나이
    cout << aY - Y + 1 << "\n";
    //연 나이
    cout << aY - Y << "\n";
}