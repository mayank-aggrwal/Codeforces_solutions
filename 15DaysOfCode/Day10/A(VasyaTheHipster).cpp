
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

	int n, m;

	cin >> n >> m;
	cout << min(n, m) << " " << (max(n, m) - min(n, m)) / 2 << endl;

	return 0;
}