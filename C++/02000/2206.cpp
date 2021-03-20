#include <iostream>
#include <queue>
using namespace std;

int x, y;
bool map[1000][1000];
int visit[1000][1000][2];


int bfs() {
    queue <pair<pair<int, int>, bool>>que;
    que.push(pair<pair<int, int>, bool>(pair<int, int>(0, 0), false));

    int xp[4] = {-1, 1, 0, 0};
    int yp[4] = {0, 0, -1, 1};

    visit[0][0][true] = 1;
    visit[0][0][false] = 1;


    while(!que.empty()) {
        int qx = que.front().first.second;
        int qy = que.front().first.first;
        bool break_stat = que.front().second;

        if(qx == x-1 && qy== y-1) {
            return visit[qy][qx][break_stat];
        }

        for(int i=0; i<4; i++) {
            int NX = qx+xp[i];
            int NY = qy+yp[i];
            if(NX>=0 && NY>=0 && NX<x && NY<y) { /* 맵 조건 */
                /* 부숨 조건 */
                if(break_stat == true) {
                    /* 부쉈다면 벽이 없을때만 통과 가능 */
                    if(map[NY][NX] == 0 && visit[NY][NX][break_stat]==0) {
                        visit[NY][NX][true] = visit[qy][qx][true] + 1;
                        que.push(pair<pair<int, int>, bool>({NY, NX}, true));
                    }
                } else {
                    /* 부수지 않았다면 벽이 있을때 딱 한번 통과 가능*/
                    if(map[NY][NX] == 1) {
                        visit[NY][NX][true] = visit[qy][qx][break_stat] + 1;
                        que.push({{NY, NX}, true});
                    }
                    /* 또는 벽이 없을때 조건 없이 통과 가능*/
                    if(map[NY][NX] == 0 && visit[NY][NX][break_stat]==0) {
                        visit[NY][NX][false] = visit[qy][qx][false] + 1;
                        que.push(pair<pair<int, int>, bool>({NY, NX}, false));
                    }
                }
            }
        }
            
        que.pop();
    }
    return -1;
}

int main() {
    cin >> y >> x;
    for(int i=0; i<y; i++) {
        string s;
        cin >> s;
        for(int j=0; j<x; j++) {
            map[i][j] = (s[j]-'0');
        }
    }

    cout << bfs();
}