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


	int a, b, c, ans;
	cin >> a >> b >> c;

	ans = a + b + c;
	ans = max(ans, a + b * c);
	ans = max(ans, a * b * c);
	ans = max(ans, a * b + c);
	ans = max(ans, a * (b + c));
	ans = max(ans, (a + b) * c);


	cout << ans << endl;

	return 0;
}