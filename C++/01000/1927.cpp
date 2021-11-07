#include <iostream>
#include <queue>
using namespace std;

priority_queue <int>que;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        int N;
        cin >> N;
        
        if(N==0) {
            if(!que.empty()) {
                cout << -que.top() << "\n";
                que.pop();
            } else {
                cout << 0 << "\n";
            }
        } else {
            que.push(-N);
        }
    }
}