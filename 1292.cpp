#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int w, x=1, y=0, z=0;

    while(x<=b) {
        w=1;
        while(w<=y && x<=b) {
            if(x>=a) {
                z+=y;
            }
            w++;
            x++;
        }
        y++;
    }

    cout << z << endl;
}