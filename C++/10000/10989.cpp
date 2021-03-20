#include <iostream>
using namespace std;

int arr[10001];

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;

        arr[x-1]++;
    }


    for(int i=0; i<10000; i++) {
        //cout << arr[i] << endl;
        for(int j=0; j<arr[i]; j++) {
            if(arr[i]!=0){
                cout << i+1 << '\n';
            }
        }
    }
}