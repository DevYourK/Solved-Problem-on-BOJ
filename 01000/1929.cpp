#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int arr[b], c=2;

    for(int i=0; i<b-a; i++) {
        arr[i] = a+i;
    }
    for(int i=2; i<=b; i++) {
        for(int x=1; x*i<=b; x++) {
            cout << x*i << endl;
            cout << (x+1)*i-1  << endl;
            arr[(x+1)*i-1] = 0;
        }
    }
    for(int i=a; i<b-a; i++) {
        cout << arr[i] << endl;
    }
}