#include <iostream>
using namespace std;

char board[20][20];
int R, C, MAX=0;
int X[4] = {1, -1, 0, 0};
int Y[4] = {0, 0, 1, -1};

bool Alpha[26];

int AReturn(int y, int x) {
    int k = (int)board[y][x]-65;
    return (Alpha[k]==true)?false:true;
}

int dfs(int y, int x, int count) {
    MAX = (count >= MAX)?count:MAX;

    for(int i=0; i<4; i++) {
        int Nx = x+X[i];
        int Ny = y+Y[i];

        if(Nx>=0 && Nx<C && Ny>=0 && Ny<R) {
            if(AReturn(Ny, Nx)) {
                Alpha[(int)board[Ny][Nx]-65] = true;
                dfs(Ny, Nx, count+1);
                Alpha[(int)board[Ny][Nx]-65] = false;
            }
        }
    }
    return 0;
}


int main() {
    cin >> R >> C;

    for(int i=0; i<R; i++) {
        cin >> board[i];
    }

    Alpha[(int)board[0][0]-65] = true;

    dfs(0, 0, 1);
    cout << MAX;
}