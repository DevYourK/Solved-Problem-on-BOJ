#include <iostream>
using namespace std;

int main() {
    int a, b=0;
    char c[100] = {0,};
    
    cin >> a;
    cin >> c;
    
    for(int i=0; i<a; i++) b += (c[i]-'0');
    
    cout << b;
    return 0;
}