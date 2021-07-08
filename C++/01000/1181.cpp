#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <string>vec;
int N;

int words(string a, string b){
    if(a.length() < b.length()) {
        return true;
    } else if (a.length() == b.length()) {
        int x=0;
        while(x!=a.length()) {
            if(a[x]-'0' > b[x]-'0') {
                return false;
            } else if(a[x]-'0' < b[x]-'0') {
                return true;
            }
            x++;
        }
        return false;
    } else {
        return false;
    }
}

int main() {
    cin >> N;
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;
        vec.push_back(s);
    }

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());

    sort(vec.begin(), vec.end(), words);

    for(int i=0; i<vec.size(); i++) {
        cout << vec[i] << "\n";
    }

    return 0;
}