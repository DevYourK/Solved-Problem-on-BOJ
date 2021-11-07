#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> vec(10, 0);

    for(auto c : s) {
        int num = c - '0';
        if(num == 6 && vec[num] >= vec[9]) {
            vec[9]++;
        }
        else if(num == 9 && vec[num] >= vec[6]) {
            vec[6]++;
        }
        else {
            vec[num]++;
        }
    }


    sort(vec.begin(), vec.end());
    cout << vec[9];
}
