
#include <bits/stdc++.h>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	/////////////////////////////
	
	string s;
	cin >> s;
	if((s[s.size() - 1] - 48) % 2 == 0)
		cout << 0 << endl;
	else
		cout << 1 << endl;

	/////////////////////////////

	return 0;
}