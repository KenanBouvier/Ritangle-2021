#include <bits/stdc++.h>
using namespace std;

int main() {
	int ans = 0;
	for (int i = 1000; i <= 9999; ++i) {
		bool brk = false;
		string s = to_string(i);
		map<char, int> m;
		for (char c : s) {
			m[c]++;
			if (m[c] > 1) {
				brk = true;
				break;
			}
		}
		if (brk) continue;
		vector<int> v;
		for (char c : s) {
			v.push_back((int)c - 48);
		}
		sort(v.begin(), v.end());
		if (v[0] + v[3] == v[1] + v[2]) {
			ans++;
			// cout << s << "\n";
		}
	}
	cout << ans << " four-digit numbers satisfy";
	return 0;
}