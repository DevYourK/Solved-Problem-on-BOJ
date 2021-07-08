#include <iostream>
#include <deque>
using namespace std;

deque <int>que;

int main() {
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        que.push_back(i+1);
    }

    while(que.size()>1) {
        que.pop_front();

        int temp = que.front();
        que.push_back(temp);
        que.pop_front();
    }
    cout << que.front();
}