#include <iostream>
using namespace std;

int map[301][301];

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> map[i][j];
        }
    }

    int cases;
    cin >> cases;

    for(int i=0; i<cases; i++) {
        int arr[301][301];

        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;

        for(int j=(y1-1); j<y2; j++) {
            for(int k=(x1-1); k<x2; k++) {
                arr[j][k+1] = arr[j][k] + map[j][k];
            }
            arr[j+1][x1-1] = arr[j][x2];
        }

        cout << arr[y2-1][x2] - arr[y1-1][x1-1] << endl;
    }
}