#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

char map[100][100];
bool visit[100][100];

queue <pair<int,int>> V;

int N;
int NX[4] = {1, -1, 0, 0};
int NY[4] = {0, 0, 1, -1};

int dfs(int y, int x) { // 적록색약이 아닐 때
    visit[y][x] = true;

    for(int i=0; i<4; i++) {
        int ky = y+NY[i];
        int kx = x+NX[i];
        
        if(0<=kx and kx<N and 0<=ky and ky<N) {
            int pc = map[y][x];
            int nc = map[ky][kx];

            if(pc == nc && visit[ky][kx]==false) {
                dfs(ky, kx);
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    cin >> N;

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> map[i][j];
        }
    }

    //case 1. 적록색약이 아닐 때
    int cnt_t = 0;
    int cnt_f = 0;
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!visit[i][j]) {
                dfs(i, j);
                cnt_f++;
            }
        }
    }

    //case 2. 적록색약
    memset(visit, 0, sizeof(visit));
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            map[i][j] = (map[i][j]=='G')?('R'):(map[i][j]);
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            if(!visit[i][j]) {
                dfs(i, j);
                cnt_t++;
            }
        }
    }
    cout << cnt_f << " " << cnt_t;

    return 0;
}