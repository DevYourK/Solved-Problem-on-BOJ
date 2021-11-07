#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec(5, 0);
    cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];

    for(int i=1; i<=970200; i++) {
        int cnt = 0;
        for(int j=0; j<5; j++) {
            if(i%vec[j] == 0) {
                cnt++;
            }
        }
        if(cnt>=3) {
            cout << i;
            return 0;
        }
    }
}