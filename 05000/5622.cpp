#include <iostream>
using namespace std;

int main() {
	int time=0, ascii;
	string s;
	cin >> s;
	
	for(int i=0; i<s.length(); i++) {
		ascii = (int)s[i]-64;
		
		if(ascii<16) {
			if(ascii%3>0) {
				ascii=(ascii-(ascii%3))/3;
			} else {
				ascii=(ascii/3)-1;
			}
		} else {
			if(ascii>=20 && ascii<=22) {
				ascii=6;
			} else if(ascii<20) {
				ascii=5;
			} else {
				ascii=7;
			}
		}
		
		time+=3+1*(ascii);
	}
	
	cout << time;
}