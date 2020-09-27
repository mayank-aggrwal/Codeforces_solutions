
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;


lli solve(int a, int b, int c, int d) {
	if (b >= a) return b;
	if (d >= c) return -1;
	lli tLeft = a - b, p = c - d;
	lli mul = (tLeft + p - 1) / p;
	return mul * c + b;
}


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

	int a, b, c, d, t;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		cout << solve(a, b, c, d) << endl;
	}


	/////////////////////////////

	return 0;
}