#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, ans = 0;
    cin >> N >> M;

    vector <int>vec(N);

    long long min = 1, max = 0;
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    max = vec[N-1];

    while(min<=max) {
        int count = 0;
        long long mid = (min + max)/2;

        for(auto i = lower_bound(vec.begin(), vec.end(), mid); i!=vec.end(); i++) {
            count += *i / mid;
        }

        if(count >= M) {
            min = mid+1;
            ans = (ans>mid)?ans:mid;
        } else {
            max = mid-1;
        }
    }

    cout << ans;
}