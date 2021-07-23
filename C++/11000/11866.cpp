#include <iostream>
#include <queue>
using namespace std;

queue<int> que;
int N, M, K=1;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;
    for(int i=0; i<N; i++) {
        que.push(i+1);
    }
    cout << "<";
    while(que.size()>0) {
        int front = que.front();
        int size = que.size();
        que.pop();

        if(K==M) {
            cout << front;
            (que.size()==0) ? cout << "" : cout << ", ";
            K=0;
        } else {
            que.push(front);
        }

        K++;
    }

    cout << ">";
}