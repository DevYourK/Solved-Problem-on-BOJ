#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    switch(n%2) {
        case 0:
            cout << "I LOVE CBNU";
        break;
        default:
            for(int i=0; i<n; i++) {
                cout << "*";
            }
            cout << endl;

            for(int i=0; i<((n+1)/2)-1; i++) {
                cout << " ";
            }
            cout << "*" << endl;

            for(int i=1; i<(n+1)/2; i++) {
                for(int x=0; x<((n+1)/2)-1-i; x++) {
                    cout << " ";
                }
                cout << "*";
                for(int x=0; x<(2*(i-1))+1; x++) {
                    cout << " ";
                }
                cout << "*" << endl;
            }
    }
}