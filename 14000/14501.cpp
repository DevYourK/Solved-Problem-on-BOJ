#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a>b)?a:b;
}

int main() {
    int n, result;
    cin >> n;

    int t[n], p[n], k[n];
    for(int i=0; i<n; i++) {
        cin >> t[i] >> p[i];
    }

    for(int i=1; i<=n; i++) {
        //회사의 노예
        if(i+t[i]<=n) {
            k[t[i]] = max(k[t[i]], )
        }
        //월급루팡
    }
}