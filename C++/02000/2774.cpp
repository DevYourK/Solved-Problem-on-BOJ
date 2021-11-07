#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int cnt = 0;
        vector<bool> vec(11, 0);

        string s;
        cin >> s;

        for(auto i : s) {
            if(vec[(i-'0')]==false) {
                vec[(i-'0')] = true;
                cnt++;
            }
        }
        
        cout << cnt << "\n";
    }
}