#include <iostream>
using namespace std;

int fib[41] = {0, 1};

int main() {
    int t, n;
    cin >> t;

    for(int i=0; i<t; i++) {
        cin >> n;

        switch(n) {
            case 0:
                cout << "1 0" << endl;
            break;
            case 1:
                cout << "0 1" << endl;
            break;
            default:
                for(int i=1; i<n; i++) {
                    fib[i+1] = fib[i-1] + fib[i];
                }
                printf("%d %d\n", fib[n-1], fib[n]);
        }
    }
}