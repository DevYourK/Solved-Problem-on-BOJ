#include <iostream>
using namespace std;

int main() {
    int io[2], c=0, d=4;

    while(d>0) {
        cin >> io[0] >> io[1];
        if(c-io[0]+io[1] > c) c+=-io[0]+io[1];
        d--;
    }
    cout << c;
}