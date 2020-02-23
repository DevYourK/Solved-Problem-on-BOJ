#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    long long int b[a];
    b[0]=0, b[1]=1;
    
    for(int i=1; i<a; i++) {
        b[i+1] = b[i-1] + b[i];
    }
    
    cout << b[a];
}