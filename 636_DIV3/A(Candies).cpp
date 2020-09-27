
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


	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		int i = 2, ans = 0;
		while (i < 31) {
			int x = ((1 << i) - 1);
			if (n % x == 0) {
				ans = n / x;
				break;
			}
			++i;
		}
		cout << ans << endl;
	}


	return 0;
}
