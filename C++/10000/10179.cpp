#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed;
    cout.precision(2);

    int K;
    cin >> K;
    
    for(int i=0; i<K; i++) {
        double N;
        cin >> N;
        cout << "$" << N * 0.8 << "\n";
    }
}