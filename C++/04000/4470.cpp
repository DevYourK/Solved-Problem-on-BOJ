#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    
    for(int i=0; i<N; i++) {
        string s;
        getline(cin, s);

        cout << i + 1 << ". " << s << "\n";
    }
}