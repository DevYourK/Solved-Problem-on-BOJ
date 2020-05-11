#include <iostream>
using namespace std;
#define MAX 7

int n, m;
int arr[MAX];

int dfs(int k) {
    if(k==m) {
        for(int i=0; i<m; i++) {
            printf("%d ", arr[i]);
        }
        puts("");
    } else {
        for(int i=0; i<n; i++) {
            arr[k] = i+1;
            dfs(k+1);
        }
    }
    return 0;
}

int main() {
    cin >> n >> m;
    dfs(0);
}