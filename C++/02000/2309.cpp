#include <iostream>
#include <algorithm>
using namespace std;

int length[9];
bool check[9];
int len;
bool ext;

int fun(int k) {
    if(k==2) {
        if(len==100) {
            ext = true;
            return 0;
        }
    } else {
        for(int i=0; i<9; i++) {
            if(check[i]==0) {
                check[i]=1;
                len -= length[i];
                fun(k+1);
                if(ext) {
                    return 0;
                }
                check[i]=0;
                len += length[i];
            }
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    for(int i=0; i<9; i++) {
        cin >> length[i];
        len += length[i];
    }

    sort(length, length+9);
    fun(0);

    for(int i=0; i<9; i++) {
        if(check[i]==0) {
            cout << length[i] << endl;
        }
    }
}