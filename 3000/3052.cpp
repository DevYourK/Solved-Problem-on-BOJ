#include <iostream>
using namespace std;

int main() {
    int inp, cnt=0, incnt, arr[10];
    cin >> inp;
    cnt++; arr[0]=inp%42;

    for(int i=1; i<10; i++) {
        cin >> inp;
        incnt = 0;
        for(int x=0; x<i; x++) {
            if(arr[x] == inp%42) {
                incnt = 0;
                break;
            }
            incnt++;
        }
        if (incnt > 0) {
            cnt++;
        
        }        
        arr[i] = inp%42;
    }
    cout << cnt;
}