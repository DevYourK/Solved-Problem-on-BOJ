#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, I;
    cin >> A >> I;

    for(int i=A*(I-1); i<A*(I+1); i++) {
        if(I<=(int)ceil((double)i/A)) {
            cout << i;
            break;
        }
    }

}