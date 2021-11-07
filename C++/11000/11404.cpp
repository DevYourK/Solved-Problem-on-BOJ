#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> vec(100, vector<int>(100));

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int S, E, V;
        cin >> S >> E >> V;

        vec[S-1][E-1] = (vec[S-1][E-1]==0)?V:(min(vec[S-1][E-1], V));
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) {
                if(j==k) continue;
                if(vec[j][i] && vec[i][k]) {
                    if(vec[j][k] == 0) {
                        vec[j][k] = vec[j][i] + vec[i][k];
                    } else {
                        vec[j][k] = min(vec[j][k], vec[j][i] + vec[i][k]);
                    }
                }
            }
        }
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}