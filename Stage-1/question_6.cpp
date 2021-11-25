#include <bits/stdc++.h>
using namespace std;

bool check(vector<vector<int>> grid, int magic) {
	//horizontal/vertical checks are done while going through vals

	//diagonal checks
	int dsum = 0;
	for (int i = 0 ; i < grid.size(); ++i) {
		dsum += grid[i][i];
	}
	// cout << dsum << " topleft -> botright" << '\n';
	if (dsum != magic) return false;

	dsum = 0;
	for (int i = grid.size() - 1; i >= 0; --i) {
		dsum += grid[grid.size() - 1 - i][i];
	}
	// cout << dsum << " topright -> botleft" << '\n';
	if (dsum != magic) return false;

	return true;
}

bool cont(int n) {
	if (abs(n) > 1000) {
		return true;
	}
	return false;
}

int main() {
	int ub = 1000;

	for (int x = 0 ; x < ub; ++x) {
		int magic = 20 + 2 * x;
		for (int a = 0; a < ub; ++a) {
			int b = magic - 11 - a;
			if (cont(b)) continue;
			for (int c = 0; c < ub; ++c) {
				int f = magic - 26 - c;
				if (cont(f)) continue;
				for (int d = 0; d < ub; ++d) {
					int e = magic - 10 - c - d;
					if (cont(e)) continue;
					int h = magic - 7 - h - x;
					if (cont(h)) continue;
					int g = magic - g - x - h;
					if (cont(g)) continue;
					int i = magic - 10 - a - g;
					if (cont(i)) continue;
					int j = magic - b - d - x;
					if (cont(j)) continue;

					vector<vector<int>> grid = {
						{7, a, b, 4},
						{c, 10, d, e},
						{f, g, x, h},
						{19, i, j, x + 3},
					};

					if (check(grid, magic)) {
						cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << " " << i << " " << j << " is a solution\n";
					}


				}
			}
		}
	}

	return 0;
}
