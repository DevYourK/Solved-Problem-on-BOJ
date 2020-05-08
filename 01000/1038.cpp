#include <iostream>
#include <queue>
using namespace std;

int n, count;
queue<unsigned long long> Que;

int fall() {
    unsigned long long x = Que.front();
    Que.pop();

    for(unsigned long long i=0; i<(x%10); i++) {
        if(count <= n) {
            Que.push(x*10 + i);
            count++;
        } else {
            break;
        }
    }

    return 0;
}

int main() {
    cin >> n;

    if(n>1022) {
        cout << -1;
    } else if(n>10) {
        for(count=0; count<=9; count++) {
            Que.push(count);
        }

        while(count <= n) {
            fall();
        }

        cout << Que.back();
    } else {
        cout << n;
    }
}