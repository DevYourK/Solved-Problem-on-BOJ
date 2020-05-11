#include <iostream>
#include <string>
using namespace std;
int alpha[26];


int main() {
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++) {
        if(alpha[(int)s[i]-97] == 0) {
            alpha[(int)s[i]-97] = i+1;
        }
    }

    for(int i=0; i<26; i++) {
        cout << alpha[i]-1 << " ";
    }
}