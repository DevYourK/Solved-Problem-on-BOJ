#include <iostream>
#include <deque>
using namespace std;

int input(deque<int> &deq, string list) {
    int Num=0;
    for(int i=1; i<list.length()-1; i++) {
        if(list[i] != ',') {
            Num *= 10;
            Num += (int)list[i]-'0';
            if(i == list.length()-2) {
                deq.push_back(Num);
                Num=0;
            }
        } else {
            deq.push_back(Num);
            Num=0;
        }
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int T;
    cin >> T;

    while(T!=0) {
        string s, list;
        int k;
        cin >> s >> k >> list;
        deque<int> deq;
        input(deq, list);

        bool sw = true;
        bool err = false;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'D') {
                if(!deq.empty()){
                    if(sw) deq.pop_front();
                    if(!sw) deq.pop_back();
                } else {
                    err = true;
                    break;
                }
            }
            if(s[i] == 'R') {
                sw = !sw;
            }
        }

        if(err == true) {
            cout << "error" << "\n";
        } else {
            if(deq.empty()) {
                cout << "[]\n";
            } else{
                cout << "[";
                int size = deq.size()-1;
                if(sw) {
                    for(int i=0; i<size; i++) {
                        cout << deq.front() << ",";
                        deq.pop_front();
                    }
                } else {
                    for(int i=0; i<size; i++) {
                        cout << deq.back() << ",";
                        deq.pop_back();
                    }
                }
                cout << deq.front() << "]\n";
            }
        }
        T--;
    }
    return 0;   
}