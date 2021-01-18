#include <iostream>
#include <stack>
#include <memory.h>
using namespace std;

int lx, ly;
bool farm[51][51];
bool visit[51][51];

int dfs(int y, int x) {
    int X[4]={1, -1, 0, 0};
    int Y[4]={0, 0, 1, -1};

    for(int i=0; i<4; i++) {
        int nx = x + X[i];
        int ny = y + Y[i];
        
        if(0<=nx && nx<lx && 0<=ny && ny<ly) {            
            if(farm[ny][nx] == true && visit[ny][nx]==false) {
                visit[ny][nx] = true;
                dfs(ny, nx);
            }
        }

    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    for(int tc=0; tc<t; tc++) {
        int v, count=0;
        
        stack <int>vx;
        stack <int>vy;

        memset(farm, 0, 2500*sizeof(bool));
        memset(visit, 0, 2500*sizeof(bool));

        cin >> lx >> ly >> v;

        for(int i=0; i<v; i++) {
            int inx, iny;
            cin >> inx >> iny;

            farm[iny][inx] = true;
            vx.push(inx);
            vy.push(iny);
        }

        for(int i=0; i<v; i++) {
            int nx = vx.top();
            int ny = vy.top();

            vx.pop();
            vy.pop();

            if(visit[ny][nx]==false) {
                dfs(ny, nx);
                count++;
            }
        }
        
       cout << count << endl;
    }
}