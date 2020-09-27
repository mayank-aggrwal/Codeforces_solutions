
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;


int solve(vector<int> &arr) {

	int n = arr.size(), ans = 0;

	vector<int> map(201, 0);
	for (int i = 0; i < n; ++i) {
		map[arr[i]]++;
	}

	bool state = 0;

	for (int i = 0; i <= 150; ++i) {

		// if(map[i] == 0) return 2 * i;
		// if(map[i] == 1) ans = i;

		if (state) {
			if (map[i] == 0) return ans + i;
		}
		else {
			if (map[i] == 0) return 2 * i;
			if (map[i] == 1) {
				ans = i;
				state = 1;
			}
		}

	}
	return ans;

}


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
		vector<int> arr(n);
		for (int i = 0 ; i < n; ++i) {
			cin >> arr[i];
		}
		int ans = solve(arr);
		cout << ans << endl;
	}

	/////////////////////////////

	return 0;
}