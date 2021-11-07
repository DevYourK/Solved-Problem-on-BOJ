#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> vec;


int main() {
    cin >> N;

    for(int i=0; i<N; i++) {
        int X;
        cin >> X;
        vec.push_back(X);
    }

    int MAX = 1;
    int L_CNT = 1;
    int H_CNT = 1;

    for(int i=1; i<N; i++) {
        if(vec[i-1]<=vec[i]) H_CNT++;
        else H_CNT = 1;
        MAX = (MAX>H_CNT)?MAX:H_CNT;

        if(vec[i-1]>=vec[i]) L_CNT++;
        else L_CNT = 1;
        MAX = (MAX>L_CNT)?MAX:L_CNT;
    }

    cout << MAX;

}