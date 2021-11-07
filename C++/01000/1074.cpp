#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, R, C;
    cin >> N >> R >> C;

    int num = (int)pow(4, N);

    int x = (int)pow(2, N);
    int y = (int)pow(2, N);

    while(N!=0) {
        //1/4
        if(x/2>=R && y/2>=R) num = num/4; 
        //2/4
        if(x/2<=R && y/2>=R) num = num/4*2; 
        //3/4
        if(x/2>=R && y/2<=R) num = num/4*3; 
        //4/4
        if(x/2<=R && y/2<=R) num = num;
        
        N--; 
    }

    cout << num;
}