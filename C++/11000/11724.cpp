#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> map[1001];
vector<bool> bfs_visited(1001);
int cnt = 0;

void bfs(int v) {
    queue<int> que;
    que.push(v);
    bfs_visited[v] = true;
    while(!que.empty()) {
        v = que.front();
        que.pop();

        for(int i=0; i<map[v].size(); i++) {
            if(!bfs_visited[map[v][i]]){
                bfs_visited[map[v][i]] = true;
                que.push(map[v][i]);
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++) {
        int p, f;
        cin >> p >> f;

        map[p].push_back(f);
        map[f].push_back(p);
    }
    
    for(int i=1; i<=n; i++) {
        if(!bfs_visited[i]) {
            cnt++;
            bfs(i);
        }
    }

    cout << cnt;
    return 0;
}