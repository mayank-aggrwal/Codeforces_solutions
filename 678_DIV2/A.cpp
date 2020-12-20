
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

bool solve(int n, int m, vector<int> &v) {
	int sum = 0;
	for(int &i : v)
		sum += i;
	return sum == m;
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

	int t, n, m;
	cin >> t;

	while (t--) {
		cin >> n >> m;

		vector<int> v(n);
		for(int i = 0; i < n; ++i)
			cin >> v[i];
		// lli ans = solve(a, b, c);
		bool ans = solve(n, m, v);
		if(ans) cout << "YES" << endl;
		else cout << "NO" << endl;
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