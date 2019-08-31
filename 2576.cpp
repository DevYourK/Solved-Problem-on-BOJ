#include <iostream>
using namespace std;

int main() {
    int a, b=0, low=100, cnt=7;
    while(cnt>0) {
        cin >> a;
        if(a%2>0) {
            b+=a;
            if(low>a) {
                low=a;
            }
        }
        cnt--;
    }

    if(b>0) {
        cout << b << endl;
        cout << low;
    } else {
        cout << -1;
    }
}