#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int MAX(int A, int B) {return (A>B)?A:B;}

int main() {
    int T;
    cin >> T;

    while(T!=0) {
        int N;
        cin >> N;
        vector <vector<int>>vec(2, vector<int>(N, 0));
        vector <vector<int>>DP;
        
        DP.resize(2, vector<int>(N+1, 0));

        for(int i=0; i<2; i++) {
            for(int j=0; j<N; j++) {
                cin >> vec[i][j];
            }
        }

        DP[0][0] = 0;
        DP[1][0] = 0;
        DP[0][1] = vec[0][0];
        DP[1][1] = vec[1][0];


        for(int i=2; i<=N; i++) {
            DP[0][i] = MAX(DP[1][i-1], DP[1][i-2]) + vec[0][i-1];
            DP[1][i] = MAX(DP[0][i-1], DP[0][i-2]) + vec[1][i-1];
        }

        cout << MAX(DP[0][N], DP[1][N]) << "\n";

        //T--
        T--;
    }
}