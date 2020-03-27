#include <iostream>
using namespace std;

int n, k, sum, ac;
int kit[8];
bool tf[8];

int dfs(int t) {
    if(t==n) {
        ac++;
    } else {
        for(int i=0; i<n; i++) {
            if(sum+(kit[i]-k)>=0 && !tf[i]) {
                sum+=(kit[i]-k);
                tf[i] = true;

                dfs(t+1);

                sum-=(kit[i]-k);
                tf[i] = false;
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++) cin >> kit[i];
    
    dfs(0);
    cout << ac;
}