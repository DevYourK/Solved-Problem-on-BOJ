#include <iostream>
#include <vector>
using namespace std;

vector<int> getPi(string p) {
    int m = p.length(), j=0;
    vector<int> pi(m, 0);

    for(int i = 1; i < m; i++){
        while(j > 0 && p[i] != p[j]) {
            j = pi[j-1];
        }
        if(p[i] == p[j]) {
            pi[i] = ++j;
        }
    }
    
    return pi;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    while(1) {
        string s;
        getline(cin, s);

        if(s == ".") break;
        vector<int> vec = getPi(s);

        for(int i=0; i<vec.size(); i++) {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }

}