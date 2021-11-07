#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector <long long>vec;
vector <long long>tree;

long long init(int st, int ed, int no) {
    if(st==ed) {
        return tree[no] = vec[st];
    }

    return tree[no] = init(st, (st+ed)/2, no*2) + init((st+ed)/2+1, ed, no*2+1);
}

long long update(int st, int ed, int no, int idx, long long val) {
    if(!(st<=idx && idx <=ed)) return tree[no];
    if(st == ed) return tree[no] = val;

    return tree[no] = update(st, (st+ed)/2, no*2, idx, val) + update((st+ed)/2+1, ed, no*2+1, idx, val);
}

long long sum(int st, int ed, int no, int le, int ri) {
    if(le > ed || ri < st) {
        return 0;
    }
    if(le <= st && ed <= ri) {
        return tree[no];
    }

    return sum(st, (st+ed)/2, no*2, le, ri) + sum((st+ed)/2+1, ed, no*2+1, le, ri);
}

long long prnArr() {
    for(int j=0; j<tree.size(); j++) {
        cout << tree[j] << " ";
    }
    cout << "\n";
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vec.resize(N);
    tree.resize(1<<(((int)ceil(log2(N)))+1));

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    init(0, N-1, 1);
    for(int i=0; i<M; i++) {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        //prnArr();

        if(x>y) {
            cout << sum(0, N-1, 1, y-1, x-1) << "\n";
        } else {
            cout << sum(0, N-1, 1, x-1, y-1) << "\n";
        }

        update(0, N-1, 1, a-1, b);
    }
}