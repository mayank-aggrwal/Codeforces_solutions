
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1e9+7

// bool solve(int n, int m, vector<int> &v) {
// 	int sum = 0;
// 	for(int &i : v)
// 		sum += i;
// 	return sum == m;
// }

lli calcMul(lli mul, int m) {
	lli a = 1;
	for(int i = 0; i < m; ++i) {
		a = (a * 2) % M;
	}
	return (mul * a) % M;
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

	// int t, n, m;
	// cin >> t;

	// while (t--) {
	// 	cin >> n >> m;

	// 	vector<int> v(n);
	// 	for(int i = 0; i < n; ++i)
	// 		cin >> v[i];
	// 	// lli ans = solve(a, b, c);
	// 	bool ans = solve(n, m, v);
	// 	if(ans) cout << "YES" << endl;
	// 	else cout << "NO" << endl;
	// }

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


	//  LEETCODE   ////////////////////////////

	// int n, x;
	// cin >> n;
	// for(int i = 0 ; i < n; ++i) {
	// 	cin >> x;
	// 	cout << x << " : " << ((int)log2(x) + 1) << endl;
	// }

	int n;
	cin >> n;
	lli ans = 0, mul = 1;

	for(int i = n; i >= 1; --i) {
		ans = (ans + ((i * mul) % M)) % M;
		mul = calcMul(mul, ((int)log2(i) + 1));
	}

	cout << ans << endl;


	// cout << log2(n) << endl;
	/////////////////////////////


	return 0;
}

