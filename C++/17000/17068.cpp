#include <iostream>
#include <stack>
using namespace std;

int main() {
    int N, MAX=0, count=0;
    stack<int> stick;
    cin >> N;

    for(int i=0; i<N; i++) {
        int num;
        cin >> num;

        stick.push(num);
    }

    for(int i=0; i<N; i++) {
        if(stick.top() > MAX){
            MAX = stick.top();
            count++;
        }
        //latest-element-pop
        stick.pop();
    }

    cout << count;
}