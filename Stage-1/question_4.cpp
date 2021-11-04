#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "hello" << endl;
	for (int a = 1; a < 20; a++) {
		for (int b = 1; b < 20; b++) {
			for (int c = 1; c < 20; c++) {
				long long int aPow = pow(a, 5);
				long long int bPow = 3 * pow(b, 4);
				long long int cPow = 2 * pow(c, 3);
				if (aPow == bPow || aPow == cPow) {
					cout << aPow << " " << bPow << " " << cPow << endl;
				}
				if (aPow == bPow && aPow == cPow ) {
					cout << a << " " << b << " " << c << " satisfies first equation\n";
					return 0;
				}
			}
		}
	}
	cout << "end" << endl;

	return 0;
}