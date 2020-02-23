#include <iostream>
using namespace std;

int main() {
    int a[3];
    cin >> a[0];
    
    for(int i=1; i<=a[0]; i++) {
        cin >> a[1] >> a[2];
        cout << "Case #" << i << ": " << a[1]+a[2] << endl;
    }
}