#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(nullptr);
    
    int num = 665;
    int cnt = 0;
    int N;

    cin >> N;

    while(1) {
        num++;
        if(to_string(num).find("666")!=-1) {
            cnt++;
        }

        if(cnt==N) {
            cout << num;
            return 0;
        }
    }
}