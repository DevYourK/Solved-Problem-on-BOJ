#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> dp(n);

    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }

    dp[0] = vec[0];
    
    for(int i=1; i<n; i++) {
        int sum = dp[i-1] + vec[i];
        dp[i] = (sum > vec[i])?sum:vec[i];
    }

    sort(dp.begin(), dp.end());
    cout << dp[dp.size()-1];
}