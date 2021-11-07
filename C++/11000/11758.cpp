#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int,int>> vec(3, {0,0});
    for(int i=0; i<3; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    int CCW = vec[0].first * vec[1].second + vec[1].first * vec[2].second + vec[2].first * vec[0].second - vec[0].second * vec[1].first - vec[1].second * vec[2].first - vec[2].second * vec[0].first;

    if(CCW > 0) {
        cout << 1;
    } else if(CCW == 0) {
        cout << 0;
    } else {
        cout << -1;
    }
}