#include <iostream>
#include <vector>
using namespace std;

string bin(int N) {
    string s;
    vector <int>vec;
    while(N!=0) {
        vec.push_back(N%2);
        N = N/2;
    }

    vec.erase(vec.end());

    for(auto i=vec.end(); i!=vec.begin(); i--) {
        if((*i)==0) {
            s += '7';
        } else if((*i)==1) {
            s += '4';
        }
    }

    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int K;
    cin >> K;

    cout << bin(K+1);
}