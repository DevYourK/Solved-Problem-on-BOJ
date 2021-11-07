#include <iostream>

int main() {
    long long N, M;
    std::cin >> N >> M;

    std::cout << (((N-M)>0)?(N-M):-(N-M));
}