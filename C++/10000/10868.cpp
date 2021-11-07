#include <iostream>
#include <vector>
#include <cmath>
#define MAX(A, B) (A>B)?A:B
#define MIN(A, B) (A>B)?B:A
using namespace std;

vector<int> vec;
vector<int> tree_min;

int min_init(int st, int ed, int no) {
    if(st==ed) {
        return tree_min[no] = vec[st];
    }
    int L = min_init(st, (st+ed)/2, no*2), R = min_init((st+ed)/2+1, ed, no*2+1);
    return tree_min[no] = MIN(L, R);
}

int min_query(int st, int ed, int no, int le, int ri) {
    if(le > ed || ri < st) {
        return 1000000000;
    }
    if(le<=st && ri>=ed) {
        return tree_min[no];
    }
    int L = min_query(st, (st+ed)/2, no*2, le, ri), R = min_query((st+ed)/2+1, ed, no*2+1, le, ri);
    return MIN(L, R);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int N, M, H;
    cin >> N >> M;

    vec.resize(N);
    H = (int)ceil(log2(N));

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    tree_min.resize(1<<(H+1));
    min_init(0, N-1, 1);

    for(int i=0; i<M; i++) {
        int le, ri;
        cin >> le >> ri;

        cout << min_query(0, N-1, 1, le-1, ri-1) << "\n";
    }   
}