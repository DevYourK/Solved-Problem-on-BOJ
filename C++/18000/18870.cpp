#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> vec;
vector<int> list;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N;
    cin >> N;

    vec.resize(N);
    list.resize(N);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
        list[i] = vec[i];
    }

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    for(auto i = list.begin(); i != list.end(); i++) {
        auto v = lower_bound(vec.begin(), vec.end(), *i) - vec.begin();
        cout << v << " ";
    }
}