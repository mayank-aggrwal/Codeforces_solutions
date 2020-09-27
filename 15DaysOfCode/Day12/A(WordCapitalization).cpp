
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

	if (s[0] >= 'a' && s[0] <= 'z') {
		s[0] -= 32;
	}

	cout << s << endl;

	return 0;
}