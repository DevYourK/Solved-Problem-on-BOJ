#include <iostream>
#include <cmath>
using namespace std;

int arr[14][15] = {0,};

int main() {
    int T;
    cin >> T;
    arr[0][1] = 1;

    for(int i=0; i<15; i++) {
        for(int j=1; j<15; j++) {
            if(i==0) {
                arr[0][j] = arr[0][j-1] + j;
            } else {
                arr[i][j] = arr[i-1][j] + arr[i][j-1];
            }
        }
    }


    for(int i=0; i<T; i++) {
        int K, N;
        cin >> K >> N;

        cout << arr[K][N] - arr[K][N-1] << "\n";
    }
}