#include <iostream>
#include <stack>
#include <vector>
using namespace std;

stack <pair<int,int>>list;
vector <int>vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    vec.resize(N, 0);

    for(int i=0; i<N; i++) {
        cin >> vec[i];

        while(!list.empty()) {
            if(list.top().second > vec[i]) {
                cout << list.top().first+1 << " ";
                break;
            }
            list.pop();
        }

        if(list.empty()) {
            cout << "0 ";
        }

        list.push(pair<int,int>(i, vec[i]));
    }

}