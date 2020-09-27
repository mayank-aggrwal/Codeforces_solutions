
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

	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;
		if (n & 1)
			cout << n / 2 << endl;
		else
			cout << n / 2 - 1 << endl;
	}

	return 0;
}