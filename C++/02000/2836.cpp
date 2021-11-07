#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector <pair<int,int>>vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N, M;
    cin >> N >> M;
    
    for(int i=0; i<N; i++) {
        int N, M;
        cin >> N >> M;

        if(N>M) {
            vec.push_back(pair<int,int>(M, N));
        }
    }

    sort(vec.begin(), vec.end());

    long long left = -1;
    long long right = -1;
    long long length = right-left;

    for(auto i=vec.begin(); i!=vec.end(); i++) {
        if((*i).first > right) {
            length += right-left;
            left = (*i).first;
            right = (*i).second;
        } else {
            right = (right>(*i).second)?right:(*i).second;
        }
    }
    
    cout << M + (length + right-left)*2;
}