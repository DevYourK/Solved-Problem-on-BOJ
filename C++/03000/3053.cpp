#include <iostream>
#define pi 3.14159265358979323846
using namespace std;

int main() {
    int x;
    cin >> x;

    cout.precision(6);
    cout << fixed;
    
    //Euclid-Circle-S
    cout << x*x*pi << "\n";
    //Taxi-Circle-S
    cout << ((x*2)*(x*2))/2 << "\n";
}