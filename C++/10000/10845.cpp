#include <iostream>
#include <queue>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int n;
    queue<int> que;
    cin >> n;

    for(int i=0; i<n; i++) {
        string command;
        int num;
        cin >> command;

        if(command == "push") {
            cin >> num;
            que.push(num);

        } else if (command == "pop") {
            if(que.empty()) {
                cout << -1 << endl;
            } else {
                cout << que.front() << endl;
                que.pop();
            }

        } else if (command == "size") {
            cout << que.size() << endl;

        } else if (command == "empty") {
            cout << que.empty() << endl;

        } else if (command == "front") {
            if(que.empty()) {
                cout << -1 << endl;
            } else {
                cout << que.front() << endl;
            }

        } else if (command == "back") {
            if(que.empty()) {
                cout << -1 << endl;
            } else {
                cout << que.back() << endl;
            }
        }
    }
}