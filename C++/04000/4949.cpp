#include <iostream>
#include <stack>
using namespace std;

int checker(string s) {
    stack<char> v;

    for(int i=0; i<s.length(); i++) {
        char c = s[i];

        switch(c) {
            case '(':
            case '[':
                v.push(c);
            break;
            case ')':
            case ']':
                if(v.empty()) {
                    return 0;
                }
                if(c==')' && v.top() == '(') {
                    v.pop();
                } else if(c==']' && v.top() == '[') {
                    v.pop();
                } else {
                    return 0;
                }
            break;
        }
    }
    if(!v.empty()) return 0;
    return 1;
}

int main() {
    while(1) {
        string s;
        getline(cin, s);
        //cout << "> " << s << " ";
        if(s == ".") {
            return 0;
        }
        cout << ((checker(s))?"yes\n":"no\n");
    }
}