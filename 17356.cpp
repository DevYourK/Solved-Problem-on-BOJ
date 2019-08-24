#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double a, b;
    cin >> a >> b;

    cout << fixed;
	cout.precision(20);
    cout << 1/(1+pow(10, ((b-a)/400)));
}