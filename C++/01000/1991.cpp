#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int>tree(1<<((int)ceil(log2(N))+1));
    
    cout << (1<<((int)ceil(log2(N))+1));
    
    /*
    for(int i=0; i<tree.size(); i++) {
        cout << tree[i] << " ";
    }
    */
}