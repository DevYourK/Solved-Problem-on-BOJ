#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N; string S;
        cin >> N >> S;

        if(S=="C") {
            for(int j=0; j<N; j++) {
                char x;
                cin >> x;
                cout << x-64 << " ";
            }
        }
        if(S=="N") {
            for(int j=0; j<N; j++) {
                int x;
                cin >> x;
                cout << (char)(x+64) << " ";
            }
        }
        cout << "\n";
    }
}