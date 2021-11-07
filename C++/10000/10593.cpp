#include <iostream>

int main() {
    int N;
    std::cin >> N;
    for(int i=0; i<N; i++) {
        std::string s;
        std::cin >> s;
        std::cout << s[0]-'0' + s[2]-'0' << "\n";
    }
}