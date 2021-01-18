#include <iostream>
using namespace std;

int cost[1000][3];
int n, min_v=1000000;

int low(int c, int val) {
    if(c==(n-1)) {
        min_v = (min_v>val)?(val):(min_v);
    } else {

    }
}

int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }

}