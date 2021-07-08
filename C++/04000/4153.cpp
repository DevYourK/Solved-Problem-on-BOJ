#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while(1) {
        vector <int>vec;
        int A, B, C;
        cin >> A >> B >> C;
        
        if(A==0 and B==0 and C==0) {
            break;
        } else {
            vec.push_back(A);
            vec.push_back(B);
            vec.push_back(C);
            sort(vec.begin(), vec.end());

            if((vec[2]*vec[2]) == (vec[0]*vec[0])+(vec[1]*vec[1])) {
                cout << "right\n";
            } else {
                cout << "wrong\n";
            }
        }
    }
}