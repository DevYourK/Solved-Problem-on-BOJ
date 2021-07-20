#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int N;
vector<pair<int,int>>vec;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(0);
    
    cin >> N;
    for(int i=0; i<N; i++) {
        int X1, X2, Y;
		cin >> X1 >> X2 >> Y;
		vec.push_back(pair<int,int>(X1,X2));
    }
	sort(vec.begin(), vec.end());
    
	int A1=-1, A2=-1, C1=-1, C2=-1, cnt=0, MAX=0;
    for(int i=0; i<N; i++) {
		int B1 = vec[i].first, B2 = vec[i].second;
		if(B1<=A2) {
            cnt++;
        } else {
            MAX = (MAX>cnt)?MAX:cnt;
            A1 = B1;
            A2 = B2;
            cnt = 1;
        }
    }
    cout << MAX;
}
