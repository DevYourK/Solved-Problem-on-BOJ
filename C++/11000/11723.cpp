#include <iostream>
#include <vector>
using namespace std;

vector <bool>vec(20);

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int M;
    cin >> M;

    for(int i=0; i<M; i++) {
        int input;
        string s;
        cin >> s;
        
        if (s == "add"){
            cin >> input;
            if(vec[input-1] == false) {
                vec[input-1] = true;
            }
        }
        if (s == "remove"){
            cin >> input;
            if(vec[input-1] == true) {
                vec[input-1] = false;
            }
        }

        if (s == "all"){
            vec.clear();
            vec.resize(20, true);
        }
        if (s == "empty"){
            vec.clear();
            vec.resize(20, false);
        }

        if (s == "toggle"){
            cin >> input;
            if(vec[input-1]) {
                vec[input-1] = false;
            } else {
                vec[input-1] = true;
            }
        }
        if (s == "check"){
            cin >> input;
            cout << vec[input-1] << "\n";
        }
        
    }
}