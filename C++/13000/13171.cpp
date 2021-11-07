#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

ull modx = 1000000007;

ull fun(ull A, ull B) {
    if(B==0) return 1;

    ull v = fun(A, B/2);
    v = (v*v)%modx;

    if(B%2!=0) v = (v*A)%modx;
    
    return v;
}

int main() {
    int A, B;
    int num = A;
    cin >> A >> B;

    cout << fun(A, B);
}