#include <iostream>
using namespace std;

int main() {
    pair<int,int> cnt = {0, 0};
    string s;
    cin >> s;

    if(s[0] == '0') {
        cnt.first++;
    } else {
        cnt.second++;
    }

    for(int i=1; i<s.length(); i++) {
        if(s[i] != s[i-1]) {
            if(s[i] == '0') {
                cnt.first++;
            } else {
                cnt.second++;
            }
        }
    }

    cout << ((cnt.first<cnt.second)?cnt.first:cnt.second);
}