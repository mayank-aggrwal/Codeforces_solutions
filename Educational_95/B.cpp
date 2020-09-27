
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

// lli solve(int n, vector<int> &arr, vector<int> &locked) {



// 	lli ans = 0;
// 	return ans;
// }

int minPointsUsage(vector<int> &arr, int n, int i, vector<vector<int>> &dp, int chance = 0) {

	if (i == n) return 0;

	if (dp[i][chance] != -1) return dp[i][chance];

	int x = minPointsUsage(arr, n, i + 1, dp, 1 - chance), y = INT_MAX;
	if (i < n - 1) {
		y = minPointsUsage(arr, n, i + 2, dp, 1 - chance);
	}

	if (chance == 0) {
		x += (arr[i] == 1);
		if (i < n - 1)
			y += (arr[i] == 1) + (arr[i + 1] == 1);
	}

	dp[i][chance] = min(x, y);

	return dp[i][chance];


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

	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;

		vector<int> arr(n);
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}

		// for (int i = 0; i < n; ++i) {
		// 	cin >> locked[i];
		// }
		vector<vector<int>> dp(n, vector<int>(2, -1));
		int ans = minPointsUsage(arr, n, 0, dp);
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