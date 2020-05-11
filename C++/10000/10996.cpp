#include <iostream>
using namespace std;

int main() {
	int k, n;
	cin >> n;
	for(int i=0; i<n; i++) {
		k=(n%2>0)?(n+1)/2:n/2;
		for(int x=0; x<k; x++) {
			cout << "* ";
		}
		cout << endl;
		for(int x=0; x<n/2; x++) {
			cout << " *";
		}
		cout << endl;
	}
}