#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector <int>vec(3, 0);

    for(int i=0; i<3; i++) {
        cin >> vec[i];
        sum += vec[i];
    }

    if(sum>=100) {
        cout << "OK";
    } else {
        pair<int,int> min = {100, 0};
        for(int i=0; i<3; i++) {
            if(vec[i]<min.first) {
                min.first = vec[i];
                min.second = i;
            }
        }

        cout << ((min.second==0)?("Soongsil"):(min.second==1)?("Korea"):("Hanyang"));
    }
}