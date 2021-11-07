#include <iostream>
#include <vector>
#define MAX(A1, A2) (A1>A2)?A1:A2
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int>vec(N+1, 0);
    vector <int>dp(N+1, 0);

    for(int i=1; i<=N; i++) {
        cin >> vec[i];
    }
    
    dp[1] = vec[1];
    dp[2] = vec[1] + vec[2];

    for(int i=3; i<=N; i++) {
        int val = MAX(dp[i-2]+vec[i], dp[i-3]+vec[i-1]+vec[i]);
        dp[i] = MAX(dp[i-1], val);
    }

    cout << dp[N];
}