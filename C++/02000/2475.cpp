#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num;
    int check=0;

    for(int i=0; i<5; i++) {
        cin >> num;
        check += pow(num, 2);
    }

    cout << check%10;
}