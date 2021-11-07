#include <iostream>
#include <vector>
using namespace std;

vector <int> tree;

int main() {
    while(!cin.eof()) {
        int N;
        cin >> N;
        tree.push_back(N);
    }
    for(auto k : tree) {
        cout << k << '\n';
    }
}