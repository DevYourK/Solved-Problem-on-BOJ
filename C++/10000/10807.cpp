#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, cnt=0;
    cin >> N;

    vector<int> vec(N);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    cin >> M;

    for(int i=0; i<N; i++) {
        cnt += (vec[i] == M) ? 1 : 0;
    }

    cout << cnt;
}