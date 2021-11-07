#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector <string>vec(N);
    vector <string>dbj;
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());
    for(int i=0; i<M; i++) {
        string s;
        cin >> s;

        if(binary_search(vec.begin(), vec.end(), s)) {
            dbj.push_back(s);
        }
    }

    cout << dbj.size() << "\n";
    sort(dbj.begin(), dbj.end());

    for(int i=0; i<dbj.size(); i++) {
        cout << dbj[i] << "\n";
    }
    return 0;
}