#include <iostream>
using namespace std;

int n, number=0, countt;

int dfs(int num) {
    if(num==number) {
        countt++;
    } else {
        int ar[3] = {1, 2, 3};
        for(int i=0; i<3; i++) {
            if(num+ar[i] <= number) {
                dfs(num+ar[i]);
            }
        }
    }
    return 0;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> number;
        countt=0;

        dfs(0);
        cout << countt << endl;
    }
}