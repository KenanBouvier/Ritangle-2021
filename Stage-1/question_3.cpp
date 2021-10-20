#include <bits/stdc++.h>
using namespace std;

bool isDivisible(int x) {
	string s = to_string(x);
	set<char> st;

	bool add = true;
	int ans = 0;

	for (int i = 0 ; i < s.size(); ++i) {
		if (add) {
			ans += ((int)s[i] - 48);
			add = false;
		}
		else {
			ans -= ((int)s[i] - 48);
			add = true;
		}
		st.insert(s[i]);
	}
	if (st.size() != 10) return false;

	if (ans % 11 == 0) {
		return true;
	}
	return false;

}

int main() {
	cout << "Cancel when you've seen enough :) \n";
	for (int i = 1023456789; true; ++i) {
		if (isDivisible(i)) {
			cout << i << " is a solution\n";
		}
	}

	return 0;
}