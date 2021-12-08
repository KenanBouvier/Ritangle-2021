#include <bits/stdc++.h>
using namespace std;

int main() {
	set<pair<int, int>> s;
	for (int x = 1; x < 26; ++x) {
		for (int y = 1; y < 26; ++y) {
			if ((x * y) % 26 == 1) {
				pair<int, int> p = {min(x, y), max(x, y)};
				s.insert(p);
			}
		}
	}
	string res = "";
	for (auto it = s.begin(); it != s.end(); ++it) {
		pair<int, int> p = *it;
		cout << p.first << ":" << p.second << " ";
		res += to_string(p.first);
		res += to_string(p.second);
	}
	cout << '\n';
	string ans = "";

	ans += res[2];
	ans += res[6];
	ans += res[9];
	ans += res[12];
	ans += res[19];

	cout << ans << '\n';

	return 0;
}
