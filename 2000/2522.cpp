#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    for(int i=0; i<x; i++) {
        for(int k=0; k<(x-1)-i; k++) {
            cout << " ";
        }
        for(int k=0; k<i+1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    for(int i=0; i<x; i++) {
        for(int k=0; k<i+1; k++) {
            cout << " ";
        }
        for(int k=0; k<(x-1)-i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}