
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

	int t, n;
	cin >> t;

	while (t--) {

		cin >> n;
		vector<int> v(n);
		for (int i = 0; i < n; ++i)
			cin >> v[i];


		int s = 0, a = 0, b = 0, i = 0, j = n - 1, cnt = 0;
		bool f = 1;
		while (i <= j) {
			cnt++;
			int curr = 0;
			if (f) {
				while (i <= j && curr <= s) {
					curr += v[i++];
				}
				s = curr;
				a += curr;
			}
			else {
				while (i <= j && curr <= s) {
					curr += v[j--];
				}
				s = curr;
				b += curr;
			}
			f = !f;
		}

		cout << cnt << " " << a << " " << b << endl;


	}

	/////////////////////////////

	return 0;
}