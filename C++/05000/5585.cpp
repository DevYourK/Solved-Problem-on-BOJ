#include <iostream>
using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;

    N = 1000 - N;

    while(N>0) {
        if(N/500) {
            cnt += N/500;
            N %= 500;
        }
        if(N/100) {
            cnt += N/100;
            N %= 100;
        }
        if(N/50) {
            cnt += N/50;
            N %= 50;
        }
        if(N/10) {
            cnt += N/10;
            N %= 10;
        }
        if(N/5) {
            cnt += N/5;
            N %= 5;
        }
        if(N/1) {
            cnt += N/1;
            N %= 1;
        }
    }
    cout << cnt << endl;
}