#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string A, B;
    cin >> A >> B;

    vector<vector<int>> vec(A.length()+1, vector<int>(B.length()+1, 0));
    
    for(int i=1; i <=A.length(); i++) {
        for(int j=1; j<=B.length(); j++) {
            if(A[i-1] == B[j-1]) {
                vec[i][j] = vec[i-1][j-1] + 1;
            } else {
                vec[i][j] = max(vec[i][j-1], vec[i-1][j]);
            }
        }
    }
    
    /*
    for(int i=0; i<=A.length(); i++) {
        for(int j=0; j<=B.length(); j++) {
            cout << vec[i][j] << " ";
        } 
        cout << "\n";
    }
    */

    cout << vec[A.length()][B.length()];
}