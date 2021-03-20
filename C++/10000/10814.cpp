#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
short age;
string name;
vector <pair<short,string>> list;

bool fun(pair<short,string> fst, pair<short,string> snd) {
    return fst.first < snd.first;
}

int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> age >> name;
        list.push_back({age, name});
    }

    stable_sort(list.begin(), list.begin()+N, fun);

    for(int i=0; i<N; i++) {
        cout << list[i].first << " " << list[i].second << "\n";
    }
}