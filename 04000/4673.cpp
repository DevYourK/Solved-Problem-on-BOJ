#include <iostream>
using namespace std;

int k[10000];

int check (int self) {
    int x = self;
    while(self>0) {
        x+=(self)%10;
        self/=10;
    }
    return x;
}

int main() {
    for(int i=1; i<=10000; i++) {
        if(check(i)<=10000) {
            k[check(i)-1] = true;
        }
        if(k[i-1] != true) cout << i << endl;
    }
}