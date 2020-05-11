#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m;
    string str;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> m >> str;
        for(int x=0; x<str.length(); x++) {
            for(int z=0; z<m; z++) {
                cout << str[x];
            }
        }
        cout << endl;
    }
}