#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(K+1, vector<int>(N+1, 0));

    for(auto i=dp[0].begin(); i<dp[0].end(); i++) {
        *i = 1;
    }

    for(int i=1; i<=K; i++) {
        for(int j=0; j<=N; j++) {
            dp[i][j] += dp[i-1][j-1];
        }
    }

    for(int i=1; i<=K; i++) {
        for(int j=0; j<=N; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    cout << dp[K][N];
}