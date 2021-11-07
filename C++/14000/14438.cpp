#include <algorithm>
#include <iostream>
#include <vector>
#define A_MAX 1000000000
using namespace std;

vector <int>vec(100001);
vector <int>tree(400000);

int init(int st, int ed, int no) {
    if(st == ed) {
        return tree[no] = vec[st];
    } else {
        int mid = (st+ed)/2;
        return tree[no] = min(init(st, mid, no*2), init(mid+1, ed, no*2+1));
    }
}

int update(int st, int ed, int no, int idx, int val) {
    if(st>idx || ed<idx) {
        return tree[no];
    }

    if(st == ed) {
        return tree[no] = val;
    }
    
    int mid = (st+ed)/2;
    return tree[no] = min(update(st, mid, no*2, idx, val), update(mid+1, ed, no*2+1, idx, val));
    
}

int query(int st, int ed, int no, int le, int ri) {
    if(le>ed || ri<st) {
        return A_MAX;
    }
    if(le<=st && ed <= ri) {
        return tree[no];
    }
    int mid = (st+ed)/2;
    return min(query(st, mid, no*2, le, ri), query(mid+1, ed, no*2+1, le, ri));
}

int prnTree(vector<int>&tree){
    for(int i=0; i<tree.size(); i++) {
        cout << tree[i] << " ";
    }
    cout << "\n";
    return 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    init(0, N-1, 1);
    //prnTree(tree);

    int M;
    cin >> M;
    for(int i=0; i<M; i++) {
        int A;
        cin >> A;

        //query 1 -> Change A[i] to v
        if(A==1) {
            int idx, val;
            cin >> idx >> val;

            vec[idx-1] = val;
            update(0, N-1, 1, idx-1, val);
        }
        //query 2 -> print min number
        if(A==2) {
            int le, ri;
            cin >> le >> ri;
            cout << query(0, N-1, 1, le-1, ri-1) << "\n";
        }
    }
}