#include <iostream>
#include <string>
using namespace std;

unsigned long int alpha[26];

int main() {
    int max=0, val, out;
    string s;
    cin >> s;

    for(unsigned long long int i=0; i<s.length(); i++) {
        val = int(s[i])-65;
        val-= -(val>25)?32:0;
        
        alpha[val]++;
    }
    
    for(int i=0; i<26; i++) {
        if(alpha[i]!=0) {
            if(alpha[i] == max) {
                out = -2;
            } else if(alpha[i] > max) {
                max=alpha[i];
                out=i;
            }
        }
    }
    cout << char(65+out);    
}