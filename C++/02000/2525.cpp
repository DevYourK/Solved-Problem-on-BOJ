#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int hour, min, time;
    cin >> hour >> min >> time;

    hour += time/60;
    min += time%60;

    if(min>59) {
        hour++;
        min -= 60;
    }

    if(hour>23) {
        hour -= 24;
    }

    cout << hour << " " << min;
}