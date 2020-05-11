#include <iostream>
using namespace std;

int main() {
    int x[5];
    for(int i=0; i<5; i++) {
        cin >> x[i];
        x[i] = (x[i]>=40) ? x[i] : 40;
    }
    
    cout << (x[0]+x[1]+x[2]+x[3]+x[4])/5 << endl;
}