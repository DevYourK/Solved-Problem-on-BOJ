#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long N, i=0, length=0;
    cin >> N;

    if(N == 1) {
        cout << "1/1";
        return 0;
    }

    while(1) {
        if(N<=length+i+1) {
            break;
        }
        length += i+1;
        i++;

    }
    if (i%2==0) {
        cout << i+2 - (N - length) << "/" << N - length << "\n";
    } else {
        cout << N - length << "/" << i+2 - (N - length) << "\n";
    }
}