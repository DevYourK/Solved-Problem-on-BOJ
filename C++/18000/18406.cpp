#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int in;
    int sum[2];
    cin >> in;

    int log = log10(in)+1;

    //1st
    sum[0] = 0;

    for(int i=0; i<log/2; i++) {
        sum[0] += (in%10);
        in/=10;
    }

    //2nd
    sum[1] = 0;

    for(int i=0; i<log/2; i++) {
        sum[1] += (in%10);
        in/=10;
    }

    if(sum[0] == sum[1]) {
        cout << "LUCKY";
    } else {
        cout << "READY";
    }
}