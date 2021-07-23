#include <iostream>
#include <algorithm>
#include <queue>
#define max(a,b) (a>b)?a:b

using namespace std;

int N, K, cnt;
bool visit[200002];
queue <pair<int,int>>que;
vector <int>vec;

int bfs() {
    while(!que.empty()) {
        int num = que.front().first;
        int time = que.front().second;
        que.pop();
        if(num == K) {
            vec.push_back(time);
            break;
        }

        queue <int>list;
        list.push(num+1);
        list.push(num-1);
        list.push(num*2);

        while(!list.empty()) {
            int X = list.front();
            list.pop();
            if(!visit[X]) {
                if(0<=X and X<=100000) {
                    visit[X] = true;
                    que.push(pair<int,int>(X, time+1));
                }
                if(0<=X and X<=K) {
                    visit[X] = true;
                    que.push(pair<int,int>(X, time+1));
                }
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);
    cin >> N >> K;
    que.push(pair<int,int>(N, 0));
    
    bfs();
    sort(vec.begin(), vec.end());
    cout << vec[0];
}