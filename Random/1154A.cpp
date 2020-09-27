
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



	vector<int> v = {0, 0, 0, 0};
	cin >> v[0] >> v[1] >> v[2] >> v[3];
	sort(v.begin(), v.end());

	cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2] << endl;

	return 0;
}
