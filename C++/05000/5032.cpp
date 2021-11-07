#include <iostream>
using namespace std;

int main() {
    int e, f, c;
    cin >> e >> f >> c;

    int K = e + f;
    int cnt = 0;

    while(K>=c) {
        if(K>=c) {
            K = K-c;
            cnt++;
            K++;
        }
    }

    cout << cnt;
}