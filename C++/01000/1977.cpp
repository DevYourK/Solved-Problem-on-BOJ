#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> vec(M+1, false);
    vec[1] = true;

    for(int i=2; i<=M; i++) {
        if(i*i <= M) {
            vec[i*i] = true;
        }
    }

    int min = 10000, sum =0;
    for(int i=N; i<=M; i++) {
        if(vec[i]) {
            sum += i;
            min = (min>i)?i:min;
        }
    }

    if(sum == 0) {
        cout << -1;
    } else {
        cout << sum << "\n" << min;
    }
}