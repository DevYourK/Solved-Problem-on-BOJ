#include <iostream>
#include <stack>
using namespace std;

stack<int> s;
string str;

//닌텐도 스위치가 갖고싶어요 @ 2020.04.06

int main() {
    int n, x;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> str;

        if(str=="push") {
            cin >> x;
            s.push(x);
        } else if(str=="pop") {
            if(s.size()>0) {
                cout << s.top() << endl;
                s.pop();
            } else {
                cout << -1 << endl;
            }
        } else if(str=="size") {
            cout << s.size() << endl;
        } else if(str=="empty") {
            cout << s.empty() << endl;
        } else if(str=="top") {
            if(s.size()>0) {
                cout << s.top() << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}