#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <vector<int>>vec;

int main() {
    int N, M;
    cin >> N >> M;
    vec.resize(N, vector<int>(N));

    for(int i=0; i<M; i++) {
        int n, m;
        cin >> n >> m;

        vec[n-1][m-1] = vec[m-1][n-1] = 1;
    }
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) {
                if(j==k) continue;
                if(vec[j][i] && vec[i][k]) {
                    if(vec[j][k]==0) {
                        vec[j][k] = vec[j][i] + vec[i][k];
                    } else {
                        vec[j][k] = min(vec[j][k], vec[j][i] + vec[i][k]);
                    }
                }
            }
        }
    }

    int max = 2147483647;
    int num;

    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=0; j<N; j++) {
            sum += vec[i][j];
        }
        if(max>sum) {
            max = sum;
            num = i;
        }
    }
    cout << num+1;
}