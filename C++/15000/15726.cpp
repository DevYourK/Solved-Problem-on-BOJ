#include <iostream>
#define def(a, b) (a>b)?a:b
using namespace std;

int main() {
    int A, B, C;
    double max = 0;

    cin >> A >> B >> C;

    max = def(((double)(A*B)/C), ((double)A/B)*C);

    //cout << (A*B)/C << " " << ((double)A/B)*C << "\n";
    cout << (int)max << '\n';
}