#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    

    int n;
    cin >> n;

    vector <int>vec;

    for(int i=0; i<n; i++) {
        int M;
        cin >> M;

        if(!vec.size() or vec[vec.size()-1] < M) {
            vec.push_back(M);
        } else {
            auto p = lower_bound(vec.begin(), vec.end(), M);
            *p = M;
        }
    }

    cout << vec.size();

    return 0;
}