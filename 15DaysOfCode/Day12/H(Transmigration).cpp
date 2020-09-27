
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
	double k;
	cin >> n >> m >> k;
	lli h = 100 * k;
	unordered_map<string, int> um;
	for (int i = 0; i < n; ++i) {
		string s; int sk;
		cin >> s >> sk;
		// int x = (int)(sk * k);
		lli x = sk * h;
		x /= 100;
		if (!(x < 100)) {
			um[s] = x;
		}
	}

	for (int i = 0; i < m; ++i) {
		string s;
		cin >> s;
		if (!um.count(s)) {
			um[s] = 0;
		}
	}
	vector<pair<string, int>> v;
	for (auto &i : um) {
		v.push_back({i.first, i.second});
	}
	sort(v.begin(), v.end());

	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i].first << " " << v[i].second << endl;
	}

	return 0;
}