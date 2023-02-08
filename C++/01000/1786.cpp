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

vector<int> kmp(string s, string p) {
    vector<int> ans;
    vector<int> pi = getPi(p);
    int n = p.length(), j = 0;

    for(int i = 0; i < s.length(); i++){
        while(j > 0 && s[i] != p[j]) {
            j = pi[j-1];
        }
        if(s[i] == p[j]) {
            if(j == n - 1){
                ans.push_back(i - n + 1);
                j = pi[j];
            } else {
                j++;
            }
        }
    }

    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    string s, p;

    getline(cin, s);
    getline(cin, p);

    vector<int> vec = kmp(s, p);

    cout << vec.size() << "\n";

    for(auto i : vec){
        cout << i + 1 << " ";
    }
}