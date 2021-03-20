#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int box[2000][2000];
bool visit[2000][2000];
int N, M, cnt;

queue<pair<int,int>> que;

int bfs() {
    while(!(que.empty())) {
        for(int i=0; i<4; i++) {
            int PY[4] = {1, -1, 0, 0};
            int PX[4] = {0, 0, 1, -1};
            int Y = que.front().first;
            int X = que.front().second;
            int NY = PY[i] + Y;
            int NX = PX[i] + X;

            cnt = box[Y][X];

            if(0<=NX && NX<M && 0<=NY && NY<N) {
                if(box[NY][NX] != -1 && !visit[NY][NX] && box[NY][NX] != 1) {
                    box[NY][NX] = box[Y][X]+1;
                    cnt = box[NY][NX];
                    visit[NY][NX] = 1;
                    que.push(pair<int,int>(NY,NX));
                }
            }
        }
        que.pop();
    }
    return 0;
}

int main() {
    cin >> M >> N;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> box[i][j];
            if(box[i][j]==1) {
                que.push(pair<int,int>(i,j));
            }
        }
    }

    bfs();

/*
    cout << "\n";
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << box[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
*/

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            if(box[i][j]==0) {
                cout << "-1";
                return 0;
            }
        }
    }
    
    cout << cnt-1;
    return 0;
}
