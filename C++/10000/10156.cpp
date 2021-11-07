#include <iostream>

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;
    std::cout << (((N*M)-K>0)?(N*M)-K:0);
}