
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

lli solve(lli x, lli y, lli k) {

	lli s = k * y + k - 1;
	lli z = s / (x - 1);
	lli r = s % (x - 1);
	if (r > 0) z++;
	// cerr << z << endl;

	lli ans = z + k;
	return ans;
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

	//  CODEFORCES   ////////////////////////////

	int t, x, y, k;
	cin >> t;

	while (t--) {
		cin >> x >> y >> k;
		lli ans = solve(x, y, k);
		cout << ans << endl;
	}

	/////////////////////////////


	//  KICKSTART   ////////////////////////////

	// int t;
	// cin >> t;

	// for (int z = 1; z <= t; ++z) {

	// 	string s;
	// 	cin >> s;

	// 	pair<lli, lli> ans = {0, 0};
	// 	ans = findFinalPos(s);
	// 	cout << "Case #" << z << ": " << (((ans.first % M) + M) % M) + 1 << " , " << (((ans.second % M) + M) % M) + 1 << endl;

	// }
	/////////////////////////////
	return 0;
}