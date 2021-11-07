#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <vector<pair<int,int>>>rec(2, vector<pair<int,int>>(2, pair<int,int>(0,0)));

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            int N, M;
            cin >> N >> M;

            rec[i][j] = pair<int,int>(N, M);
        }
    }

    //POINT
    if(rec[0][1] == rec[1][0]) {
        cout << "POINT";
        return 0;
    }
    
}