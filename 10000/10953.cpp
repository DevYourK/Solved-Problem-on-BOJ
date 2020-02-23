#include <iostream>
using namespace std;

int main() {
    int k;
    char c[4];

    cin >> k;
    for(int i=0; i<k; i++) {
        cin >> c[0] >> c[1] >> c[2];
        cout << c[0] + c[2] << endl;
    }
}