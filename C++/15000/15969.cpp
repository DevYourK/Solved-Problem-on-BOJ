#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b[a+1];
    
    for(int i=0; i<a; i++) cin >> b[i];
    
    b[a]=b[0]; b[a+1]=b[0];
    
    for(int i=1; i<a; i++)
    {
        if(b[i] != b[a] && b[i] != b[a+1]) {
            if(b[i] > b[a+1]) {
                b[a+1] = b[i];
            } else if(b[i] < b[a]) {
                b[a] = b[i];
            }
        }
    }
    
    cout << b[a+1]-b[a];
}