#include <iostream>
#include <vector>
#define max(a,b) (a>b)?a:b;
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++) {
        vector<int> vec;
        vector<vector<int>> dp(21, vector<int>(10001, 0));
        int N, M;

        cin >> N;

        for(int j=0; j<N; j++) {
            int a;
            cin >> a;
            vec.push_back(a);
        }

        cin >> M;
        
        for(int i=1; i<=N; i++) {
            dp[i][0] = 1;
            for(int j=1; j<=M; j++) {
                dp[i][j] += dp[i-1][j];
                if(j-vec[i-1] >= 0) {
                    dp[i][j] += dp[i][j-vec[i-1]];
                }
            }
        }
        /*
        for(int i=0; i<=N; i++) {
            for(int j=0; j<=M; j++) {
                cout << dp[i][j] << " ";
            }
            cout << "\n";
        }
        
        //*/
        cout << dp[N][M] << "\n";
    }
    return 0;
}