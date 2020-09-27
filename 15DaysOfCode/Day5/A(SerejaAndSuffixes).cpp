
#include <bits/stdc++.h>
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

	int n, m, q;
	cin >> n >> m;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	unordered_set<int> s;
	for (int i = n - 1; i >= 0; --i) {
		s.insert(v[i]);
		v[i] = s.size();
	}

	for (int i = 0; i < m; ++i) {
		cin >> q;
		cout << v[q - 1] << endl;
	}

	return 0;
}