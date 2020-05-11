#include <iostream>
using namespace std;

int main() {
    int n;
    int max = 0;
    int max_n = 0;
    for(int i=0; i<9; i++) {
        cin >> n;
        if(max < n) {
            max = n;
            max_n = i+1;
        }
    }

    cout << max << endl << max_n;
}