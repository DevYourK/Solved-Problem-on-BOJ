#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> vec(N+M);

    for(int i=0; i<N+M; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    
    for(auto i : vec) {
        cout << i << ' ';
    }
}