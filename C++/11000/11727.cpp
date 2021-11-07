#include <iostream>
using namespace std;

int T[1000] = {1, 3, 5, 4, 0};

int DP(int n) {
    n--;

    if(T[n]!=0) {
        return T[n];
    } else {
        return T[n] = (DP(n) + DP(n-1))%10007;
    }
}

int main() {
    int N;
    cin >> N;

    cout << DP(N);
}
