#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    if(N < M || (N-M)%2 == 1) {
        std::cout << -1;
    } else {
        std::cout << (N+M)/2 << " " << (N-M)/2;
    }
}