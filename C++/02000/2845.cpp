#include <iostream>
using namespace std;

int main() {
    int L, P;
    cin >> L >> P;
    
    int arr[5];
    for(int i=0; i<5; i++) cin >> arr[i];

    int K = L * P;
    for(int i=0; i<5; i++) cout << arr[i]-K << " ";
}