#include <iostream>
using namespace std;

int N, M;

int X[4] = {1, -1, 0, 0};
int Y[4] = {0, 0, 1, -1};

unsigned int map[500][500];
unsigned int count[500][500];
bool visit[500][500];

int dfs(int y, int x) {
    //M, N에 도달 시 1 return
    if(y==N-1 && x==M-1) {
        return 1;
    }
    //카운트 된 수가 있을 때
    if(visit[y][x]==true) {
        return count[y][x];
    }

    visit[y][x] = true;

    //상하좌우 이동
    for(int i=0; i<4; i++) {
        int NX = x + X[i];
        int NY = y + Y[i];

        if(map[NY][NX] < map[y][x] && 0<=NX && 0<=NY && NX<M && NY<N) {
            count[y][x] += dfs(NY, NX);
        }
    }

    return count[y][x];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++) {
        for(int x=0; x<M; x++) {
            scanf("%d", &map[i][x]);
        }
    }

    printf("%d", dfs(0, 0));
    return 0;
}