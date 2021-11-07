#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    vector<int> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    int min = 1, max = vec[N-1];

    while(min <= max) {
        int mid = (max+min)/2;
        
    }
}