#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int MX[4] = {1, -1, 0, 0};
int MY[4] = {0, 0, 1, -1};

vector<vector<int>> gawr;
vector<vector<int>> gura;

queue<pair<int,int>> chum;

int main() {
    int N;
    int maxTime = 0;
    cin >> N;

    gawr.resize(N, vector<int>(N));

    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cin >> gawr[i][j];
            if(gawr[i][j] == 9) chum.push(pair<int,int>(i,j));
        }
    }

    while(!chum.empty()) {
        int guraX = chum.front().first;
        int guraY = chum.front().second;
        chum.pop();

        for(int i=0; i<4; i++) {
            int guraMX = guraX + MX[i];
            int guraMY = guraY + MY[i];

            if(guraMX >= 0 && guraMX < N && guraMY >=0 && guraMY < N) {
                
            }
        }
    }

    cout << maxTime;
}