#include <iostream>
using namespace std;
int arr[100000];
int sarr[100000];
int n, cases;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);
    
    cin >> n >> cases;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        sarr[i+1] = sarr[i] + arr[i];
    }
    
    for(int i=0; i<cases; i++) {
        int start, end;
        cin >> start >> end;
        cout << sarr[end]-sarr[start-1] << "\n";
    }
}