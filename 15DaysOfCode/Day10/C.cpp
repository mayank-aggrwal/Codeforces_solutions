
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

	int n, k, ans = 0, left = 0;
	cin >> n >> k;

	vector<int> skill(n);
	for (int i = 0; i < n; ++i) {
		cin >> skill[i];
	}

	auto cmp = [](int &a, int &b) {
		return a % 10 > b % 10;
	};

	sort(skill.begin(), skill.end(), cmp);

	// for (int i = 0; i < skill.size(); ++i)
	// 	cerr << skill[i] << " ";
	// cerr << endl;

	for (int i = 0; i < n; ++i) {
		int req = 10 - (skill[i] % 10);
		// cerr << req << " ";
		if (req < 10 && k >= req) {
			k -= req;
			skill[i] += req;

		}
		int z = skill[i] / 10;
		left += 10 - z;
		ans += skill[i] / 10;
	}

	if (k >= 10) {
		k /= 10;
		ans += min(k, left);
	}
	cout << ans << endl;


	return 0;
}