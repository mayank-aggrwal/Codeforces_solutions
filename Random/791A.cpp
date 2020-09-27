
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



	int a, b, ans = 0;
	cin >> a >> b;

	while (a <= b) {
		ans++;
		a *= 3;
		b *= 2;
	}
	cout << ans << endl;

	return 0;
}
