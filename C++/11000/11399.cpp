#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int>vec;

int main() {
    int N, sum=0;
    cin >> N;
    for(int i=0; i<N; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    sort(vec.begin(), vec.end());

    for(int i=0; i<N; i++) {
        for(int j=0; j<=i; j++) {
            sum += vec[j];
        }
    }
    cout << sum;
    return 0;
}