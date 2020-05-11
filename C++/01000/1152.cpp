#include <iostream>
using namespace std;

int main() {
    bool b = false;
    string s;
    int k=0, t=0;
    getline(cin, s);

    for(int i=0; i<s.length(); i++) {
        //check
        if(int(s[i]) == 32) {
            b=true;
            t=0;
        } else {
            b=false;
        }
        //l-check
        if(b!=true) {
            if(t==0) k++;
            t++;
        }
    }
    cout << k;
}