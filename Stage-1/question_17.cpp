#include <bits/stdc++.h>
using namespace std;

int main() {
	double average = 1533;
	double sum = 3;
	double rowSum = 4;
	double numElements = 3;

	for (double n = 3.0; true; ++n) {
		numElements += n;
		sum += rowSum;
		rowSum *= 2.0;
		if (sum / numElements == average) {
			cout << n - 1 << " is the value of n. With average " << sum / numElements;
			return 0;
		}
	}
	return 0;
}
