#include <iostream>
using namespace std;

char chess[50][50];
int changeNum = 64;

int chess_calc(int cy, int cx) {
    int m[2]={0,0};
    char chess_start_white[8] = {'W','B','W','B','W','B','W','B'};
    char chess_start_black[8] = {'B','W','B','W','B','W','B','W'};
    
    for(int y=0; y<8; y++) {
        for(int x=0; x<8; x++) {
            //start-white
            if(y%2!=0) {
                m[1] += (chess_start_white[x] == chess[cy+y][cx+x])?1:0;
            } else {
                m[1] += (chess_start_black[x]) == chess[cy+y][cx+x]?1:0;
            }
        }
    }

    for(int y=0; y<8; y++) {
        for(int x=0; x<8; x++) {
            //start-black
            if(y%2!=0) {
                m[0] += (chess_start_black[x] == chess[cy+y][cx+x])?1:0;
            } else {
                m[0] += (chess_start_white[x]) == chess[cy+y][cx+x]?1:0;
            }
        }
    }

    changeNum = (m[0]<=m[1])?((m[0]>=changeNum)?changeNum:m[0]):((m[1]>=changeNum)?changeNum:m[1]);    
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> chess[i];
    }

    for(int y=0; y+7<n; y++) {
        for(int x=0; x+7<m; x++) {
            chess_calc(y, x);
        }
    }

    cout << changeNum;
}