#include <bits/stdc++.h>

using namespace std;

int main()
{
	set<int> used;
	cout << "A:C , B:D\n";
	int ans = 0;
	for (int a = 1; a <= 9; ++a) {
		if (used.find(a) != used.end()) {
			continue;
		}
		used.insert(a);

		for (int b = 1 ; b <= 9; ++b) {
			if (used.find(b) != used.end()) {
				continue;
			}
			used.insert(b);

			for (int c = 1 ; c <= 9; ++c) {
				if (used.find(c) != used.end()) {
					continue;
				}
				used.insert(c);

				for (int d = 1 ; d <= 9; ++d) {
					if (used.find(d) != used.end()) {
						continue;
					}
					used.insert(d);

					for (int e = 1 ; e <= 9; ++e) {
						if (used.find(e) != used.end()) {
							continue;
						}
						used.insert(e);
						for (int f = 1 ; f <= 9; ++f) {
							if (used.find(f) != used.end()) {
								continue;
							}
							used.insert(f);
							for (int g = 1 ; g <= 9; ++g) {
								if (used.find(g) != used.end()) {
									continue;
								}
								used.insert(g);
								for (int h = 1 ; h <= 9; ++h) {
									if (used.find(h) != used.end()) {
										continue;
									}
									used.insert(h);
									for (int i = 1; i <= 9; ++i) {
										if (used.find(i) != used.end()) {
											continue;
										}
										used.insert(i);
										//do checks here

										// A+C = 180
										// D+B = 180

										string aStr = "";
										aStr += char(a + 48);
										aStr += char(b + 48);
										int A = stoi(aStr);

										string cStr = "";
										cStr += char(c + 48);
										cStr += char(d + 48);
										int C = stoi(cStr);

										string bStr = "";
										bStr += char(e + 48);
										bStr += char(f + 48);
										int B = stoi(bStr);

										string dStr = "";
										dStr += char(g + 48);
										dStr += char(h + 48);
										dStr += char(i + 48);
										int D = stoi(dStr);

										if (A + C == 180 && B + D == 180 && A < 90 && B < 90) {
											ans++;
											cout << A << ":" << C << " , " << B << ":" << D << '\n';
										}

										used.erase(i);
									}
									used.erase(h);
								}
								used.erase(g);
							}
							used.erase(f);
						}
						used.erase(e);
					}
					used.erase(d);
				}
				used.erase(c);
			}
			used.erase(b);
		}
		used.erase(a);
	}
	cout << ans << " number of possible ways\n";
	return 0;
}