#include <iostream>
using namespace std;

int main() {
    int mm, dd, day;
    cin >> mm >> dd;

    day=0;

    while(mm!=1) {
        switch(mm-1) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                day+=31;
            break;
            case 4:
            case 6:
            case 9:
            case 11:
                day+=30;
            break;
            case 2:
                day+=28;
            break;
        }
        mm--;
    }

    day+=dd;
    switch(day%7) {
        case 0:
            cout << "SUN" << endl;
        break;
        case 1:
            cout << "MON" << endl;
        break;
        case 2:
            cout << "TUE" << endl;
        break;
        case 3:
            cout << "WED" << endl;
        break;
        case 4:
            cout << "THU" << endl;
        break;
        case 5:
            cout << "FRI" << endl;
        break;
        case 6:
            cout << "SAT" << endl;
        break;
    }
}