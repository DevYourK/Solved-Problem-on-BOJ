#include <iostream>

int main() {
    for(int i=0; i<3; i++) {
        int num = 0;
        for(int j=0; j<4; j++) {
            int v;
            std::cin >> v;
            num += v;
        }
        if(num==4) std::cout << "E";
        if(num==3) std::cout << "A";
        if(num==2) std::cout << "B";
        if(num==1) std::cout << "C";
        if(num==0) std::cout << "D";
        std::cout << "\n";
    }
}