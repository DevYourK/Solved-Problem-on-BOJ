#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector <int>vec;

int sol(int X) {
    int F=0;
    int L=N;

    while(L-F>=0) {
        int M=(F+L)/2;
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
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    cin >> N;
    
    for(int i=0; i<N; i++) {
        int X;
        cin >> X;
        vec.push_back(X);
    }

    int M;
    cin >> M;

    sort(vec.begin(), vec.end());

    for(int i=0; i<M; i++) {
        int X;
        cin >> X;
        
        sol(X);
    }
}