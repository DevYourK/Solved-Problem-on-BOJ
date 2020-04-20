#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long x, sum, i_length;
    cin >> x;

    long length = to_string(x).length();
    char num[10];

    for(long i=x-length*9; i<=x; i++) {
        if(i>0) {
            sprintf(num, "%ld", i);
            i_length = to_string(i).length();
            sum=i;

            for(long x=0; x<i_length; x++) {
                sum+=num[x]-'0';
            }
            if(sum==x) {
                cout << i;
                break;
            }
        }
    }
    if(sum!=x) {
        cout << 0;
    }
}