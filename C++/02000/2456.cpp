#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool fun(pair<pair<int,int>,int>A, pair<pair<int,int>,int>B) {
    if(A.first.first == B.first.first) {
        return (A.first.second>B.first.second);
    } else {
        return (A.first.first>B.first.first);
    }
}

int main() {
    int N;
    cin >> N;
    vector <pair<pair<int,int>,int>>vec(3); //first second -> 점수 / 가중치
    
    for(int i=0; i<N; i++) {
        for(int j=0; j<3; j++) {
            int num;
            cin >> num;
            vec[j].first.first += num;
            vec[j].first.second += num*num;
            vec[j].second = j+1;
        }
    }

    sort(vec.begin(), vec.end(), fun);

    if(vec[0].first.second!=vec[1].first.second) {
        cout << vec[0].second << " " << vec[0].first.first;
    } else {
        cout << 0 << " " << vec[0].first.first;
    }
}