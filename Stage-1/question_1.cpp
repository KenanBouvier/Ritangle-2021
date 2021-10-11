#include <bits/stdc++.h>

using namespace std;

string gc(int x) {
	return to_string(x);
}


int main()
{
	vector<vector<string>> answers;
	set<int> used;
	int six = 0; // here if 6 is less than 2 then you can use 6 else move on.

	for (int a = 1; a <= 7; ++a) {
		if (a == 6) {
			if (six < 2) {
				six++;
			}
			else {
				continue;
			}
		}
		else {
			if (used.find(a) != used.end()) {
				continue;
			}
			used.insert(a);
		}
		for (int b = 0 ; b <= 7; ++b) {
			if (b == 6) {
				if (six < 2) {
					six++;
				}
				else {
					continue;
				}
			}
			else {
				if (used.find(b) != used.end()) {
					continue;
				}
				used.insert(b);
			}
			for (int c = 1 ; c <= 7; ++c) {
				if (c == 6) {
					if (six < 2) {
						six++;
					}
					else {
						continue;
					}
				}
				else {
					if (used.find(c) != used.end()) {
						continue;
					}
					used.insert(c);
				}
				for (int d = 1 ; d <= 7; ++d) {
					if (d == 6) {
						if (six < 2) {
							six++;
						}
						else {
							continue;
						}
					}
					else {
						if (used.find(d) != used.end()) {
							continue;
						}
						used.insert(d);
					}
					for (int e = 0 ; e <= 7; ++e) {
						if (e == 6) {
							if (six < 2) {
								six++;
							}
							else {
								continue;
							}
						}
						else {
							if (used.find(e) != used.end()) {
								continue;
							}
							used.insert(e);
						}
						for (int f = 1 ; f <= 7; ++f) {
							if (f == 6) {
								if (six < 2) {
									six++;
								}
								else {
									continue;
								}
							}
							else {
								if (used.find(f) != used.end()) {
									continue;
								}
								used.insert(f);
							}
							for (int g = 1 ; g <= 7; ++g) {
								if (g == 6) {
									if (six < 2) {
										six++;
									}
									else {
										continue;
									}
								}
								else {
									if (used.find(g) != used.end()) {
										continue;
									}
									used.insert(g);
								}
								for (int h = 0 ; h <= 7; ++h) {
									if (h == 6) {
										if (six < 2) {
											six++;
										}
										else {
											continue;
										}
									}
									else {
										if (used.find(h) != used.end()) {
											continue;
										}
										used.insert(h);
									}
									for (int i = 1 ; i <= 7; ++i) {
										if (i == 6) {
											if (six < 2) {
												six++;
											}
											else {
												continue;
											}
										}
										else {
											if (used.find(i) != used.end()) {
												continue;
											}
											used.insert(i);
										}

										// Here we can now do checks

										string abc = gc(a) + gc(b) + gc(c);
										string def = gc(d) + gc(e) + gc(f);
										string ghi = gc(g) + gc(h) + gc(i);
										string cba = gc(c) + gc(b) + gc(a);
										string fed = gc(f) + gc(e) + gc(d);
										string ihg = gc(i) + gc(h) + gc(g);

										// cout << abc << " " << def << " " << ghi << endl;

										if (stoi(abc) + stoi(def) == stoi(ghi) && stoi(cba) + stoi(fed) == stoi(ihg)) {
											// cout << abc << " " << def << " " << ghi << " is a solution!" << endl;
											answers.push_back({abc, def, ghi});
										}

										if (i == 6) {
											six--;
										}
										else {
											used.erase(i);
										}
									}
									if (h == 6) {
										six--;
									}
									else {
										used.erase(h);
									}
								}
								if (g == 6) {
									six--;
								}
								else {
									used.erase(g);
								}
							}
							if (f == 6) {
								six--;
							}
							else {
								used.erase(f);
							}
						}
						if (e == 6) {
							six--;
						}
						else {
							used.erase(e);
						}
					}
					if (d == 6) {
						six--;
					}
					else {
						used.erase(d);
					}
				}
				if (c == 6) {
					six--;
				}
				else {
					used.erase(c);
				}
			}
			if (b == 6) {
				six--;
			}
			else {
				used.erase(b);
			}
		}
		if (a == 6) {
			six--;
		}
		else {
			used.erase(a);
		}
	}

	//end of madness
	cout << answers.size() << " number of answers" << endl;
	for (vector<string> v : answers) {
		for (string s : v) {
			cout << s << " ";
		}
		cout << endl;
	}

	/* Result:  format: ABC DEF GHI

	16 number of answers
	102 365 467
	105 362 467
	162 305 467
	165 302 467
	201 563 764
	203 561 764
	261 503 764
	263 501 764
	302 165 467
	305 162 467
	362 105 467
	365 102 467
	501 263 764
	503 261 764
	561 203 764
	563 201 764

	We can see that despite the multiple solutions, the values of G,H,I are 4,6,7 in some order.
	Multiplying them out you get 168.
	From there you can multiply by the given value, 447.2, where you get 75129.6
	Taking int of that value you get 75129

	*/


	return 0;
}