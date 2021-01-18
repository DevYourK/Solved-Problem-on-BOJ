#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int c[8];
    for(int i=0; i<8; i++) {
        cin >> c[i];
    }

    switch(c[0]) {
        case 1: //start 1 - normal
            for(int i=1; i<8; i++) {
                if(c[i] != i+1) {
                    cout << "mixed";
                    return 0;
                }
            }
            cout << "ascending";
        break;
        case 8: // start 8 - reverse
            for(int i=1; i<8; i++) {
                if(c[i] != 8-i) {
                    cout << "mixed";
                    return 0;
                }
            }
            cout << "descending";
        break;
        default: // mixed
            cout << "mixed";
    }
}