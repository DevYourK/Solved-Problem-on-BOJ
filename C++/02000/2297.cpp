#include <iostream>
using namespace std;
int N;
int cnt=1, se=1;

int runn() {
    while(1) {   
        if (N<=se) {
            return cnt;
        }       
        se += (6*cnt);
        cnt++;
    }
}

int main() {
    cin >> N;
    cout << runn();
}