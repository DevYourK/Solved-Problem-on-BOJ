#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int xa=0, xb=0;
    for(int i=0; i<3; i++) {
        xa += (a%10)*pow(10, 2-i);
        xb += (b%10)*pow(10, 2-i);

        a/=10;
        b/=10;
    }

    int k = (xa>xb)?xa:xb;
    cout << k;
}