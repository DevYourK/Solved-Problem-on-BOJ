#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int>vec;
vector <int>dp;
int k;

int st(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }

    for(int i=0; i<vec.size(); i++) {
        int v=0;
        for(int j=0; j<=i; j++) {
            if(vec[j]>vec[i] && v<dp[j]) {
                v=dp[j];
            }
        }
        dp.push_back(v+1);
    }
    
    sort(dp.begin(), dp.end(), st);
    cout << dp[0];
}