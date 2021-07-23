#include <iostream>
#include <deque>
using namespace std;

int T;

int prn_deq(deque<int> deq) {
    cout << "================\n";
    int size = deq.size();
    for(int i=0; i<size; i++) {
        cout << deq.front() << ", ";
        deq.pop_front();
    }
    cout << "\n================\n";
    return 0;
}

int main() {
    cin >> T;

    while(T!=0) {
        string s, list;
        int k;
        cin >> s >> k >> list;
        deque<int> deq;

        if(k<=0) {
            cout << "error\n";
            break;
        }

        int Num=0;
        for(int i=1; i<s.length()-1; i++) {
            if(s[i] != ',') {
                Num = Num*10 + (int)s[i]-'0';
            } else {
                deq.push_back(Num);
                Num=0;
            }
        }

        for(int i=0; i<s.length(); i++) {
            prn_deq(deq);

            int c = s[i]-'0';
            cout << s[i] << " " << c << endl;
            switch(c) {
                case 20:
                    if(!deq.empty()){
                        deq.pop_front();
                    }
                break;
                case 34:
                    deque <int>cdeq;
                    for(int j=0; j<k; j++) {
                        cdeq.push_back(deq.back());
                        deq.pop_back();
                    }
                    deq = cdeq;
                break;
            }
        }

        if(deq.empty()) {
            cout << "error" << "\n";
        } else {
            int size = deq.size()-1;
            cout << "[";
            for(int i=0; i<size; i++) {
                cout << deq.front() << ",";
                deq.pop_front();
            }
            cout << deq.front() << "]\n";
        }
        T--;
    }    
}