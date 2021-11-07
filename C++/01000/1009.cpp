#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        ios::sync_with_stdio(0);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int A, B;
        cin >> A >> B;

        int K;

        switch(A%10) {
            case 0:
                cout << 10 << "\n";
            case 1:
            case 5:
            case 6:
                cout << A%10 << "\n";
            break;

            case 4:
            case 9:
                K = (B%2==0)?2:1;
                cout << (int)pow(A, K)%10 << "\n";
            break;
            
            default:
                K = (B%4==0)?4:B%4;
                cout << (int)pow(A, K)%10 << "\n";
        }
    }
}