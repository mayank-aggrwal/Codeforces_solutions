
#include <bits/stdc++.h>
typedef long long int lli;
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

	int n, ans = 0;
	string s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s[1] == '+') {
			ans++;
		}
		else {
			ans--;
		}
	}
	cout << ans << endl;

	return 0;
}