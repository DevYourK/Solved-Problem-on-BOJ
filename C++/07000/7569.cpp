#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int box[100][100][100];
bool visit[100][100][100];
int N, M, H, cnt;

queue<pair<int,pair<int,int>>> que;

int bfs() {
    while(!(que.empty())) {
        for(int i=0; i<6; i++) {
            int PZ[6] = {1, -1, 0, 0, 0, 0};
            int PY[6] = {0, 0, 1, -1, 0, 0};
            int PX[6] = {0, 0, 0, 0, 1, -1};

            int Z = que.front().first;
            int Y = que.front().second.first;
            int X = que.front().second.second;

            int NZ = PZ[i] + Z;
            int NY = PY[i] + Y;
            int NX = PX[i] + X;

            cnt = box[Z][Y][X];

            if(0<=NZ && NZ<H && 0<=NY && NY<N && 0<=NX && NX<M) {
                if(box[NZ][NY][NX] != -1 && !visit[NZ][NY][NX] && box[NZ][NY][NX] != 1) {
                    box[NZ][NY][NX] = box[Z][Y][X]+1;
                    cnt = box[NZ][NY][NX];
                    visit[NZ][NY][NX] = 1;
                    que.push(pair<int,pair<int,int>>(NZ, pair<int,int>(NY,NX)));
                }
            }
        }
        que.pop();
    }
    return 0;
}

int main() {
    cin >> M >> N >> H;
    for(int i=0; i<H; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<M; k++) {
                cin >> box[i][j][k];
                if(box[i][j][k]==1) {
                    que.push(pair<int,pair<int,int>>(i,pair<int,int>(j,k)));
                }
            }
        }
    }

    bfs();

/*
    cout << "\n";
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << box[i][j][k] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
*/
    for(int i=0; i<H; i++) {
        for(int j=0; j<N; j++) {
            for(int k=0; k<M; k++) {
                if(box[i][j][k]==0) {
                    cout << "-1";
                    return 0;
                }
            }
        }
    }
    
    cout << cnt-1;
    return 0;
}
