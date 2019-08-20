#include <iostream>
using namespace std;

int main() {
    int a, b=0, c, i=1;
    cin >> a;
    c = a; a = (a%10)*10 + (((a/10)+(a%10))%10);
    while(a != c) {
        a = (a%10)*10 + (((a/10)+(a%10))%10);
        i++;
    }

    cout << i;
}