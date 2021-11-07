#include <iostream>
#include <vector>
using namespace std;

vector <bool>vec(30);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    for(int i=0; i<28; i++) {
        int N;
        cin >> N;
        
        vec[N-1] = true;
    }

    for(int i=0; i<30; i++) {
        if(vec[i]!=true) cout << i+1 << "\n";
    }
}