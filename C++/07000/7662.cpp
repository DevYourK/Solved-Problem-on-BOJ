#include <iostream>
#include <queue>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T!=0) {
        priority_queue <int>quef;
        priority_queue <int>ques;

        int k;
        cin >> k;

        for(int j=0; j<k; j++) {
            string s;
            cin >> s;

            if(s == "D") {
                int num;
                cin >> num;

                if(num==-1 && !quef.empty()) {
                    quef.pop();
                }
                if(num==1 && !ques.empty()) {
                    ques.pop();
                }
            }
            if(s == "I") {
                int num;
                cin >> num;

                quef.push(-num);
                ques.push(num);
            }
        }
        
        if(quef.empty()) {
            cout << "EMPTY" << "\n";
        } else {
            cout << ques.top() << quef.top();
        }
        T--;
    }
}