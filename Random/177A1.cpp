
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


	int n, mid, num, sum = 0;
	cin >> n;
	mid = n / 2;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> num;
			if (i != mid && j != mid) {
				if (i == j || i == mid || j == mid || i == n - j - 1)
					sum += num;
			}
			else {
				sum += num;
			}
		}
	}
	cout << sum << endl;

	return 0;
}
