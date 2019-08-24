#include <iostream>
using namespace std;

int main() {
    int a[4];
    while(1) {
        cin >> a[0] >> a[1] >> a[2] >> a[3];

        if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0) {
            break;
        }

        //min
        if(a[1]<0 && a[2]>0) {
            cout << a[1]-a[2];
        } else {
            cout << a[2]-a[1];
        }

        cout << " ";
        //max
        cout << a[3] - a[0] << endl;
    }
}