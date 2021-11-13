#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> sci(4,0);
    int mun = 0;

    for(int i=0; i<4; i++) {
        cin >> sci[i];
    }
    for(int i=0; i<2; i++) {
        int N;
        cin >> N;
        mun = (mun>N)?mun:N;
    }

    sort(sci.begin(), sci.end());
    
    cout << sci[3] + sci[2] + sci[1] + mun;
}