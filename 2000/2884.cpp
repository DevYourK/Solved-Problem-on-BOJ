#include <iostream>
using namespace std;

int main() {
    int a[2];
    cin >> a[0] >> a[1];
    
    if(a[1] > 44) {
        cout << a[0] << " " << (a[1]-45) << endl;
    } else {
        if((a[0]-1) < 0) {
            cout << "23 " << (60+a[1]-45) << endl;
        } else {
            cout << (a[0]-1) << " " << (60+a[1]-45) << endl;
        }
    }
}