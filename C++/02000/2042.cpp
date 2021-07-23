#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int N, M, K;
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

long long sum(vector<long long>&tree, int Start, int End, int node, int left, int right) {
    if(left > End || right < Start) {
        return 0;
    }
    if(left <= Start && right >= End) {
        return tree[node];
    }
    return sum(tree, Start, (Start+End)/2, node*2, left, right) + sum(tree, (Start+End)/2+1, End, node*2+1, left, right);
}

int prnArr(vector<long long>&tree) {
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

    cin >> N >> M >> K;
    int H = (int)ceil(log2(N));

    vec.resize(N, 0);
    tree.resize(1<<(H+1), 0);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    init(tree, vec, 0, N-1, 1);

    for(int i=0; i<M+K; i++) {
        int A, B;
        cin >> A >> B;

        if(A == 1) {
            long long C;
            cin >> C;
            B--;
            update(tree, 0, N-1, 1, B, C - vec[B]);
            vec[B] = C;
        } else if(A == 2) {
            int C;
            cin >> C;
            cout << sum(tree, 0, N-1, 1, B-1, C-1) << "\n";
        }
    }
    return 0;
}