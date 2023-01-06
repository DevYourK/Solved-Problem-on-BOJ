#include <iostream>
using namespace std;

int main() {
    int loss = 0;
    while(1) {
        int money;
        cin >> money;

        if(money == -1) break;
        loss += money;
    }
    
    cout << loss;
}