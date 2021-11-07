#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string org;
    cin >> org;

    for(int i=1; i<N; i++) {
        string s;
        cin >> s;
        for(int i=0; i<org.length(); i++) {
            if(org[i] != s[i]) org[i] = '?';
        }
    }
    
    cout << org;
}