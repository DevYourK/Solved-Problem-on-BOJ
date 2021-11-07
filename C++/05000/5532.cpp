#include <iostream>

int main() {
    int L, A, B, C, D;
    std::cin >> L >> A >> B >> C >> D;
    A = (A%C>0)?(A/C)+1:A/C;
    B = (B%D>0)?(B/D)+1:B/D;
    //std::cout << A << " " << B << "\n";
    std::cout << ((A>B)?L-A:L-B);
}