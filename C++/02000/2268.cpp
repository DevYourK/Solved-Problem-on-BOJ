#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, M;
vector <long long>vec, tree;

long long init(vector<long long>&tree, vector<long long>&vec, int Start, int End, int node) {
    if(Start==End) {
        return tree[node] = vec[Start];
    } else {
        return tree[node] = init(tree, vec, Start, (Start+End)/2, node*2) + init(tree, vec, (Start+End)/2+1, End, node*2+1);
    }
}

int update(vector<long long>&tree, int Start, int End, int node, int index, long long di) {
    if(index < Start || index > End) return 0;

    tree[node] += di;
    if(Start != End) {
        update(tree, Start, (Start+End)/2, node*2, index, di);
        update(tree, (Start+End)/2+1, End, node*2+1, index, di);
    }
    return 0;
}

long long Sum(vector<long long>&tree, int Start, int End, int node, int left, int right) {
    if(left > End || right < Start) {
        return 0;
    }
    if(left <= Start && right >= End) {
        return tree[node];
    }
    return Sum(tree, Start, (Start+End)/2, node*2, left, right) + Sum(tree, (Start+End)/2+1, End, node*2+1, left, right);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N >> M;

    int H = (int)ceil(log2(N));
    vec.resize(N, 0);
    tree.resize(1<<(H+1));
    init(tree, vec, 0, N-1, 1);

    for(int i=0; i<M; i++) {
        int A, B, C;
        cin >> A >> B >> C;

        if(A==0) {
            //Sum
            if(B<C) {
                cout << Sum(tree, 0, N-1, 1, B-1, C-1) << "\n";
            } else {
                cout << Sum(tree, 0, N-1, 1, C-1, B-1) << "\n";
            }
        }
        if(A==1) {
            //Modify
            long long diff = C - vec[B-1];
            vec[B-1] = C;
            update(tree, 0, N-1, 1, B-1, diff);
        }
    }
}