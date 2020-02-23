#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int k = 1; k <= a; ++k) {
		for (int l = 1; l <= k; ++l) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}