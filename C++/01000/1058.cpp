#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N;
    cin >> N;

    vec.resize(N, vector<int>(N));

    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        for(int j=0; j<N; j++) {
            vec[i][j] = vec[j][i] = (s[j]=='N')?51:1;
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) {
                if(i==j || j==k || i==k) continue;
                if(vec[j][k] > vec[j][i] + vec[i][k]) {
                    vec[j][k] = vec[j][i] + vec[i][k];
                }
            }
        }
    }

    int MAX = 0;
    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++) {
            if(i!=j && vec[i][j]<=2) {
                cnt++;
            }
        }
        if(MAX < cnt) {
            MAX = cnt;
        }
    }

    cout << MAX;
}