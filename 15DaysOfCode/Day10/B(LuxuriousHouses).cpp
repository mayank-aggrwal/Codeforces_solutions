
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

	int n;

	cin >> n;
	vector<int> v(n), ans(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	ans[n - 1] = 0;
	int M = v[n - 1];
	for (int i = n - 2; i >= 0; --i) {
		if (v[i] > M) {
			ans[i] = 0;
		}
		else {
			ans[i] = M - v[i] + 1;
		}
		M = max(M, v[i]);
	}

	for (int i = 0; i < n; ++i) {
		cout << ans[i] << " ";
	}
	cout << endl;

	return 0;
}