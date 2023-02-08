#include <iostream>
using namespace std;

void asterisk(int i, int j, int N) {
    if((i / N) % 3 == 1 and (j / N) % 3 == 1) {
        cout << " ";
    } else {
        if(N / 3 == 0) {
            cout << "*";
        } else {
            asterisk(i, j, N/3);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            asterisk(i, j, N);
        }
        cout << "\n";
    }
}