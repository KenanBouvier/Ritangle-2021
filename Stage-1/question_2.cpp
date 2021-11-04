#include <bits/stdc++.h>
using namespace std;

bool checkPS(long int a) {
	long int rooted = sqrt(a);
	if (a == rooted * rooted) return true;
	return false;
}

bool isTrue(long int triangle, long int square, long int fib) {
	if (!checkPS(8 * triangle + 1)) {
		return false;
	}
	// triangle number good
	if (!checkPS(square)) {
		return false;
	}
	//square number good
	if (checkPS(5 * fib * fib + 4) || checkPS(5 * fib * fib - 4)) {
		return true;
	}
	return false;
}

int main() {

	for (int a = 1; a < 100; ++a) {
		for (int b = 1; b < 100; ++b) {
			for (int c = 1; c < 100; ++c) {
				vector<vector<int>> perms = {
					{a, b, c},
					{a, c, b},
					{b, a, c},
					{b, c, a},
					{c, a, b},
					{c, b, a}
				};
				if (isTrue(a, b, c)) {
					for (vector<int> p : perms) {
						if (isTrue(p[0] + 9, p[1] + 9, p[2] + 9)) {
							if (a < b && b < c && b - a >= 16 && c - b >= 16) {
								cout << a << " " << b << " " << c << " are the original ages\n";
							}
						}
					}
				}
			}
		}
	}
	return 0;
}