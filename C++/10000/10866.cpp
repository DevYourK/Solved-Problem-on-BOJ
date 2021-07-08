#include <iostream>
#include <deque>
using namespace std;

deque <int>deq;

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        string str;
        cin >> str;
        if(str=="push_front") {
            int k;
            cin >> k;
            deq.push_front(k);
        }
        if(str=="push_back") {
            int k;
            cin >> k;
            deq.push_back(k);
        }
        if(str=="pop_front") {
            if(deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.front() << "\n";
                deq.pop_front();
            }
        }
        if(str=="pop_back") {
            if(deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.back() << "\n";
                deq.pop_back();
            }
        }
        if(str=="size") {
            cout << deq.size() << "\n";
        }
        if(str=="empty") {
            cout << deq.empty() << "\n";
        }
        if(str=="front") {
            if(deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.front() << "\n";
            }
        }
        if(str=="back") {
            if(deq.empty()) {
                cout << -1 << "\n";
            } else {
                cout << deq.back() << "\n";
            }
        }
    }
}