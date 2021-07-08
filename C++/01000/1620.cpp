#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector <pair<int,string>>vec;

int main() {
    int N, M;
    cin >> N >> M;
    for(int i=0; i<N; i++) {
        string s;
        cin >> s;

        vec.push_back(pair<int,string>(i+1,s));
    }

    
    for(int i=0; i<M; i++) {
        string s;
        cin >> s;
        if(s[0]-'0' >= 10) {
            //문자열임 (1~9 범위 다 돌아서 넘어가니깐!) -> 번호 출력!
            for(int j=0; j<vec.size(); j++) {
                if(vec[j].second == s) {
                    cout << j+1 << endl;
                }
            }
        } else {
            //여긴 포켓몬 번호! -> 이름 출력!
            int num=0;
            for(int j=0; j<s.size(); j++) {                
                num += (s[j]-'0') * pow(10, s.size()-(j+1));
            }
            cout << vec[num-1].second << "\n";
        }
    }
}