#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool chk[8] = {0, };
vector<vector<int>> list;

void func(vector<int> vec, vector<int> arr, int i, int M) {
    if(i==M) {
        list.push_back(arr);

        return;
    }

    for(int j=0; j<vec.size(); j++) {
        if(chk[j]) continue;

        arr.push_back(vec[j]);
        chk[j] = true;
        
        func(vec, arr, i+1, M);

        arr.pop_back();
        chk[j] = false;
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> vec(N);
    vector<int> arr;

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    func(vec, arr, 0, M);

    sort(list.begin(), list.end());
    list.erase(unique(list.begin(), list.end()), list.end());

    for(int i=0; i<list.size(); i++) {
        for(int j=0; j<list[i].size(); j++) {
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
}