#include <iostream>
using namespace std;

int main() {
    while(1) {
        string s;
        getline(cin, s);

        if(s == "#") break;
        
        int cnt = 0;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U') cnt++;
            if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') cnt++;
        }

        cout << cnt << "\n";
    }
}