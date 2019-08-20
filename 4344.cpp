#include <iostream>
using namespace std;

int main(){
    double a, b, c[1000], d, e = 0;
    cin >> a;

    while(a>0) {
        cin >> b;
        for(int i=0; i<b; i++) {
            cin >> c[i];
        }
        d = 0;
        for(int i=0; i<b; i++) {
            d += c[i];
        }
        e = 0;
        for(int i=0; i<b; i++) {
            if(c[i]>d/b) {
                e++;
            }
        }
        
        cout << fixed;
	    cout.precision(3);
        cout << e/b*100 << "%" << endl;

        a--;
    }
}