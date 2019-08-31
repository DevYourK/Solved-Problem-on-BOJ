#include <iostream>
using namespace std;

int main() {
    int a, b;
    string s;
    cin >> s;
    
    for(int i=0; i<s.length()/10; i++) {
        a=0;
        while(a!=10) {
            cout << s[(i*10)+a];
            a++;
        }
        cout << endl;
    }

    for(int i=0; i<s.length()%10; i++) {
        cout << s[(s.length()/10)*10+i];
    }
}