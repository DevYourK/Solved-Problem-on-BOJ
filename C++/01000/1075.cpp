#include <iostream>
using namespace std;

int main() {
    int N, F;
    cin >> N >> F;

    N = (N/100)*100;
    while(1) {
        if(N%F == 0) {
            break;
        }
        N++;
    }

    string s = to_string(N);
    cout << s[s.length()-2] << s[s.length()-1];
}