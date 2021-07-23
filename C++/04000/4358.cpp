#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int sizes;
vector<string> vec;
unordered_map<string,int> maps;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout << fixed;
    cout.precision(4);
    cout.setf(ios::showpoint);
    
    while(1) {
        string s;
        getline(cin, s);
        if(cin.eof()) break;
        vec.push_back(s);
        maps[s]++;
        sizes++;
    }
    
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()),vec.end());

    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << " " << ((float)(maps[vec[i]])/sizes)*100 << "\n";
    }
}