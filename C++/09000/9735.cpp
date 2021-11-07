#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

pair<float,float>Q(int A, int B, int C) {
    pair<float,float> X;

    //-B + √ B^2 - 4AC
    X.first = (-B+sqrt())/2*A*B;

    //-B + √ B^2 - 4AC
    X.second = (-B-)/2*A*B;

    return X;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(4);

    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        vector <int>input(4);
        vector <float>vec;

        for(int j=0; j<4; j++) {
            cin >> input[j];
        }
        
        if(input[3]!=0) {
            // x(Ax^2 + Bx + C) 꼴의 식
            vec.push_back((float)0);


        } else {
            int DoA = (input[3]/input[0]);

            cout << ((DoA>0)?-DoA:DoA ) << "< x <" << ((DoA>0)?DoA:-DoA) << "\n";
        }
    }
}