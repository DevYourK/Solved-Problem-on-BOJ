#include <iostream>
using namespace std;

int arr[1000000]={1,0,};

int main() {
    int n, m;
    cin >> n >> m;

    for(int i=2; i<=m; i++) {
        if(arr[i-1]>=0) {
            arr[i-1]=i;
            for(int k=2; k*i<=m; k++) {
                arr[(k*i)-1]=-1;
            }
            if(i>=n) {
                printf("%d\n", i);
            }
        }
    }
}