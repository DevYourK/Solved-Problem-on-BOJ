#include <iostream>
using namespace std;

int main() {
    int min[2], in;
    cin >> min[0];
    for(int i=0; i<2; i++) {
        cin >> in;
        min[0] = (min[0]>in)?in:min[0];
    }
    cin >> min[1];
    for(int i=0; i<1; i++) {
        cin >> in;
        min[1] = (min[1]>in)?in:min[1];
    }

    cout << (min[0] + min[1]) - 50;
}