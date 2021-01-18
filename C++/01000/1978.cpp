#include <iostream>
#include <math.h>
using namespace std;

bool prime[1000]={1, };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    for(int i=2; i<1000; i++) {
        if(!prime[i-1]) {
            for(int j=2; j*i<=1000; j++) {
                prime[(j*i)-1] = true;
            }
        }
    }

    int T, count=0;
    cin >> T;

    for(int i=0; i<T; i++) {
        int num;
        cin >> num;
        count += (prime[num-1]==true) ? 0 : 1;
    }

    cout << count;
}