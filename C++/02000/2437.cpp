#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;
    vector <int>vec;
    for(int i=0; i<N; i++) {
        int K;
        cin >> K;
        vec.push_back(K);
    }
    sort(vec.begin(), vec.end());

    if(vec[0]!=1) {
        cout << 1;
    } else {
        int sol = 0;
        for(int i=0; i<N; i++) {
            if(vec[i] > sol+1) {
                break;
            } else {
                sol += vec[i];
            }
        }
        cout << sol + 1;
    }

}