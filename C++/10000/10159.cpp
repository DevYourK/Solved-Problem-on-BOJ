#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool arr[101][101];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for(int i=0; i<M; i++) {
        int p, q;
        cin >> p >> q;
        
        arr[p][q] = true;
    }

    for(int i=1; i<=N; i++) {
        for(int j=1; j<=N; j++) {
            for(int k=1; k<=N; k++) {
                if(arr[j][i] && arr[i][k]) {
                    arr[j][k] = true;
                }
            }
        }
    }


    for(int i=1; i<=N; i++) {
        int cnt = 0;
        for(int j=1; j<=N; j++) {
            if(!arr[i][j] && !arr[j][i]) {
                cnt++;
            }
        }
        cout << cnt-1 << "\n";
    }
}