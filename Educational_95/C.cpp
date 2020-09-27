
#include <bits/stdc++.h>
typedef long long int lli;
typedef long double ld;
using namespace std;

#define M 1000000000

int solve(vector<int> &arr, int n, vector<int> &locked) {

	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];

	if (sum >= 0) {
		vector<int> v;
		for (int i = 0; i < n; ++i) {
			if (locked[i] == 0) {
				v.push_back(arr[i]);
			}
		}
		vector<int> p(n, 0);
		sort(v.begin(), v.end());
		int k = 0;
		for (int i = n - 1; i >= 0; --i) {
			if (locked[i] == 1) {
				// cout << arr[i] << " ";
				p[i] = arr[i];
			}
			else {
				// cout << v[k++] << " ";
				p[i] = v[k++];
			}
		}

		for (int i = 0; i < n; ++i) {
			cout << p[i] << " ";
		}

	}
	else {
		for (int i = 0; i < n; ++i) {
			cout << arr[i] << " ";
		}
	}


	cout << endl;

	int ans = 0;
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

	//  CODEFORCES   ////////////////////////////

	int t, n;
	cin >> t;

	while (t--) {
		cin >> n;

		vector<int> arr(n), locked(n);
		for (int i = 0; i < n; ++i) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; ++i) {
			cin >> locked[i];
		}

		int ans = solve(arr, n, locked);
		// cout << ans << endl;
	}

	/////////////////////////////


	//  KICKSTART   ////////////////////////////

	// int t;
	// cin >> t;

	// for (int z = 1; z <= t; ++z) {

	// 	string s;
	// 	cin >> s;

	// 	pair<lli, lli> ans = {0, 0};
	// 	ans = findFinalPos(s);
	// 	cout << "Case #" << z << ": " << (((ans.first % M) + M) % M) + 1 << " , " << (((ans.second % M) + M) % M) + 1 << endl;

	// }
	/////////////////////////////
	return 0;
}