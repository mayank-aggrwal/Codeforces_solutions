
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

	int t, x;
	cin >> t;

	while (t--) {
		cin >> x;

		int p = 1;
		vector<int> v;
		while (x) {
			if (x % 10 > 0) {
				v.push_back((x % 10) * p);
			}
			p *= 10;
			x /= 10;
		}

		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i) {
			cout << v[i] << " ";
		}
		cout << endl;

	}

	/////////////////////////////

	return 0;
}