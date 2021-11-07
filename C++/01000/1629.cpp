#include <iostream>
#include <vector>
using namespace std;

int fun(int A, int B, int C) {
    if(B==0) return 1;

    long long value = fun(A, B/2, C);
    value = (value*value)%C;

    if(B%2==0) {
        //짝
        return value;
    } else {
        //홀
        return (value * A) % C;
    }
}

int main() {
    int A, B, C;
    int num = A;
    cin >> A >> B >> C;

    cout << fun(A, B, C);
}