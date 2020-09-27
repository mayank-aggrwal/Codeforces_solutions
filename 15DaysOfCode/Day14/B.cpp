
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

	int n, m, ans = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}

	int i = 0, j = 0;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	while (i < n && j < m) {
		if (a[i] == b[j]) {
			ans++;
			i++; j++;
		}
		else if (a[i] < b[j]) {
			if (b[j] - a[i] > 1) {
				i++;
			}
			else {
				ans++; i++; j++;
			}
		}
		else {
			if (a[i] - b[j] > 1) {
				j++;
			}
			else {
				ans++; i++; j++;
			}
		}
	}

	cout << ans << endl;

	return 0;
}
