#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int count=0;
    char input[100];
    queue <int>list;

    cin >> input;

    for(int i=0; i<100; i++) {
        if(int(input[i]) == 45) {
            count++;
            list.push(i);
        }
    }

    cout << input[0];
    for(int i=0; i<count; i++) {
        cout << input[(list.front()) + 1];
        list.pop();
    }
}