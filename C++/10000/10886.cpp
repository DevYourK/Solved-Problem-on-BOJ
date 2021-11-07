#include <iostream>

int main() {
    int N, cnt = 0;
    std::cin >> N;

    for(int i=0; i<N; i++) {
        int K;
        std::cin >> K;
        cnt = (K==0)?cnt-1:cnt+1;
    }
    std::cout << "Junhee is " << ((cnt>0)?"":"not ") << "cute!"; 
}