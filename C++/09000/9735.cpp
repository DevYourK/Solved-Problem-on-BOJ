#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

void rf(vector<double> *ans, long long a, long long b, long long c) {
    //cout << a << " " << b << " " << c << "\n";
    // 만약 실근이 존재하지 않는다면 그만두기
    if((b*b) - (4*a*c) < 0) {
        return;
    }

    // 실근이 존재한다면 근의 공식으로 값 찾기
    double val_p = (-b+sqrt(b*b-4*a*c))/(2*a);
    double val_m = (-b-sqrt(b*b-4*a*c))/(2*a);

    (*ans).push_back(val_p);
    (*ans).push_back(val_m);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cout << fixed;
    cout.precision(4);

    int N;
    cin >> N;

    for(int c=0; c<N; c++) {
        vector<int> vec(4);
        vector<double> ans;

        cin >> vec[0] >> vec[1] >> vec[2] >> vec[3]; 
    
        if(vec[3] == 0) {
            // D = 0인 경우 -> 한 해는 무조건 0(정수)
            // 정수 하나 존재-> 이차방정식 근의 공식으로 해결
            ans.push_back(0.0);

            rf(&ans, vec[0], vec[1], vec[2]);
        } else {
            // D != 0인 경우 -> 한 해를 찾기 (정수)
            // 정수 해를 찾고 나머지는 근의 공식으로 해결
            int num = 0;
            for(long long i=-abs(vec[3]); i<=abs(vec[3]); i++) {
                long long a = vec[0] * i * i * i;
                long long b = vec[1] * i * i;
                long long c = vec[2] * i;

                if(a + b + c + vec[3] == 0) {
                    ans.push_back((float)i);
                    break;
                }
            }

            int A = vec[0];
            int B = vec[0] * ans[0] + vec[1];
            int C = vec[0] * ans[0] * ans[0] + vec[1] * ans[0] + vec[2];

            rf(&ans, A, B, C);
        }

        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        for(int i=0; i<ans.size(); i++) {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }
}