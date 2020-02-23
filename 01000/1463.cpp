#include <iostream>
using namespace std;

int count = 0;

int reCall(int x) {
    int k;
    
    if(x%3==0) {
        k=x/3;
        count+=1;
    } else if (x%3==1) {
        k=(x-1)/3;
        count+=2;
    } else if(x%2==0){
        k=x/2;
        count+=1;
    } else {
        k=x-1;
        count+=1;
    }

    return k;
}

int main() {
    int in;
    cin >> in;

    while(in!=1) {
        in = reCall(in);
    }

    cout << count;
}