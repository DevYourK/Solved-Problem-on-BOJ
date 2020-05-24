#include <iostream>
using namespace std;

int main() {
    int N, M=0, k, x;
    cin >> N;

    for(int i=1; i<=N; i++) {
        k=i;
        x=0;

        while(k) {
            x+=k%10;
            k/=10;
        }

        if(i%x==0) {
            M++;
        }
    }

    cout << M;
}