#include <iostream>
#include <vector>
#define max(a,b) (a>b)?a:b;
using namespace std;

vector<pair<int,int>> arr;
int dp[100][100001];

int main() {
    int N, K;
    cin >> N >> K;

    for(int i=0; i<N; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back(pair<int,int>(a, b));
    }

    for(int i=0; i<=K; i++) {
        int weight = arr[0].first;
        int cost = arr[0].second;

        if(weight <= i) {
            dp[0][i] = cost;
        }
    }

    for(int i=1; i<N; i++) {
        for(int j=0; j<=K; j++) {
            int weight = arr[i].first;
            int cost = arr[i].second;

            if(j<weight) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight]+cost);
            }
        } 
    }
    /*
    for(int i=0; i<N; i++) {
        for(int j=0; j<=K; j++) {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    */
    cout << dp[N-1][K];
}