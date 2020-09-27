
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

	int t, n;
	cin >> t;

	while (t--) {

		int n, ans = 0;
		cin >> n;
		vector<int> v(n);
		unordered_map<int, int> um;
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			um[v[i]]++;
		}

		for (int i = 0; i < n; ++i) {
			int curr = 0;
			for (int j = i; j < n; ++j) {
				curr += v[j];
				if (curr > n) {
					break;
				}
				if (j - i > 0 && um.count(curr)) {
					ans += um[curr];
					um.erase(curr);
				}
			}
		}
		cout << ans << endl;


	}

	/////////////////////////////

	return 0;
}