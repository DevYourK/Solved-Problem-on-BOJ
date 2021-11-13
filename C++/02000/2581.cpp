#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> vec(M+1, true);
    vec[1] = 0;

    for(int i=2; i<=M; i++) {
        if(vec[i]) {
            for(int j=2; i*j<=M; j++) {
                if(i*j <= M) {
                    vec[i*j] = false;
                }
            }
        }
    }

    int min = 10000, sum = 0;
    for(int i=N; i<=M; i++) {
        if(vec[i]) {
            min = (min>i)?i:min;
            sum += i;
        }
    }

    if(sum == 0) {
        cout << -1 << endl;
    }
    else {
        cout << sum << "\n" << min;
    }
}