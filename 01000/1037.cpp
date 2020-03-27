#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[n];

    for(int i=0; i<n; i++) cin >> m[i];
    sort(m, m+n);
    cout << m[0]*m[n-1];
}