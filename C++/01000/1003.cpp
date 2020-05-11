#include <iostream>
using namespace std;
int fib[41] = {0, 1};

int fibo(int n) {
    if(fib[n]!=0 or n==0) {
        return fib[n];
    } else {
        return fib[n] = fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int t;
    cin >> t;
    int n;
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
                fibo(n);
                printf("%d %d\n", fib[n-1], fib[n]);
        }
    }
    return 0;
}