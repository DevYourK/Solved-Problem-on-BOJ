#include <iostream>
using namespace std;

int main() {
    int N, M, cnt=0;
    string S;

    cin >> N >> M >> S;
    int length = 3+(N-1)*2;

    for(int i=0; i<M; i++) {
        int K=0;

        if(S[i]=='I') {
            while(S[i+1]=='O' && S[i+2]=='I') {
                K++;
                i += 2;
                if(K==N) {
                    K--;
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}