#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int x;
int y;
vector <pair<int,int>> list;

bool fun_a(pair<int,int> fst, pair<int,int> snd) {
    if(fst.first < snd.first) {
        return true;
    } else if(fst.first == snd.first) {
        if(fst.second < snd.second){
            return true;
        } else {
            return false;
        }
    } else {
        return 0;
    }
}


int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        cin >> x >> y;
        list.push_back({x, y});
    }

    sort(list.begin(), list.end(), fun_a);

    for(int i=0; i<N; i++) {
        cout << list[i].first << " " << list[i].second << "\n";
    }
}