#include <iostream>
using namespace std;

int main() {
    int cnt = 0;

    for(int i=1; i<=8; i++) {
        string s;
        cin >> s;
        for(int j=1; j<=8; j++) {
            if(i%2==0) {
                //WBWBWBWB
                if(j%2==0 && s[j-1]=='F') {
                    cnt++;
                }
            } else {
                //BWBWBWBW
                if(j%2 && s[j-1]=='F') {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}