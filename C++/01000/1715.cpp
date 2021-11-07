#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, sum = 0;
    cin >> N;

    if(N==1) {
        sum = 0;
    } else {
        priority_queue <int, vector<int>, greater<int>>que;
        int num;
        for(int i=0; i<N; i++) {
            cin >> num;
            que.push(num);
        }

        int A, B;
        while(!que.empty()) {
            A = que.top();
            que.pop();
            B = que.top();
            que.pop();

            sum += A + B;

            if(!que.empty()) {
                que.push(A + B);
            }
        }
    }

    cout << sum;
    return 0;
}