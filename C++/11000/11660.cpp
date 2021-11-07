#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> vec(N, vector<long long>(N+1));
    for(int i=0; i<N; i++) {
        for(int j=1; j<N+1; j++) {
            cin >> vec[i][j];
            vec[i][j] += vec[i][j-1];
        }
        if(i+1!=N) {
            vec[i+1][0] = vec[i][N];
        }
    }

    for(int i=0; i<M; i++) {
        long long sum = 0;
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j=x1-1; j<x2; j++) {
            sum += vec[j][y2] - vec[j][y1-1];
        }

        cout << sum << "\n";
    }

}