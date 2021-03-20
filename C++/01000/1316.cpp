#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int n;
    int alpha[26];
    cin >> n;

    int count=n;
    for(int i=0; i<n; i++) {
        string s;
        cin >> s;
        memset(alpha, 0, sizeof(alpha));

        for(int j=0; j<s.length(); j++) {
//            cout << (int)s[j]-97 << " : " << alpha[(int)s[j]-97] << " and " << s[j-1] << " : " << s[j]<< endl;
//            cout << (s[j-1] != s[j]) << endl;
            if(alpha[(int)s[j]-97] > 0) {
                if(s[j-1] != s[j]) {
                    count--;
                    break;
                } 
            } else {
                alpha[(int)s[j]-97]++;
            }
        }
    }

    cout << count;
}