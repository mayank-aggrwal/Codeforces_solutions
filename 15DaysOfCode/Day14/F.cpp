
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

	int n, ans = 0, x;
	cin >> n;

	vector<int> v = {0, 0, 0, 0, 0};

	for (int i = 0; i < n; ++i) {
		cin >> x;
		v[x]++;
	}

	ans += v[4];
	// cerr << v[4] << " " << v[2] / 2;
	ans += v[2] / 2;
	v[2] %= 2;

	if (v[3] > v[1]) {
		ans += v[1];
		v[3] -= v[1];
		v[1] = 0;
	}
	else {
		ans += v[3];
		v[1] -= v[3];
		v[3] = 0;
	}
	// cerr << endl << v[1] << " " << v[2] << " " << v[3] << " " << v[4] << endl;
	if (v[3] > 0) {
		ans += v[2] + v[3];
	}



	else {
		if (v[2]) {
			ans += 1;
			v[1] -= min(2, v[1]);
		}
		if (v[1])
			ans += (v[1] + 3) / 4;

	}

	cout << ans << endl;

	return 0;
}
