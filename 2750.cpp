#include <iostream>
using namespace std;

int main() {
    int a, min, max;
    cin >> a;
    int b[1000];
    
    for(int i=0; i<a; i++) {
        cin >> b[i];
    }

    for(int i=0; i<a; i++) {
        for(int x=0; x<a-1-i; x++) {
            if(b[x] > b[x+1]) {
                min = b[1+x];

                b[x+1]=b[x];
                b[x]=min;
            }
        }
    }
    for(int i=0; i<a; i++) {
        cout << b[i] << endl;
    }
}