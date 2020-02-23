#include <iostream>
using namespace std;

int han(int x) {
    int k;
    if(x<1000) {
        k=3;
    } else {
        k=4;
    }

    int p[k];
    for(int i=0; i<k; i++) {
        p[k-i-1] = x%10;
        x/=10;
    }

    int d = p[1]-p[0];
    //cout << d << "and" << p[0] << p[1] << p[2] << "and last is" << p[0]+2*d << "," << p[2] << endl;
    return (p[0]+2*d == p[2])?1:0;
}

int main() {
    int n, sum=0;
    cin >> n;

    if(n<100) {
        cout << n;
    } else {
        int k=0;
        for(int i=100; i<=n; i++) {
            sum+=han(i);
        }

        cout << 99 + sum;
    }
}