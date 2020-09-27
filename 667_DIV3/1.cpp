
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

	int t, a, b;
	cin >> t;

	while (t--) {
		cin >> a >> b;
		int z = abs(a - b);
		int ans = z / 10 + (z % 10 != 0);
		cout << ans << endl;
	}




	/////////////////////////////

	return 0;
}