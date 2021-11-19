#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> used;

    for (int f = 1; f <= 9; ++f) {
        used.insert(f);
        char one = char(f + 48);
        char two = '0';
        string spair = "";
        spair += one;
        spair += two;
        int fg = stoi(spair);
        // cout<<pair<<'\n';

        for (int a = 1; a <= 9; ++a) {
            if (used.find(a) != used.end() || a <= 1) {
                continue;
            }
            used.insert(a);

            for (int b = 1 ; b <= 9; ++b) {

                if (used.find(b) != used.end() || b < a) {
                    continue;
                }
                used.insert(b);

                for (int c = 1 ; c <= 9; ++c) {

                    if (used.find(c) != used.end() || c < b) {
                        continue;
                    }
                    used.insert(c);

                    for (int d = 1 ; d <= 9; ++d) {

                        if (used.find(d) != used.end() || d < c) {
                            continue;
                        }
                        used.insert(d);

                        for (int e = 1 ; e <= 9; ++e) {

                            if (used.find(e) != used.end() || e < d) {
                                continue;
                            }
                            used.insert(e);

                            for (int h = 1 ; h <= 9; ++h) {

                                if (used.find(h) != used.end()) {
                                    continue;
                                }
                                used.insert(h);
                                for (int i = 1; i <= 9; ++i) {
                                    if (used.find(i) != used.end() || i < h) continue;
                                    used.insert(i);

                                    for (int j = 1 ; j <= 9; ++j) {
                                        //we can do checks here
                                        if (used.find(j) != used.end() || j < i) continue;
                                        long int lhs = pow(a, e) * b * c * d * fg;
                                        long int rhs = pow(h, 3) * i * j * 112;
                                        // cout << lhs << " " << rhs << endl;
                                        if (lhs == rhs) {
                                            cout << lhs << " " << rhs << endl;
                                            cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << fg << ' ' << h << ' ' << i << ' ' << j << '\n';
                                        }
                                        used.erase(j);
                                    }
                                    used.erase(i);
                                }
                                used.erase(h);
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
        used.erase(f);
    }
    return 0;
}