#include <iostream>
#include <string>
using namespace std;

int main() {
    int c=0, r=0;
    string s;
    cin >> s;

    for(int i=0; i<=s.size(); i++) {
        if(s[i] == ',') {
            r+=stoi(s.substr(c, i-c));
            c=i+1;
        } else if (i==s.size()) {
            r+=stoi(s.substr(c, i-c));
        }
    }

    cout << r;
}