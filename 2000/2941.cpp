#include <iostream>
#include <string>
using namespace std;

int main() {
    int count=0;
    string s;
    cin >> s;

    //check
    for(int i=0; i<s.length(); i++) {
        switch(s[i]) {
            case 'c':
                if(s[i+1] == '=' || s[i+1] == '-') {
                    i++;
                }
                count++;
            break;
            case 'd':
                if(s[i+1] == '-') {
                    i++;
                } else if(s[i+1] == 'z' && s[i+2] == '=') {
                    i+=2;
                }
                count++;
            break;
            case 'l':
            case 'n':
                if(s[i+1] == 'j') {
                    i++;
                }
                count++;
            break;
            case 's':
            case 'z':
                if(s[1+i] == '=') {
                    i++;
                }
                count++;
            break;
            default:
                count++;
        }
    }
    cout << count;
}