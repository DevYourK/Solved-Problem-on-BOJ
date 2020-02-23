#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    for(int i=0; i<a; i++) {
        cin >> b >> c;
        cout << "Case #" << i+1 << ": " << b << " + " << c << " = " << b+c << endl;
    }
}