#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector <vector<int>>vec(N, vector<int>(M));
    vector <vector<bool>>visit(N, vector<bool>(M));

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> vec[i][j];
        }
    }

}