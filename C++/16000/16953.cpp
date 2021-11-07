#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

/* 

    solve
    연산 후의 숫자를 K라고 할 때, K < B 일때만 계속 진행하기
    B == K 이면 최솟값 갱신해나가기

*/

int main() {
    int A, B;
    cin >> A >> B;

    queue<pair<unsigned long,unsigned long>> que;
    que.push({A,0});

    int min = -1;

    while(!que.empty()) {
        unsigned long num = que.front().first;
        unsigned long cnt = que.front().second;
        que.pop();

        //cout << "test num " << num << "\n";

        if(num == B) {
            if(min == -1) {
                min = cnt;
            }
            else {
                min = (min<cnt)?min:cnt;
            }
            continue;
        }

        if(num < B) {
            que.push({num*2, cnt+1});
            que.push({num*10+1, cnt+1});
        }
        cnt++;
    }

    if(min == -1) {
        cout << min;
    } else {
        cout << min + 1;
    }
}