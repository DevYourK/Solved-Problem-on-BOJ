#include <iostream>
using namespace std;

string fib[10001] = {"0", "1"};

string fibo(int n) {
    if(fib[n]!="0" or n==0) {
        return fib[n];
    } else {
        string A = fibo(n-1);
        string B = fibo(n-2);

        if(A.length() >= B.length()) {
            for(int i=0; i<A.length(); i++) {
                if((int)A[A.length()-i] + (int)B[A.length()-i]>10) {
                    A[A.length()-(i-1)]++;
                    A[A.length()-i] = (int)A[A.length()-i] + (int)B[A.length()-i]-10;
                } else {
                    A[A.length()-i] = (int)A[A.length()-i] + (int)B[A.length()-i];
                }
            }
        } else {
            for(int i=0; i<B.length(); i++) {
                if((int)B[B.length()-i] + (int)A[B.length()-i]>10) {
                    B[B.length()-(i-1)]++;
                    B[B.length()-i] = (int)B[B.length()-i] + (int)A[B.length()-i]-10;
                } else {
                    B[B.length()-i] = (int)B[B.length()-i] + (int)A[B.length()-i];
                }
            }
        } 

        return fib[n] = A;
    }
}

int main() {
    int n;
    cin >> n;
    fibo(n);
    cout << fib[n];
    return 0;
}