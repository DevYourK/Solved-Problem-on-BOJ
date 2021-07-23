#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool fn(pair<int,int>A, pair<int,int>B) {
    if(A.second == B.second) {
        return (A.first > B.first)?false:true;
    } else {
        return (A.second > B.second)?false:true;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vector <pair<int,int>>vec;
    for(int i=0; i<N; i++) {
        int X, Y;
        cin >> X >> Y;

        vec.push_back(pair<int,int>(X, Y));
    }
    sort(vec.begin(), vec.end(), fn);
    
    for(int i=0; i<N; i++) {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}