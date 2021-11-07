#include <iostream>
#include <algorithm>
using namespace std;

int N;
int arr[500][500];
int dp[500][500];
int max_val;

int max(int first, int second) {
    return (first>second)?first:second;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<i+1; j++) {
            cin >> arr[i][j];
        }
    }

    if(N<3) {
        if(N==1) {
            cout << arr[0][0];
        }
        if(N==2) {
            cout << arr[0][0] + ((arr[1][0]>arr[1][1])?arr[1][0]:arr[1][1]);
        }
    } else {
        dp[0][0] = arr[0][0];
        dp[1][0] = arr[0][0] + arr[1][0];
        dp[1][1] = arr[0][0] + arr[1][1];

        for(int i=2; i<N; i++) {
            dp[i][0] = arr[i][0] + dp[i-1][0];
            dp[i][i] = arr[i][i] + dp[i-1][i-1];
            max_val = max(dp[i][0], dp[i][i]);

            for(int j=1; j<i; j++) {
                dp[i][j] = arr[i][j] + max(dp[i-1][j-1],dp[i-1][j]);
                max_val = max(max_val, dp[i][j]);
            }
        }
        cout << max_val;
    }
}