#include <iostream>
using namespace std;

int main() {
    int X;
    int Y[3];
    int P;

    cin >> X >> Y[0] >> Y[1] >> Y[2] >> P;

    int Xcost = P*X;
    int Ycost = Y[0];

    if(Y[1] < P) {
        Ycost += Y[2] * (P - Y[1]);
    }

    cout << (Xcost<Ycost?Xcost:Ycost) << endl;
}