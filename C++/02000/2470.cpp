#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> vec(N);
    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    sort(vec.begin(), vec.end());

    auto A = vec.begin();
    auto B = vec.end()-1;
    
    int min = 2000000000;
    pair<int, int> ANS = pair<int,int>(*A, *B);

    while(A!=B) {
        int S = *A+*B;
        if (S==0) {
            cout << *A << " " << *B;
            return 0;
        }
        if(S>0) {
            if(min>S) {
                min = (S>0)?S:-S;
                ANS = pair<int,int>(*A, *B);
            }
            B--;            
        }
        if(S<0) {
            if(min>-S) {
                min = -S;
                ANS = pair<int,int>(*A, *B);
            }
            A++;
        }
    }
    cout << ANS.first << " " << ANS.second;
}