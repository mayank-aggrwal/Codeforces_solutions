
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif

	/////////////////////////////

	int t;
	cin >> t;

	while (t--) {

		string s;
		cin >> s;
		int x;
		cin >> x;
		int n = s.size();

		string ans(n, '1');

		for (int i = 0; i < n; ++i) {
			if (s[i] == '0') {
				if (i - x >= 0) {
					ans[i - x] = '0';
				}
				if (i + x < n) {
					ans[i + x] = '0';
				}
			}
		}

		bool err = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] == '1') {
				bool onePlaced = false;
				if (i - x >= 0 && ans[i - x] == '1') {
					onePlaced = 1;
				}
				if (i + x < n && ans[i + x] == '1') {
					onePlaced = 1;
				}
				if (!onePlaced) {
					err = 1;
					break;
				}
			}
		}
		if (err)
			cout << -1 << endl;
		else
			cout << ans << endl;

	}

	/////////////////////////////

	return 0;
}