#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int N;
    queue<int> que;
    cin >> N;

    for(int i=0; i<N; i++) {
        string s;
        cin >> s;

        // push
        if(s == "push") {
            int num;
            cin >> num;

            que.push(num);
        }
        
        // pop
        if(s == "pop") {
            if(que.size() > 0) {
                cout << que.front() << "\n";
                que.pop();
            } else {
                cout << -1 << "\n";
            }
        }

        // size
        if(s == "size") cout << que.size() << "\n";

        // empty
        if(s == "empty") cout << ((que.size()>0)?0:1) << "\n";

        // front
        if(s == "front") cout << ((que.size()>0)?que.front():-1) << "\n";

        // back
        if(s == "back") cout << ((que.size()>0)?que.back():-1) << "\n";
    }
}