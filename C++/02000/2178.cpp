#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n, m;
int block[100][100];
int route[100][100];

int main() {
    //cin.tie(nullptr);
    //ios::sync_with_stdio(0);

    cin >> n >> m;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;

        for(int j=0; j<m; j++) {
            block[i][j] = s[j]-'0';
        }
    }

    route[0][0] = 1;

    queue<pair<int, int>> tree;
    tree.push(pair<int, int>(0, 0));

    while(!tree.empty()) {
        for(int i=0; i<4; i++) {
            int py[4] = {0, 0, 1, -1};
            int px[4] = {1, -1, 0, 0};
            int ny = tree.front().first + py[i];
            int nx = tree.front().second + px[i];

            if(ny==n && nx==m) {
                break;
            }
            
            //cout << "def " << tree.front().first << " " << tree.front().second << "\n";

            if(0<=nx && nx<m && 0<=ny && ny<n) {
                //cout << "new " << ny << " " << nx << "\n";
                //cout << "test " << (block[ny][nx]==1) << (route[ny][nx]==0 )<< "\n";

                if(block[ny][nx]==1 && route[ny][nx]==0) {
                    route[ny][nx] = route[tree.front().first][tree.front().second]+1;
                    tree.push(pair<int, int>(ny, nx));
                    //cout << "if " << tree.front().first << " " << tree.front().second << "\n";
                }
            }
        }
        tree.pop();
    }

    cout << route[n-1][m-1];
}