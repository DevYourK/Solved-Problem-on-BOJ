#include <iostream>
using namespace std;

int main() {
    int a, c=1;
    cin >> a;

    while(a>0) {
        c*=a;
        a--;
    }

    cout << c;
}