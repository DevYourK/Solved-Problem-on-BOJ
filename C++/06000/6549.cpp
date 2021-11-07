#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(1) {
        int N;
        unsigned long long ans=0;
        cin >> N;
        if(N==0) return 0;

        //run
        stack <long long>list;
        vector <long long>vec(N, 0);

        for(int i=0; i<N; i++) {
            cin >> vec[i];
        }

        for(int i=0; i<N; i++) {
            while(!list.empty() && vec[list.top()]>vec[i]) {
                long long W = i;
                long long H = vec[list.top()];
                list.pop();

                if(!list.empty()) {
                    W = (i-list.top()-1);
                }
                ans = (ans<W*H)?W*H:ans;
            }

            list.push(i);
        }
        
        while(!list.empty()) {
            long long W = N;
            long long H = vec[list.top()];
            list.pop();

            if(!list.empty()) {
                W = (N-list.top()-1);
            }

            ans = (ans<W*H)?W*H:ans;
        }

        cout << ans << "\n";
    }
}