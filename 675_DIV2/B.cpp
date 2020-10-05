
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

lli solve(vector<vector<lli>> &v, int n, int m) {
	lli ans = 0;
	int r = (n - 1) / 2, c = (m - 1) / 2;
	for(int i = 0; i <= r; ++i) {
		for(int j = 0; j <= c; ++j) {
			if(((n & 1) && i == r) && ((m & 1) && j == c)) {
				
			}
			else if((n & 1) && i == r) {
				lli d = min(v[i][j], v[i][m - j - 1]);
				ans += abs(d - v[i][j]) + abs(d - v[i][m - j - 1]);
			}
			else if((m & 1) && j == c) {
				lli d = min(v[i][j], v[n - i - 1][j]);
				ans += abs(d - v[i][j]) + abs(d - v[n - i - 1][j]);
			}
			else {
				vector<lli> vec = {v[i][j], v[n - i - 1][j], v[i][m - j - 1], v[n - i - 1][m - j - 1]};
                sort(vec.begin(), vec.end());
                lli d = vec[1];
				ans += abs(d - v[i][j]) + abs(d - v[n - i - 1][j]) + abs(d - v[i][m - j - 1]) + abs(d - v[n - i - 1][m - j - 1]);
			}
		}
	}
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

	int t, n, m;
	cin >> t;

	while (t--) {
		cin >> n >> m;
		vector<vector<lli>> v(n, vector<lli>(m));
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				cin >> v[i][j];
			}
		}
		lli ans = solve(v, n, m);
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