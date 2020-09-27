
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

	int t, n;
	cin >> t;

	while (t--) {

		cin >> n;

		if (n <= 3) {
			cout << -1 << endl;
			continue;
		}
		if (n == 4) {
			cout << "3 1 4 2" << endl;
		}
		else {

			int i = 1;
			while (i <= n) {
				cout << i << " ";
				i += 2;
			}
			if (n & 1) {
				i = n - 3;
			}
			else {
				i = n - 4;
			}
			cout << i << " ";
			if (n & 1) {
				i += 2;
				cout << i << " ";
			}
			else {
				i += 4;
				cout << i << " ";
				i -= 2;
				cout << i << " ";
			}
			i -= 4;
			while (i > 0) {
				cout << i << " ";
				i -= 2;
			}
			cout << endl;

		}



	}

	/////////////////////////////

	return 0;
}