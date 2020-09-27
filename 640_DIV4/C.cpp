
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

		int c = k / (n - 1), r = k % (n - 1);

		int x = n * c;
		if (r == 0) {
			x--;
		}
		else {
			x += r;
		}
		cout << x << endl;


	}

	/////////////////////////////

	return 0;
}