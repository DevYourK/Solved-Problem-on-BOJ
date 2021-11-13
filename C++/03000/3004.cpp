#include <iostream>

int main() {
    int N, a=1, b=1;
    std::cin >> N;
    while(N--) {
        if(N%2) {
            b++;
        } else {
            a++;
        }
    }
    std::cout << a*b;
}