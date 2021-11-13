#include <iostream>
#include <vector>
using namespace std;

int dp(vector<vector<int>>&dp) {

}

int main() {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N, M;
        cin >> N >> M;
        
        vector<vector<int>> vec(N, vector<int>(M));

        dp(vec);
    }
}