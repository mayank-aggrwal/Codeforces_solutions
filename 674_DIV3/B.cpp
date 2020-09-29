
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

string solve(int n, int m, vector<vector<int>> &tiles) {
	if(m & 1) return "NO";
	for(int i = 0; i < 2 * n; i += 2) {
		if(tiles[i][1] == tiles[i + 1][0]) return "YES";
	}
	return "NO";
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

		vector<vector<int>> tiles(2*n, vector<int>(2));

		for(int i = 0; i < 2 * n; ++i) {
			cin >> tiles[i][0] >> tiles[i][1];
		}

		string ans = solve(n, m, tiles);
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