#include <iostream>
#include <stack>

using namespace std;

int main() {
    int count, num, total=0;
    stack<int> s;

    cin >> count;
    for(int i=0; i<count; i++) {
        cin >> num;
        if(num>0){
            s.push(num);
        } else {
            s.pop();
        }
    }
    while(!s.empty()) {
        total+=s.top();
        s.pop();
    }

    cout << total;
}