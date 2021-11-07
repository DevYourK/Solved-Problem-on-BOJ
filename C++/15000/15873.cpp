#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.length()==4) {
        cout << 20;
    }
    else if(s.length()==3) {
        if(s[1]=='0') {
            cout << 10 + s[2]-'0';
        } else {
            cout << 10 + s[0]-'0';
        }
    }
    else {
        cout << s[0]-'0' + s[1]-'0';   
    }
}