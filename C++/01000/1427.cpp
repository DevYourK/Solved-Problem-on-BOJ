#include <iostream>
#include <algorithm>
using namespace std;

bool low(int a, int b) {
    return a>b;
}

int main() {
    string s;
    cin >> s;

    int num[s.length()];

    for(int i=0; i<s.length(); i++) {
        num[i] = s[i] - '0';
    }

    sort(num, num+s.length(), low);

    for(int i=0; i<s.length(); i++) {
        cout << num[i];
    }
}