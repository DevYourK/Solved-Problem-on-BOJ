#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> vec;
vector<bool> used;
vector<string> list;

void passwd(int N, int M, string s) {
    if(N==M) {
        int A = (s.find("a") != string::npos);
        int E = (s.find("e") != string::npos);
        int I = (s.find("i") != string::npos);
        int O = (s.find("o") != string::npos);
        int U = (s.find("u") != string::npos);
        int sum = A+E+I+O+U;

        //cout << s << " " << sum << " " << s.size() << "\n";

        if(sum > 0 && s.size()-sum >= 2) {
            list.push_back(s);
        }
    }
    else {
        for(int i=0; i<vec.size(); i++) {
            if((used[i] == false) && ((int)s[N-1] < (int)vec[i][0])) {
                used[i] = true;
                passwd(N+1, M, (s + vec[i]));
                used[i] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int L, C;
    cin >> L >> C;

    vec.resize(C);
    used.resize(C, 0);

    for(int i=0; i<C; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    passwd(0, L, "");

    for(auto i : list) cout << i << "\n";

}