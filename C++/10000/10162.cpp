#include <iostream>

int main() {
    int K;
    std::cin >> K;

    if((K%10)>0) {
        std::cout << -1;
    } else {
        std::cout << K/300 << " " << (K%300)/60 << " " << (K%300)%60/10;
    }
}