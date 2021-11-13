#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    cout << ((N==2)?((M==18)?"Special":(M>18)?"After":"Before"):(N>2)?("After"):("Before")) << '\n';
}