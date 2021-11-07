#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool sortf(pair<int,int>A, pair<int,int>B) {
    if(A.second == B.second) {
        return (A.first > B.first)?false:true;
    } else {
        return (A.second > B.second)?false:true;
    }
}

int main() {
    int N, cnt = 0;
    cin >> N;
    vector <pair<int,int>>vec(N);
    
    for(int i=0; i<N; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end(), sortf);

    int l_time = 0;
    for(int i=0; i<N; i++) {
        if(l_time <= vec[i].first) {
            l_time = vec[i].second;
            cnt++;
        }
    }
    cout << cnt;
}