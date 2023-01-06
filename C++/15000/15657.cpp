#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minimum = 0;

void func(vector<int> vec, vector<int> arr, int i, int M) {
    if(i==M) {
        for(int j=0; j<arr.size(); j++) {
            cout << arr[j] << " ";
        }
        cout << "\n";

        return;
    }

    for(int j=0; j<vec.size(); j++) {
        if(!arr.empty()) {
            if(arr.back() > vec[j]) continue;
        }
        arr.push_back(vec[j]);
        func(vec, arr, i+1, M);
        arr.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    
    int N, M;
    cin >> N >> M;

    vector<int> vec(N);
    vector<int> arr;

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }
    
    sort(vec.begin(), vec.end());
    func(vec, arr, 0, M);
}