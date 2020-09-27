
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

	if (n % 4 == 0 || n % 4 == 1) {
		vector<int> v(n);
		int a = 1, b = n, i = 0, j = n - 2;
		int x = n / 4;
		while (x--) {
			v[j] = a;
			v[i] = a + 1;
			v[i + 1] = b;
			v[j + 1] = b - 1;
			a += 2;
			b -= 2;
			i += 2;
			j -= 2;
		}
		if (n % 4 == 1) {
			v[i] = a;
		}
		for (int i = 0; i < n; ++i) {
			cout << v[i] << " ";
		}
		cout << endl;

	}
	else {
		cout << -1 << endl;
	}




	return 0;
}