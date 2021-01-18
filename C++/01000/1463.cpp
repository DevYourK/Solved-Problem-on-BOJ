#include <iostream>
using namespace std;

int m_count=0, n_count=0;

int dfs(int num) {
    if(num==1) {
        m_count = (m_count>=n_count)?n_count:m_count;
    } else {
        if(num%3==0) {
            n_count++;
            dfs(num/3);
            n_count--;
        }
        if(num%2==0) {
            n_count++;
            dfs(num/2);
            n_count--;
        }
        if(num-1>=1) {
            n_count++;
            dfs(num-1);
            n_count--;
        }
    }

    return 0;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;    
    m_count = n;

    dfs(n);

    cout << m_count;
}