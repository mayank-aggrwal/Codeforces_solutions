
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

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;
		string s, ans;
		cin >> s;

		for (int i = 0; i < s.size(); ++i) {
			if ((i & 1) == 0) {
				ans += s[i];
			}
		}
		cout << ans << endl;

	}

	/////////////////////////////

	return 0;
}