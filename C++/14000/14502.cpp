#include <iostream>
#include <stack>
using namespace std;

int N, M;
int map[8][8];
int wall[8][8];
stack<int> virus;

int dfs() {

}

int main() {
    int v;

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> v;
            map[i][j] = v;
        }
    }
}