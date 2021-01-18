#include <iostream>
#include <math.h>
using namespace std;

bool pow_num[10000000];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    unsigned long long min, max;
    cin >> min >> max;

    unsigned count = max-min+1;
    int n_max = max-min;

    for(unsigned long long i=2; i*i<=max; i++) {
        unsigned long long pow = i*i;
        unsigned long long s = ((min-1)/pow+1)*pow;

        for(unsigned long long j=s; j<=max; j+=pow) {
            pow_num[j-min] = true;
        }
    }

    // 조건에 맞는 중복수에 대해 총 값에서 디스카운트
    for(int j=0; j<n_max+1; j++) {
        if(pow_num[j]) {
            count--;
        }            
    }

    cout << count;
}