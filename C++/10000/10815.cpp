#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, M;
    cin >> N;
    vector <int>vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    cin >> M;
    for(int i=0; i<M; i++) {
        int K;
        cin >> K;

        auto p = lower_bound(vec.begin(), vec.end(), K);
        if(*p==K) cout << 1 << " ";
        else cout << 0 << " ";
    }
}