#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int A[a], B[a];
    
    for(int i=0; i<a; i++) cin >> A[i] >> B[i];
    for(int i=0; i<a; i++) cout << A[i]+B[i] << endl;
    return 0;
}