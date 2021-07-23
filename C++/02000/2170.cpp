#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector <pair<int,int>>vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int X1, X2;
        cin >> X1 >> X2;
        vec.push_back(pair<int,int>(X1, X2));
    }
    
    sort(vec.begin(), vec.end());

    int X1 = vec[0].first, X2 = vec[0].second, length = 0;
    for(int i=1; i<N; i++) {
        int NX1 = vec[i].first, NX2 = vec[i].second;
        if(NX1<=X2) {
            X2 = (NX2>X2)?NX2:X2;
        } else {
            length += X2 - X1;
            X1 = NX1;
            X2 = NX2;
        }
    }
    cout << length + (X2-X1);
}