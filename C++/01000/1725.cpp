#include <iostream>
#include <stack>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, ans=0;
    cin >> N;

    stack <int>list;
    vector <int>vec(N, 0);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    for(int i=0; i<N; i++) {
        while(!list.empty() && vec[list.top()]>vec[i]) {
            int W = i;
            int H = vec[list.top()];
            list.pop();

            if(!list.empty()) {
                W = (i-list.top()-1);
            }
            ans = (ans<W*H)?W*H:ans;
        }

        list.push(i);
    }
    
    while(!list.empty()) {
        int W = N;
        int H = vec[list.top()];
        list.pop();

        if(!list.empty()) {
            W = (N-list.top()-1);
        }

        ans = (ans<W*H)?W*H:ans;
    }

    cout << ans;
    return 0;
}