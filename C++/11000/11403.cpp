#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>>vec(100, vector<int>(100));


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> vec[i][j];
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<N; k++) {
                if(vec[j][i] && vec[i][k]) {
                    vec[j][k]++;
                }
            }
        }
    }


    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(vec[i][j]!=0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << "\n";
    }
}