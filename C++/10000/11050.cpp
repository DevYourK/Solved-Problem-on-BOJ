#include <iostream>
#include <vector>
using namespace std;
vector <int>factorial;

int fac(int n) {
    if(factorial.size() < n+1) {
        for(int i=2; i<n; i++) {
            factorial.push_back((i+1)*fac(i));
        }
        return factorial[n];
    } else {
        return factorial[n];
    }
}


int main() {
    int N, K;
    cin >> N >> K;
    factorial.push_back(0);
    factorial.push_back(1);
    factorial.push_back(2);
    fac(N);

    if(N==K or K==0) {
        cout << 1;
    } else {
        cout << (fac(N)/(fac(N-K)*fac(K)));
    }
}
