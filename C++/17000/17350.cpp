#include <iostream>
using namespace std;

int main() {
    int a, b=0;
    string s;

    cin >> a;
    while(a>0) {
        cin >> s;
        if(s=="anj") {
            b++;
        }
        a--;
    }

    if(b>0) {
        cout << "뭐야;" << endl;
    } else {
        cout << "뭐야?" << endl;
    }

    return 0;
}