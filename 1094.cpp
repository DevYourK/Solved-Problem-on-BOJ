#include <iostream>
using namespace std;

int main() {
    int a, b=64, c=1, d=0;
    cin >> a;
    while(a!=d) {
        if(b>a-d) {
            b/=2;
        } else {
            d+=b;
            c++;
        }
    }

    if(c>1) {
        cout << c-1;
    } else {
        cout << c;
    }
}