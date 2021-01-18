#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int day, count=0;
    cin >> day;

    for(int i=0; i<5; i++) {
        int car;
        cin >> car;

        if(car==day) count++;        
    }

    cout << count;
}