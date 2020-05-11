#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    for(int i=0; i<a; i++) {
        if(i%2!=0){
            cout << " ";
        }
        for(int x=0; x<a; x++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}