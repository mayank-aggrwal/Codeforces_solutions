
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

	unordered_set<char> st;
	for (char &ch : s) {
		st.insert(ch);
	}
	if (st.size() & 1) {
		cout << "IGNORE HIM!" << endl;
	}
	else {
		cout << "CHAT WITH HER!" << endl;
	}

	return 0;
}
