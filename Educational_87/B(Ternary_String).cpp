
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

int minLengthSubstring(string &s) {
	int ans = INT_MAX, n = s.size();
	if (n < 3) return 0;
	vector<int> map(4, -1);
	map[s[0] - 48] = 0;
	map[s[1] - 48] = 1;

	for (int i = 2; i < n; ++i) {
		map[s[i] - 48] = i;
		int m = min({map[1], map[2], map[3]});
		if (m != -1)
			ans = min(ans, i - m + 1);
	}
	return ans == INT_MAX ? 0 : ans;
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

	int t;
	string s;
	cin >> t;

	while (t--) {
		cin >> s;
		cout << minLengthSubstring(s) << endl;
	}


	/////////////////////////////

	return 0;
}