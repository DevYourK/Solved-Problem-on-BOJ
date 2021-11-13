#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<vector<int>>> vec(2, vector<vector<int>>(N, vector<int>(M)));

    for(int i=0; i<2; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<M; k++) {
                cin >> vec[i][j][k];
            }
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << vec[0][i][j] + vec[1][i][j] << ' ';
        }
        cout << "\n";
    }
}