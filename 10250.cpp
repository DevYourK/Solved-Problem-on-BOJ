#include <iostream>
using namespace std;

int main() {
    int a, on;
    cin >> a;

    while(a>0) {
        int in[3], room, f=0, cnt=0;
        cin >> in[0] >> in[1] >> in[2];
        
        f=in[2];
        //floor
        while(f>0) {
            f-=in[0];
            cnt++;
        }

        cnt-=1; //오차계산
        room=((in[2]-(in[0]*cnt))*100)+1;
        cout << room+cnt << endl;
        a--;
    }
}