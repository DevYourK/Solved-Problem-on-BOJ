#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool sol(int A, int B) {
    return (A > B);
}

int main() {
    int N;
    cin >> N;
    vector <int>A(N);
    vector <int>B(N);

    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    for(int i=0; i<N; i++) {
        cin >> B[i];
    }

    sort(A.begin(), A.end(), sol);
    sort(B.begin(), B.end());
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += A[i] * B[i];
    }
    cout << sum;
}