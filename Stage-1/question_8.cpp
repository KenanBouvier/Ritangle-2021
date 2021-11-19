#include <bits/stdc++.h>
using namespace std;
#define PI 3.14159265

//generalised equation for distance from perpendicular to center of n-sided polygon with perimeter p in README.md #Question 8.

long  double getDist(long  double n, long  double p) {
	long  double tanVal = tan((180.0 * (n - 2.0) / (2.0 * n)) * (PI / 180.0));
	long  double side = p / (2.0 * n);

	return tanVal * side;
}

int main() {
	long double globalMax = 0;
	int nVal = 0;
	for (long double n = 3; n <= 1000; ++n) {
		long  double origin = getDist(n, 1);
		long  double newP = 1.0 + pow((1.0 - (n / 1000.0)), 2.0);
		long  double second = getDist(n, newP);
		long  double gap = second - origin;

		if (gap > globalMax) {
			globalMax = gap;
			nVal = n;
		}
	}
	cout << globalMax << " is min gap   with n value: " << nVal << endl;
	return 0;
}