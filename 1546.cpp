#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    double b[a]; b[a]=0;
    int max=0;
    
    for(int i=0; i<a; i++) cin >> b[i];
    
    for(int i=0; i<a; i++) {
        if(max < b[i]){
            max = b[i];
        }
    }
    
    for(int i=0; i<a; i++) {
        b[a] += (b[i]/max)*100;
    }

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << b[a]/a;
}