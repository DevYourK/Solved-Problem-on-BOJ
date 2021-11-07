#include <iostream>
#include <vector>
using namespace std;

// N-Queen
int cnt;
vector<int> vec;

bool check(int col) {
    for (int i = 0; i < col; i++) {
        if (vec[i] == vec[col] || abs(vec[i] - vec[col]) == col - i)
            return false;
    }
    return true;
}

void queen(int N, int K) {
    if(N == K) cnt++;
    else {
        for(int i=0; i<K; i++) {
            vec[N] = i;
            if(check(N)) queen(N+1, K);
        }
    }
}

int main () {
    int N;
    cin >> N;
    vec.resize(N, 0);
    queen(0, N);

    cout << cnt;
}