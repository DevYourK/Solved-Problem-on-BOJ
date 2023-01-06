#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<string> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
        for(int j=0; j<vec[i].size(); j++) {
            cout << vec[i][vec[i].size() - 1 - j];
        }
        cout << "\n";
    }
}