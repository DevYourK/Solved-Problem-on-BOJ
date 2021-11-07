#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> vec(N+1, 0);
    vector<vector<long long>> DP(N+1, vector<long long>(21,0));

    for(int i=0; i<N; i++) {
        cin >> vec[i+1];
    }

    DP[1][vec[1]] = 1;

    for(int i=2; i<=N; i++) {
        for(int j=0; j<=20; j++) {
            if(DP[i-1][j]) {
                DP[i][j+vec[i]] += (j+vec[i]<=20)?DP[i-1][j]:0;
                DP[i][j-vec[i]] += (j-vec[i]>=0)?DP[i-1][j]:0;
            }
        }
    }
    /*
    for(int i=1; i<=N; i++) {
        for(int j=0; j<=20; j++) {
            cout << DP[i][j] << " ";
        }
        cout << "\n";
    }

    cout << N-1 << " " << vec[N] << "\n";
    */
    cout << DP[N-1][vec[N]];
}