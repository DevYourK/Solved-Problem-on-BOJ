#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for(int i=0; i<a; i++) {
        for(int x=0; x<a-1-i; x++) cout << " ";
        for(int x=0; x<i+1; x++) cout << "* ";
        cout << "\n";
    }
    
    return 0;
}