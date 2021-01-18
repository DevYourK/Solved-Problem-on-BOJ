#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    string str;

    cin >> n;

    for(int i=0; i<n; i++) {
        stack<int> s;
        bool tf = false;
        cin >> str; 

        for(int j=0; j<str.length(); j++) {
            if(str[j] == '(') {
                s.push(1);
            } else {
                if(!s.empty()) {
                    s.pop();
                } else {
                    tf = true;
                    break;
                }
            }
        }

        //cout << !tf << " " << !s.empty() << endl;

        if(!tf) {
            if(!s.empty()) {
                cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
}