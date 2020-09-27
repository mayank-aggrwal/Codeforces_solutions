
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


	string s;
	cin >> s;

	int a = 0;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == 'a')
			a++;
	}

	if (a > s.size() / 2) {
		cout << s.size() << endl;
	}
	else {
		cout << (a << 1) - 1 << endl;
	}

	return 0;
}
