#include <iostream>
using namespace std;

int main() {
    int count=0, max=0, in, out;

    for(int i=0; i<4; i++) {
        cin >> out >> in;
        
        count = count-out;
        max = (count>max)?count:max;
        
        count = count+in;
        max = (count>max)?count:max;
    }

    cout << max;
}