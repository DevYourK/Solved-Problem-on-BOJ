#include <iostream>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    //1hour - 3600sec, 1min - 60sec

    A += D/3600;
    D %= 3600;

    B += D/60;
    D %= 60;

    C += D;

    if(C>59) {
        B++;
        C -= 60;
    }

    if(B>59) {
        A++;
        B -= 60;
    }

    if(A>23) {
        A %= 24;
    }

    std::cout << A << " " << B << " " << C;

}