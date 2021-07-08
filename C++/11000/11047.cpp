#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int>vec;
queue <int>que;

int ztoa(int a, int b) {
    return (a>=b)?true:false;
}
int main() {
    int N, K, ans=0, cnt=0;
    cin >> N >> K;

    for(int i=0; i<N; i++) {
        int val;
        cin >> val;
        if(val <= K) {
            vec.push_back(val);
        }
    }

    sort(vec.begin(), vec.end(), ztoa);

    for(int i=0; i<vec.size(); i++) {
        que.push(vec[i]);
    }

    while(ans!=K) {
        if(ans+que.front() <= K) {
            ans += que.front();
            cnt++;
        } else {
            que.pop();
        }
    }

    cout << cnt;    
}