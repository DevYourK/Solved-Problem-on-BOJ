#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector <long long>vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    long long min = 0, max = 0;
    cin >> N >> M;

    for(int i=0; i<N; i++) {
        int K;
        cin >> K;
        vec.push_back(K);
        max += K;
    }

    sort(vec.begin(), vec.end());

    while((max-min) > 1) {
        long long mid = (max+min)/2;
        long long total = 0;

        for(auto i = lower_bound(vec.begin(), vec.end(), mid); i!=vec.end(); i++) {
            total += *i - mid;
        }

        if(total < M) {
            max = mid;
        } else {
            min = mid;
        }
    }

    cout << min;
}