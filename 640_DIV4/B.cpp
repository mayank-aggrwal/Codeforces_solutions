
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

	int t, n, k;
	cin >> t;

	while (t--) {
		cin >> n >> k;

		if (k > n) {
			cout << "NO" << endl;
			continue;
		}

		bool np = 0, kp = 0;
		if (n & 1) np = 1;
		if (k & 1) kp = 1;

		if (np && !kp) {
			cout << "NO" << endl;
		}
		else if (!np && kp) {
			if (k > n / 2) {
				cout << "NO\n";
			}
			else {
				int l = 2 * (k - 1);
				cout << "YES\n" << n - l << " ";
				while (k > 1) {
					cout << 2 << " ";
					k--;
				}
				cout << endl;
			}
		}
		else {
			int l = k - 1;
			cout << "YES\n" << n - l << " ";
			while (k > 1) {
				k--;
				cout << 1 << " ";
			}
			cout << endl;

		}
	}

	/////////////////////////////

	return 0;
}