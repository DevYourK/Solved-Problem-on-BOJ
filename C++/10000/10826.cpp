#include <iostream>
using namespace std;
int fib[10001] = {0, 1};

int fibo(int n) {
    if(fib[n]!=0 or n==0) {
        return fib[n];
    } else {
        return fib[n] = fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    fibo(n);
    cout << fib[n];
    return 0;
}