#include <iostream>
#include <string>
using namespace std;

int main() {
    int in[3];
    int k[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    cin >> in[0] >> in[1] >> in[2];

    int m = in[0]*in[1]*in[2];

    while(m>0) {
        k[m%10]++;
        m/=10;
    }
    
    for (int i=0; i<10; i++) {
        cout << k[i] << endl;
    }

}