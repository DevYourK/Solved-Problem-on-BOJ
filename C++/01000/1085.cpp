#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(0);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int xtow=w-x, ytoh=h-y, minx, miny;    

    minx = (xtow < x)? xtow : x;
    miny = (ytoh < y)? ytoh : y;

    int min = (minx<=miny)?minx:miny;
    cout << min << endl;
}