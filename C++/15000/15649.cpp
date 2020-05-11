#include <iostream>
using namespace std;
#define MAX 8

int n, m;
bool tf[MAX];
int arr[MAX];

int dfs(int k) {
    if(k==m) {
        for(int i=0; i<m; i++) {
            printf("%d ", arr[i]);
        }
        puts("");
    } else {
        for(int i=0; i<n; i++) {
            if(!tf[i]) {
                arr[k] = i+1;
                tf[i] = true;
                dfs(k+1);
                tf[i] = false;
            }
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;
    dfs(0);
}