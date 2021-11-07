#include <iostream>
using namespace std;

bool arr[50];

int main() {
    int N, M;
    int Xcnt = 0, Ycnt = 0;
    cin >> N >> M;


    for(int i=0; i<N; i++) {
        string s;
        cin >> s;

        if(s.find("X") == string::npos) {
            Ycnt++;
        } else {
            for(int j=0; j<M; j++) {
                if(s[j] == 'X') {
                    arr[j] = true;
                }
            }
        }
    }    

    for(int i=0; i<M; i++) {
        if(arr[i] == 0) Xcnt++;
    }

    cout << ((Xcnt>Ycnt)?Xcnt:Ycnt);
}