#include <iostream>
using namespace std;

int i_case, n[100], m, sum=0, result=0;

int dfs(int k, int l) {
    if(k==3) {
        if(m>=sum) {
            result=(m==sum)?sum:(result>=sum)?result:sum;
        }
    } else {
        for(int i=l; i<i_case; i++) {
            //cout << k << " and " << i << endl;
            sum=sum+n[i];
            dfs(k+1, i+1);
            sum=sum-n[i];
        }
    }
    return 0;
}

int main() {
    cin >> i_case >> m;
    for(int i=0; i<i_case; i++) {
        cin >> n[i];
    }
    dfs(0, 0);
    printf("%d", result);
}