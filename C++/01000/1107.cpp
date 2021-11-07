#include <iostream>
#include <algorithm>
#include <vector>

#define ABS(N) ((N) < 0 ? -(N) : (N))
#define MIN(A, B) ((A) < (B) ? (A) : (B))

using namespace std;
vector <int> remote(10, true);

bool ch(int k) {
    string s = to_string(k);
    for(auto i=s.begin(); i!=s.end(); i++) {
        int num = *i-'0';
        if(!remote[num]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;    
    cin >> N >> M;

    // 100번은 이동할 필요 없음
    if(N==100) {
        cout << 0;
        return 0;
    }

    // 모든 버튼 고장남
    if(M==10) {
        int CHN = 100;
        if(CHN<N) {
            cout << N-CHN;
        } else {
            cout << CHN-N;
        }
        return 0;
    }

    // 고장난 버튼
    int chn = ABS(N-100);

    for(int i=0; i<M; i++) {
        int idx;
        cin >> idx;
        remote[idx] = false;
    }

    for(int i=1000000; i>=0; i--) {
        if(ch(i)) {
            chn = min(chn, (int)(ABS(N-i) + to_string(i).length()));
        }
    }
    cout << chn;
    return 0;
}