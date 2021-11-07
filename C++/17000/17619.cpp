#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct M {
    int X1, X2, N;
};

M arr[100001];

bool c(M A, M B) {
    return A.X1 < B.X1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    cin >> N >> M;

    vector<int>group(N+1);
    for(int i=0; i<N; i++) {
        int X1, X2, dummy;
        cin >> X1 >> X2 >> dummy;
        arr[i] = {X1, X2, i};
    }

    sort(arr, arr+N, c);
    int right = arr[0].X2, cnt = 0;
    group[0] = cnt;

    for(int i=1; i<N; i++) {
        //cout << i << " | " << left << ", " << right << " | " << vec[i].first << ", " << vec[i].second << "\n";
        if(right < arr[i].X1) {
            cnt++;
            right = arr[i].X2;
        } else {
            right = (right>arr[i].X2)?right:arr[i].X2;
        }
        group[arr[i].N] = cnt;
    }
    /*
    for(int i=0; i<N+1; i++) {
        cout << group[i] << " ";
    }
    cout << "\n";
    */
    for(int i=0; i<M; i++) {
        int p, q;
        cin >> p >> q;

        cout << (group[p-1]==group[q-1]) << "\n";
    }
}