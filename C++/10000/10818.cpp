#include <iostream>
using namespace std;

int main() {
    int a, x, min, max;
    cin >> a;

    cin >> min;
    max = min;

    for(int i=1; i<a; i++) {
        cin >> x;
        if(x>max) {
            max = x;
        } else if (x<min) {
            min = x;
        }
    }

    cout << min << " " << max;
}