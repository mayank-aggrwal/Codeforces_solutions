
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


	string s;
	cin >> s;
	bool f = 1;

	unordered_set<char> set = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
	for (char &ch : s) {
		if (set.find(ch) == set.end()) {
			f = 0;
			break;
			// cout << "NO" << endl;
		}
	}
	if (f) {
		int i = 0, j = s.size() - 1;
		while (i < j) {
			if (s[i] != s[j]) {
				f = 0;
				break;
			}
			i++; j--;
		}
	}

	if (f)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}