#include <iostream>
using namespace std;

int main() {
    long long value = 0;

    for(int i=0; i<2; i++) {
        string s;
        cin >> s;
        
        if(s=="black") {
            value = value*10 + 0;
        }
        if(s=="brown") {
            value = value*10 + 1;
        }
        if(s=="red") {
            value = value*10 + 2;
        }
        if(s=="orange") {
            value = value*10 + 3;
        }
        if(s=="yellow") {
            value = value*10 + 4;
        }
        if(s=="green") {
            value = value*10 + 5;
        }
        if(s=="blue") {
            value = value*10 + 6;
        }
        if(s=="violet") {
            value = value*10 + 7;
        }
        if(s=="grey") {
            value = value*10 + 8;
        }
        if(s=="white") {
            value = value*10 + 9;
        }
    }
    
    string s;
    cin >> s;

    if(s=="black") {
        value = value*1;
    }
    if(s=="brown") {
        value = value*10;
    }
    if(s=="red") {
        value = value*100;
    }
    if(s=="orange") {
        value = value*1000;
    }
    if(s=="yellow") {
        value = value*10000;
    }
    if(s=="green") {
        value = value*100000;
    }
    if(s=="blue") {
        value = value*1000000;
    }
    if(s=="violet") {
        value = value*10000000;
    }
    if(s=="grey") {
        value = value*100000000;
    }
    if(s=="white") {
        value = value*1000000000;
    }

    cout << value;
}