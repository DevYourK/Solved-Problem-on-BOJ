#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

map <string,int>maps;
vector <string>vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;

        maps.insert(pair<string, int>(s, i+1));
        vec.push_back(s);
    }

    
    for(int i=0; i<M; i++) {
        string s;
        cin >> s;
        if(s[0]-'0' >= 10) {
            //문자열임 (1~9 범위 다 돌아서 넘어가니깐!) -> 번호 출력!
            cout << maps[s] << "\n";
        } else {
            //여긴 포켓몬 번호! -> 이름 출력!
            int num=0;
            for(int j=0; j<s.size(); j++) {                
                num += (s[j]-'0') * pow(10, s.size()-(j+1));
            }
            cout << vec[num-1] << "\n";
        }
    }
}