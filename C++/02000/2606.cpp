#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cnt;
vector<vector<int>> net;
bool net_map[100];


int dfs(int num) {
    net_map[num] = true;

    for(int i=0; i<net[num].size(); i++) {
        if(!net_map[net[num][i]]) {
            dfs(net[num][i]);
            cnt++;
        }
    }
    return 0;
}

int main() {
    int n, li;
    cin >> n >> li;
    
    net.resize(n+1);
    for(int i=0; i<li; i++) {
        int bef, aft;
        cin >> bef >> aft;

        net[bef].push_back(aft);
        net[aft].push_back(bef);
    }

    dfs(1);

    cout << cnt;
}