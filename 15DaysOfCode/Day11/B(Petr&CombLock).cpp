
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;

bool canMakeZero(vector<int> &v, int i, int tot) {
	if (i == v.size()) {
		return tot % 360 == 0;
	}
	return canMakeZero(v, i + 1, tot + v[i]) || canMakeZero(v, i + 1, tot - v[i]);
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

	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}

	if (canMakeZero(v, 0, 0)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}