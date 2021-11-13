#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(6, 0);
    for(int i=0; i<3; i++) {
        int in, out;
        
        cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4] >> vec[5];
        
        in = vec[0]*3600 + vec[1]*60 + vec[2];
        out = vec[3]*3600 + vec[4]*60 + vec[5];

        cout << (out-in)/3600 << " " << (out-in)%3600/60 << " " << (out-in)%3600%60 << " " << '\n';
    }
}