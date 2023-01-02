#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector <long>vec;

long sol(long X) {
    long F=0;
    long L=N-1;

    while(L-F>=0) {
        long M=(F+L)/2;
        if(vec[M] == X) {
            cout << 1 << "\n";
            return 0;
        } else {
            if(vec[M] < X) {
                F = M+1;
            } else {
                L = M-1;
            }
        }
    }
    cout << 0 << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    
    for(int i=0; i<N; i++) {
        long X;
        cin >> X;
        vec.push_back(X);
    }

    int M;
    cin >> M;

    sort(vec.begin(), vec.end());

    for(int i=0; i<M; i++) {
        long X;
        cin >> X;
        
        sol(X);
    }
}