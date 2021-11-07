#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(10);
    for(int i=0; i<N; i++) {
        for(int j=0; j<10; j++) cin >> arr[j];
        sort(arr.begin(), arr.end());
        cout << arr[7] << "\n";
    }
}