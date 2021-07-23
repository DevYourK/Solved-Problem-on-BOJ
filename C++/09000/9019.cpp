#include <iostream>
#include <queue>
using namespace std;

int D(int num) {
    return (2*num)%10000;
}
int S(int num) {
    return (num-1>=0)?(num-1):9999;
}
int L(int num) {
    return (num%1000)*10 + (num/1000);
}
int R(int num) {
    return (num/10) + (num%10)*1000;
}

string dfs(int A, int B) {
    queue <pair<int,string>>que;
    bool visit[10001] = {0, };

    que.push(pair<int,string>(A,""));
    visit[A] = true;
    
    while(!que.empty()) {
        int num = que.front().first;
        string str = que.front().second;
        que.pop();
        
        if(num == B) {
            cout << str << "\n";
            return "0";
        }
        int Dn = D(num);
        int Sn = S(num);
        int Ln = L(num);
        int Rn = R(num);
        
        if(!visit[Dn]) {
            visit[Dn] = true;
            que.push(pair<int,string>(Dn, str+"D"));
        }
        if(!visit[Sn]) {
            visit[Sn] = true;
            que.push(pair<int,string>(Sn, str+"S"));
        }
        if(!visit[Ln]) {
            visit[Ln] = true;
            que.push(pair<int,string>(Ln, str+"L"));
        }
        if(!visit[Rn]) {
            visit[Rn] = true;
            que.push(pair<int,string>(Rn, str+"R"));
        }
        
    }
    return "0";
}

int main() {
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++) {
        int A, B;
        cin >> A >> B;
        dfs(A, B);
    }
}