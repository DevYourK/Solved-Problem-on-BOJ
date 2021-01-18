#include <iostream>
using namespace std;
char words[100];
int alpha[26];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    cin >> words;

    for(int i=0; i<100; i++) {
        if((int)words[i] == 0) break;
        alpha[(int)words[i]-97]++;
    }

    for(int i=0; i<26; i++) {
        cout << alpha[i] << " ";
    }
}