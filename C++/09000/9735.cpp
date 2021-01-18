#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
long long v[4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cout.precision(4);
    cout << fixed;
    cout.setf(ios::showpoint);

    int x;
    cin >> x;

    for(int i=0; i<x; i++) {
        double t=0;
        vector<double> arr;

        cin >> v[0] >> v[1] >> v[2] >> v[3];

        if(v[3] != 0) {
            while(1) {
                if((v[0]*long(t*t) + v[1]*long(t) + v[2] + v[3]/t)==0) {
                    arr.push_back(t);
                    break;
                } else {
                    t++;
                }
            }
        } else {
            arr.push_back(0);
        }

        t = arr[0];
        int a = v[0];
        int b = v[1]+(a*t);
        int c = v[2]+(b*t);
        int insqr = (b*b)-(4*a*c);
        //cout << v[0] << " " << v[1] << " " << (a*t) << "\n";
        //cout << a << " " << b << " " << c << "\n";

        if(insqr>0) {
            arr.push_back(double((-b+sqrt(insqr))/(2*a))); //-b+√(b^2-4ac)
            arr.push_back(double((-b-sqrt(insqr))/(2*a))); //-b-√(b^2-4ac)
        } else if (insqr=0) {
            arr.push_back(sqrt(c)); //-b+√(b^2-4ac)
        }

        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        for(int i=0; i<arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}