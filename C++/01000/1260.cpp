#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> glow_map;
queue<int> que;

bool dfs_visited[10000];
bool bfs_visited[10000];

int dfs(int v) {
    cout << v << " ";
    dfs_visited[v] = true;
    sort(glow_map[v].begin(), glow_map[v].end());

    for(int i=0; i<glow_map[v].size(); i++) {
        if(!dfs_visited[glow_map[v][i]]) {
            dfs(glow_map[v][i]);
        }
    }

    return 0;
}

int bfs(int v) {
    if(!bfs_visited[v]) cout << v << " ";
    bfs_visited[v] = true;
    sort(glow_map[v].begin(), glow_map[v].end());
    
    for(int i=0; i<glow_map[v].size(); i++) {
        if(!bfs_visited[glow_map[v][i]]){
            que.push(glow_map[v][i]);
        }
    }
    
    return 0;
}


int main() {
    int n, m, v;
    cin >> n >> m >> v;

    glow_map.resize(n+1);
    for(int i=0; i<m; i++) {
        int p, f;
        cin >> p >> f;

        glow_map[p].push_back(f);
        glow_map[f].push_back(p);
    }

    //dfs
    dfs(v);
    cout << "\n";

    //bfs
    
    que.push(v);
    while(!que.empty()) {
        v = que.front();
        que.pop();
        bfs(v);
    }
    
    return 0;
}