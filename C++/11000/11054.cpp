#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    vector<int> dp_higher(N, 1);
    vector<int> dp_lower(N, 1);

    for(int i=0; i<N; i++) {
        cin >> vec[i];
    }

    for(int i=0; i<N; i++) {
        int v=0;
        for(int j=0; j<=i; j++) {
            if(vec[j]<vec[i] && v<dp_higher[j]) {
                v=dp_higher[j];
            }
        }
        dp_higher[i] = v+1;
    }

    for(int i=0; i<N; i++) {
        int v=0;
        for(int j=0; j<=i; j++) {
            if(vec[N - 1 - j] < vec[N - 1 - i] && v < dp_lower[N - 1 - j]) {
                v=dp_lower[N - 1 - j];
            }
        }
        dp_lower[N - 1 - i] = v+1;
    }

    int max = 0;

    for(int i=0; i<N; i++) {
        max = (dp_higher[i] + dp_lower[i] > max)?dp_higher[i] + dp_lower[i] - 1:max;
    }

    cout << max << "\n";
}