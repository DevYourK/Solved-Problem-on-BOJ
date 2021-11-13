#include <iostream>
using namespace std;

double pi = 3.141592;

int main() {
    int N, M;
    cin >> N >> M;

    double length = 2*N + 2*M*pi;
    
    cout << fixed;
    cout.precision(6);

    cout << length;
}