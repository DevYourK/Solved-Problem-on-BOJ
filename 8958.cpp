#include <iostream>
using namespace std;

int main() {
    int a, t, v=0;
    string s;

    cin >> a;
    while(a>0) {
        t=0, v=1;
        cin >> s;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'O') {
                t+=v;
                v++;
            } else {
                v=1;
            }
        }

        cout << t << endl;
        a--;
    }
}