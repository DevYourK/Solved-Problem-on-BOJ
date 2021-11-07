#include <iostream>

int main() {
    int N, M, K, val;
    std::cin >> N >> M >> K;

    if(N == M && M == K) {
        //N=M=K
        val = 10000 + N*1000;
    }
    else if(N==M) {
        //N=M
        val = 1000 + N*100;
    }
    else if(M==K) {
        //M=K
        val = 1000 + M*100;
    }
    else if(N==K) {
        //N=K
        val = 1000 + N*100;
    }
    else {
        //세 눈이 다 같지 않음
        val = ((N>M)?((N>K)?N:K):((M>K)?M:K)) * 100;
    }
    std::cout << val;
}