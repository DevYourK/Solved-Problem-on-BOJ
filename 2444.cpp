#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for(int i=0; i<a-1; i++){
        for(int x=0; x<a-i-1; x++) cout << " ";
        for(int x=0; x<2*i+1; x++) cout << "*";
        cout << "\n";
    }
    for(int i=0; i<a; i++){
        for(int x=0; x<i; x++) cout << " ";
        for(int x=0; x<(2*a)-(i*2+1); x++) cout << "*";
        cout << "\n";
    }
    
    return 0;
}