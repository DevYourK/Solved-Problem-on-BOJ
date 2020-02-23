#include <iostream>
using namespace std;

int main() {
    int a[2], b;
    cin >> a[0] >> a[1];

    while(a[0]>0) {
        cin >> b;
        if(b<a[1]) cout << b << " ";
        a[0]--;
    }
}